# 1 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 2 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 3 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_MapScripts::
# 4 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.byte 0
# 5 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 6 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_Greeter::
# 7 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_WelcomeToDeptStore, MSGBOX_NPC
# 8 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	end
# 9 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 10 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk::
# 11 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	lock
# 12 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	faceplayer
# 13 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	dotimebasedevents
# 14 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto_if_ne VAR_POKELOT_PRIZE_ITEM, ITEM_NONE, LilycoveCity_DepartmentStore_1F_EventScript_GivePrizeFromEarlier
# 15 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto_if_set FLAG_DAILY_PICKED_LOTO_TICKET, LilycoveCity_DepartmentStore_1F_EventScript_ComeBackTomorrow
# 16 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_LotteryCornerDrawTicket, MSGBOX_YESNO
# 17 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_DepartmentStore_1F_EventScript_PleaseVisitAgain
# 18 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	setflag FLAG_DAILY_PICKED_LOTO_TICKET
# 19 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	message LilycoveCity_DepartmentStore_1F_Text_PleasePickTicket
# 20 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	waitmessage
# 21 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	special RetrieveLotteryNumber
# 22 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 23 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	special BufferLottoTicketNumber
# 24 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_TicketNumberIsXPleaseWait, MSGBOX_DEFAULT
# 25 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	applymovement LOCALID_LOTTERY_CLERK, Common_Movement_WalkInPlaceFasterRight
# 26 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	waitmovement 0
# 27 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	playse SE_PC_ON
# 28 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	special DoLotteryCornerComputerEffect
# 29 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	special PickLotteryCornerTicket
# 30 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	delay 220
# 31 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	special EndLotteryCornerComputerEffect
# 32 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	delay 10
# 33 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	applymovement LOCALID_LOTTERY_CLERK, Common_Movement_FacePlayer
# 34 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	waitmovement 0
# 35 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto_if_eq VAR_0x8004, 0, LilycoveCity_DepartmentStore_1F_EventScript_NoMatch
# 36 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	incrementgamestat GAME_STAT_WON_POKEMON_LOTTERY
# 37 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	call_if_eq VAR_0x8006, 0, LilycoveCity_DepartmentStore_1F_EventScript_TicketMatchPartyMon
# 38 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	call_if_eq VAR_0x8006, 1, LilycoveCity_DepartmentStore_1F_EventScript_TicketMatchPCMon
# 39 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8005
# 40 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	call_if_eq VAR_0x8004, 1, LilycoveCity_DepartmentStore_1F_EventScript_TwoDigitMatch
# 41 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	call_if_eq VAR_0x8004, 2, LilycoveCity_DepartmentStore_1F_EventScript_ThreeDigitMatch
# 42 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	call_if_eq VAR_0x8004, 3, LilycoveCity_DepartmentStore_1F_EventScript_FourDigitMatch
# 43 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	call_if_eq VAR_0x8004, 4, LilycoveCity_DepartmentStore_1F_EventScript_FullMatch
# 44 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	giveitem VAR_0x8005
# 45 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, LilycoveCity_DepartmentStore_1F_EventScript_RecordPrizeNoRoom
# 46 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	special TryPutLotteryWinnerReportOnAir
# 47 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto LilycoveCity_DepartmentStore_1F_EventScript_PleaseVisitAgain2
# 48 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	end
# 49 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 50 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_TicketMatchPartyMon::
# 51 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_TicketMatchesPartyMon, MSGBOX_DEFAULT
# 52 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	return
# 53 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 54 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_TicketMatchPCMon::
# 55 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_TicketMatchesPCMon, MSGBOX_DEFAULT
# 56 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	return
# 57 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 58 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_ComeBackTomorrow::
# 59 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_ComeBackTomorrow, MSGBOX_DEFAULT
# 60 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	release
# 61 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	end
# 62 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 63 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_PleaseVisitAgain::
# 64 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_PleaseVisitAgain, MSGBOX_DEFAULT
# 65 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	release
# 66 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	end
# 67 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 68 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_NoMatch::
# 69 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_NoNumbersMatched, MSGBOX_DEFAULT
# 70 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto LilycoveCity_DepartmentStore_1F_EventScript_PleaseVisitAgain2
# 71 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	end
# 72 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 73 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_PleaseVisitAgain2::
# 74 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_PleaseVisitAgain2, MSGBOX_DEFAULT
# 75 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	release
# 76 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	end
# 77 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 78 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_TwoDigitMatch::
# 79 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_TwoDigitsMatched, MSGBOX_DEFAULT
# 80 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	return
# 81 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 82 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_ThreeDigitMatch::
# 83 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_ThreeDigitsMatched, MSGBOX_DEFAULT
# 84 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	return
# 85 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 86 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_FourDigitMatch::
# 87 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_FourDigitsMatched, MSGBOX_DEFAULT
# 88 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	return
# 89 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 90 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_FullMatch::
# 91 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_AllFiveDigitsMatched, MSGBOX_DEFAULT
# 92 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	return
# 93 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 94 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_RecordPrizeNoRoom::
# 95 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	copyvar VAR_POKELOT_PRIZE_PLACE, VAR_0x8004
# 96 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	copyvar VAR_POKELOT_PRIZE_ITEM, VAR_0x8005
# 97 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto LilycoveCity_DepartmentStore_1F_EventScript_NoRoomForPrize
# 98 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	end
# 99 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 100 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_NoRoomForPrize::
# 101 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_NoRoomForThis, MSGBOX_DEFAULT
# 102 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	release
# 103 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	end
# 104 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 105 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_GivePrizeFromEarlier::
# 106 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_PrizeWeveBeenHolding, MSGBOX_DEFAULT
# 107 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	giveitem VAR_POKELOT_PRIZE_ITEM
# 108 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, LilycoveCity_DepartmentStore_1F_EventScript_NoRoomForPrize
# 109 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	copyvar VAR_0x8004, VAR_POKELOT_PRIZE_PLACE
# 110 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	copyvar VAR_0x8005, VAR_POKELOT_PRIZE_ITEM
# 111 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	special TryPutLotteryWinnerReportOnAir
# 112 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	setvar VAR_POKELOT_PRIZE_ITEM, ITEM_NONE
# 113 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	setvar VAR_POKELOT_PRIZE_PLACE, 0
# 114 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	release
# 115 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	end
# 116 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 117 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_PokefanF::
# 118 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_IBuyAllSortsOfThings, MSGBOX_NPC
# 119 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	end
# 120 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 121 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_LittleGirl::
# 122 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_MomBuyingMeFurniture, MSGBOX_NPC
# 123 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	end
# 124 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 125 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_PokefanM::
# 126 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_BuyingSomethingForAzumarill, MSGBOX_NPC
# 127 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	end
# 128 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 129 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_Azumarill::
# 130 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	lock
# 131 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	faceplayer
# 132 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	waitse
# 133 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
# 134 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_Azumarill, MSGBOX_DEFAULT
# 135 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	waitmoncry
# 136 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	release
# 137 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	end
# 138 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 139 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_FloorNamesSign::
# 140 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_FloorNamesSign, MSGBOX_SIGN
# 141 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	end
# 142 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 143 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_Text_WelcomeToDeptStore:
# 144 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "Welcome to LILYCOVE DEPARTMENT STORE.$"
# 145 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 146 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_Text_IBuyAllSortsOfThings:
# 147 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "Whenever I come to the DEPARTMENT\n"
# 148 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "STORE, I always end up buying all sorts\l"
# 149 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "of things because it's so fun.$"
# 150 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 151 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_Text_MomBuyingMeFurniture:
# 152 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "Today, my mom is going to buy me some\n"
# 153 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "nice furniture.$"
# 154 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 155 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_Text_BuyingSomethingForAzumarill:
# 156 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "I'm buying something for my AZUMARILL\n"
# 157 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "as a reward for winning a CONTEST.$"
# 158 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 159 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_Text_Azumarill:
# 160 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "AZUMARILL: Maririroo!$"
# 161 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 162 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_Text_FloorNamesSign:
# 163 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "1F: SERVICE COUNTER\n"
# 164 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "    LOTTERY CORNER\p"
# 165 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "2F: TRAINER'S ZONE\p"
# 166 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "3F: BATTLE COLLECTION\p"
# 167 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "4F: TM CORNER\p"
# 168 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "5F: POKé DOLL FLOOR\p"
# 169 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "ROOFTOP: ROOFTOP PLAZA$"
# 170 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 171 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
@ Unused
# 172 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_Text_WirelessCommIsFun:
# 173 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "Wireless Communication is a\n"
# 174 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "lot of fun, isn't it?\p"
# 175 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "I think it lets you do things that\n"
# 176 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "weren't possible before.\p"
# 177 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "For instance, you can now trade\n"
# 178 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "with people you couldn't before.\p"
# 179 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "I think it's going to be exciting!$"
# 180 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 181 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
@ Unused
# 182 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_Text_SpreadWordAboutWirelessComm:
# 183 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "I want to spread the word about how\n"
# 184 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "fun Wireless Communication can be.$"

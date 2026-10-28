# 1 "data/maps/SainteAnne_PlayersHouse/scripts.pory"

# 2 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
SainteAnne_PlayersHouse_MapScripts::
# 3 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SainteAnne_PlayersHouse_OnFrame
# 4 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	.byte 0
# 5 "data/maps/SainteAnne_PlayersHouse/scripts.pory"

# 6 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
SainteAnne_PlayersHouse_OnFrame:
# 7 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	map_script_2 VAR_STORY_PROGRESS, 0, SainteAnne_PlayersHouse_EventScript_Intro
# 8 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	.2byte 0
# 9 "data/maps/SainteAnne_PlayersHouse/scripts.pory"

# 10 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
SainteAnne_PlayersHouse_EventScript_Intro::
# 11 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	lockall
# 12 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	msgbox SainteAnne_PlayersHouse_Text_Intro, MSGBOX_DEFAULT
# 13 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	setvar VAR_STORY_PROGRESS, 1
# 14 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	releaseall
# 15 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	end
# 16 "data/maps/SainteAnne_PlayersHouse/scripts.pory"

# 17 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
SainteAnne_PlayersHouse_EventScript_Vater::
# 18 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	lock
# 19 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	faceplayer
# 20 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	goto_if_eq VAR_STORY_PROGRESS, 1, SainteAnne_PlayersHouse_EventScript_Goto_Lab
# 21 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	msgbox SainteAnne_PlayersHouse_Text_Vater, MSGBOX_DEFAULT
# 22 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	release
# 23 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	end
# 24 "data/maps/SainteAnne_PlayersHouse/scripts.pory"

# 25 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
SainteAnne_PlayersHouse_EventScript_Goto_Lab::
# 26 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	msgbox SainteAnne_PlayersHouse_Text_Intro2, MSGBOX_DEFAULT
# 27 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	release
# 28 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	end
# 29 "data/maps/SainteAnne_PlayersHouse/scripts.pory"

# 30 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
SainteAnne_PlayersHouse_Text_Intro:
# 31 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	.string "Hello, nice to see you again\p"
# 32 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	.string "The professor asked about you\p"
# 33 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	.string "Go over to his lab\n"
# 34 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	.string "and introduce yourself!$"
# 35 "data/maps/SainteAnne_PlayersHouse/scripts.pory"

# 36 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
SainteAnne_PlayersHouse_Text_Intro2:
# 37 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	.string "The professor is waiting for you!\p"
# 38 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	.string "His lab is right next to our house$"
# 39 "data/maps/SainteAnne_PlayersHouse/scripts.pory"

# 40 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
SainteAnne_PlayersHouse_Text_Vater:
# 41 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	.string "Good to see you again!\p"
# 42 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	.string "Get a little rest$"

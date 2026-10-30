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
	goto_if_eq VAR_STORY_PROGRESS, 6, SainteAnne_PlayersHouse_EventScript_Vater_Brother
# 22 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	goto_if_eq VAR_STORY_PROGRESS, 7, SainteAnne_PlayersHouse_EventScript_Vater_Reminder
# 23 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	msgbox SainteAnne_PlayersHouse_Text_Vater, MSGBOX_DEFAULT
# 24 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	release
# 25 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	end
# 26 "data/maps/SainteAnne_PlayersHouse/scripts.pory"

# 27 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
SainteAnne_PlayersHouse_EventScript_Goto_Lab::
# 28 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	msgbox SainteAnne_PlayersHouse_Text_Intro2, MSGBOX_DEFAULT
# 29 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	release
# 30 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	end
# 31 "data/maps/SainteAnne_PlayersHouse/scripts.pory"

# 32 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
SainteAnne_PlayersHouse_Text_Intro:
# 33 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	.string "Hello, nice to see you again\p"
# 34 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	.string "The professor asked about you\p"
# 35 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	.string "Go over to his lab\n"
# 36 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	.string "and introduce yourself!$"
# 37 "data/maps/SainteAnne_PlayersHouse/scripts.pory"

# 38 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
SainteAnne_PlayersHouse_Text_Intro2:
# 39 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	.string "The professor is waiting for you!\p"
# 40 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	.string "His lab is right next to our house$"
# 41 "data/maps/SainteAnne_PlayersHouse/scripts.pory"

# 42 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
SainteAnne_PlayersHouse_Text_Vater:
# 43 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	.string "Good to see you again!\p"
# 44 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	.string "Get a little rest$"

SainteAnne_PlayersHouse_EventScript_Vater_Brother::
# 49 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	msgbox SainteAnne_PlayersHouse_EventScript_Vater_Brother_Text_0
# 50 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	msgbox SainteAnne_PlayersHouse_EventScript_Vater_Brother_Text_1
# 51 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	msgbox SainteAnne_PlayersHouse_EventScript_Vater_Brother_Text_2
# 52 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	msgbox SainteAnne_PlayersHouse_EventScript_Vater_Brother_Text_3
# 53 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	setvar VAR_STORY_PROGRESS, 7
# 54 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	release
	return


SainteAnne_PlayersHouse_EventScript_Vater_Reminder::
# 58 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	msgbox SainteAnne_PlayersHouse_EventScript_Vater_Reminder_Text_0
# 59 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	release
	return


SainteAnne_PlayersHouse_EventScript_Vater_Brother_Text_0:
# 49 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	.string "FATHER: Hey {PLAYER}! The professor\n"
	.string "gave you a Pokédex? I'm proud of you!$"

SainteAnne_PlayersHouse_EventScript_Vater_Brother_Text_1:
# 50 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	.string "FATHER: You should visit your brother\n"
	.string "in Pointe-à-Pitre. He just started a\l"
	.string "new job there!$"

SainteAnne_PlayersHouse_EventScript_Vater_Brother_Text_2:
# 51 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	.string "FATHER: The direct road to the west is\n"
	.string "blocked because of the street\l"
	.string "protests.$"

SainteAnne_PlayersHouse_EventScript_Vater_Brother_Text_3:
# 52 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	.string "FATHER: Take the detour north via Le\n"
	.string "Moule instead. Take care on the way!$"

SainteAnne_PlayersHouse_EventScript_Vater_Reminder_Text_0:
# 58 "data/maps/SainteAnne_PlayersHouse/scripts.pory"
	.string "FATHER: Your brother is waiting for you\n"
	.string "in Pointe-à-Pitre. Remember, take the\l"
	.string "road north via Le Moule!$"

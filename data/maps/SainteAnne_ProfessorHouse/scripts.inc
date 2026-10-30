# 1 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"

# 2 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
SainteAnne_ProfessorHouse_MapScripts::
# 3 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	.byte 0
# 4 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"

# 5 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"

# 6 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
SainteAnne_ProfessorHouse_Prof::
# 7 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	lock
# 8 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	faceplayer
# 9 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	goto_if_eq VAR_STORY_PROGRESS, 1, SainteAnne_ProfessorHouse_EventScript_Intro
# 10 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	goto_if_eq VAR_STORY_PROGRESS, 3, SainteAnne_ProfessorHouse_EventScript_Goto_SaintFrancois
# 11 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	goto_if_eq VAR_STORY_PROGRESS, 5, SainteAnne_ProfessorHouse_EventScript_Parcel
# 12 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	msgbox SainteAnne_ProfessorHouse_Text_Prof, MSGBOX_DEFAULT
# 13 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	release
# 14 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	end
# 15 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"

# 16 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
SainteAnne_ProfessorHouse_EventScript_Intro::
# 17 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	msgbox SainteAnne_ProfessorHouse_Text_Intro, MSGBOX_DEFAULT
# 18 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	setvar VAR_STORY_PROGRESS, 2
# 19 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	clearflag FLAG_HIDE_BIRCH_BAG
# 20 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	addobject LOCALID_BIRCH_BAG
# 21 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	release
# 22 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	end
# 23 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"

# 24 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
SainteAnne_ProfessorHouse_EventScript_Goto_SaintFrancois::
# 25 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	msgbox SainteAnne_ProfessorHouse_Text_Goto_SaintFrancois, MSGBOX_DEFAULT
# 26 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	release
# 27 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	end
# 28 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"

# 29 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
SainteAnne_ProfessorHouse_Choose_Starter::
# 30 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	lock
# 31 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 32 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	special ChooseStarter
# 33 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 34 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	setvar VAR_STORY_PROGRESS, 3
# 35 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	goto SainteAnne_ProfessorHouse_Rival_Fight
# 36 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	release 
# 37 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	end
# 38 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"

# 39 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
SainteAnne_ProfessorHouse_Text_Intro:
# 40 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	.string "Hello {PLAYER}, im glad to meet you\p"
# 41 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	.string "I Heard you are planning to go on\n"
# 42 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	.string "a big journey around REGION, \p"
# 43 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	.string "just like your brother\p"
# 44 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	.string "But first i need to ask for your help\p"
# 45 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	.string "A package for me was send to\n"
# 46 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	.string "the harbour in Saint Francois\p"
# 47 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	.string "Please go and bring it back here!\p"
# 48 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	.string "In return you, please chose\n"
# 49 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	.string "a compagnon to accompany you\p"
# 50 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	.string "It is dangerous to travel the wilds\n"
# 51 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	.string "without a Pokemon\p"
# 52 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	.string "Look what i have in this bag for you!\p"
# 53 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	.string "And please give you mother my regards,\n"
# 54 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	.string "when youre in Saint Francois$"
# 55 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"

# 56 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
SainteAnne_ProfessorHouse_Text_Goto_SaintFrancois:
# 57 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	.string "To get to Saint francois,\n"
# 58 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	.string "just take the route east of here!$"
# 59 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"

# 60 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
SainteAnne_ProfessorHouse_Text_Prof:
# 61 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	.string "I hope your journey is going well!$"

SainteAnne_ProfessorHouse_Rival_Fight::
# 64 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	lock
# 65 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	bufferpartymonnick STR_VAR_1, 0
# 66 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_LAB
# 67 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	addobject LOCALID_RIVAL
# 68 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	applymovement LOCALID_RIVAL, SainteAnne_ProfessorHouse_Movement_RIVAL_COMES_IN
# 69 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	waitmovement 0
# 70 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	msgbox SainteAnne_ProfessorHouse_Rival_Fight_Text_0
# 71 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 72 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	compare VAR_TEMP_0, 7
	goto_if_eq SainteAnne_ProfessorHouse_Rival_Fight_3
SainteAnne_ProfessorHouse_Rival_Fight_1:
# 76 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	applymovement LOCALID_RIVAL, SainteAnne_ProfessorHouse_Movement_RIVAL_GETS_STARTER
# 77 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	waitmovement 0
# 78 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	setflag FLAG_HIDE_BIRCH_BAG
# 79 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	removeobject LOCALID_BIRCH_BAG
# 81 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	msgbox SainteAnne_ProfessorHouse_Rival_Fight_Text_1
# 82 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 83 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	switch VAR_STARTER_MON
# 84 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	case 0, SainteAnne_ProfessorHouse_Rival_Fight_8
# 86 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	case 1, SainteAnne_ProfessorHouse_Rival_Fight_9
# 88 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	case 2, SainteAnne_ProfessorHouse_Rival_Fight_10
SainteAnne_ProfessorHouse_Rival_Fight_6:
# 91 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 92 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	special HealPlayerParty
# 94 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	checktrainerflag TRAINER_RIVAL_LAB_CHARMANDER
	goto_if 0, SainteAnne_ProfessorHouse_Rival_Fight_14
SainteAnne_ProfessorHouse_Rival_Fight_11:
# 114 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	applymovement LOCALID_RIVAL, SainteAnne_ProfessorHouse_Movement_RIVAL_GOES_OUT
# 115 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	waitmovement 0
# 116 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	setflag FLAG_HIDE_RIVAL_LAB
# 117 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	removeobject LOCALID_RIVAL
# 119 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	release
	return

SainteAnne_ProfessorHouse_Rival_Fight_2:
# 73 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SainteAnne_ProfessorHouse_Movement_PLAYER_OUT_OF_WAY
# 74 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	waitmovement 0
	goto SainteAnne_ProfessorHouse_Rival_Fight_1

SainteAnne_ProfessorHouse_Rival_Fight_3:
# 72 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	compare VAR_TEMP_1, 6
	goto_if_eq SainteAnne_ProfessorHouse_Rival_Fight_2
	goto SainteAnne_ProfessorHouse_Rival_Fight_1

SainteAnne_ProfessorHouse_Rival_Fight_8:
# 85 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_LAB_CHARMANDER, SainteAnne_ProfessorHouse_Rival_Fight_Text_2
	goto SainteAnne_ProfessorHouse_Rival_Fight_6

SainteAnne_ProfessorHouse_Rival_Fight_9:
# 87 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_LAB_FROAKIE, SainteAnne_ProfessorHouse_Rival_Fight_Text_2
	goto SainteAnne_ProfessorHouse_Rival_Fight_6

SainteAnne_ProfessorHouse_Rival_Fight_10:
# 89 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_LAB_TREECKO, SainteAnne_ProfessorHouse_Rival_Fight_Text_2
	goto SainteAnne_ProfessorHouse_Rival_Fight_6

SainteAnne_ProfessorHouse_Rival_Fight_12:
# 95 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	msgbox SainteAnne_ProfessorHouse_Rival_Fight_Text_3
# 97 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	switch VAR_STARTER_MON
# 98 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	case 0, SainteAnne_ProfessorHouse_Rival_Fight_20
# 100 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	case 1, SainteAnne_ProfessorHouse_Rival_Fight_21
# 102 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	case 2, SainteAnne_ProfessorHouse_Rival_Fight_22
SainteAnne_ProfessorHouse_Rival_Fight_18:
# 105 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	setvar VAR_0x8004, 0
# 106 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	special RemoveMonFromParty
# 107 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 108 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	msgbox SainteAnne_ProfessorHouse_Rival_Fight_Text_4
# 109 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	waitfanfare
	goto SainteAnne_ProfessorHouse_Rival_Fight_11

SainteAnne_ProfessorHouse_Rival_Fight_13:
# 94 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	checktrainerflag TRAINER_RIVAL_LAB_TREECKO
	goto_if 0, SainteAnne_ProfessorHouse_Rival_Fight_12
	goto SainteAnne_ProfessorHouse_Rival_Fight_11

SainteAnne_ProfessorHouse_Rival_Fight_14:
# 94 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	checktrainerflag TRAINER_RIVAL_LAB_FROAKIE
	goto_if 0, SainteAnne_ProfessorHouse_Rival_Fight_13
	goto SainteAnne_ProfessorHouse_Rival_Fight_11

SainteAnne_ProfessorHouse_Rival_Fight_20:
# 99 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	givemon SPECIES_CHARMANDER, 5
	goto SainteAnne_ProfessorHouse_Rival_Fight_18

SainteAnne_ProfessorHouse_Rival_Fight_21:
# 101 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	givemon SPECIES_FROAKIE, 5
	goto SainteAnne_ProfessorHouse_Rival_Fight_18

SainteAnne_ProfessorHouse_Rival_Fight_22:
# 103 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	givemon SPECIES_TREECKO, 5
	goto SainteAnne_ProfessorHouse_Rival_Fight_18


SainteAnne_ProfessorHouse_EventScript_Parcel::
# 124 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	msgbox SainteAnne_ProfessorHouse_EventScript_Parcel_Text_0
# 125 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	removeitem ITEM_PARCEL
# 126 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	msgbox SainteAnne_ProfessorHouse_EventScript_Parcel_Text_1
# 127 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 128 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	message SainteAnne_ProfessorHouse_EventScript_Parcel_Text_2
# 129 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	waitfanfare
# 130 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 131 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	special SetUnlockedPokedexFlags
# 132 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	giveitem ITEM_TOWN_MAP
# 133 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	msgbox SainteAnne_ProfessorHouse_EventScript_Parcel_Text_3
# 134 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	setvar VAR_STORY_PROGRESS, 6
# 135 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	release
	return


SaintAnne_Block_SaintFrancois::
# 141 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	goto_if_unset FLAG_SA_PROTEST_OVER, SaintAnne_Block_SaintFrancois_1
	return

SaintAnne_Block_SaintFrancois_1:
# 142 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	lockall
# 143 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	playse SE_PIN
# 144 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	applymovement LOCALID_POLICEMAN, Common_Movement_ExclamationMark
# 145 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	waitmovement 0
# 146 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	msgbox SaintAnne_Block_SaintFrancois_Text_0
# 147 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Block_SaintFrancois
# 148 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	waitmovement 0
# 149 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	releaseall
	return


# 153 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
Movement_Block_SaintFrancois:
# 154 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	walk_right
# 155 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	delay_16
	step_end

# 157 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
SainteAnne_ProfessorHouse_Movement_RIVAL_COMES_IN:
# 158 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	walk_up
# 158 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	walk_up
# 158 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	walk_up
# 159 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	emote_exclamation_mark
	step_end

# 162 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
SainteAnne_ProfessorHouse_Movement_PLAYER_OUT_OF_WAY:
# 163 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	walk_left
# 164 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	face_right
	step_end

# 167 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
SainteAnne_ProfessorHouse_Movement_RIVAL_GETS_STARTER:
# 168 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	walk_up
# 168 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	walk_up
# 169 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	delay_16
# 170 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	face_left
	step_end

# 173 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
SainteAnne_ProfessorHouse_Movement_RIVAL_GOES_OUT:
# 174 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	walk_down
# 174 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	walk_down
# 174 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	walk_down
# 174 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	walk_down
# 174 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	walk_down
	step_end

SainteAnne_ProfessorHouse_Rival_Fight_Text_0:
# 70 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	.string "HEY!\n"
	.string "You got a Pokemon before me??\p"
	.string "What?? You even took {STR_VAR_1}?\n"
	.string "Thats my favourite! Let me get\l"
	.string "something else then$"

SainteAnne_ProfessorHouse_Rival_Fight_Text_1:
# 81 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	.string "I know your {STR_VAR_1} is better\n"
	.string "off with me. If I beat you, i get to keep\l"
	.string "it.$"

SainteAnne_ProfessorHouse_Rival_Fight_Text_2:
# 85 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	.string "Damn it! Alright i will keep this crappy\n"
	.string "thing. And i will get it strong enough to\l"
	.string "beat you!$"

SainteAnne_ProfessorHouse_Rival_Fight_Text_3:
# 95 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	.string "HA! I told you i was better! Now give me\n"
	.string "your {STR_VAR_1}. You can have mine\l"
	.string "in return. I have no use for it now\l"
	.string "anyway$"

SainteAnne_ProfessorHouse_Rival_Fight_Text_4:
# 108 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	.string "Rival gave you his Pokemon and took\n"
	.string "yours!$"

SainteAnne_ProfessorHouse_EventScript_Parcel_Text_0:
# 124 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	.string "PROF: {PLAYER}! Is that my parcel from\n"
	.string "Saint Francois? Thank you so much, I\l"
	.string "was waiting for it!$"

SainteAnne_ProfessorHouse_EventScript_Parcel_Text_1:
# 126 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	.string "PROF: As a thank you, please take\n"
	.string "these. They will help you a lot on your\l"
	.string "journey.$"

SainteAnne_ProfessorHouse_EventScript_Parcel_Text_2:
# 128 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	.string "{PLAYER} received the POKéDEX!$"

SainteAnne_ProfessorHouse_EventScript_Parcel_Text_3:
# 133 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	.string "PROF: Oh, and one more thing: your\n"
	.string "father was asking about you. You should\l"
	.string "go and see him!$"

SaintAnne_Block_SaintFrancois_Text_0:
# 146 "data/maps/SainteAnne_ProfessorHouse/scripts.pory"
	.string "You can't go there! Protesters are\n"
	.string "blocking the Road.$"

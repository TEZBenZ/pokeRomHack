Preroom_SF_LM_CAVE_MapScripts::
	.byte 0


Preroom_SF_LM_CAVE_EventScript_Wanderer::
# 7 "data/maps/Preroom_SF_LM_CAVE/scripts.pory"
	lock
# 8 "data/maps/Preroom_SF_LM_CAVE/scripts.pory"
	faceplayer
# 9 "data/maps/Preroom_SF_LM_CAVE/scripts.pory"
	goto_if_set FLAG_RECEIVED_ROCK_SMASH_HIKER, Preroom_SF_LM_CAVE_EventScript_Wanderer_2
# 11 "data/maps/Preroom_SF_LM_CAVE/scripts.pory"
	compare VAR_STORY_PROGRESS, 7
	goto_if_lt Preroom_SF_LM_CAVE_EventScript_Wanderer_3
# 14 "data/maps/Preroom_SF_LM_CAVE/scripts.pory"
	checktrainerflag TRAINER_CAVE_HIKER
	goto_if 0, Preroom_SF_LM_CAVE_EventScript_Wanderer_8
Preroom_SF_LM_CAVE_EventScript_Wanderer_7:
# 18 "data/maps/Preroom_SF_LM_CAVE/scripts.pory"
	msgbox Preroom_SF_LM_CAVE_EventScript_Wanderer_Text_4
# 19 "data/maps/Preroom_SF_LM_CAVE/scripts.pory"
	giveitem ITEM_HM06
# 20 "data/maps/Preroom_SF_LM_CAVE/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Preroom_SF_LM_CAVE_EventScript_Wanderer_10
# 23 "data/maps/Preroom_SF_LM_CAVE/scripts.pory"
	setflag FLAG_RECEIVED_ROCK_SMASH_HIKER
# 24 "data/maps/Preroom_SF_LM_CAVE/scripts.pory"
	msgbox Preroom_SF_LM_CAVE_EventScript_Wanderer_Text_6
Preroom_SF_LM_CAVE_EventScript_Wanderer_1:
# 27 "data/maps/Preroom_SF_LM_CAVE/scripts.pory"
	release
	return

Preroom_SF_LM_CAVE_EventScript_Wanderer_2:
# 10 "data/maps/Preroom_SF_LM_CAVE/scripts.pory"
	msgbox Preroom_SF_LM_CAVE_EventScript_Wanderer_Text_0
	goto Preroom_SF_LM_CAVE_EventScript_Wanderer_1

Preroom_SF_LM_CAVE_EventScript_Wanderer_3:
# 12 "data/maps/Preroom_SF_LM_CAVE/scripts.pory"
	msgbox Preroom_SF_LM_CAVE_EventScript_Wanderer_Text_1
	goto Preroom_SF_LM_CAVE_EventScript_Wanderer_1

Preroom_SF_LM_CAVE_EventScript_Wanderer_8:
# 15 "data/maps/Preroom_SF_LM_CAVE/scripts.pory"
	msgbox Preroom_SF_LM_CAVE_EventScript_Wanderer_Text_2
# 16 "data/maps/Preroom_SF_LM_CAVE/scripts.pory"
	trainerbattle_no_intro TRAINER_CAVE_HIKER, Preroom_SF_LM_CAVE_EventScript_Wanderer_Text_3
	goto Preroom_SF_LM_CAVE_EventScript_Wanderer_7

Preroom_SF_LM_CAVE_EventScript_Wanderer_10:
# 21 "data/maps/Preroom_SF_LM_CAVE/scripts.pory"
	msgbox Preroom_SF_LM_CAVE_EventScript_Wanderer_Text_5
	goto Preroom_SF_LM_CAVE_EventScript_Wanderer_1


Preroom_SF_LM_CAVE_EventScript_Wanderer_Text_0:
# 10 "data/maps/Preroom_SF_LM_CAVE/scripts.pory"
	.string "WANDERER: Use ROCK SMASH to break the\n"
	.string "rocks blocking the cave. Good luck on\l"
	.string "your way to Le Moule!$"

Preroom_SF_LM_CAVE_EventScript_Wanderer_Text_1:
# 12 "data/maps/Preroom_SF_LM_CAVE/scripts.pory"
	.string "WANDERER: You are not ready to cross\n"
	.string "this cave yet.$"

Preroom_SF_LM_CAVE_EventScript_Wanderer_Text_2:
# 15 "data/maps/Preroom_SF_LM_CAVE/scripts.pory"
	.string "WANDERER: So you want to cross the\n"
	.string "cave to Le Moule? It is full of rocks\l"
	.string "and wild Pokémon.\p"
	.string "Let me test you first. Show me what\n"
	.string "you've got!$"

Preroom_SF_LM_CAVE_EventScript_Wanderer_Text_3:
# 16 "data/maps/Preroom_SF_LM_CAVE/scripts.pory"
	.string "Ha! You're stronger than you look!$"

Preroom_SF_LM_CAVE_EventScript_Wanderer_Text_4:
# 18 "data/maps/Preroom_SF_LM_CAVE/scripts.pory"
	.string "WANDERER: You passed my test. Take\n"
	.string "this, you will need it in the cave.$"

Preroom_SF_LM_CAVE_EventScript_Wanderer_Text_5:
# 21 "data/maps/Preroom_SF_LM_CAVE/scripts.pory"
	.string "WANDERER: Your bag is full. Come back\n"
	.string "when you have room.$"

Preroom_SF_LM_CAVE_EventScript_Wanderer_Text_6:
# 24 "data/maps/Preroom_SF_LM_CAVE/scripts.pory"
	.string "WANDERER: That's ROCK SMASH. Teach it\n"
	.string "to a Pokémon and it can break cracked\l"
	.string "rocks like the one behind me.$"

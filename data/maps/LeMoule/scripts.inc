LeMoule_MapScripts::
# 2 "data/maps/LeMoule/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LeMoule_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

LeMoule_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 4 "data/maps/LeMoule/scripts.pory"
	setflag FLAG_HIDE_RIVAL_LM
# 5 "data/maps/LeMoule/scripts.pory"
	checktrainerflag TRAINER_RIVAL_LM_TREECKO
	goto_if 1, LeMoule_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 5 "data/maps/LeMoule/scripts.pory"
	checktrainerflag TRAINER_RIVAL_LM_FROAKIE
	goto_if 1, LeMoule_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 5 "data/maps/LeMoule/scripts.pory"
	checktrainerflag TRAINER_RIVAL_LM_CHARMANDER
	goto_if 1, LeMoule_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

LeMoule_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 7 "data/maps/LeMoule/scripts.pory"
	setvar VAR_TEMP_0, 1
	return


LeMoule_Rival_Fight::
# 15 "data/maps/LeMoule/scripts.pory"
	lockall
# 16 "data/maps/LeMoule/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 17 "data/maps/LeMoule/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_LM
# 18 "data/maps/LeMoule/scripts.pory"
	addobject LOCALID_RIVAL_LeMoule
# 19 "data/maps/LeMoule/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LeMoule_Movement_PlayerNotices
# 20 "data/maps/LeMoule/scripts.pory"
	waitmovement 0
# 23 "data/maps/LeMoule/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 24 "data/maps/LeMoule/scripts.pory"
	compare VAR_TEMP_2, 30
	goto_if_eq LeMoule_Rival_Fight_2
# 34 "data/maps/LeMoule/scripts.pory"
	switch VAR_TEMP_1
# 35 "data/maps/LeMoule/scripts.pory"
	case 6, LeMoule_Rival_Fight_10
# 37 "data/maps/LeMoule/scripts.pory"
	case 7, LeMoule_Rival_Fight_11
# 40 "data/maps/LeMoule/scripts.pory"
	applymovement LOCALID_RIVAL_LeMoule, LeMoule_Movement_Rival_10
LeMoule_Rival_Fight_1:
# 43 "data/maps/LeMoule/scripts.pory"
	waitmovement LOCALID_RIVAL_LeMoule
# 45 "data/maps/LeMoule/scripts.pory"
	msgbox LeMoule_Rival_Fight_Text_0
# 46 "data/maps/LeMoule/scripts.pory"
	call LeMoule_Rival_Battle
# 48 "data/maps/LeMoule/scripts.pory"
	msgbox LeMoule_Rival_Fight_Text_1
# 49 "data/maps/LeMoule/scripts.pory"
	closemessage
# 50 "data/maps/LeMoule/scripts.pory"
	applymovement LOCALID_RIVAL_LeMoule, LeMoule_Movement_Rival_Leaves
# 51 "data/maps/LeMoule/scripts.pory"
	waitmovement LOCALID_RIVAL_LeMoule
# 52 "data/maps/LeMoule/scripts.pory"
	removeobject LOCALID_RIVAL_LeMoule
# 53 "data/maps/LeMoule/scripts.pory"
	setflag FLAG_HIDE_RIVAL_LM
# 54 "data/maps/LeMoule/scripts.pory"
	setvar VAR_TEMP_0, 1
# 55 "data/maps/LeMoule/scripts.pory"
	releaseall
	return

LeMoule_Rival_Fight_2:
# 25 "data/maps/LeMoule/scripts.pory"
	switch VAR_TEMP_1
# 26 "data/maps/LeMoule/scripts.pory"
	case 6, LeMoule_Rival_Fight_6
# 28 "data/maps/LeMoule/scripts.pory"
	case 7, LeMoule_Rival_Fight_7
# 31 "data/maps/LeMoule/scripts.pory"
	applymovement LOCALID_RIVAL_LeMoule, LeMoule_Movement_Rival_Up_10
	goto LeMoule_Rival_Fight_1

LeMoule_Rival_Fight_6:
# 27 "data/maps/LeMoule/scripts.pory"
	applymovement LOCALID_RIVAL_LeMoule, LeMoule_Movement_Rival_Up_12
	goto LeMoule_Rival_Fight_1

LeMoule_Rival_Fight_7:
# 29 "data/maps/LeMoule/scripts.pory"
	applymovement LOCALID_RIVAL_LeMoule, LeMoule_Movement_Rival_Up_11
	goto LeMoule_Rival_Fight_1

LeMoule_Rival_Fight_10:
# 36 "data/maps/LeMoule/scripts.pory"
	applymovement LOCALID_RIVAL_LeMoule, LeMoule_Movement_Rival_12
	goto LeMoule_Rival_Fight_1

LeMoule_Rival_Fight_11:
# 38 "data/maps/LeMoule/scripts.pory"
	applymovement LOCALID_RIVAL_LeMoule, LeMoule_Movement_Rival_11
	goto LeMoule_Rival_Fight_1


LeMoule_Rival_Battle::
# 62 "data/maps/LeMoule/scripts.pory"
	checktrainerflag TRAINER_RIVAL_LAB_CHARMANDER
	goto_if 1, LeMoule_Rival_Battle_2
# 62 "data/maps/LeMoule/scripts.pory"
	checktrainerflag TRAINER_RIVAL_LAB_FROAKIE
	goto_if 1, LeMoule_Rival_Battle_2
# 62 "data/maps/LeMoule/scripts.pory"
	checktrainerflag TRAINER_RIVAL_LAB_TREECKO
	goto_if 1, LeMoule_Rival_Battle_2
# 72 "data/maps/LeMoule/scripts.pory"
	switch VAR_STARTER_MON
# 73 "data/maps/LeMoule/scripts.pory"
	case 0, LeMoule_Rival_Battle_14
# 75 "data/maps/LeMoule/scripts.pory"
	case 1, LeMoule_Rival_Battle_15
# 78 "data/maps/LeMoule/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_LM_FROAKIE, LeMoule_Text_RivalDefeat
LeMoule_Rival_Battle_1:
	return

LeMoule_Rival_Battle_2:
# 63 "data/maps/LeMoule/scripts.pory"
	switch VAR_STARTER_MON
# 64 "data/maps/LeMoule/scripts.pory"
	case 0, LeMoule_Rival_Battle_10
# 66 "data/maps/LeMoule/scripts.pory"
	case 1, LeMoule_Rival_Battle_11
# 69 "data/maps/LeMoule/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_LM_TREECKO, LeMoule_Text_RivalDefeat
	goto LeMoule_Rival_Battle_1

LeMoule_Rival_Battle_10:
# 65 "data/maps/LeMoule/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_LM_CHARMANDER, LeMoule_Text_RivalDefeat
	goto LeMoule_Rival_Battle_1

LeMoule_Rival_Battle_11:
# 67 "data/maps/LeMoule/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_LM_FROAKIE, LeMoule_Text_RivalDefeat
	goto LeMoule_Rival_Battle_1

LeMoule_Rival_Battle_14:
# 74 "data/maps/LeMoule/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_LM_TREECKO, LeMoule_Text_RivalDefeat
	goto LeMoule_Rival_Battle_1

LeMoule_Rival_Battle_15:
# 76 "data/maps/LeMoule/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_LM_CHARMANDER, LeMoule_Text_RivalDefeat
	goto LeMoule_Rival_Battle_1


LeMoule_Rival_Talk::
# 86 "data/maps/LeMoule/scripts.pory"
	lock
# 87 "data/maps/LeMoule/scripts.pory"
	faceplayer
# 88 "data/maps/LeMoule/scripts.pory"
	msgbox LeMoule_Rival_Talk_Text_0
# 89 "data/maps/LeMoule/scripts.pory"
	release
	return


# 96 "data/maps/LeMoule/scripts.pory"
LeMoule_Movement_PlayerNotices:
# 97 "data/maps/LeMoule/scripts.pory"
	face_right
# 98 "data/maps/LeMoule/scripts.pory"
	emote_exclamation_mark
	step_end

# 101 "data/maps/LeMoule/scripts.pory"
LeMoule_Movement_Rival_10:
# 102 "data/maps/LeMoule/scripts.pory"
	walk_left
# 102 "data/maps/LeMoule/scripts.pory"
	walk_left
# 102 "data/maps/LeMoule/scripts.pory"
	walk_left
# 102 "data/maps/LeMoule/scripts.pory"
	walk_left
# 102 "data/maps/LeMoule/scripts.pory"
	walk_left
# 102 "data/maps/LeMoule/scripts.pory"
	walk_left
# 102 "data/maps/LeMoule/scripts.pory"
	walk_left
# 102 "data/maps/LeMoule/scripts.pory"
	walk_left
# 102 "data/maps/LeMoule/scripts.pory"
	walk_left
# 102 "data/maps/LeMoule/scripts.pory"
	walk_left
	step_end

# 105 "data/maps/LeMoule/scripts.pory"
LeMoule_Movement_Rival_11:
# 106 "data/maps/LeMoule/scripts.pory"
	walk_left
# 106 "data/maps/LeMoule/scripts.pory"
	walk_left
# 106 "data/maps/LeMoule/scripts.pory"
	walk_left
# 106 "data/maps/LeMoule/scripts.pory"
	walk_left
# 106 "data/maps/LeMoule/scripts.pory"
	walk_left
# 106 "data/maps/LeMoule/scripts.pory"
	walk_left
# 106 "data/maps/LeMoule/scripts.pory"
	walk_left
# 106 "data/maps/LeMoule/scripts.pory"
	walk_left
# 106 "data/maps/LeMoule/scripts.pory"
	walk_left
# 106 "data/maps/LeMoule/scripts.pory"
	walk_left
# 106 "data/maps/LeMoule/scripts.pory"
	walk_left
	step_end

# 109 "data/maps/LeMoule/scripts.pory"
LeMoule_Movement_Rival_12:
# 110 "data/maps/LeMoule/scripts.pory"
	walk_left
# 110 "data/maps/LeMoule/scripts.pory"
	walk_left
# 110 "data/maps/LeMoule/scripts.pory"
	walk_left
# 110 "data/maps/LeMoule/scripts.pory"
	walk_left
# 110 "data/maps/LeMoule/scripts.pory"
	walk_left
# 110 "data/maps/LeMoule/scripts.pory"
	walk_left
# 110 "data/maps/LeMoule/scripts.pory"
	walk_left
# 110 "data/maps/LeMoule/scripts.pory"
	walk_left
# 110 "data/maps/LeMoule/scripts.pory"
	walk_left
# 110 "data/maps/LeMoule/scripts.pory"
	walk_left
# 110 "data/maps/LeMoule/scripts.pory"
	walk_left
# 110 "data/maps/LeMoule/scripts.pory"
	walk_left
	step_end

# 113 "data/maps/LeMoule/scripts.pory"
LeMoule_Movement_Rival_Up_10:
# 114 "data/maps/LeMoule/scripts.pory"
	walk_up
# 115 "data/maps/LeMoule/scripts.pory"
	walk_left
# 115 "data/maps/LeMoule/scripts.pory"
	walk_left
# 115 "data/maps/LeMoule/scripts.pory"
	walk_left
# 115 "data/maps/LeMoule/scripts.pory"
	walk_left
# 115 "data/maps/LeMoule/scripts.pory"
	walk_left
# 115 "data/maps/LeMoule/scripts.pory"
	walk_left
# 115 "data/maps/LeMoule/scripts.pory"
	walk_left
# 115 "data/maps/LeMoule/scripts.pory"
	walk_left
# 115 "data/maps/LeMoule/scripts.pory"
	walk_left
# 115 "data/maps/LeMoule/scripts.pory"
	walk_left
	step_end

# 118 "data/maps/LeMoule/scripts.pory"
LeMoule_Movement_Rival_Up_11:
# 119 "data/maps/LeMoule/scripts.pory"
	walk_up
# 120 "data/maps/LeMoule/scripts.pory"
	walk_left
# 120 "data/maps/LeMoule/scripts.pory"
	walk_left
# 120 "data/maps/LeMoule/scripts.pory"
	walk_left
# 120 "data/maps/LeMoule/scripts.pory"
	walk_left
# 120 "data/maps/LeMoule/scripts.pory"
	walk_left
# 120 "data/maps/LeMoule/scripts.pory"
	walk_left
# 120 "data/maps/LeMoule/scripts.pory"
	walk_left
# 120 "data/maps/LeMoule/scripts.pory"
	walk_left
# 120 "data/maps/LeMoule/scripts.pory"
	walk_left
# 120 "data/maps/LeMoule/scripts.pory"
	walk_left
# 120 "data/maps/LeMoule/scripts.pory"
	walk_left
	step_end

# 123 "data/maps/LeMoule/scripts.pory"
LeMoule_Movement_Rival_Up_12:
# 124 "data/maps/LeMoule/scripts.pory"
	walk_up
# 125 "data/maps/LeMoule/scripts.pory"
	walk_left
# 125 "data/maps/LeMoule/scripts.pory"
	walk_left
# 125 "data/maps/LeMoule/scripts.pory"
	walk_left
# 125 "data/maps/LeMoule/scripts.pory"
	walk_left
# 125 "data/maps/LeMoule/scripts.pory"
	walk_left
# 125 "data/maps/LeMoule/scripts.pory"
	walk_left
# 125 "data/maps/LeMoule/scripts.pory"
	walk_left
# 125 "data/maps/LeMoule/scripts.pory"
	walk_left
# 125 "data/maps/LeMoule/scripts.pory"
	walk_left
# 125 "data/maps/LeMoule/scripts.pory"
	walk_left
# 125 "data/maps/LeMoule/scripts.pory"
	walk_left
# 125 "data/maps/LeMoule/scripts.pory"
	walk_left
	step_end

# 128 "data/maps/LeMoule/scripts.pory"
LeMoule_Movement_Rival_Leaves:
# 129 "data/maps/LeMoule/scripts.pory"
	walk_right
# 129 "data/maps/LeMoule/scripts.pory"
	walk_right
# 129 "data/maps/LeMoule/scripts.pory"
	walk_right
# 129 "data/maps/LeMoule/scripts.pory"
	walk_right
# 129 "data/maps/LeMoule/scripts.pory"
	walk_right
# 129 "data/maps/LeMoule/scripts.pory"
	walk_right
# 129 "data/maps/LeMoule/scripts.pory"
	walk_right
# 129 "data/maps/LeMoule/scripts.pory"
	walk_right
# 129 "data/maps/LeMoule/scripts.pory"
	walk_right
# 129 "data/maps/LeMoule/scripts.pory"
	walk_right
# 129 "data/maps/LeMoule/scripts.pory"
	walk_right
# 129 "data/maps/LeMoule/scripts.pory"
	walk_right
	step_end

LeMoule_Rival_Fight_Text_0:
# 45 "data/maps/LeMoule/scripts.pory"
	.string "RIVAL: {PLAYER}! There you are! I've\n"
	.string "been waiting for ages.\p"
	.string "I caught a new Pokemon on the way here.\n"
	.string "Let's see if you can keep up with us!$"

LeMoule_Rival_Fight_Text_1:
# 48 "data/maps/LeMoule/scripts.pory"
	.string "RIVAL: Okay, okay, you got lucky. Next\n"
	.string "time I'll win for sure!\p"
	.string "I'm heading on ahead. See you, {PLAYER}!$"

LeMoule_Rival_Talk_Text_0:
# 88 "data/maps/LeMoule/scripts.pory"
	.string "RIVAL: Come on, {PLAYER}, let's battle!$"

LeMoule_Text_RivalDefeat::
# 92 "data/maps/LeMoule/scripts.pory"
	.string "What?! Even with two Pokemon I lost?$"

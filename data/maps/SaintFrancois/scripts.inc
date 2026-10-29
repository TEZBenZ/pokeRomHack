SaintFrancois_MapScripts::
# 2 "data/maps/SaintFrancois/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SaintFrancois_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SaintFrancois_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SaintFrancois/scripts.pory"
	goto_if_set FLAG_SF_AQUA_REMATCH, SaintFrancois_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 5 "data/maps/SaintFrancois/scripts.pory"
	goto_if_set FLAG_HIDE_AQUA_SF, SaintFrancois_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	return

SaintFrancois_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/SaintFrancois/scripts.pory"
	call SaintFrancois_Setup_Rematch
	return

SaintFrancois_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 7 "data/maps/SaintFrancois/scripts.pory"
	setvar VAR_TEMP_0, 1
	return


SaintFrancois_Aqua_Fight::
# 13 "data/maps/SaintFrancois/scripts.pory"
	lockall
# 14 "data/maps/SaintFrancois/scripts.pory"
	msgbox SaintFrancois_Aqua_Fight_Text_0
# 15 "data/maps/SaintFrancois/scripts.pory"
	msgbox SaintFrancois_Aqua_Fight_Text_1
# 16 "data/maps/SaintFrancois/scripts.pory"
	msgbox SaintFrancois_Aqua_Fight_Text_2
# 18 "data/maps/SaintFrancois/scripts.pory"
	playse SE_PIN
# 19 "data/maps/SaintFrancois/scripts.pory"
	applymovement LOCALID_AQUA_GIRL_SF, Girl_Sees_Prot_SF
# 20 "data/maps/SaintFrancois/scripts.pory"
	applymovement LOCALID_AQUA_GUY_SF, Guy_Sees_Prot_SF
# 21 "data/maps/SaintFrancois/scripts.pory"
	waitmovement LOCALID_AQUA_GIRL_SF
# 22 "data/maps/SaintFrancois/scripts.pory"
	waitmovement LOCALID_AQUA_GUY_SF
# 24 "data/maps/SaintFrancois/scripts.pory"
	msgbox SaintFrancois_Aqua_Fight_Text_3
# 25 "data/maps/SaintFrancois/scripts.pory"
	msgbox SaintFrancois_Aqua_Fight_Text_4
# 28 "data/maps/SaintFrancois/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_SF
# 29 "data/maps/SaintFrancois/scripts.pory"
	addobject LOCALID_RIVAL_SF
# 30 "data/maps/SaintFrancois/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 31 "data/maps/SaintFrancois/scripts.pory"
	switch VAR_TEMP_0
# 32 "data/maps/SaintFrancois/scripts.pory"
	case 29, SaintFrancois_Aqua_Fight_3
# 35 "data/maps/SaintFrancois/scripts.pory"
	applymovement LOCALID_RIVAL_SF, Rival_Arrives_SF_24
SaintFrancois_Aqua_Fight_1:
# 37 "data/maps/SaintFrancois/scripts.pory"
	waitmovement LOCALID_RIVAL_SF
# 39 "data/maps/SaintFrancois/scripts.pory"
	msgbox SaintFrancois_Aqua_Fight_Text_5
# 40 "data/maps/SaintFrancois/scripts.pory"
	msgbox SaintFrancois_Aqua_Fight_Text_6
# 43 "data/maps/SaintFrancois/scripts.pory"
	compare VAR_TEMP_0, 30
	goto_if_eq SaintFrancois_Aqua_Fight_6
# 47 "data/maps/SaintFrancois/scripts.pory"
	applymovement LOCALID_AQUA_GIRL_SF, Grunt_Goes_Up_SF
# 48 "data/maps/SaintFrancois/scripts.pory"
	applymovement LOCALID_AQUA_GUY_SF, Grunt_Goes_Up_SF
SaintFrancois_Aqua_Fight_5:
# 50 "data/maps/SaintFrancois/scripts.pory"
	waitmovement LOCALID_AQUA_GIRL_SF
# 51 "data/maps/SaintFrancois/scripts.pory"
	waitmovement LOCALID_AQUA_GUY_SF
# 53 "data/maps/SaintFrancois/scripts.pory"
	goto SaintFrancois_Aqua_Battle
	return

SaintFrancois_Aqua_Fight_3:
# 33 "data/maps/SaintFrancois/scripts.pory"
	applymovement LOCALID_RIVAL_SF, Rival_Arrives_SF_23
	goto SaintFrancois_Aqua_Fight_1

SaintFrancois_Aqua_Fight_6:
# 44 "data/maps/SaintFrancois/scripts.pory"
	applymovement LOCALID_AQUA_GIRL_SF, Girl_Goes_Up_SF_30
# 45 "data/maps/SaintFrancois/scripts.pory"
	applymovement LOCALID_AQUA_GUY_SF, Guy_Goes_Up_SF_30
	goto SaintFrancois_Aqua_Fight_5


SaintFrancois_Aqua_Battle::
# 60 "data/maps/SaintFrancois/scripts.pory"
	setflag FLAG_SF_AQUA_REMATCH
# 61 "data/maps/SaintFrancois/scripts.pory"
	call SaintFrancois_Aqua_Multi_Battle
# 62 "data/maps/SaintFrancois/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_ne SaintFrancois_Aqua_Battle_2
# 67 "data/maps/SaintFrancois/scripts.pory"
	clearflag FLAG_SF_AQUA_REMATCH
# 69 "data/maps/SaintFrancois/scripts.pory"
	msgbox SaintFrancois_Aqua_Battle_Text_0
# 70 "data/maps/SaintFrancois/scripts.pory"
	closemessage
# 71 "data/maps/SaintFrancois/scripts.pory"
	applymovement LOCALID_AQUA_GIRL_SF, Grunt_Runs_Away_SF
# 72 "data/maps/SaintFrancois/scripts.pory"
	applymovement LOCALID_AQUA_GUY_SF, Grunt_Runs_Away_SF
# 73 "data/maps/SaintFrancois/scripts.pory"
	waitmovement LOCALID_AQUA_GIRL_SF
# 74 "data/maps/SaintFrancois/scripts.pory"
	waitmovement LOCALID_AQUA_GUY_SF
# 75 "data/maps/SaintFrancois/scripts.pory"
	setflag FLAG_HIDE_AQUA_SF
# 76 "data/maps/SaintFrancois/scripts.pory"
	removeobject LOCALID_AQUA_GIRL_SF
# 77 "data/maps/SaintFrancois/scripts.pory"
	removeobject LOCALID_AQUA_GUY_SF
# 79 "data/maps/SaintFrancois/scripts.pory"
	setflag FLAG_HIDE_AQUA_BLOCK_SF
# 81 "data/maps/SaintFrancois/scripts.pory"
	applymovement LOCALID_RIVAL_SF, Common_Movement_FacePlayer
# 82 "data/maps/SaintFrancois/scripts.pory"
	waitmovement LOCALID_RIVAL_SF
# 83 "data/maps/SaintFrancois/scripts.pory"
	msgbox SaintFrancois_Aqua_Battle_Text_1
# 84 "data/maps/SaintFrancois/scripts.pory"
	closemessage
# 85 "data/maps/SaintFrancois/scripts.pory"
	applymovement LOCALID_RIVAL_SF, Rival_Leaves_SF
# 86 "data/maps/SaintFrancois/scripts.pory"
	waitmovement LOCALID_RIVAL_SF
# 87 "data/maps/SaintFrancois/scripts.pory"
	setflag FLAG_HIDE_RIVAL_SF
# 88 "data/maps/SaintFrancois/scripts.pory"
	removeobject LOCALID_RIVAL_SF
# 89 "data/maps/SaintFrancois/scripts.pory"
	releaseall
	return

SaintFrancois_Aqua_Battle_2:
# 63 "data/maps/SaintFrancois/scripts.pory"
	fadescreen FADE_TO_BLACK
# 64 "data/maps/SaintFrancois/scripts.pory"
	special SetCB2WhiteOut
	end


# 92 "data/maps/SaintFrancois/scripts.pory"
Grunt_Runs_Away_SF:
# 93 "data/maps/SaintFrancois/scripts.pory"
	walk_fast_down
# 93 "data/maps/SaintFrancois/scripts.pory"
	walk_fast_down
# 94 "data/maps/SaintFrancois/scripts.pory"
	walk_fast_left
# 94 "data/maps/SaintFrancois/scripts.pory"
	walk_fast_left
# 94 "data/maps/SaintFrancois/scripts.pory"
	walk_fast_left
# 94 "data/maps/SaintFrancois/scripts.pory"
	walk_fast_left
# 94 "data/maps/SaintFrancois/scripts.pory"
	walk_fast_left
# 94 "data/maps/SaintFrancois/scripts.pory"
	walk_fast_left
# 94 "data/maps/SaintFrancois/scripts.pory"
	walk_fast_left
# 94 "data/maps/SaintFrancois/scripts.pory"
	walk_fast_left
# 94 "data/maps/SaintFrancois/scripts.pory"
	walk_fast_left
# 94 "data/maps/SaintFrancois/scripts.pory"
	walk_fast_left
	step_end

# 97 "data/maps/SaintFrancois/scripts.pory"
Rival_Leaves_SF:
# 98 "data/maps/SaintFrancois/scripts.pory"
	walk_up
# 98 "data/maps/SaintFrancois/scripts.pory"
	walk_up
# 99 "data/maps/SaintFrancois/scripts.pory"
	walk_left
# 99 "data/maps/SaintFrancois/scripts.pory"
	walk_left
# 99 "data/maps/SaintFrancois/scripts.pory"
	walk_left
# 99 "data/maps/SaintFrancois/scripts.pory"
	walk_left
# 99 "data/maps/SaintFrancois/scripts.pory"
	walk_left
# 99 "data/maps/SaintFrancois/scripts.pory"
	walk_left
# 99 "data/maps/SaintFrancois/scripts.pory"
	walk_left
# 99 "data/maps/SaintFrancois/scripts.pory"
	walk_left
# 99 "data/maps/SaintFrancois/scripts.pory"
	walk_left
# 99 "data/maps/SaintFrancois/scripts.pory"
	walk_left
	step_end

SaintFrancois_Setup_Rematch::
# 105 "data/maps/SaintFrancois/scripts.pory"
	setvar VAR_TEMP_0, 1
# 106 "data/maps/SaintFrancois/scripts.pory"
	setobjectxyperm LOCALID_AQUA_GIRL_SF, 28, 33
# 107 "data/maps/SaintFrancois/scripts.pory"
	setobjectmovementtype LOCALID_AQUA_GIRL_SF, MOVEMENT_TYPE_FACE_UP
# 108 "data/maps/SaintFrancois/scripts.pory"
	setobjectxyperm LOCALID_AQUA_GUY_SF, 29, 33
# 109 "data/maps/SaintFrancois/scripts.pory"
	setobjectmovementtype LOCALID_AQUA_GUY_SF, MOVEMENT_TYPE_FACE_UP
# 110 "data/maps/SaintFrancois/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_SF
# 111 "data/maps/SaintFrancois/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_SF, 27, 33
# 112 "data/maps/SaintFrancois/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL_SF, MOVEMENT_TYPE_FACE_UP
	return


SaintFrancois_Aqua_Grunt_Talk::
# 116 "data/maps/SaintFrancois/scripts.pory"
	goto_if_unset FLAG_SF_AQUA_REMATCH, SaintFrancois_Aqua_Grunt_Talk_2
# 119 "data/maps/SaintFrancois/scripts.pory"
	lockall
# 120 "data/maps/SaintFrancois/scripts.pory"
	faceplayer
# 121 "data/maps/SaintFrancois/scripts.pory"
	msgbox SaintFrancois_Aqua_Grunt_Talk_Text_0
# 122 "data/maps/SaintFrancois/scripts.pory"
	closemessage
# 123 "data/maps/SaintFrancois/scripts.pory"
	goto SaintFrancois_Aqua_Battle
	return

SaintFrancois_Aqua_Grunt_Talk_2:
	end


SaintFrancois_Rival_Talk::
# 127 "data/maps/SaintFrancois/scripts.pory"
	goto_if_unset FLAG_SF_AQUA_REMATCH, SaintFrancois_Rival_Talk_2
# 130 "data/maps/SaintFrancois/scripts.pory"
	lock
# 131 "data/maps/SaintFrancois/scripts.pory"
	faceplayer
# 132 "data/maps/SaintFrancois/scripts.pory"
	msgbox SaintFrancois_Rival_Talk_Text_0
# 133 "data/maps/SaintFrancois/scripts.pory"
	release
	return

SaintFrancois_Rival_Talk_2:
	end


SaintFrancois_Aqua_Multi_Battle::
# 139 "data/maps/SaintFrancois/scripts.pory"
	checktrainerflag TRAINER_RIVAL_LAB_CHARMANDER
	goto_if 1, SaintFrancois_Aqua_Multi_Battle_2
# 139 "data/maps/SaintFrancois/scripts.pory"
	checktrainerflag TRAINER_RIVAL_LAB_FROAKIE
	goto_if 1, SaintFrancois_Aqua_Multi_Battle_2
# 139 "data/maps/SaintFrancois/scripts.pory"
	checktrainerflag TRAINER_RIVAL_LAB_TREECKO
	goto_if 1, SaintFrancois_Aqua_Multi_Battle_2
# 149 "data/maps/SaintFrancois/scripts.pory"
	switch VAR_STARTER_MON
# 150 "data/maps/SaintFrancois/scripts.pory"
	case 0, SaintFrancois_Aqua_Multi_Battle_14
# 152 "data/maps/SaintFrancois/scripts.pory"
	case 1, SaintFrancois_Aqua_Multi_Battle_15
# 154 "data/maps/SaintFrancois/scripts.pory"
	case 2, SaintFrancois_Aqua_Multi_Battle_16
SaintFrancois_Aqua_Multi_Battle_1:
# 158 "data/maps/SaintFrancois/scripts.pory"
	goto SaintFrancois_Aqua_Multi_Battle_Treecko
	return

SaintFrancois_Aqua_Multi_Battle_2:
# 140 "data/maps/SaintFrancois/scripts.pory"
	switch VAR_STARTER_MON
# 141 "data/maps/SaintFrancois/scripts.pory"
	case 0, SaintFrancois_Aqua_Multi_Battle_10
# 143 "data/maps/SaintFrancois/scripts.pory"
	case 1, SaintFrancois_Aqua_Multi_Battle_11
# 145 "data/maps/SaintFrancois/scripts.pory"
	case 2, SaintFrancois_Aqua_Multi_Battle_12
	goto SaintFrancois_Aqua_Multi_Battle_1

SaintFrancois_Aqua_Multi_Battle_10:
# 142 "data/maps/SaintFrancois/scripts.pory"
	goto SaintFrancois_Aqua_Multi_Battle_Charmander
	goto SaintFrancois_Aqua_Multi_Battle_1

SaintFrancois_Aqua_Multi_Battle_11:
# 144 "data/maps/SaintFrancois/scripts.pory"
	goto SaintFrancois_Aqua_Multi_Battle_Froakie
	goto SaintFrancois_Aqua_Multi_Battle_1

SaintFrancois_Aqua_Multi_Battle_12:
# 146 "data/maps/SaintFrancois/scripts.pory"
	goto SaintFrancois_Aqua_Multi_Battle_Treecko
	goto SaintFrancois_Aqua_Multi_Battle_1

SaintFrancois_Aqua_Multi_Battle_14:
# 151 "data/maps/SaintFrancois/scripts.pory"
	goto SaintFrancois_Aqua_Multi_Battle_Treecko
	goto SaintFrancois_Aqua_Multi_Battle_1

SaintFrancois_Aqua_Multi_Battle_15:
# 153 "data/maps/SaintFrancois/scripts.pory"
	goto SaintFrancois_Aqua_Multi_Battle_Charmander
	goto SaintFrancois_Aqua_Multi_Battle_1

SaintFrancois_Aqua_Multi_Battle_16:
# 155 "data/maps/SaintFrancois/scripts.pory"
	goto SaintFrancois_Aqua_Multi_Battle_Froakie
	goto SaintFrancois_Aqua_Multi_Battle_1


SaintFrancois_Aqua_Multi_Battle_Treecko::
# 162 "data/maps/SaintFrancois/scripts.pory"
	multi_fixed_2_vs_2 TRAINER_SF_GRUNT_GIRL, SaintFrancois_Text_GruntGirlDefeat, TRAINER_SF_GRUNT_GUY, SaintFrancois_Text_GruntGuyDefeat, PARTNER_RIVAL_SF_TREECKO
	return


SaintFrancois_Aqua_Multi_Battle_Charmander::
# 167 "data/maps/SaintFrancois/scripts.pory"
	multi_fixed_2_vs_2 TRAINER_SF_GRUNT_GIRL, SaintFrancois_Text_GruntGirlDefeat, TRAINER_SF_GRUNT_GUY, SaintFrancois_Text_GruntGuyDefeat, PARTNER_RIVAL_SF_CHARMANDER
	return


SaintFrancois_Aqua_Multi_Battle_Froakie::
# 172 "data/maps/SaintFrancois/scripts.pory"
	multi_fixed_2_vs_2 TRAINER_SF_GRUNT_GIRL, SaintFrancois_Text_GruntGirlDefeat, TRAINER_SF_GRUNT_GUY, SaintFrancois_Text_GruntGuyDefeat, PARTNER_RIVAL_SF_FROAKIE
	return


# 184 "data/maps/SaintFrancois/scripts.pory"
Girl_Sees_Prot_SF:
# 185 "data/maps/SaintFrancois/scripts.pory"
	emote_exclamation_mark
	step_end

# 188 "data/maps/SaintFrancois/scripts.pory"
Guy_Sees_Prot_SF:
# 189 "data/maps/SaintFrancois/scripts.pory"
	emote_exclamation_mark
# 190 "data/maps/SaintFrancois/scripts.pory"
	walk_left
# 191 "data/maps/SaintFrancois/scripts.pory"
	walk_up
	step_end

# 194 "data/maps/SaintFrancois/scripts.pory"
Rival_Arrives_SF_23:
# 195 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 195 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 195 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 195 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 195 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 195 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 195 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 195 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 195 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 195 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 195 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 195 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 195 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 195 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 195 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 195 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 195 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 195 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 195 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 195 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 195 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 195 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 195 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 196 "data/maps/SaintFrancois/scripts.pory"
	walk_down
	step_end

# 199 "data/maps/SaintFrancois/scripts.pory"
Rival_Arrives_SF_24:
# 200 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 200 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 200 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 200 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 200 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 200 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 200 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 200 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 200 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 200 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 200 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 200 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 200 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 200 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 200 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 200 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 200 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 200 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 200 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 200 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 200 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 200 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 200 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 200 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 201 "data/maps/SaintFrancois/scripts.pory"
	walk_down
	step_end

# 204 "data/maps/SaintFrancois/scripts.pory"
Grunt_Goes_Up_SF:
# 205 "data/maps/SaintFrancois/scripts.pory"
	walk_up
# 205 "data/maps/SaintFrancois/scripts.pory"
	walk_up
	step_end

# 208 "data/maps/SaintFrancois/scripts.pory"
Girl_Goes_Up_SF_30:
# 209 "data/maps/SaintFrancois/scripts.pory"
	walk_up
# 209 "data/maps/SaintFrancois/scripts.pory"
	walk_up
# 210 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 211 "data/maps/SaintFrancois/scripts.pory"
	face_up
	step_end

# 214 "data/maps/SaintFrancois/scripts.pory"
Guy_Goes_Up_SF_30:
# 215 "data/maps/SaintFrancois/scripts.pory"
	walk_up
# 216 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 217 "data/maps/SaintFrancois/scripts.pory"
	walk_up
	step_end

SaintFrancois_Aqua_Fight_Text_0:
# 14 "data/maps/SaintFrancois/scripts.pory"
	.string "GRUNT: This is not a request. You need\n"
	.string "to take us to ISLAND, and we're not here\l"
	.string "to discuss it.$"

SaintFrancois_Aqua_Fight_Text_1:
# 15 "data/maps/SaintFrancois/scripts.pory"
	.string "MOTHER: Even if I wanted to, I couldn't.\n"
	.string "The sea is too rough these days. It will\l"
	.string "take some time until the boat can leave\l"
	.string "the harbor again.$"

SaintFrancois_Aqua_Fight_Text_2:
# 16 "data/maps/SaintFrancois/scripts.pory"
	.string "GRUNT: LIES! I don't believe you. Either\n"
	.string "you take us there voluntarily, or we'll\l"
	.string "make you drive the boat!$"

SaintFrancois_Aqua_Fight_Text_3:
# 24 "data/maps/SaintFrancois/scripts.pory"
	.string "GRUNT: What are you doing here? Get\n"
	.string "lost!$"

SaintFrancois_Aqua_Fight_Text_4:
# 25 "data/maps/SaintFrancois/scripts.pory"
	.string "MOTHER: {PLAYER}! Please help me, these\n"
	.string "people want to force me to take them to\l"
	.string "ISLAND!$"

SaintFrancois_Aqua_Fight_Text_5:
# 39 "data/maps/SaintFrancois/scripts.pory"
	.string "RIVAL: What's going on here? Leave\n"
	.string "{PLAYER}'s mother alone!$"

SaintFrancois_Aqua_Fight_Text_6:
# 40 "data/maps/SaintFrancois/scripts.pory"
	.string "GRUNT: Ugh, you kids keep annoying me.\n"
	.string "I've talked enough, let's fight!$"

SaintFrancois_Aqua_Battle_Text_0:
# 69 "data/maps/SaintFrancois/scripts.pory"
	.string "GRUNT: Tch! We'll be back, you brats!\n"
	.string "Retreat!$"

SaintFrancois_Aqua_Battle_Text_1:
# 83 "data/maps/SaintFrancois/scripts.pory"
	.string "RIVAL: Phew, we showed them! I'll go\n"
	.string "ahead to Le Moule. Meet me there,\l"
	.string "{PLAYER}!$"

SaintFrancois_Aqua_Grunt_Talk_Text_0:
# 121 "data/maps/SaintFrancois/scripts.pory"
	.string "GRUNT: You again? Fine, this time we'll\n"
	.string "finish you off!$"

SaintFrancois_Rival_Talk_Text_0:
# 132 "data/maps/SaintFrancois/scripts.pory"
	.string "RIVAL: {PLAYER}! We can't let them get\n"
	.string "away with this. Let's try again!$"

SaintFrancois_Text_GruntGirlDefeat::
# 176 "data/maps/SaintFrancois/scripts.pory"
	.string "No way! Beaten by a couple of kids?$"

SaintFrancois_Text_GruntGuyDefeat::
# 180 "data/maps/SaintFrancois/scripts.pory"
	.string "Grr... This isn't over!$"

SaintFrancois_MapScripts::
	.byte 0


SaintFrancois_Aqua_Fight::
# 4 "data/maps/SaintFrancois/scripts.pory"
	lockall
# 5 "data/maps/SaintFrancois/scripts.pory"
	msgbox SaintFrancois_Aqua_Fight_Text_0
# 6 "data/maps/SaintFrancois/scripts.pory"
	msgbox SaintFrancois_Aqua_Fight_Text_1
# 7 "data/maps/SaintFrancois/scripts.pory"
	msgbox SaintFrancois_Aqua_Fight_Text_2
# 9 "data/maps/SaintFrancois/scripts.pory"
	playse SE_PIN
# 10 "data/maps/SaintFrancois/scripts.pory"
	applymovement LOCALID_AQUA_GIRL_SF, Girl_Sees_Prot_SF
# 11 "data/maps/SaintFrancois/scripts.pory"
	applymovement LOCALID_AQUA_GUY_SF, Guy_Sees_Prot_SF
# 12 "data/maps/SaintFrancois/scripts.pory"
	waitmovement LOCALID_AQUA_GIRL_SF
# 13 "data/maps/SaintFrancois/scripts.pory"
	waitmovement LOCALID_AQUA_GUY_SF
# 15 "data/maps/SaintFrancois/scripts.pory"
	msgbox SaintFrancois_Aqua_Fight_Text_3
# 16 "data/maps/SaintFrancois/scripts.pory"
	msgbox SaintFrancois_Aqua_Fight_Text_4
# 19 "data/maps/SaintFrancois/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_SF
# 20 "data/maps/SaintFrancois/scripts.pory"
	addobject LOCALID_RIVAL_SF
# 21 "data/maps/SaintFrancois/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 22 "data/maps/SaintFrancois/scripts.pory"
	switch VAR_TEMP_0
# 23 "data/maps/SaintFrancois/scripts.pory"
	case 29, SaintFrancois_Aqua_Fight_3
# 26 "data/maps/SaintFrancois/scripts.pory"
	applymovement LOCALID_RIVAL_SF, Rival_Arrives_SF_24
SaintFrancois_Aqua_Fight_1:
# 28 "data/maps/SaintFrancois/scripts.pory"
	waitmovement LOCALID_RIVAL_SF
# 30 "data/maps/SaintFrancois/scripts.pory"
	msgbox SaintFrancois_Aqua_Fight_Text_5
# 31 "data/maps/SaintFrancois/scripts.pory"
	msgbox SaintFrancois_Aqua_Fight_Text_6
# 34 "data/maps/SaintFrancois/scripts.pory"
	compare VAR_TEMP_0, 30
	goto_if_eq SaintFrancois_Aqua_Fight_6
# 38 "data/maps/SaintFrancois/scripts.pory"
	applymovement LOCALID_AQUA_GIRL_SF, Grunt_Goes_Up_SF
# 39 "data/maps/SaintFrancois/scripts.pory"
	applymovement LOCALID_AQUA_GUY_SF, Grunt_Goes_Up_SF
SaintFrancois_Aqua_Fight_5:
# 41 "data/maps/SaintFrancois/scripts.pory"
	waitmovement LOCALID_AQUA_GIRL_SF
# 42 "data/maps/SaintFrancois/scripts.pory"
	waitmovement LOCALID_AQUA_GUY_SF
# 45 "data/maps/SaintFrancois/scripts.pory"
	call SaintFrancois_Aqua_Multi_Battle
# 46 "data/maps/SaintFrancois/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_ne SaintFrancois_Aqua_Fight_10
# 53 "data/maps/SaintFrancois/scripts.pory"
	releaseall
	return

SaintFrancois_Aqua_Fight_3:
# 24 "data/maps/SaintFrancois/scripts.pory"
	applymovement LOCALID_RIVAL_SF, Rival_Arrives_SF_23
	goto SaintFrancois_Aqua_Fight_1

SaintFrancois_Aqua_Fight_6:
# 35 "data/maps/SaintFrancois/scripts.pory"
	applymovement LOCALID_AQUA_GIRL_SF, Girl_Goes_Up_SF_30
# 36 "data/maps/SaintFrancois/scripts.pory"
	applymovement LOCALID_AQUA_GUY_SF, Guy_Goes_Up_SF_30
	goto SaintFrancois_Aqua_Fight_5

SaintFrancois_Aqua_Fight_10:
# 47 "data/maps/SaintFrancois/scripts.pory"
	fadescreen FADE_TO_BLACK
# 48 "data/maps/SaintFrancois/scripts.pory"
	special SetCB2WhiteOut
	end


SaintFrancois_Aqua_Multi_Battle::
# 59 "data/maps/SaintFrancois/scripts.pory"
	checktrainerflag TRAINER_RIVAL_LAB_CHARMANDER
	goto_if 1, SaintFrancois_Aqua_Multi_Battle_2
# 59 "data/maps/SaintFrancois/scripts.pory"
	checktrainerflag TRAINER_RIVAL_LAB_FROAKIE
	goto_if 1, SaintFrancois_Aqua_Multi_Battle_2
# 59 "data/maps/SaintFrancois/scripts.pory"
	checktrainerflag TRAINER_RIVAL_LAB_TREECKO
	goto_if 1, SaintFrancois_Aqua_Multi_Battle_2
# 69 "data/maps/SaintFrancois/scripts.pory"
	switch VAR_STARTER_MON
# 70 "data/maps/SaintFrancois/scripts.pory"
	case 0, SaintFrancois_Aqua_Multi_Battle_14
# 72 "data/maps/SaintFrancois/scripts.pory"
	case 1, SaintFrancois_Aqua_Multi_Battle_15
# 74 "data/maps/SaintFrancois/scripts.pory"
	case 2, SaintFrancois_Aqua_Multi_Battle_16
SaintFrancois_Aqua_Multi_Battle_1:
# 78 "data/maps/SaintFrancois/scripts.pory"
	goto SaintFrancois_Aqua_Multi_Battle_Treecko
	return

SaintFrancois_Aqua_Multi_Battle_2:
# 60 "data/maps/SaintFrancois/scripts.pory"
	switch VAR_STARTER_MON
# 61 "data/maps/SaintFrancois/scripts.pory"
	case 0, SaintFrancois_Aqua_Multi_Battle_10
# 63 "data/maps/SaintFrancois/scripts.pory"
	case 1, SaintFrancois_Aqua_Multi_Battle_11
# 65 "data/maps/SaintFrancois/scripts.pory"
	case 2, SaintFrancois_Aqua_Multi_Battle_12
	goto SaintFrancois_Aqua_Multi_Battle_1

SaintFrancois_Aqua_Multi_Battle_10:
# 62 "data/maps/SaintFrancois/scripts.pory"
	goto SaintFrancois_Aqua_Multi_Battle_Charmander
	goto SaintFrancois_Aqua_Multi_Battle_1

SaintFrancois_Aqua_Multi_Battle_11:
# 64 "data/maps/SaintFrancois/scripts.pory"
	goto SaintFrancois_Aqua_Multi_Battle_Froakie
	goto SaintFrancois_Aqua_Multi_Battle_1

SaintFrancois_Aqua_Multi_Battle_12:
# 66 "data/maps/SaintFrancois/scripts.pory"
	goto SaintFrancois_Aqua_Multi_Battle_Treecko
	goto SaintFrancois_Aqua_Multi_Battle_1

SaintFrancois_Aqua_Multi_Battle_14:
# 71 "data/maps/SaintFrancois/scripts.pory"
	goto SaintFrancois_Aqua_Multi_Battle_Treecko
	goto SaintFrancois_Aqua_Multi_Battle_1

SaintFrancois_Aqua_Multi_Battle_15:
# 73 "data/maps/SaintFrancois/scripts.pory"
	goto SaintFrancois_Aqua_Multi_Battle_Charmander
	goto SaintFrancois_Aqua_Multi_Battle_1

SaintFrancois_Aqua_Multi_Battle_16:
# 75 "data/maps/SaintFrancois/scripts.pory"
	goto SaintFrancois_Aqua_Multi_Battle_Froakie
	goto SaintFrancois_Aqua_Multi_Battle_1


SaintFrancois_Aqua_Multi_Battle_Treecko::
# 82 "data/maps/SaintFrancois/scripts.pory"
	multi_fixed_2_vs_2 TRAINER_SF_GRUNT_GIRL, SaintFrancois_Text_GruntGirlDefeat, TRAINER_SF_GRUNT_GUY, SaintFrancois_Text_GruntGuyDefeat, PARTNER_RIVAL_SF_TREECKO
	return


SaintFrancois_Aqua_Multi_Battle_Charmander::
# 87 "data/maps/SaintFrancois/scripts.pory"
	multi_fixed_2_vs_2 TRAINER_SF_GRUNT_GIRL, SaintFrancois_Text_GruntGirlDefeat, TRAINER_SF_GRUNT_GUY, SaintFrancois_Text_GruntGuyDefeat, PARTNER_RIVAL_SF_CHARMANDER
	return


SaintFrancois_Aqua_Multi_Battle_Froakie::
# 92 "data/maps/SaintFrancois/scripts.pory"
	multi_fixed_2_vs_2 TRAINER_SF_GRUNT_GIRL, SaintFrancois_Text_GruntGirlDefeat, TRAINER_SF_GRUNT_GUY, SaintFrancois_Text_GruntGuyDefeat, PARTNER_RIVAL_SF_FROAKIE
	return


# 104 "data/maps/SaintFrancois/scripts.pory"
Girl_Sees_Prot_SF:
# 105 "data/maps/SaintFrancois/scripts.pory"
	emote_exclamation_mark
	step_end

# 108 "data/maps/SaintFrancois/scripts.pory"
Guy_Sees_Prot_SF:
# 109 "data/maps/SaintFrancois/scripts.pory"
	emote_exclamation_mark
# 110 "data/maps/SaintFrancois/scripts.pory"
	walk_left
# 111 "data/maps/SaintFrancois/scripts.pory"
	walk_up
	step_end

# 114 "data/maps/SaintFrancois/scripts.pory"
Rival_Arrives_SF_23:
# 115 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 115 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 115 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 115 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 115 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 115 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 115 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 115 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 115 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 115 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 115 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 115 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 115 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 115 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 115 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 115 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 115 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 115 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 115 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 115 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 115 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 115 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 115 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 116 "data/maps/SaintFrancois/scripts.pory"
	walk_down
	step_end

# 119 "data/maps/SaintFrancois/scripts.pory"
Rival_Arrives_SF_24:
# 120 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 120 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 120 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 120 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 120 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 120 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 120 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 120 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 120 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 120 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 120 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 120 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 120 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 120 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 120 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 120 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 120 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 120 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 120 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 120 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 120 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 120 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 120 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 120 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 121 "data/maps/SaintFrancois/scripts.pory"
	walk_down
	step_end

# 124 "data/maps/SaintFrancois/scripts.pory"
Grunt_Goes_Up_SF:
# 125 "data/maps/SaintFrancois/scripts.pory"
	walk_up
# 125 "data/maps/SaintFrancois/scripts.pory"
	walk_up
	step_end

# 128 "data/maps/SaintFrancois/scripts.pory"
Girl_Goes_Up_SF_30:
# 129 "data/maps/SaintFrancois/scripts.pory"
	walk_up
# 129 "data/maps/SaintFrancois/scripts.pory"
	walk_up
# 130 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 131 "data/maps/SaintFrancois/scripts.pory"
	face_up
	step_end

# 134 "data/maps/SaintFrancois/scripts.pory"
Guy_Goes_Up_SF_30:
# 135 "data/maps/SaintFrancois/scripts.pory"
	walk_up
# 136 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 137 "data/maps/SaintFrancois/scripts.pory"
	walk_up
	step_end

SaintFrancois_Aqua_Fight_Text_0:
# 5 "data/maps/SaintFrancois/scripts.pory"
	.string "GRUNT: This is not a request. You need\n"
	.string "to take us to ISLAND, and we're not here\l"
	.string "to discuss it.$"

SaintFrancois_Aqua_Fight_Text_1:
# 6 "data/maps/SaintFrancois/scripts.pory"
	.string "MOTHER: Even if I wanted to, I couldn't.\n"
	.string "The sea is too rough these days. It will\l"
	.string "take some time until the boat can leave\l"
	.string "the harbor again.$"

SaintFrancois_Aqua_Fight_Text_2:
# 7 "data/maps/SaintFrancois/scripts.pory"
	.string "GRUNT: LIES! I don't believe you. Either\n"
	.string "you take us there voluntarily, or we'll\l"
	.string "make you drive the boat!$"

SaintFrancois_Aqua_Fight_Text_3:
# 15 "data/maps/SaintFrancois/scripts.pory"
	.string "GRUNT: What are you doing here? Get\n"
	.string "lost!$"

SaintFrancois_Aqua_Fight_Text_4:
# 16 "data/maps/SaintFrancois/scripts.pory"
	.string "MOTHER: {PLAYER}! Please help me, these\n"
	.string "people want to force me to take them to\l"
	.string "ISLAND!$"

SaintFrancois_Aqua_Fight_Text_5:
# 30 "data/maps/SaintFrancois/scripts.pory"
	.string "RIVAL: What's going on here? Leave\n"
	.string "{PLAYER}'s mother alone!$"

SaintFrancois_Aqua_Fight_Text_6:
# 31 "data/maps/SaintFrancois/scripts.pory"
	.string "GRUNT: Ugh, you kids keep annoying me.\n"
	.string "I've talked enough, let's fight!$"

SaintFrancois_Text_GruntGirlDefeat::
# 96 "data/maps/SaintFrancois/scripts.pory"
	.string "No way! Beaten by a couple of kids?$"

SaintFrancois_Text_GruntGuyDefeat::
# 100 "data/maps/SaintFrancois/scripts.pory"
	.string "Grr... This isn't over!$"

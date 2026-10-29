SaintFrancois_MapScripts::
# 2 "data/maps/SaintFrancois/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SaintFrancois_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SaintFrancois_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SaintFrancois/scripts.pory"
	goto_if_set FLAG_SF_AQUA_REMATCH, SaintFrancois_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

SaintFrancois_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/SaintFrancois/scripts.pory"
	call SaintFrancois_Setup_Rematch
	return


SaintFrancois_Aqua_Fight::
# 10 "data/maps/SaintFrancois/scripts.pory"
	lockall
# 11 "data/maps/SaintFrancois/scripts.pory"
	msgbox SaintFrancois_Aqua_Fight_Text_0
# 12 "data/maps/SaintFrancois/scripts.pory"
	msgbox SaintFrancois_Aqua_Fight_Text_1
# 13 "data/maps/SaintFrancois/scripts.pory"
	msgbox SaintFrancois_Aqua_Fight_Text_2
# 15 "data/maps/SaintFrancois/scripts.pory"
	playse SE_PIN
# 16 "data/maps/SaintFrancois/scripts.pory"
	applymovement LOCALID_AQUA_GIRL_SF, Girl_Sees_Prot_SF
# 17 "data/maps/SaintFrancois/scripts.pory"
	applymovement LOCALID_AQUA_GUY_SF, Guy_Sees_Prot_SF
# 18 "data/maps/SaintFrancois/scripts.pory"
	waitmovement LOCALID_AQUA_GIRL_SF
# 19 "data/maps/SaintFrancois/scripts.pory"
	waitmovement LOCALID_AQUA_GUY_SF
# 21 "data/maps/SaintFrancois/scripts.pory"
	msgbox SaintFrancois_Aqua_Fight_Text_3
# 22 "data/maps/SaintFrancois/scripts.pory"
	msgbox SaintFrancois_Aqua_Fight_Text_4
# 25 "data/maps/SaintFrancois/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_SF
# 26 "data/maps/SaintFrancois/scripts.pory"
	addobject LOCALID_RIVAL_SF
# 27 "data/maps/SaintFrancois/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 28 "data/maps/SaintFrancois/scripts.pory"
	switch VAR_TEMP_0
# 29 "data/maps/SaintFrancois/scripts.pory"
	case 29, SaintFrancois_Aqua_Fight_3
# 32 "data/maps/SaintFrancois/scripts.pory"
	applymovement LOCALID_RIVAL_SF, Rival_Arrives_SF_24
SaintFrancois_Aqua_Fight_1:
# 34 "data/maps/SaintFrancois/scripts.pory"
	waitmovement LOCALID_RIVAL_SF
# 36 "data/maps/SaintFrancois/scripts.pory"
	msgbox SaintFrancois_Aqua_Fight_Text_5
# 37 "data/maps/SaintFrancois/scripts.pory"
	msgbox SaintFrancois_Aqua_Fight_Text_6
# 40 "data/maps/SaintFrancois/scripts.pory"
	compare VAR_TEMP_0, 30
	goto_if_eq SaintFrancois_Aqua_Fight_6
# 44 "data/maps/SaintFrancois/scripts.pory"
	applymovement LOCALID_AQUA_GIRL_SF, Grunt_Goes_Up_SF
# 45 "data/maps/SaintFrancois/scripts.pory"
	applymovement LOCALID_AQUA_GUY_SF, Grunt_Goes_Up_SF
SaintFrancois_Aqua_Fight_5:
# 47 "data/maps/SaintFrancois/scripts.pory"
	waitmovement LOCALID_AQUA_GIRL_SF
# 48 "data/maps/SaintFrancois/scripts.pory"
	waitmovement LOCALID_AQUA_GUY_SF
# 50 "data/maps/SaintFrancois/scripts.pory"
	goto SaintFrancois_Aqua_Battle
	return

SaintFrancois_Aqua_Fight_3:
# 30 "data/maps/SaintFrancois/scripts.pory"
	applymovement LOCALID_RIVAL_SF, Rival_Arrives_SF_23
	goto SaintFrancois_Aqua_Fight_1

SaintFrancois_Aqua_Fight_6:
# 41 "data/maps/SaintFrancois/scripts.pory"
	applymovement LOCALID_AQUA_GIRL_SF, Girl_Goes_Up_SF_30
# 42 "data/maps/SaintFrancois/scripts.pory"
	applymovement LOCALID_AQUA_GUY_SF, Guy_Goes_Up_SF_30
	goto SaintFrancois_Aqua_Fight_5


SaintFrancois_Aqua_Battle::
# 57 "data/maps/SaintFrancois/scripts.pory"
	setflag FLAG_SF_AQUA_REMATCH
# 58 "data/maps/SaintFrancois/scripts.pory"
	call SaintFrancois_Aqua_Multi_Battle
# 59 "data/maps/SaintFrancois/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_ne SaintFrancois_Aqua_Battle_2
# 64 "data/maps/SaintFrancois/scripts.pory"
	clearflag FLAG_SF_AQUA_REMATCH
# 67 "data/maps/SaintFrancois/scripts.pory"
	releaseall
	return

SaintFrancois_Aqua_Battle_2:
# 60 "data/maps/SaintFrancois/scripts.pory"
	fadescreen FADE_TO_BLACK
# 61 "data/maps/SaintFrancois/scripts.pory"
	special SetCB2WhiteOut
	end


SaintFrancois_Setup_Rematch::
# 73 "data/maps/SaintFrancois/scripts.pory"
	setvar VAR_TEMP_0, 1
# 74 "data/maps/SaintFrancois/scripts.pory"
	setobjectxyperm LOCALID_AQUA_GIRL_SF, 28, 33
# 75 "data/maps/SaintFrancois/scripts.pory"
	setobjectmovementtype LOCALID_AQUA_GIRL_SF, MOVEMENT_TYPE_FACE_UP
# 76 "data/maps/SaintFrancois/scripts.pory"
	setobjectxyperm LOCALID_AQUA_GUY_SF, 29, 33
# 77 "data/maps/SaintFrancois/scripts.pory"
	setobjectmovementtype LOCALID_AQUA_GUY_SF, MOVEMENT_TYPE_FACE_UP
# 78 "data/maps/SaintFrancois/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_SF
# 79 "data/maps/SaintFrancois/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_SF, 27, 33
# 80 "data/maps/SaintFrancois/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL_SF, MOVEMENT_TYPE_FACE_UP
	return


SaintFrancois_Aqua_Grunt_Talk::
# 84 "data/maps/SaintFrancois/scripts.pory"
	goto_if_unset FLAG_SF_AQUA_REMATCH, SaintFrancois_Aqua_Grunt_Talk_2
# 87 "data/maps/SaintFrancois/scripts.pory"
	lockall
# 88 "data/maps/SaintFrancois/scripts.pory"
	faceplayer
# 89 "data/maps/SaintFrancois/scripts.pory"
	msgbox SaintFrancois_Aqua_Grunt_Talk_Text_0
# 90 "data/maps/SaintFrancois/scripts.pory"
	closemessage
# 91 "data/maps/SaintFrancois/scripts.pory"
	goto SaintFrancois_Aqua_Battle
	return

SaintFrancois_Aqua_Grunt_Talk_2:
	end


SaintFrancois_Rival_Talk::
# 95 "data/maps/SaintFrancois/scripts.pory"
	goto_if_unset FLAG_SF_AQUA_REMATCH, SaintFrancois_Rival_Talk_2
# 98 "data/maps/SaintFrancois/scripts.pory"
	lock
# 99 "data/maps/SaintFrancois/scripts.pory"
	faceplayer
# 100 "data/maps/SaintFrancois/scripts.pory"
	msgbox SaintFrancois_Rival_Talk_Text_0
# 101 "data/maps/SaintFrancois/scripts.pory"
	release
	return

SaintFrancois_Rival_Talk_2:
	end


SaintFrancois_Aqua_Multi_Battle::
# 107 "data/maps/SaintFrancois/scripts.pory"
	checktrainerflag TRAINER_RIVAL_LAB_CHARMANDER
	goto_if 1, SaintFrancois_Aqua_Multi_Battle_2
# 107 "data/maps/SaintFrancois/scripts.pory"
	checktrainerflag TRAINER_RIVAL_LAB_FROAKIE
	goto_if 1, SaintFrancois_Aqua_Multi_Battle_2
# 107 "data/maps/SaintFrancois/scripts.pory"
	checktrainerflag TRAINER_RIVAL_LAB_TREECKO
	goto_if 1, SaintFrancois_Aqua_Multi_Battle_2
# 117 "data/maps/SaintFrancois/scripts.pory"
	switch VAR_STARTER_MON
# 118 "data/maps/SaintFrancois/scripts.pory"
	case 0, SaintFrancois_Aqua_Multi_Battle_14
# 120 "data/maps/SaintFrancois/scripts.pory"
	case 1, SaintFrancois_Aqua_Multi_Battle_15
# 122 "data/maps/SaintFrancois/scripts.pory"
	case 2, SaintFrancois_Aqua_Multi_Battle_16
SaintFrancois_Aqua_Multi_Battle_1:
# 126 "data/maps/SaintFrancois/scripts.pory"
	goto SaintFrancois_Aqua_Multi_Battle_Treecko
	return

SaintFrancois_Aqua_Multi_Battle_2:
# 108 "data/maps/SaintFrancois/scripts.pory"
	switch VAR_STARTER_MON
# 109 "data/maps/SaintFrancois/scripts.pory"
	case 0, SaintFrancois_Aqua_Multi_Battle_10
# 111 "data/maps/SaintFrancois/scripts.pory"
	case 1, SaintFrancois_Aqua_Multi_Battle_11
# 113 "data/maps/SaintFrancois/scripts.pory"
	case 2, SaintFrancois_Aqua_Multi_Battle_12
	goto SaintFrancois_Aqua_Multi_Battle_1

SaintFrancois_Aqua_Multi_Battle_10:
# 110 "data/maps/SaintFrancois/scripts.pory"
	goto SaintFrancois_Aqua_Multi_Battle_Charmander
	goto SaintFrancois_Aqua_Multi_Battle_1

SaintFrancois_Aqua_Multi_Battle_11:
# 112 "data/maps/SaintFrancois/scripts.pory"
	goto SaintFrancois_Aqua_Multi_Battle_Froakie
	goto SaintFrancois_Aqua_Multi_Battle_1

SaintFrancois_Aqua_Multi_Battle_12:
# 114 "data/maps/SaintFrancois/scripts.pory"
	goto SaintFrancois_Aqua_Multi_Battle_Treecko
	goto SaintFrancois_Aqua_Multi_Battle_1

SaintFrancois_Aqua_Multi_Battle_14:
# 119 "data/maps/SaintFrancois/scripts.pory"
	goto SaintFrancois_Aqua_Multi_Battle_Treecko
	goto SaintFrancois_Aqua_Multi_Battle_1

SaintFrancois_Aqua_Multi_Battle_15:
# 121 "data/maps/SaintFrancois/scripts.pory"
	goto SaintFrancois_Aqua_Multi_Battle_Charmander
	goto SaintFrancois_Aqua_Multi_Battle_1

SaintFrancois_Aqua_Multi_Battle_16:
# 123 "data/maps/SaintFrancois/scripts.pory"
	goto SaintFrancois_Aqua_Multi_Battle_Froakie
	goto SaintFrancois_Aqua_Multi_Battle_1


SaintFrancois_Aqua_Multi_Battle_Treecko::
# 130 "data/maps/SaintFrancois/scripts.pory"
	multi_fixed_2_vs_2 TRAINER_SF_GRUNT_GIRL, SaintFrancois_Text_GruntGirlDefeat, TRAINER_SF_GRUNT_GUY, SaintFrancois_Text_GruntGuyDefeat, PARTNER_RIVAL_SF_TREECKO
	return


SaintFrancois_Aqua_Multi_Battle_Charmander::
# 135 "data/maps/SaintFrancois/scripts.pory"
	multi_fixed_2_vs_2 TRAINER_SF_GRUNT_GIRL, SaintFrancois_Text_GruntGirlDefeat, TRAINER_SF_GRUNT_GUY, SaintFrancois_Text_GruntGuyDefeat, PARTNER_RIVAL_SF_CHARMANDER
	return


SaintFrancois_Aqua_Multi_Battle_Froakie::
# 140 "data/maps/SaintFrancois/scripts.pory"
	multi_fixed_2_vs_2 TRAINER_SF_GRUNT_GIRL, SaintFrancois_Text_GruntGirlDefeat, TRAINER_SF_GRUNT_GUY, SaintFrancois_Text_GruntGuyDefeat, PARTNER_RIVAL_SF_FROAKIE
	return


# 152 "data/maps/SaintFrancois/scripts.pory"
Girl_Sees_Prot_SF:
# 153 "data/maps/SaintFrancois/scripts.pory"
	emote_exclamation_mark
	step_end

# 156 "data/maps/SaintFrancois/scripts.pory"
Guy_Sees_Prot_SF:
# 157 "data/maps/SaintFrancois/scripts.pory"
	emote_exclamation_mark
# 158 "data/maps/SaintFrancois/scripts.pory"
	walk_left
# 159 "data/maps/SaintFrancois/scripts.pory"
	walk_up
	step_end

# 162 "data/maps/SaintFrancois/scripts.pory"
Rival_Arrives_SF_23:
# 163 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 163 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 163 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 163 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 163 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 163 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 163 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 163 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 163 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 163 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 163 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 163 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 163 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 163 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 163 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 163 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 163 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 163 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 163 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 163 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 163 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 163 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 163 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 164 "data/maps/SaintFrancois/scripts.pory"
	walk_down
	step_end

# 167 "data/maps/SaintFrancois/scripts.pory"
Rival_Arrives_SF_24:
# 168 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 168 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 168 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 168 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 168 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 168 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 168 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 168 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 168 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 168 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 168 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 168 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 168 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 168 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 168 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 168 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 168 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 168 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 168 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 168 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 168 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 168 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 168 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 168 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 169 "data/maps/SaintFrancois/scripts.pory"
	walk_down
	step_end

# 172 "data/maps/SaintFrancois/scripts.pory"
Grunt_Goes_Up_SF:
# 173 "data/maps/SaintFrancois/scripts.pory"
	walk_up
# 173 "data/maps/SaintFrancois/scripts.pory"
	walk_up
	step_end

# 176 "data/maps/SaintFrancois/scripts.pory"
Girl_Goes_Up_SF_30:
# 177 "data/maps/SaintFrancois/scripts.pory"
	walk_up
# 177 "data/maps/SaintFrancois/scripts.pory"
	walk_up
# 178 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 179 "data/maps/SaintFrancois/scripts.pory"
	face_up
	step_end

# 182 "data/maps/SaintFrancois/scripts.pory"
Guy_Goes_Up_SF_30:
# 183 "data/maps/SaintFrancois/scripts.pory"
	walk_up
# 184 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 185 "data/maps/SaintFrancois/scripts.pory"
	walk_up
	step_end

SaintFrancois_Aqua_Fight_Text_0:
# 11 "data/maps/SaintFrancois/scripts.pory"
	.string "GRUNT: This is not a request. You need\n"
	.string "to take us to ISLAND, and we're not here\l"
	.string "to discuss it.$"

SaintFrancois_Aqua_Fight_Text_1:
# 12 "data/maps/SaintFrancois/scripts.pory"
	.string "MOTHER: Even if I wanted to, I couldn't.\n"
	.string "The sea is too rough these days. It will\l"
	.string "take some time until the boat can leave\l"
	.string "the harbor again.$"

SaintFrancois_Aqua_Fight_Text_2:
# 13 "data/maps/SaintFrancois/scripts.pory"
	.string "GRUNT: LIES! I don't believe you. Either\n"
	.string "you take us there voluntarily, or we'll\l"
	.string "make you drive the boat!$"

SaintFrancois_Aqua_Fight_Text_3:
# 21 "data/maps/SaintFrancois/scripts.pory"
	.string "GRUNT: What are you doing here? Get\n"
	.string "lost!$"

SaintFrancois_Aqua_Fight_Text_4:
# 22 "data/maps/SaintFrancois/scripts.pory"
	.string "MOTHER: {PLAYER}! Please help me, these\n"
	.string "people want to force me to take them to\l"
	.string "ISLAND!$"

SaintFrancois_Aqua_Fight_Text_5:
# 36 "data/maps/SaintFrancois/scripts.pory"
	.string "RIVAL: What's going on here? Leave\n"
	.string "{PLAYER}'s mother alone!$"

SaintFrancois_Aqua_Fight_Text_6:
# 37 "data/maps/SaintFrancois/scripts.pory"
	.string "GRUNT: Ugh, you kids keep annoying me.\n"
	.string "I've talked enough, let's fight!$"

SaintFrancois_Aqua_Grunt_Talk_Text_0:
# 89 "data/maps/SaintFrancois/scripts.pory"
	.string "GRUNT: You again? Fine, this time we'll\n"
	.string "finish you off!$"

SaintFrancois_Rival_Talk_Text_0:
# 100 "data/maps/SaintFrancois/scripts.pory"
	.string "RIVAL: {PLAYER}! We can't let them get\n"
	.string "away with this. Let's try again!$"

SaintFrancois_Text_GruntGirlDefeat::
# 144 "data/maps/SaintFrancois/scripts.pory"
	.string "No way! Beaten by a couple of kids?$"

SaintFrancois_Text_GruntGuyDefeat::
# 148 "data/maps/SaintFrancois/scripts.pory"
	.string "Grr... This isn't over!$"

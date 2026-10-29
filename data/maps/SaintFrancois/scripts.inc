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
	setvar VAR_STORY_PROGRESS, 4
# 71 "data/maps/SaintFrancois/scripts.pory"
	msgbox SaintFrancois_Aqua_Battle_Text_0
# 72 "data/maps/SaintFrancois/scripts.pory"
	closemessage
# 73 "data/maps/SaintFrancois/scripts.pory"
	applymovement LOCALID_AQUA_GIRL_SF, Grunt_Runs_Away_SF
# 74 "data/maps/SaintFrancois/scripts.pory"
	applymovement LOCALID_AQUA_GUY_SF, Grunt_Runs_Away_SF
# 75 "data/maps/SaintFrancois/scripts.pory"
	waitmovement LOCALID_AQUA_GIRL_SF
# 76 "data/maps/SaintFrancois/scripts.pory"
	waitmovement LOCALID_AQUA_GUY_SF
# 77 "data/maps/SaintFrancois/scripts.pory"
	setflag FLAG_HIDE_AQUA_SF
# 78 "data/maps/SaintFrancois/scripts.pory"
	removeobject LOCALID_AQUA_GIRL_SF
# 79 "data/maps/SaintFrancois/scripts.pory"
	removeobject LOCALID_AQUA_GUY_SF
# 81 "data/maps/SaintFrancois/scripts.pory"
	setflag FLAG_HIDE_AQUA_BLOCK_SF
# 83 "data/maps/SaintFrancois/scripts.pory"
	applymovement LOCALID_RIVAL_SF, Common_Movement_FacePlayer
# 84 "data/maps/SaintFrancois/scripts.pory"
	waitmovement LOCALID_RIVAL_SF
# 85 "data/maps/SaintFrancois/scripts.pory"
	msgbox SaintFrancois_Aqua_Battle_Text_1
# 86 "data/maps/SaintFrancois/scripts.pory"
	closemessage
# 87 "data/maps/SaintFrancois/scripts.pory"
	applymovement LOCALID_RIVAL_SF, Rival_Leaves_SF
# 88 "data/maps/SaintFrancois/scripts.pory"
	waitmovement LOCALID_RIVAL_SF
# 89 "data/maps/SaintFrancois/scripts.pory"
	setflag FLAG_HIDE_RIVAL_SF
# 90 "data/maps/SaintFrancois/scripts.pory"
	removeobject LOCALID_RIVAL_SF
# 91 "data/maps/SaintFrancois/scripts.pory"
	releaseall
	return

SaintFrancois_Aqua_Battle_2:
# 63 "data/maps/SaintFrancois/scripts.pory"
	fadescreen FADE_TO_BLACK
# 64 "data/maps/SaintFrancois/scripts.pory"
	special SetCB2WhiteOut
	end


# 94 "data/maps/SaintFrancois/scripts.pory"
Grunt_Runs_Away_SF:
# 95 "data/maps/SaintFrancois/scripts.pory"
	walk_fast_down
# 95 "data/maps/SaintFrancois/scripts.pory"
	walk_fast_down
# 96 "data/maps/SaintFrancois/scripts.pory"
	walk_fast_left
# 96 "data/maps/SaintFrancois/scripts.pory"
	walk_fast_left
# 96 "data/maps/SaintFrancois/scripts.pory"
	walk_fast_left
# 96 "data/maps/SaintFrancois/scripts.pory"
	walk_fast_left
# 96 "data/maps/SaintFrancois/scripts.pory"
	walk_fast_left
# 96 "data/maps/SaintFrancois/scripts.pory"
	walk_fast_left
# 96 "data/maps/SaintFrancois/scripts.pory"
	walk_fast_left
# 96 "data/maps/SaintFrancois/scripts.pory"
	walk_fast_left
# 96 "data/maps/SaintFrancois/scripts.pory"
	walk_fast_left
# 96 "data/maps/SaintFrancois/scripts.pory"
	walk_fast_left
	step_end

# 99 "data/maps/SaintFrancois/scripts.pory"
Rival_Leaves_SF:
# 100 "data/maps/SaintFrancois/scripts.pory"
	walk_up
# 100 "data/maps/SaintFrancois/scripts.pory"
	walk_up
# 101 "data/maps/SaintFrancois/scripts.pory"
	walk_left
# 101 "data/maps/SaintFrancois/scripts.pory"
	walk_left
# 101 "data/maps/SaintFrancois/scripts.pory"
	walk_left
# 101 "data/maps/SaintFrancois/scripts.pory"
	walk_left
# 101 "data/maps/SaintFrancois/scripts.pory"
	walk_left
# 101 "data/maps/SaintFrancois/scripts.pory"
	walk_left
# 101 "data/maps/SaintFrancois/scripts.pory"
	walk_left
# 101 "data/maps/SaintFrancois/scripts.pory"
	walk_left
# 101 "data/maps/SaintFrancois/scripts.pory"
	walk_left
# 101 "data/maps/SaintFrancois/scripts.pory"
	walk_left
	step_end

SaintFrancois_Setup_Rematch::
# 107 "data/maps/SaintFrancois/scripts.pory"
	setvar VAR_TEMP_0, 1
# 108 "data/maps/SaintFrancois/scripts.pory"
	setobjectxyperm LOCALID_AQUA_GIRL_SF, 28, 33
# 109 "data/maps/SaintFrancois/scripts.pory"
	setobjectmovementtype LOCALID_AQUA_GIRL_SF, MOVEMENT_TYPE_FACE_UP
# 110 "data/maps/SaintFrancois/scripts.pory"
	setobjectxyperm LOCALID_AQUA_GUY_SF, 29, 33
# 111 "data/maps/SaintFrancois/scripts.pory"
	setobjectmovementtype LOCALID_AQUA_GUY_SF, MOVEMENT_TYPE_FACE_UP
# 112 "data/maps/SaintFrancois/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_SF
# 113 "data/maps/SaintFrancois/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_SF, 27, 33
# 114 "data/maps/SaintFrancois/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL_SF, MOVEMENT_TYPE_FACE_UP
	return


SaintFrancois_Mother_Talk::
# 120 "data/maps/SaintFrancois/scripts.pory"
	lock
# 121 "data/maps/SaintFrancois/scripts.pory"
	faceplayer
# 122 "data/maps/SaintFrancois/scripts.pory"
	compare VAR_STORY_PROGRESS, 4
	goto_if_eq SaintFrancois_Mother_Talk_2
# 128 "data/maps/SaintFrancois/scripts.pory"
	compare VAR_STORY_PROGRESS, 5
	goto_if_ge SaintFrancois_Mother_Talk_3
# 131 "data/maps/SaintFrancois/scripts.pory"
	msgbox SaintFrancois_Mother_Talk_Text_3
SaintFrancois_Mother_Talk_1:
# 133 "data/maps/SaintFrancois/scripts.pory"
	release
	return

SaintFrancois_Mother_Talk_2:
# 123 "data/maps/SaintFrancois/scripts.pory"
	msgbox SaintFrancois_Mother_Talk_Text_0
# 124 "data/maps/SaintFrancois/scripts.pory"
	giveitem ITEM_PARCEL
# 125 "data/maps/SaintFrancois/scripts.pory"
	msgbox SaintFrancois_Mother_Talk_Text_1
# 126 "data/maps/SaintFrancois/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 127 "data/maps/SaintFrancois/scripts.pory"
	setvar VAR_STORY_PROGRESS, 5
	goto SaintFrancois_Mother_Talk_1

SaintFrancois_Mother_Talk_3:
# 129 "data/maps/SaintFrancois/scripts.pory"
	msgbox SaintFrancois_Mother_Talk_Text_2
	goto SaintFrancois_Mother_Talk_1


SaintFrancois_Aqua_Grunt_Talk::
# 137 "data/maps/SaintFrancois/scripts.pory"
	goto_if_unset FLAG_SF_AQUA_REMATCH, SaintFrancois_Aqua_Grunt_Talk_2
# 140 "data/maps/SaintFrancois/scripts.pory"
	lockall
# 141 "data/maps/SaintFrancois/scripts.pory"
	faceplayer
# 142 "data/maps/SaintFrancois/scripts.pory"
	msgbox SaintFrancois_Aqua_Grunt_Talk_Text_0
# 143 "data/maps/SaintFrancois/scripts.pory"
	closemessage
# 144 "data/maps/SaintFrancois/scripts.pory"
	goto SaintFrancois_Aqua_Battle
	return

SaintFrancois_Aqua_Grunt_Talk_2:
	end


SaintFrancois_Rival_Talk::
# 148 "data/maps/SaintFrancois/scripts.pory"
	goto_if_unset FLAG_SF_AQUA_REMATCH, SaintFrancois_Rival_Talk_2
# 151 "data/maps/SaintFrancois/scripts.pory"
	lock
# 152 "data/maps/SaintFrancois/scripts.pory"
	faceplayer
# 153 "data/maps/SaintFrancois/scripts.pory"
	msgbox SaintFrancois_Rival_Talk_Text_0
# 154 "data/maps/SaintFrancois/scripts.pory"
	release
	return

SaintFrancois_Rival_Talk_2:
	end


SaintFrancois_Aqua_Multi_Battle::
# 160 "data/maps/SaintFrancois/scripts.pory"
	checktrainerflag TRAINER_RIVAL_LAB_CHARMANDER
	goto_if 1, SaintFrancois_Aqua_Multi_Battle_2
# 160 "data/maps/SaintFrancois/scripts.pory"
	checktrainerflag TRAINER_RIVAL_LAB_FROAKIE
	goto_if 1, SaintFrancois_Aqua_Multi_Battle_2
# 160 "data/maps/SaintFrancois/scripts.pory"
	checktrainerflag TRAINER_RIVAL_LAB_TREECKO
	goto_if 1, SaintFrancois_Aqua_Multi_Battle_2
# 170 "data/maps/SaintFrancois/scripts.pory"
	switch VAR_STARTER_MON
# 171 "data/maps/SaintFrancois/scripts.pory"
	case 0, SaintFrancois_Aqua_Multi_Battle_14
# 173 "data/maps/SaintFrancois/scripts.pory"
	case 1, SaintFrancois_Aqua_Multi_Battle_15
# 175 "data/maps/SaintFrancois/scripts.pory"
	case 2, SaintFrancois_Aqua_Multi_Battle_16
SaintFrancois_Aqua_Multi_Battle_1:
# 179 "data/maps/SaintFrancois/scripts.pory"
	goto SaintFrancois_Aqua_Multi_Battle_Treecko
	return

SaintFrancois_Aqua_Multi_Battle_2:
# 161 "data/maps/SaintFrancois/scripts.pory"
	switch VAR_STARTER_MON
# 162 "data/maps/SaintFrancois/scripts.pory"
	case 0, SaintFrancois_Aqua_Multi_Battle_10
# 164 "data/maps/SaintFrancois/scripts.pory"
	case 1, SaintFrancois_Aqua_Multi_Battle_11
# 166 "data/maps/SaintFrancois/scripts.pory"
	case 2, SaintFrancois_Aqua_Multi_Battle_12
	goto SaintFrancois_Aqua_Multi_Battle_1

SaintFrancois_Aqua_Multi_Battle_10:
# 163 "data/maps/SaintFrancois/scripts.pory"
	goto SaintFrancois_Aqua_Multi_Battle_Charmander
	goto SaintFrancois_Aqua_Multi_Battle_1

SaintFrancois_Aqua_Multi_Battle_11:
# 165 "data/maps/SaintFrancois/scripts.pory"
	goto SaintFrancois_Aqua_Multi_Battle_Froakie
	goto SaintFrancois_Aqua_Multi_Battle_1

SaintFrancois_Aqua_Multi_Battle_12:
# 167 "data/maps/SaintFrancois/scripts.pory"
	goto SaintFrancois_Aqua_Multi_Battle_Treecko
	goto SaintFrancois_Aqua_Multi_Battle_1

SaintFrancois_Aqua_Multi_Battle_14:
# 172 "data/maps/SaintFrancois/scripts.pory"
	goto SaintFrancois_Aqua_Multi_Battle_Treecko
	goto SaintFrancois_Aqua_Multi_Battle_1

SaintFrancois_Aqua_Multi_Battle_15:
# 174 "data/maps/SaintFrancois/scripts.pory"
	goto SaintFrancois_Aqua_Multi_Battle_Charmander
	goto SaintFrancois_Aqua_Multi_Battle_1

SaintFrancois_Aqua_Multi_Battle_16:
# 176 "data/maps/SaintFrancois/scripts.pory"
	goto SaintFrancois_Aqua_Multi_Battle_Froakie
	goto SaintFrancois_Aqua_Multi_Battle_1


SaintFrancois_Aqua_Multi_Battle_Treecko::
# 183 "data/maps/SaintFrancois/scripts.pory"
	multi_fixed_2_vs_2 TRAINER_SF_GRUNT_GIRL, SaintFrancois_Text_GruntGirlDefeat, TRAINER_SF_GRUNT_GUY, SaintFrancois_Text_GruntGuyDefeat, PARTNER_RIVAL_SF_TREECKO
	return


SaintFrancois_Aqua_Multi_Battle_Charmander::
# 188 "data/maps/SaintFrancois/scripts.pory"
	multi_fixed_2_vs_2 TRAINER_SF_GRUNT_GIRL, SaintFrancois_Text_GruntGirlDefeat, TRAINER_SF_GRUNT_GUY, SaintFrancois_Text_GruntGuyDefeat, PARTNER_RIVAL_SF_CHARMANDER
	return


SaintFrancois_Aqua_Multi_Battle_Froakie::
# 193 "data/maps/SaintFrancois/scripts.pory"
	multi_fixed_2_vs_2 TRAINER_SF_GRUNT_GIRL, SaintFrancois_Text_GruntGirlDefeat, TRAINER_SF_GRUNT_GUY, SaintFrancois_Text_GruntGuyDefeat, PARTNER_RIVAL_SF_FROAKIE
	return


# 205 "data/maps/SaintFrancois/scripts.pory"
Girl_Sees_Prot_SF:
# 206 "data/maps/SaintFrancois/scripts.pory"
	emote_exclamation_mark
	step_end

# 209 "data/maps/SaintFrancois/scripts.pory"
Guy_Sees_Prot_SF:
# 210 "data/maps/SaintFrancois/scripts.pory"
	emote_exclamation_mark
# 211 "data/maps/SaintFrancois/scripts.pory"
	walk_left
# 212 "data/maps/SaintFrancois/scripts.pory"
	walk_up
	step_end

# 215 "data/maps/SaintFrancois/scripts.pory"
Rival_Arrives_SF_23:
# 216 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 216 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 216 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 216 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 216 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 216 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 216 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 216 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 216 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 216 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 216 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 216 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 216 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 216 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 216 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 216 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 216 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 216 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 216 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 216 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 216 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 216 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 216 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 217 "data/maps/SaintFrancois/scripts.pory"
	walk_down
	step_end

# 220 "data/maps/SaintFrancois/scripts.pory"
Rival_Arrives_SF_24:
# 221 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 221 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 221 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 221 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 221 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 221 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 221 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 221 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 221 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 221 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 221 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 221 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 221 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 221 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 221 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 221 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 221 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 221 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 221 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 221 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 221 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 221 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 221 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 221 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 222 "data/maps/SaintFrancois/scripts.pory"
	walk_down
	step_end

# 225 "data/maps/SaintFrancois/scripts.pory"
Grunt_Goes_Up_SF:
# 226 "data/maps/SaintFrancois/scripts.pory"
	walk_up
# 226 "data/maps/SaintFrancois/scripts.pory"
	walk_up
	step_end

# 229 "data/maps/SaintFrancois/scripts.pory"
Girl_Goes_Up_SF_30:
# 230 "data/maps/SaintFrancois/scripts.pory"
	walk_up
# 230 "data/maps/SaintFrancois/scripts.pory"
	walk_up
# 231 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 232 "data/maps/SaintFrancois/scripts.pory"
	face_up
	step_end

# 235 "data/maps/SaintFrancois/scripts.pory"
Guy_Goes_Up_SF_30:
# 236 "data/maps/SaintFrancois/scripts.pory"
	walk_up
# 237 "data/maps/SaintFrancois/scripts.pory"
	walk_right
# 238 "data/maps/SaintFrancois/scripts.pory"
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
# 71 "data/maps/SaintFrancois/scripts.pory"
	.string "GRUNT: Tch! We'll be back, you brats!\n"
	.string "Retreat!$"

SaintFrancois_Aqua_Battle_Text_1:
# 85 "data/maps/SaintFrancois/scripts.pory"
	.string "RIVAL: Phew, we showed them! I'll go\n"
	.string "ahead to Le Moule. Meet me there,\l"
	.string "{PLAYER}!$"

SaintFrancois_Mother_Talk_Text_0:
# 123 "data/maps/SaintFrancois/scripts.pory"
	.string "MOTHER: {PLAYER}, thank you so much for\n"
	.string "helping me! Oh, before I forget: this\l"
	.string "parcel arrived for the professor. Could\l"
	.string "you bring it to him?$"

SaintFrancois_Mother_Talk_Text_1:
# 125 "data/maps/SaintFrancois/scripts.pory"
	.string "MOTHER: And take these POKé BALLS.\n"
	.string "With them you can catch your very first\l"
	.string "POKéMON yourself on your way home!$"

SaintFrancois_Mother_Talk_Text_2:
# 129 "data/maps/SaintFrancois/scripts.pory"
	.string "MOTHER: Hello {PLAYER}, how are you? The\n"
	.string "sea is still pretty stormy.$"

SaintFrancois_Mother_Talk_Text_3:
# 131 "data/maps/SaintFrancois/scripts.pory"
	.string "MOTHER: {PLAYER}, please help me!$"

SaintFrancois_Aqua_Grunt_Talk_Text_0:
# 142 "data/maps/SaintFrancois/scripts.pory"
	.string "GRUNT: You again? Fine, this time we'll\n"
	.string "finish you off!$"

SaintFrancois_Rival_Talk_Text_0:
# 153 "data/maps/SaintFrancois/scripts.pory"
	.string "RIVAL: {PLAYER}! We can't let them get\n"
	.string "away with this. Let's try again!$"

SaintFrancois_Text_GruntGirlDefeat::
# 197 "data/maps/SaintFrancois/scripts.pory"
	.string "No way! Beaten by a couple of kids?$"

SaintFrancois_Text_GruntGuyDefeat::
# 201 "data/maps/SaintFrancois/scripts.pory"
	.string "Grr... This isn't over!$"

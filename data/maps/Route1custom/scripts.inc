Route1custom_MapScripts::
	.byte 0


Route1Custom_Block_LeMoule::
# 4 "data/maps/Route1custom/scripts.pory"
	lock
# 5 "data/maps/Route1custom/scripts.pory"
	faceplayer
# 6 "data/maps/Route1custom/scripts.pory"
	msgbox Route1Custom_Block_LeMoule_Text_0
# 7 "data/maps/Route1custom/scripts.pory"
	turnobject LOCALID_TEAM_AQUA_M, DIR_SOUTH
# 8 "data/maps/Route1custom/scripts.pory"
	release
	return


Route1Custom_Block_LeMoule_Text_0:
# 6 "data/maps/Route1custom/scripts.pory"
	.string "You cannot go here! We have an\n"
	.string "important operation running right now\l"
	.string "in Saint Francois and have to block the\l"
	.string "exits. Get lost!$"

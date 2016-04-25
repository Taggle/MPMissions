/*
	File: fn_forceSpawnMenu.sqf
	Author: havena
	
	Description:
	Forcer respawn lorsque quelqu'un est abattu
*/
closeDialog 0;
player setdamage 1;
life_respawned = true;
//spawnmenuon = 1;
[] call life_fnc_spawnMenu;
/*
	File: fn_packupSpikes.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Packs up a deployed spike strip.
*/
private["_coneL"];
_coneL = nearestObjects[getPos player,["RoadCone_L_F"],8] select 0;
if(isNil "_coneL") exitWith {};

if(([true,"coneL",1] call life_fnc_handleInv)) then
{
	//titleText["Vous avez ramassé le cône","PLAIN"];
	["Vous avez ramassé le cône lumineux", false] spawn quickNotif;
	player removeAction life_action_coneLPickup;
	life_action_coneLPickup = nil;
	deleteVehicle _coneL;
};
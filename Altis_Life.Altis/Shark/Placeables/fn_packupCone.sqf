/*
	File: fn_packupSpikes.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Packs up a deployed spike strip.
*/
private["_cone"];
_cone = nearestObjects[getPos player,["RoadCone_F"],8] select 0;
if(isNil "_cone") exitWith {};

if(([true,"cone",1] call life_fnc_handleInv)) then
{
	//titleText["Vous avez ramassé le cône","PLAIN"];
	["Vous avez ramassé le cône", false] spawn quickNotif;
	player removeAction life_action_conePickup;
	life_action_conePickup = nil;
	deleteVehicle _cone;
};
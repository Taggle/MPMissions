/*
	File: fn_packupSpikes.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Packs up a deployed spike strip.
*/
private["_barriereL"];
_barriereL = nearestObjects[getPos player,["RoadBarrier_small_F"],8] select 0;
if(isNil "_barriereL") exitWith {};

if(([true,"barriereL",1] call life_fnc_handleInv)) then
{
	//titleText["Vous avez ramassé le cône","PLAIN"];
	["Vous avez ramassé la barrière lumineuse", false] spawn quickNotif;
	player removeAction life_action_barriereLPickup;
	life_action_barriereLPickup = nil;
	deleteVehicle _barriereL;
};
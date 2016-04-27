/*
	File: fn_packupSpikes.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Packs up a deployed spike strip.
*/
private["_barriereRef"];
_barriereRef = nearestObjects[getPos player,["Land_BarGate_F"],8] select 0;
if(isNil "_barriereRef") exitWith {};

if(([true,"barriereRef",1] call life_fnc_handleInv)) then
{
	//titleText["Vous avez ramassé le cône","PLAIN"];
	["Vous avez ramassé la barrière refermable", false] spawn quickNotif;
	player removeAction life_action_barriereRefPickup;
	life_action_barriereRefPickup = nil;
	deleteVehicle _barriereRef;
};
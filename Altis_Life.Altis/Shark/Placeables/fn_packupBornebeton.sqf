/*
	File: fn_packupSpikes.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Packs up a deployed spike strip.
*/
private["_bornebeton"];
_bornebeton = nearestObjects[getPos player,["Land_CncBarrier_stripes_F"],8] select 0;
if(isNil "_bornebeton") exitWith {};

if(([true,"bornebeton",1] call life_fnc_handleInv)) then
{
	//titleText["Vous avez ramassé le cône","PLAIN"];
	["Vous avez ramassé la barrière en béton", false] spawn quickNotif;
	player removeAction life_action_bornebetonPickup;
	life_action_bornebetonPickup = nil;
	deleteVehicle _bornebeton;
};
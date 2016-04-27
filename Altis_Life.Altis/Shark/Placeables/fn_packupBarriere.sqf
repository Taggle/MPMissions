/*
	File: fn_packupSpikes.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Packs up a deployed spike strip.
*/
private["_barriere"];
_barriere = nearestObjects[getPos player,["RoadBarrier_F"],8] select 0;
if(isNil "_barriere") exitWith {};

if(([true,"barriere",1] call life_fnc_handleInv)) then
{
	//titleText["Vous avez ramassé le cône","PLAIN"];
	["Vous avez ramassé la barriere", false] spawn quickNotif;
	player removeAction life_action_barrierePickup;
	life_action_barrierePickup = nil;
	deleteVehicle _barriere;
};
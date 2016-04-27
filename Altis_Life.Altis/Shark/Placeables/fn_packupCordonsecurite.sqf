/*
	File: fn_packupSpikes.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Packs up a deployed spike strip.
*/
private["_cordonsecurite"];
_cordonsecurite = nearestObjects[getPos player,["TapeSign_F"],8] select 0;
if(isNil "_cordonsecurite") exitWith {};

if(([true,"cordonsecurite",1] call life_fnc_handleInv)) then
{
	//titleText["Vous avez ramassé le cône","PLAIN"];
	["Vous avez ramassé le cordon de sécurité", false] spawn quickNotif;
	player removeAction life_action_cordonsecuritePickup;
	life_action_cordonsecuritePickup = nil;
	deleteVehicle _cordonsecurite;
};
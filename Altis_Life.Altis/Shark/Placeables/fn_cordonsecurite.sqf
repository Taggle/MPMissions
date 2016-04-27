#include "..\..\script_macros.hpp"
/*
	File: fn_spikeStrip.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Creates a spike strip and preps it.
*/
private["_position","_cordonsecurite"];
_cordonsecurite = "TapeSign_F" createVehicle [0,0,0];
_cordonsecurite attachTo[player,[0,5.5,0]];
_cordonsecurite setDir 90;
_cordonsecurite setVariable["item","cordonsecuriteDeployed",true];

life_action_cordonsecuriteDeploy = player addAction["Placer cordon de securite",{if(!isNull life_cordonsecurite) then {detach life_cordonsecurite; life_cordonsecurite = ObjNull;}; player removeAction life_action_cordonsecuriteDeploy; life_action_cordonsecuriteDeploy = nil;},"",999,false,false,"",'!isNull life_cordonsecurite'];
life_cordonsecurite = _cordonsecurite;
waitUntil {isNull life_cordonsecurite};

if(!isNil "life_action_cordonsecuriteDeploy") then {player removeAction life_action_cordonsecuriteDeploy;};
if(isNull _cordonsecurite) exitWith {life_cordonsecurite = ObjNull;};

_cordonsecurite setPos [(getPos _cordonsecurite select 0),(getPos _cordonsecurite select 1),0];
_cordonsecurite allowDamage false;

life_action_cordonsecuritePickup = player addAction["Ramasser cordon de securite",life_fnc_packupCordonsecurite,"",0,false,false,"",
' _cordonsecurite = nearestObjects[getPos player,["TapeSign_F"],8] select 0; !isNil "_cordonsecurite" && !isNil {(_cordonsecurite getVariable "item")}'];

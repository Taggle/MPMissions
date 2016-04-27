#include "..\..\script_macros.hpp"
/*
	File: fn_spikeStrip.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Creates a spike strip and preps it.
*/
private["_position","_coneL"];
_coneL = "RoadCone_L_F" createVehicle [0,0,0];
_coneL attachTo[player,[0,5.5,0]];
_coneL setDir 90;
_coneL setVariable["item","coneLDeployed",true];

life_action_coneLDeploy = player addAction["Placer cone lumineux",{if(!isNull life_coneL) then {detach life_coneL; life_coneL = ObjNull;}; player removeAction life_action_coneLDeploy; life_action_coneLDeploy = nil;},"",999,false,false,"",'!isNull life_coneL'];
life_coneL = _coneL;
waitUntil {isNull life_coneL};

if(!isNil "life_action_coneLDeploy") then {player removeAction life_action_coneLDeploy;};
if(isNull _coneL) exitWith {life_coneL = ObjNull;};

_coneL setPos [(getPos _coneL select 0),(getPos _coneL select 1),0];
_coneL allowDamage false;

life_action_coneLPickup = player addAction["Ramasser cone lumineux",life_fnc_packupConeL,"",0,false,false,"",
' _coneL = nearestObjects[getPos player,["RoadCone_L_F"],8] select 0; !isNil "_coneL" && !isNil {(_coneL getVariable "item")}'];

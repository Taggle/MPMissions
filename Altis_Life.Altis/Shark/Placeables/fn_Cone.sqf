#include "..\..\script_macros.hpp"
/*
	File: fn_spikeStrip.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Creates a spike strip and preps it.
*/
private["_position","_cone"];
_cone = "RoadCone_F" createVehicle [0,0,0];
_cone attachTo[player,[0,5.5,0]];
_cone setDir 90;
_cone setVariable["item","coneDeployed",true];

life_action_coneDeploy = player addAction["Placer cone",{if(!isNull life_cone) then {detach life_cone; life_cone = ObjNull;}; player removeAction life_action_coneDeploy; life_action_coneDeploy = nil;},"",999,false,false,"",'!isNull life_cone'];
life_cone = _cone;
waitUntil {isNull life_cone};

if(!isNil "life_action_coneDeploy") then {player removeAction life_action_coneDeploy;};
if(isNull _cone) exitWith {life_cone = ObjNull;};

_cone setPos [(getPos _cone select 0),(getPos _cone select 1),0];
_cone allowDamage false;

life_action_conePickup = player addAction["Ramasser cone",life_fnc_packupCone,"",0,false,false,"",
' _cone = nearestObjects[getPos player,["Roadcone_F"],8] select 0; !isNil "_cone" && !isNil {(_cone getVariable "item")}'];

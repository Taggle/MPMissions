#include "..\..\script_macros.hpp"
/*
	File: fn_spikeStrip.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Creates a spike strip and preps it.
*/
private["_position","_bornebeton"];
_bornebeton = "Land_CncBarrier_stripes_F" createVehicle [0,0,0];
_bornebeton attachTo[player,[0,5.5,0]];
_bornebeton setDir 90;
_bornebeton setVariable["item","bornebetonDeployed",true];

life_action_bornebetonDeploy = player addAction["Placer barriere en beton",{if(!isNull life_bornebeton) then {detach life_bornebeton; life_bornebeton = ObjNull;}; player removeAction life_action_bornebetonDeploy; life_action_bornebetonDeploy = nil;},"",999,false,false,"",'!isNull life_bornebeton'];
life_bornebeton = _bornebeton;
waitUntil {isNull life_bornebeton};

if(!isNil "life_action_bornebetonDeploy") then {player removeAction life_action_bornebetonDeploy;};
if(isNull _bornebeton) exitWith {life_bornebeton = ObjNull;};

_bornebeton setPos [(getPos _bornebeton select 0),(getPos _bornebeton select 1),0];
_bornebeton allowDamage false;

life_action_bornebetonPickup = player addAction["Ramasser barriere en beton",life_fnc_packupBornebeton,"",0,false,false,"",
' _bornebeton = nearestObjects[getPos player,["Land_CncBarrier_stripes_F"],8] select 0; !isNil "_bornebeton" && !isNil {(_bornebeton getVariable "item")}'];

#include "..\..\script_macros.hpp"
/*
	File: fn_spikeStrip.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Creates a spike strip and preps it.
*/
private["_position","_barriereRef"];
_barriereRef = "Land_BarGate_F" createVehicle [0,0,0];
_barriereRef attachTo[player,[0,5.5,0]];
_barriereRef setDir 90;
_barriereRef setVariable["item","barriereRefDeployed",true];

life_action_barriereRefDeploy = player addAction["Placer barriere refermable",{if(!isNull life_barriereRef) then {detach life_barriereRef; life_barriereRef = ObjNull;}; player removeAction life_action_barriereRefDeploy; life_action_barriereRefDeploy = nil;},"",999,false,false,"",'!isNull life_barriereRef'];
life_barriereRef = _barriereRef;
waitUntil {isNull life_barriereRef};

if(!isNil "life_action_barriereRefDeploy") then {player removeAction life_action_barriereRefDeploy;};
if(isNull _barriereRef) exitWith {life_barriereRef = ObjNull;};

_barriereRef setPos [(getPos _barriereRef select 0),(getPos _barriereRef select 1),0];
_barriereRef allowDamage false;

life_action_barriereRefPickup = player addAction["Ramasser barriere refermable",life_fnc_packupbarriereRef,"",0,false,false,"",
' _barriereRef = nearestObjects[getPos player,["Land_BarGate_F"],8] select 0; !isNil "_barriereRef" && !isNil {(_barriereRef getVariable "item")}'];

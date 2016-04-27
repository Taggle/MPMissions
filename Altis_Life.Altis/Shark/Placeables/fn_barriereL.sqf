#include "..\..\script_macros.hpp"
/*
	File: fn_spikeStrip.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Creates a spike strip and preps it.
*/
private["_position","_barriereL"];
_barriereL = "RoadBarrier_small_F" createVehicle [0,0,0];
_barriereL attachTo[player,[0,5.5,0]];
_barriereL setDir 90;
_barriereL setVariable["item","barriereLDeployed",true];

life_action_barriereLDeploy = player addAction["Placer barriere lumineuse",{if(!isNull life_barriereL) then {detach life_barriereL; life_barriereL = ObjNull;}; player removeAction life_action_barriereLDeploy; life_action_barriereLDeploy = nil;},"",999,false,false,"",'!isNull life_barriereL'];
life_barriereL = _barriereL;
waitUntil {isNull life_barriereL};

if(!isNil "life_action_barriereLDeploy") then {player removeAction life_action_barriereLDeploy;};
if(isNull _barriereL) exitWith {life_barriereL = ObjNull;};

_barriereL setPos [(getPos _barriereL select 0),(getPos _barriereL select 1),0];
_barriereL allowDamage false;

life_action_barriereLPickup = player addAction["Ramasser barriere lumineuse",life_fnc_packupBarriereL,"",0,false,false,"",
' _barriereL = nearestObjects[getPos player,["RoadBarrier_small_F"],8] select 0; !isNil "_barriereL" && !isNil {(_barriereL getVariable "item")}'];

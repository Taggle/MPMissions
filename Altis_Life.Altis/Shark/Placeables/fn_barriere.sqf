#include "..\..\script_macros.hpp"
/*
	File: fn_spikeStrip.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Creates a spike strip and preps it.
*/
private["_position","_barriere"];
_barriere = "RoadBarrier_F" createVehicle [0,0,0];
_barriere attachTo[player,[0,5.5,0]];
_barriere setDir 90;
_barriere setVariable["item","barriereDeployed",true];

life_action_barriereDeploy = player addAction["Placer barriere",{if(!isNull life_barriere) then {detach life_barriere; life_barriere = ObjNull;}; player removeAction life_action_barriereDeploy; life_action_barriereDeploy = nil;},"",999,false,false,"",'!isNull life_barriere'];
life_barriere = _barriere;
waitUntil {isNull life_barriere};

if(!isNil "life_action_barriereDeploy") then {player removeAction life_action_barriereDeploy;};
if(isNull _barriere) exitWith {life_barriere = ObjNull;};

_barriere setPos [(getPos _barriere select 0),(getPos _barriere select 1),0];
_barriere allowDamage false;

life_action_barrierePickup = player addAction["Ramasser barriere",life_fnc_packupBarriere,"",0,false,false,"",
' _barriere = nearestObjects[getPos player,["RoadBarrier_F"],8] select 0; !isNil "_barriere" && !isNil {(_barriere getVariable "item")}'];

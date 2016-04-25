#include "..\..\script_macros.hpp"
/*
	File: fn_gather.sqf
	Author: Devilfloh

	Description:
	Main functionality for gathering.
*/
private["_maxGather","_resource","_amount","_maxGather","_requiredItem"];
if (life_action_inUse) exitWith {};
if((vehicle player) != player) exitWith {};
if((player GVAR "restrained")) exitWith {[localize "STR_NOTF_isrestrained", false] spawn quickNotif;};
if((player GVAR "playerSurrender")) exitWith {[localize "STR_NOTF_surrender", false] spawn quickNotif;};
if ((player getVariable['ACE_Captives_isSurrendering',false])) exitWith {[localize "STR_NOTF_surrender", false] spawn quickNotif;};

life_action_inUse = true;
_zone = "";
_requiredItem = "";
_zoneSize = (getNumber(missionConfigFile >> "CfgGather" >> "zoneSize"));
_exit = false;

_resourceCfg = missionConfigFile >> "CfgGather" >> "Resources";
for[{_i = 0},{_i < count(_resourceCfg)},{_i = _i + 1}] do {

	_curConfig = (_resourceCfg select _i);
	_resource = configName _curConfig;
	_maxGather = getNumber(_curConfig >> "amount");
	_resourceZones = getArray(_curConfig >> "zones");
	_requiredItem = getText(_curConfig >> "item");
	{
		if((player distance (getMarkerPos _x)) < _zoneSize) exitWith {_zone = _x;};
	} forEach _resourceZones;

	if(_zone != "") exitWith {};
};

if(_zone == "") exitWith {life_action_inUse = false;};

if (_requiredItem != "") then
{
	_valItem = GVAR_MNS "life_inv_" + _requiredItem;

	if (_valItem < 1) exitWith
	{
		switch (_requiredItem) do
		{
         //Messages here
		};
		life_action_inUse = false;
		_exit = true;
	};
};

if(_exit) exitWith {life_action_inUse = false;};

_amount = round(random(_maxGather)) + 1;
_diff = [_resource,_amount,life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff;
if(_diff == 0) exitWith {
	[localize "STR_NOTF_InvFull", false] spawn quickNotif;
	life_action_inUse = false;
};

switch (_requiredItem) do
{
	case "pickaxe": {player say3D "mining";};
	default {player say3D "harvest";};
};

for "_i" from 0 to 4 do
{
	player playMoveNow "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
	waitUntil{animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";};
	sleep 0.5;
};

if(([true,_resource,_diff] call life_fnc_handleInv)) then
{
	_itemName = M_CONFIG(getText,"VirtualItems",_resource,"displayName");
	titleText[format[localize "STR_NOTF_Gather_Success",(localize _itemName),_diff],"PLAIN"];
};

sleep 1;
life_action_inUse = false;
#include "..\..\script_macros.hpp"
/*
	File: fn_keyGive.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Gives a copy of the key for the selected vehicle to the selected player.
	Player must be within range.
*/
private["_dialog","_list","_plist","_sel","_vehicle","_owners","_index","_unit","_uid"];
disableSerialization;

_dialog = findDisplay 2700;
_list = _dialog displayCtrl 2701;
_plist = _dialog displayCtrl 2702;

_sel = lbCurSel _list;
if((_list lbText _sel) == "Vous n'avez pas de vehicules") exitWith {["Vous n'avez pas selectionné un vehicule", false] spawn quickNotif;};
_vehicle = _list lbData _sel;
_vehicle = life_vehicles select parseNumber(_vehicle);

if((lbCurSel 2702) == -1) exitWith {["Vous n'avez pas selectionné une personne", false] spawn quickNotif;};
_sel = lbCurSel _plist;
_unit = _plist lbData _sel;
if(_unit == "PlayerQuiRegarde") then {
  _unit = cursorObject;
} else {
	_unit = call compile format["%1", _unit];
};	
if(isNull _unit OR isNil "_unit") exitWith {};
if(_unit == player) exitWith {};
if(player distance _unit > 3) exitWith {["Cette personne n'est pas proche de vous", false] spawn quickNotif;};

_uid = getPlayerUID _unit;
_owners = _vehicle GVAR "vehicle_info_owners";
_index = [_uid,_owners] call TON_fnc_index;
if(EQUAL(_index,-1)) then  {
	_owners pushBack [_uid,_unit GVAR ["realname",name _unit]];
	_vehicle SVAR ["vehicle_info_owners",_owners,true];
};

[format[localize "STR_NOTF_givenKeysTo",_unit GVAR ["realname",name _unit],typeOf _vehicle], false] spawn notif;
[_vehicle,_unit,profileName] remoteExecCAll ["TON_fnc_clientGetKey",_unit];

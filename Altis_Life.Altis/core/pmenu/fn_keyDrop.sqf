/*
	File: fn_keyDrop.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Drops the key.
*/
private["_dialog","_list","_sel","_vehicle","_impounded","_owners","_index","_index2","_i"];
disableSerialization;

_dialog = findDisplay 2700;
_list = _dialog displayCtrl 2701;
_sel = lbCurSel _list;
if(_sel == -1) exitWith {["Vous n'avez pas selectionné un véhicule", false] spawn quickNotif;};
if((_list lbText _sel) == "You don't own any vehicles.") exitWith {["Vous n'avez pas selectionné un véhicule", false] spawn quickNotif;};
_index = (parseNumber(_list lbData _sel));
_vehicle = life_vehicles select _index;
if(_vehicle isKindOf "House_F") exitWith {["Vous ne pouvez pas jeter à terre les clés de votre maison", false] spawn quickNotif;};
_owners = _vehicle getVariable "vehicle_info_owners";

_index2 = [(getPlayerUID player),_owners] call TON_fnc_index;
life_vehicles = life_vehicles - [_vehicle];
_owners set[_index,-1];
_owners = _owners - [-1];
_vehicle setVariable["vehicle_info_owners",_owners,true];

[] spawn life_fnc_keyMenu;

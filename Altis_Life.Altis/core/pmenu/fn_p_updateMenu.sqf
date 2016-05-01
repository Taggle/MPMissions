#include "..\..\script_macros.hpp"
/*
	File: fn_p_updateMenu.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Updates the player menu (Virtual Interaction Menu)
*/
private["_inv","_lic","_licenses","_near","_near_units","_mstatus","_shrt","_side","_struct"];
disableSerialization;

if(FETCH_CONST(life_adminlevel) < 1) then {
	ctrlShow[2020,false];
	ctrlShow[2021,false];
};

_side = switch(playerSide) do {case west:{"cop"}; case civilian:{"civ"}; case independent:{"med"};};

_inv = CONTROL(2001,2005);
_lic = CONTROL(2001,2014);
_near = CONTROL(2001,2022);
_near_i = CONTROL(2001,2023);
_mstatus = CONTROL(2001,2015);
_struct = "";
lbClear _inv;
lbClear _near;
lbClear _near_i;

_near lbAdd format["%1","*Cible*"];
_near lbSetData [(lbSize _near)-1,"PlayerQuiRegarde"];
_near_i lbAdd format["%1","*Cible*"];
_near_i lbSetData [(lbSize _near)-1,"PlayerQuiRegarde"];

//Near players
_near_units = [];
{ if(alive _x && _x != player) then {_near_units pushBack _x; }; } foreach playableUnits;
_sortedList = [_near_units,[],{_x getVariable ["realname",""]},"ASCEND"] call BIS_fnc_sortBy;

{
	_near lbAdd format["%1 - %2",_x getVariable ["realname",""], side _x];
	_near lbSetData [(lbSize _near)-1,str(_x)];
	_near_i lbAdd format["%1 - %2",_x getVariable ["realname",""], side _x];
	_near_i lbSetData [(lbSize _near)-1,str(_x)];
} foreach _sortedList;

_mstatus ctrlSetStructuredText parseText format["<img size='1.3' image='icons\ico_bank.paa'/> <t size='0.8px'>$%1</t><br/><img size='1.2' image='icons\ico_money.paa'/> <t size='0.8'>$%2</t>",[BANK] call life_fnc_numberText,[CASH] call life_fnc_numberText];
ctrlSetText[2009,format["Weight: %1 / %2", life_carryWeight, life_maxWeight]];

{
	if(ITEM_VALUE(configName _x) > 0) then {
		_inv lbAdd format["%2 [x%1]",ITEM_VALUE(configName _x),localize (getText(_x >> "displayName"))];
		_inv lbSetData [(lbSize _inv)-1,configName _x];
		_icon = M_CONFIG(getText,"VirtualItems",configName _x,"icon");
		if(!(EQUAL(_icon,""))) then {
			_inv lbSetPicture [(lbSize _inv)-1,_icon];
		};
	};
} forEach ("true" configClasses (missionConfigFile >> "VirtualItems"));

{
	_displayName = getText(_x >> "displayName");
	
	if(LICENSE_VALUE(configName _x,_side)) then {
		_struct = _struct + format["%1<br/>",localize _displayName];
	};
} forEach (format["getText(_x >> 'side') isEqualTo '%1'",_side] configClasses (missionConfigFile >> "Licenses"));

if(EQUAL(_struct,"")) then {
	_struct = "No Licenses";
};

_lic ctrlSetStructuredText parseText format["
<t size='0.8px'>
%1
</t>
",_struct];
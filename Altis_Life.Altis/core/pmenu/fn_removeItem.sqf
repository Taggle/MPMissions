#include "..\..\script_macros.hpp"
/*
	File: fn_removeItem.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Removes the selected item & amount to remove from the players
	virtual inventory.
*/
private["_data","_value","_obj"];
disableSerialization;
_data = lbData[2005,(lbCurSel 2005)];
_value = ctrlText 2010;

if(EQUAL(_data,"")) exitWith {[localize "STR_NOTF_didNotSelectToRemove", false] spawn quickNotif;};
if(!([_value] call TON_fnc_isnumber)) exitWith {[localize "STR_NOTF_notNumberFormat", false] spawn quickNotif;};
if(parseNumber(_value) <= 0) exitWith {[localize "STR_NOTF_enterAmountRemove", false] spawn quickNotif;};
if(EQUAL(ITEM_ILLEGAL(_data),1) && ([west,visiblePosition player,100] call life_fnc_nearUnits)) exitWith {titleText["Ceci est un objet illégal, la police va vous voir si vous vous en débarassez devant eux","PLAIN"]};
if(player != vehicle player) exitWith {titleText["Vous ne pouvez pas lâcher cet objet dans le véhicule","PLAIN"]};
if(!([false,_data,(parseNumber _value)] call life_fnc_handleInv)) exitWith {[localize "STR_NOTF_couldNotRemoveThatMuch", false] spawn quickNotif;};

[format[localize "STR_NOTF_removedFromInventory",(parseNumber _value),(localize ITEM_NAME(_data))], false] spawn notif;
	
[] call life_fnc_p_updateMenu;
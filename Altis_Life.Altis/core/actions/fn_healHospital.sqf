#include "..\..\script_macros.hpp"
/*
	File: fn_healHospital.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Doesn't matter, will be revised later.
*/
if(CASH < 100) exitWith {[format[localize "STR_NOTF_HS_NoCash",100], false] spawn quickNotif;};
titleText[localize "STR_NOTF_HS_Healing","PLAIN"];

uiSleep 8;

if(player distance (_this select 0) > 5) exitWith {[localize "STR_NOTF_HS_ToFar", false] spawn quickNotif;};
titleText[localize "STR_NOTF_HS_Healed","PLAIN"];
player setDamage 0;
SUB(CASH,100);
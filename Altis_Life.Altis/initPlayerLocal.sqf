#include "script_macros.hpp"
/*
	File: initPlayerLocal.sqf
	Author:

	Description:
	Starts the initialization of the player.
*/
if (!hasInterface && !isServer) exitWith {
	[] call compile PreprocessFileLineNumbers "\life_hc\initHC.sqf";
}; //This is a headless client.

"BIS_fnc_MP_packet" addPublicVariableEventHandler {_this call life_fnc_MPexec};

#define CONST(var1,var2) var1 = compileFinal (if(typeName var2 == "STRING") then {var2} else {str(var2)})
#define EQUAL(condition1,condition2) condition1 isEqualTo condition2
#define LIFE_SETTINGS(TYPE,SETTING) TYPE(missionConfigFile >> "Life_Settings" >> SETTING)

CONST(BIS_fnc_endMission,BIS_fnc_endMission);
//if(EQUAL(LIFE_SETTINGS(getNumber,"sypglass_toggle"),1)) then {[] execVM "SpyGlass\fn_initSpy.sqf";};

[] execVM "core\init.sqf";
[] execVM "core\functions\fn_emptyFuel.sqf";

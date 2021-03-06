#include "..\..\script_macros.hpp"
/*
	File: fn_useItem.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Main function for item effects and functionality through the player menu.
*/
private "_item";
disableSerialization;
if(EQUAL(lbCurSel 2005,-1)) exitWith {[localize "STR_ISTR_SelectItemFirst", false] spawn quickNotif;};
_item = CONTROL_DATA(2005);

switch (true) do {
	case (_item in ["waterBottle","coffee","redgull"]): {
		if(([false,_item,1] call life_fnc_handleInv)) then {
			life_thirst = 100;
			if(EQUAL(LIFE_SETTINGS(getNumber,"enable_fatigue"),1)) then {player setFatigue 0;};
			if(EQUAL(_item,"redgull") && {EQUAL(LIFE_SETTINGS(getNumber,"enable_fatigue"),1)}) then {
				[] spawn {
					life_redgull_effect = time;
					titleText[localize "STR_ISTR_RedGullEffect","PLAIN"];
					[player, "Drink"] call CBA_fnc_globalSay3d;
					player enableFatigue false;
					waitUntil {!alive player OR ((time - life_redgull_effect) > (8 * 60))};
					player enableFatigue true;
				};
			};
		};
	};

	case (_item in ["whiskey","tequila"]): {
		if(([false,_item,1] call life_fnc_handleInv)) then {
			life_thirst = life_thirst + 20;
			if((player getVariable ["inDrink",FALSE])) exitWith {[localize "STR_MISC_AlreadyDrinking", false] spawn quickNotif;};
			if(isNil "life_drink") then {life_drink = 0;};
			life_drink = life_drink + 0.10;
			//if (life_drink < 0.07) exitWith {};
			[] spawn life_fnc_whiskey;
		};
	};

	case (EQUAL(_item,"moonshine")): {
		if(([false,_item,1] call life_fnc_handleInv)) then {
			life_thirst = life_thirst + 20;
			if((player getVariable ["inDrink",FALSE])) exitWith {[localize "STR_MISC_AlreadyDrinking", false] spawn quickNotif;};
			if(isNil "life_drink") then {life_drink = 0;};
			life_drink = life_drink + 0.15;
			//if (life_drink < 0.07) exitWith {};
			[] spawn life_fnc_moonshine;
		};
	};

	case (_item in ["biere","heineken","redWine"]): {
		if(([false,_item,1] call life_fnc_handleInv)) then {
			life_thirst = life_thirst + 60;
			if((player getVariable ["inDrink",FALSE])) exitWith {[localize "STR_MISC_AlreadyDrinking", false] spawn quickNotif;};
			if(isNil "life_drink") then {life_drink = 0;};
			life_drink = life_drink + 0.05;
			//if (life_drink < 0.07) exitWith {};
			[] spawn life_fnc_biere;
		};
	};

	case (EQUAL(_item,"boltcutter")): {
		[cursorObject] spawn life_fnc_boltcutter;
		closeDialog 0;
	};

	case (EQUAL(_item,"blastingcharge")): {
		player reveal fed_bank;
		(group player) reveal fed_bank;
		[cursorObject] spawn life_fnc_blastingCharge;
	};

	case (EQUAL(_item,"defusekit")): {
		[cursorObject] spawn life_fnc_defuseKit;
	};

	case (EQUAL(_item,"storagesmall")): {
		[] call life_fnc_storageBoxSmall;
	};

	case (EQUAL(_item,"gpsTracker")): {
		[cursorTarget] spawn life_fnc_gpsTracker;
	};

	case (EQUAL(_item,"storagebig")): {
		[] call life_fnc_storageBoxBig;
	};

	case (EQUAL(_item,"spikeStrip")): {
		if(!isNull life_spikestrip) exitWith {[localize "STR_ISTR_SpikesDeployment", false] spawn quickNotif;};
		if(([false,_item,1] call life_fnc_handleInv)) then {
			[] spawn life_fnc_spikeStrip;
		};
	};

	case (EQUAL(_item,"cone")): {
		if(!isNull life_cone) exitWith {["Vous avez déjà un cône en déploiement", false] spawn quickNotif;};
		if(([false,_item,1] call life_fnc_handleInv)) then {
			[] spawn life_fnc_cone;
		};
	};

	case (EQUAL(_item,"coneL")): {
		if(!isNull life_coneL) exitWith {["Vous avez déjà un cône lumineux en déploiement", false] spawn quickNotif;};
		if(([false,_item,1] call life_fnc_handleInv)) then {
			[] spawn life_fnc_coneL;
		};
	};

	case (EQUAL(_item,"barriere")): {
		if(!isNull life_coneL) exitWith {["Vous avez déjà une barrière en déploiement", false] spawn quickNotif;};
		if(([false,_item,1] call life_fnc_handleInv)) then {
			[] spawn life_fnc_barriere;
		};
	};

	case (EQUAL(_item,"barriereRef")): {
		if(!isNull life_barriereRef) exitWith {["Vous avez déjà une barrière refermable en déploiement", false] spawn quickNotif;};
		if(([false,_item,1] call life_fnc_handleInv)) then {
			[] spawn life_fnc_barriereRef;
		};
	};

	case (EQUAL(_item,"barriereL")): {
		if(!isNull life_barriereL) exitWith {["Vous avez déjà une barrière lumineuse en déploiement", false] spawn quickNotif;};
		if(([false,_item,1] call life_fnc_handleInv)) then {
			[] spawn life_fnc_barriereL;
		};
	};

	case (EQUAL(_item,"bornebeton")): {
		if(!isNull life_bornebeton) exitWith {["Vous avez déjà une barrière en beton en déploiement", false] spawn quickNotif;};
		if(([false,_item,1] call life_fnc_handleInv)) then {
			[] spawn life_fnc_bornebeton;
		};
	};

	case (EQUAL(_item,"cordonsecurite")): {
		if(!isNull life_cordonsecurite) exitWith {["Vous avez déjà un cordon de sécurité en déploiement", false] spawn quickNotif;};
		if(([false,_item,1] call life_fnc_handleInv)) then {
			[] spawn life_fnc_cordonsecurite;
		};
	};

	case (EQUAL(_item,"fuelFull")): {
		if(vehicle player != player) exitWith {[localize "STR_ISTR_RefuelInVehicle", false] spawn quickNotif;};
		[] spawn life_fnc_jerryRefuel;
	};

	case (EQUAL(_item,"lockpick")): {
		[] spawn life_fnc_lockpick;
	};

	case (_item in ["apple","rabbit","salema","ornate","mackerel","tuna","mullet","catshark","turtle_soup","hen","rooster","sheep","goat","donuts","tbacon","peach"]): {
		if(!(EQUAL(M_CONFIG(getNumber,"VirtualItems",_item,"edible"),-1))) then {
			if([false,_item,1] call life_fnc_handleInv) then {
				_val = M_CONFIG(getNumber,"VirtualItems",_item,"edible");
				_sum = life_hunger + _val;
				[player, "EatFood"] call CBA_fnc_globalSay3d;
				switch (true) do {
					case (_val < 0 && _sum < 1): {life_hunger = 5;}; //This adds the ability to set the entry edible to a negative value and decrease the hunger without death
					case (_sum > 100): {life_hunger = 100;};
					default {life_hunger = _sum;};
				};
			};
		};
	};

	default {
		[localize "STR_ISTR_NotUsable", false] spawn quickNotif;
	};
};

[] call life_fnc_p_updateMenu;
[] call life_fnc_hudUpdate;

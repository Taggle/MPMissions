#include "..\..\script_macros.hpp"
/*
	File: fn_handleDamage.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Handles damage, specifically for handling the 'tazer' pistol and nothing else.
*/
private["_unit","_damage","_source","_projectile","_part","_curWep"];
_unit = SEL(_this,0);
_part = SEL(_this,1);
_damage = SEL(_this,2);
_source = SEL(_this,3);
_projectile = SEL(_this,4);

//Handle the tazer first (Top-Priority).
if(!isNull _source) then {
	if(_source != _unit) then {
		_curWep = currentWeapon _source;
		if(_projectile in ["DDOPP_B_Taser"] && _curWep in ["DDOPP_X26","DDOPP_X26_b","DDOPP_X3","DDOPP_X3_b"]) then {
			if(side _source == west && playerSide == civilian) then {
				private["_distance"];
				_distance = if(_projectile == "B_556x45_dual") then {100} else {15};
				_damage = false;
				if(_unit distance _source < _distance) then {
					if(!life_istazed && !life_isknocked && !(_unit getVariable["ACE_captives_isHandcuffed",false])) then {
						if (vehicle player != player) then {
							if (typeOf (vehicle player) == "B_Quadbike_01_F") then {
								player action ["Eject",vehicle player];
								[_unit,_source] spawn life_fnc_tazed;
							};
						} else {
							[_unit,_source] spawn life_fnc_tazed;
						};
					};
				};
			};

		/*if(_projectile in ["R3F_556x45_Ball_airsoft","R3F_762x51_Ball_airsoft"] && _curWep in ["R3F_Famas_F1_as","R3F_Famas_surb_as","R3F_Famas_G2_HG_as","R3F_HK416M_as","R3F_HK417L_as","rhs_weap_XM2010_as","rhs_weap_m4_as","rhs_weap_m4a1_blockII_as","rhs_weap_m16a4_as","rhs_weap_ak74m_as","rhs_weap_akm_as","rhs_weap_akms_as","rhsusf_weap_m1911a1_as","rhs_weap_makarov_pmm_as","hgun_Rook40_F_as","hgun_ACPC2_F_as"]) then {
			_damage = 0;
			private["_isVehicle"];
			_isVehicle = if(vehicle player != player) then {true} else {false};
			if(!_isVehicle) then {
				cutText ["Une bille d'airsoft vous touche !!!", "PLAIN"];
				hint "Une bille d'airsoft vous touche !!!";
				[_unit,_source] spawn life_fnc_airsoft;
			};
		};*/

			//Temp fix for super tasers on cops.
			if(side _source == west && (playerSide == west OR playerSide == independent)) then {
				_damage = false;
			};
		};
	};
};

if(vest _unit == "V_HarnessOGL_gry") then {
	if((time - life_action_delay) < 15) exitWith {hint localize "STR_NOTF_ActionDelay";};
	[_unit] spawn life_fnc_jihad;
	life_action_delay = time;
};

[] call life_fnc_hudUpdate;
_damage;

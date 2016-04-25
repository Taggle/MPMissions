#include "..\..\script_macros.hpp"
/*
	File: fn_showId.sqf
	Author: Youri Litovski
	
	Description:
	Montrer les papiers d'identité
*/
private["_target", "_lvl","_typ"];

_target = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_lvl = 0;
_typ = _this select 1;

if(isNull _target) exitwith {};
if( !(_target isKindOf "Man") ) exitwith {};
if( !(alive _target) ) exitwith {};

switch (playerSide) do
{
	case west: 
	{
		_lvl = __GETC__(life_coplevel);
	};
	case independent: 
	{
		_lvl = __GETC__(life_medicLevel);
	};
	case civilian:
	{
		switch (true) do
		{
			case license_civ_gouvernement:
			{
				_lvl = 1;
			};
		};
	};
};

[player,_lvl,_typ] remoteExecCall ["life_fnc_voirPapiers",_target];
/*
	File: fn_viewId.sqf
	Author: Youri Litovski
	
	Description:
	Voir les papiers d'identité
*/
private["_unit","_lvl","_typ","_rang","_message"];

_unit = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_lvl = [_this,1,-1,[0]] call BIS_fnc_param;

if(isNull _unit OR _lvl == -1) exitwith {};


switch (side _unit) do
{
	case west: 
	{
		_typ = _this select 2;
		
		if(_typ == "flic") then {
			switch ( _lvl ) do
			{
				case 1: { _rang = "Officier"; };
				case 2: { _rang = "Sergent"; };
				case 3: { _rang = "Sergent-Major"; };
				case 4: { _rang = "Lieutenant"; };
				case 5: { _rang = "Capitaine"; };
				case 6: { _rang = "Major"; };
				case 7: { _rang = "Lieutenant-Colonel"; };
				case 8: { _rang = "Shériff Adjoint"; };
				case 9: { _rang = "Shériff"; };
				default { _rang = "Grade non reconnu"; };
			};
			_message = format["<img size='10' color='#FFFFFF' image='\data_shark\textures\papiers\insigne_police.paa'/><br/><br/><t size='2.5'>%1</t><br/><t size='1.8'>%2</t><br/><br/><t size='1'>Policier de Lakeside</t>", name _unit, _rang];
		} else {
			_message = format["<img size='10' color='#FFFFFF' image='\data_shark\textures\papiers\citoyen.paa'/><br/><br/><t size='2.5'>%1</t><br/><br/><t size='1'>Citoyen de Lakeside</t>", name _unit];
		};
	};
	case independent: 
	{
		switch ( _lvl ) do
		{
			case 1: { _rang = "Stagiaire"; };
			case 2: { _rang = "Secouriste"; };
			case 3: { _rang = "Infirmier"; };
			case 4: { _rang = "Médecin"; };
			case 5: { _rang = "Médecin-Chef"; };
			default { _rang = "Grade non reconnu"; };
		};
		_message = format["<img size='10' color='#FFFFFF' image='\data_shark\textures\papiers\insigne_ems.paa'/><br/><br/><t size='2.5'>%1</t><br/><t size='1.8'>%2</t><br/><br/><t size='1'>EMS de Lakeside</t>", name _unit, _rang];
	};
	default 
	{ 
		_message = format["<img size='10' color='#FFFFFF' image='\data_shark\textures\papiers\citoyen.paa'/><br/><br/><t size='2.5'>%1</t><br/><br/><t size='1'>Citoyen de Lakeside</t>", name _unit];
	};
	case civilian:
	{
		if (_lvl == 1) then
		{
			_message = format["<img size='10' color='#FFFFFF' image='\data_shark\textures\papiers\gouvernement.paa'/><br/><br/><t size='2.5'>%1</t><br/><br/><t size='1'>Gouvernement de Lakeside</t>", name _unit];
		} else {
			_message = format["<img size='10' color='#FFFFFF' image='\data_shark\textures\papiers\citoyen.paa'/><br/><br/><t size='2.5'>%1</t><br/><br/><t size='1'>Citoyen de Lakeside</t>", name _unit];
		};
	};
};

hintSilent parseText _message;

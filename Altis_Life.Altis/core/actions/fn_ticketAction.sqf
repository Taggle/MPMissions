/*
	File: fn_ticketAction.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Starts the ticketing process.
*/
params [
	["_unit",objNull,[objNull]]
];
disableSerialization;
if(!(createDialog "life_ticket_give")) exitWith {[localize "STR_Cop_TicketFail", false] spawn quickNotif;};
if(isNull _unit OR !isPlayer _unit) exitWith {};
ctrlSetText[2651,format[localize "STR_Cop_Ticket",_unit getVariable["realname",name _unit]]];
life_ticket_unit = _unit;
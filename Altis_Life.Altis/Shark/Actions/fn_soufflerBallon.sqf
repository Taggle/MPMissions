/*file:
	fn_soufflerBallon
	author:Youri
	descrip:Le civil souffle, et envoi l'info au gendarme
*/
private["_cop"];
_cop = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
if(isNull _cop) exitWith {};
[life_drink,life_drug_level] remoteExecCall ["life_fnc_breathalyzer",_cop];

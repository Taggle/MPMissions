/*file:
	fn_souffler
	author:Youri
*/
private["_target","_cop"];
_target = [_this,0,"",[""]] call BIS_fnc_param;
_cop = [_this,1,"",[""]] call BIS_fnc_param;
if(isNull _target) exitWith {};
[_cop] remoteExecCall ["life_fnc_soufflerBallon",_target];

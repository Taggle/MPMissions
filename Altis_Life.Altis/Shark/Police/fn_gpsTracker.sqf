/*
    Fichier: fn_gpsTracker.sqf
    Autheur: Poseidon / Modifié par DeathBlade

    Description: Attaches a Gps tracker on a selected vehicle
*/
private["_unit"];
_unit = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
if(isNull _unit) exitWith {};
if(!(_unit isKindOf "AllVehicles")) exitWith {hint "Vous ne pouvez pas utiliser le traceur GPS ici."};
if(player distance _unit > 7) exitWith {hint "Vous devez vous mettre plus près du véhicule !"};
if(!([false,"gpsTracker",1] call life_fnc_handleInv)) exitWith {};
closeDialog 0;


life_action_inUse = true;
player playMove "AinvPknlMstpSnonWnonDnon_medic_1";
sleep 4;
life_action_inUse = false;
if(player distance _unit > 7) exitWith {titleText["Vous n'êtes pas à proximité d'un véhicule !","PLAIN"];};
titleText["Vous avez un traceur GPS fixé à ce véhicule.","PLAIN"];


[_unit] spawn {
    _veh = _this select 0;
    _markerName = format["%1_gpsTracker",_veh];
    _marker = createMarkerLocal [_markerName, visiblePosition _veh];
    _marker setMarkerColorLocal "ColorRed";
    _marker setMarkerTypeLocal "Mil_dot";
    _marker setMarkerTextLocal "Traceur GPS "+getText(configFile >> "CfgVehicles" >> typeof _veh >> "displayName");
    _marker setMarkerPosLocal getPos _veh;
    while {true} do {
        if(not alive _veh) exitWith {deleteMarkerLocal _markerName;};
        _marker setMarkerPosLocal getPos _veh;
        sleep 0.5;
        };
    };

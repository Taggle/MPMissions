#include "..\..\script_macros.hpp"
/*
	File: fn_removeLicenses.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Used for stripping certain licenses off of civilians as punishment.
*/
private "_state";
_state = param [0,1,[0]];

switch (_state) do {
	//Death while being wanted
	case 0: {
		SVAR_MNS [LICENSE_VARNAME("rebel","civ"),false];
		SVAR_MNS [LICENSE_VARNAME("driver","civ"),false];
		SVAR_MNS [LICENSE_VARNAME("heroin","civ"),false];
		SVAR_MNS [LICENSE_VARNAME("marijuana","civ"),false];
		SVAR_MNS [LICENSE_VARNAME("cocaine","civ"),false];
	};

	//Jail licenses
	case 1: {
		SVAR_MNS [LICENSE_VARNAME("gun","civ"),false];
		SVAR_MNS [LICENSE_VARNAME("driver","civ"),false];
		SVAR_MNS [LICENSE_VARNAME("rebel","civ"),false];
	};

	//Remove motor vehicle licenses
	case 2: {
		if(GVAR_MNS LICENSE_VARNAME("driver","civ") OR GVAR_MNS LICENSE_VARNAME("pilot","civ") OR GVAR_MNS LICENSE_VARNAME("trucking","civ") OR GVAR_MNS LICENSE_VARNAME("boat","civ")) then {
			SVAR_MNS [LICENSE_VARNAME("pilot","civ"),false];
			SVAR_MNS [LICENSE_VARNAME("driver","civ"),false];
			SVAR_MNS [LICENSE_VARNAME("trucking","civ"),false];
			SVAR_MNS [LICENSE_VARNAME("boat","civ"),false];
			[localize "STR_Civ_LicenseRemove_1", false] spawn notif;
		};
	};

	//Killing someone while owning a gun license
	case 3: {
		if(GVAR_MNS LICENSE_VARNAME("gun","civ")) then {
			SVAR_MNS [LICENSE_VARNAME("gun","civ"),false];
			[localize "STR_Civ_LicenseRemove_2", false] spawn notif;
		};
	};

	// Saisie de licences
    
    // Permis de Conduire
    case 10:
    {
        SVAR_MNS [LICENSE_VARNAME("driver","civ"),false];
        [localize "STR_Civ_RevokeLicense_Driver", false] spawn notif;
    };
    // Permis de Camions
    case 11:
    {
        SVAR_MNS [LICENSE_VARNAME("trucking","civ"),false];
        [localize "STR_Civ_RevokeLicense_Truck", false] spawn notif;
    };
    // Brevet de Pilote
    case 12:
    {
        SVAR_MNS [LICENSE_VARNAME("pilot","civ"),false];
        [localize "STR_Civ_RevokeLicense_Pilot", false] spawn notif;
    };
    // Permis de Bateau
    case 13:
    {
        SVAR_MNS [LICENSE_VARNAME("boat","civ"),false];
        [localize "STR_Civ_RevokeLicense_Boating", false] spawn notif;
    };
    // Permis de plongée
    case 14:
    {
        SVAR_MNS [LICENSE_VARNAME("dive","civ"),false];
        [localize "STR_Civ_RevokeLicense_Diving", false] spawn notif;
    };
    // Licence de Taxi
    case 15:
    {
        SVAR_MNS [LICENSE_VARNAME("taxi","civ"),false];
        [localize "STR_Civ_RevokeLicense_Taxi", false] spawn notif;
    };
    // Toutes les licences
    case 16:
    {
		SVAR_MNS [LICENSE_VARNAME("pilot","civ"),false];
		SVAR_MNS [LICENSE_VARNAME("driver","civ"),false];
		SVAR_MNS [LICENSE_VARNAME("trucking","civ"),false];
		SVAR_MNS [LICENSE_VARNAME("boat","civ"),false];
        [localize "STR_Civ_RevokeLicense_AllMotor", false] spawn notif;
    };
    // Permis de port d'armes
    case 17:
    {
        SVAR_MNS [LICENSE_VARNAME("gun","civ"),false];
        [localize "STR_Civ_RevokeLicense_Firearm", false] spawn notif;
    };
};

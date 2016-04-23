/*
File: fn_cellphone2.sqf
Author: Timo

Description:
With no radio cant use Cellphone
*/


if("Mattaust_Phone" in assignedItems player OR "ACE_Altimeter" in assignedItems player) then {
createDialog "Life_my_smartphone";
}else{
hint parseText format ["Vous n'avez pas de téléphone, vous pouvez en acheter un à la quincaillerie.
"];
};

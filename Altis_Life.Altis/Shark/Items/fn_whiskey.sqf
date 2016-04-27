/*
	File: fn_drinkwhiskey.sqf 
	author:[midgetgrimm] 
	drinkypoo
*/
closeDialog 0;
hintSilent parseText format["Votre taux d'alcool augmente moyennement"];
sleep 4;
"chromAbberation" ppEffectEnable true;
"radialBlur" ppEffectEnable true;
"colorCorrections" ppEffectEnable true;
enableCamShake true;
player setVariable["inDrink",true,true];

for "_i" from 0 to 89 do
{
    if(life_drink > 0.20) then {
		"chromAberration" ppEffectAdjust[0,random 0.15, false];
		"chromAberration" ppEffectCommit 1;   
		"radialBlur" ppEffectAdjust  [random 0.1,random 0.1,0.3,0.3];
		"radialBlur" ppEffectCommit 1;
		"colorCorrections" ppEffectAdjust[ 0.44, 0.76, 0.7, [0.1, -0.57, 0, 0.05],[1.8, 1.3, 0.3, 0.7],[0.2, 0.59, 0.11, 0]];
		"colorCorrections" ppEffectCommit 1;
		addCamShake[random 4, 2, random 4];
		sleep 1;
	} else {
		"chromAberration" ppEffectAdjust [random 0.05,random 0.05,true];
		"chromAberration" ppEffectCommit 1;   
		"radialBlur" ppEffectAdjust  [random 0.01,random 0.01,0.5,0.5];
		"radialBlur" ppEffectCommit 1;
		addCamShake[random 4, 2, random 4];
		sleep 1;
	};
};
if (life_drink > 0.5) then {
	titleText [localize "STR_MISC_DrunkBlackOut","BLACK OUT"];
	player playMoveNow "Incapacitated";
	//titleText[localize "STR_MISC_DrunkBlackOut","BLACK IN"];
	sleep 15;
	removeUniform player;
	removeVest player;
	player playMoveNow "AinjPpneMstpSnonWrflDnon_rolltoback";
	sleep 10;
	life_drink = 0;
	titleText[localize "STR_MISC_DrunkBlackOut1","PLAIN"];
	player playMoveNow "amovppnemstpsraswrfldnon";
};
//Stop effects
player setVariable["inDrink",false,true];
"chromAberration" ppEffectAdjust [0,0,true];
"chromAberration" ppEffectCommit 5;
"colorCorrections" ppEffectAdjust[ 1, 1, 0, [0, 0, 0, 0],[1.8, 1.8, 0.3, 0.7],[0.2, 0.59, 0.11, 0]];
"colorCorrections" ppEffectCommit 5;
"radialBlur" ppEffectAdjust  [0,0,0,0];
"radialBlur" ppEffectCommit 5;
sleep 6;

//Deactivate ppEffects
//"chromAberration" ppEffectEnable false;
//"radialBlur" ppEffectEnable false;
//"colorCorrections" ppEffectEnable false;
resetCamShake;
if(life_drink != 0) then {life_drink = life_drink - 0.05;};
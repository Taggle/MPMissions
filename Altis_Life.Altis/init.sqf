/*
	File: init.sqf
	Author: 
	
	Description:
	
*/
StartProgress = false;

[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";
[] execVM "Shark\Functions\teargas.sqf";

StartProgress = true;

/* Réglages TFR */
tf_radio_channel_name = "TaskForceRadio";  // Nom du Channel TeamSpeak
tf_radio_channel_password = "SharkForceRadio";
tf_no_auto_long_range_radio = true; // Pas de radio longue portée
tf_same_sw_frequencies_for_side = false; // Ne pas changer
tf_same_lr_frequencies_for_side = false; // Ne pas changer
tf_same_dd_frequencies_for_side = false; // Ne pas changer
waitUntil {sleep 0.1;!(isNull player)};
player setVariable ["tf_sendingDistanceMultiplicator", 20]; // Distance émission
player setVariable ["tf_receivingDistanceMultiplicator", 1]; // Distance réception
TF_terrain_interception_coefficient = 5;
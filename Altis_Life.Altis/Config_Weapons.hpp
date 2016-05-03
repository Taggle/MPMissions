/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_ACPC2_F", "", 7500, 3000 },
            { "sab_1911_handgun", "", 7500, 3000 },
            { "RH_python", "", 7500, 3000 },
            { "RH_cz75", "", 7500, 3000 },
            { "RH_fnp45", "", 8500, 3000 },
            { "RH_gsh18", "", 8500, 3000 },
            { "RH_kimber_nw", "", 7500, 3000 },
            { "RH_mak", "", 7500, 3000 },
            { "RH_mateba", "", 8500, 3000 },
            { "rhs_weap_pya", "", 7500, 3000 },
            { "RH_mp412", "", 7500, 3000 },
            { "hgun_P07_F", "", 7500, 3000 },
            { "RH_mk2", "", 7500, 3000 },
            { "RH_p226s", "", 8500, 3000 },
            { "RH_sw659", "", 7500, 3000 },
            { "RH_bull", "", 8500, 3000 },
            { "RH_ttracker", "", 7500, 3000 },
            { "RH_uspm", "", 9500, 3000 },
            { "RH_usp", "", 7500, 3000 },
            { "hgun_Pistol_heavy_02_F", "", 7500, 3000 },
            { "hgun_ACPC2_F", "", 7500, 3000 },
            { "hgun_ACPC2_F", "", 7500, 3000 },
            { "hgun_ACPC2_F", "", 7500, 3000 },
            { "hgun_ACPC2_F", "", 7500, 3000 },
            { "hgun_ACPC2_F", "", 7500, 3000 },
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 100 },
            { "RH_6Rnd_357_Mag", "", 100 },
            { "RH_16Rnd_9x19_CZ", "", 100 },
            { "RH_15Rnd_45cal_fnp", "", 100 },
            { "RH_18Rnd_9x19_gsh", "", 100 },
            { "RH_7Rnd_45cal_m1911", "", 100 },
            { "RH_8Rnd_9x18_Mak", "", 100 },
            { "RH_6Rnd_44_Mag", "", 100 },
            { "rhs_mag_9x19_17", "", 100 },
            { "16Rnd_9x21_Mag", "", 100 },
            { "RH_10Rnd_22LR_mk2", "", 100 },
            { "RH_15Rnd_9x19_SIG", "", 100 },
            { "RH_14Rnd_9x19_sw", "", 100 },
            { "RH_6Rnd_454_Mag", "", 100 },
            { "RH_6Rnd_45ACP_Mag", "", 100 },
            { "RH_16Rnd_40cal_usp", "", 100 },
            { "RH_12Rnd_45cal_usp", "", 100 },
            { "6Rnd_45ACP_Cylinder", "", 100 },
        };
        accs[] = {
            //{ "optic_ACO_grn_smg", "", 2500 }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "SMG_03_TR_khaki", "", 16000, 10000 },
            { "SMG_03_khaki", "", 18000, 10000 },
            { "rhs_weap_akm", "", 25000, 15000 },
            { "rhs_weap_akms", "", 25000, 15000 },
            { "rhs_weap_asval", "", 19000, 10000 },
            { "arifle_Katiba_C_F", "", 21000, 10000 },
            { "rhs_weap_ak74m_desert", "", 28000, 15000 },
            { "rhs_weap_ak103", "", 28000, 15000 },
        };
        mags[] = {
            { "rhs_acc_pkas", "", 800 },
            { "rhs_30Rnd_762x39mm", "", 210 },
            { "rhs_30Rnd_545x39_AK", "", 210 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 900 },
            { "optic_Holosight", "", 900 },
            { "rhs_acc_pkas", "", 800 },
            { "acc_flashlight", "", 500 },
            { "rhs_acc_2dpZenit", "", 500 },
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 1500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 2500, -1 },
            { "hgun_ACPC2_F", "", 4500, -1 },
            { "hgun_PDW2000_F", "", 9500, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 950 }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 50, 25 },
            { "ItemGPS", "", 100, 50 },
            { "ItemMap", "", 10, 5 },
            { "ItemCompass", "", 10, 5 },
            { "ItemWatch", "", 10, 6 },
            { "ACE_quikclot", "", 30, 15 },
            { "Toolkit", "", 100, 15 },
            //{ "ACE_NVG_Gen1", "", 15000, 7500 },
            { "Mattaust_Phone", "iPhone", 550, 200 },
            { "tf_anprc148jem", "Radio civile", 550, 200 },
            { "Chemlight_red", "", 100, -1 },
            { "Chemlight_yellow", "", 100, 50 },
            { "Chemlight_green", "", 100, 50 },
            { "Chemlight_blue", "", 100, 50 }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            //{ "Binocular", "", 50, 25 },
            //{ "ItemGPS", "", 100, 50 },
            { "ItemMap", "", 10, 5 },
            //{ "ItemCompass", "", 10, 5 },
            //{ "ItemWatch", "", 10, 6 },
            { "ACE_quikclot", "", 30, 15 },
            { "Toolkit", "", 100, 15 },
            { "Mattaust_Phone", "iPhone", 550, 200 },
            { "tf_anprc148jem", "Radio civile", 550, 200 },
            //{ "ACE_NVG_Gen1", "", 15000, 7500 },
            { "Chemlight_red", "", 100, -1 },
            { "Chemlight_yellow", "", 100, 50 },
            { "Chemlight_green", "", 100, 50 },
            { "Chemlight_blue", "", 100, 50 }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Altis Cop Shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "DDOPP_X26_b", "Tazer x26 Noir", 100, 50 },
            { "DDOPP_X26", "Tazer x26 Jaune", 100, 50 },
            { "rhs_weap_M590_5RD", "Fusil à pompe court", 650, 100 },
            { "Toolkit", "", 100, 15 },
            { "ACE_quikclot", "", 10, 1 },
            { "Mattaust_Phone", "iPhone", 75, 1 },
            { "tf_anprc152", "Radio EMS/Police", 75, 1 },
            { "tf_anprc148jem", "Radio civile", 75, 1 },
            { "Chemlight_red", "", 5, -1 },
            { "Chemlight_yellow", "", 5, 1 },
            { "Chemlight_green", "", 5, 1 },
            { "Chemlight_blue", "", 5, 1 }
        };
        mags[] = {
            { "DDOPP_1Rnd_X26", "Chargeur x26", 5 },
            { "rhsusf_5Rnd_00Buck", "Buckshot 5rnd", 15 }
        };
        accs[] = {
        };
    };

    class cop_patrol {
        name = "Altis Patrol Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "Vous n'êtes pas Officier!" };
        items[] = {
            { "DDOPP_X26_b", "Tazer x26 Noir", 100, 50 },
            { "DDOPP_X26", "Tazer x26 Jaune", 100, 50 },
            { "RH_m1911", "M1911", 450, 100 },
            { "rhs_weap_M590_8RD", "Fusil à pompe long", 650, 100 },
            { "Toolkit", "", 100, 15 },
            { "Mattaust_Phone", "iPhone", 75, 1 },
            { "ACE_quikclot", "", 10, 1 },
            { "tf_anprc152", "Radio EMS/Police", 75, 1 },
            { "tf_anprc148jem", "Radio civile", 75, 1 },
            { "NVGoggles_OPFOR", "", 750, 100 },
            { "Chemlight_red", "", 5, -1 },
            { "Chemlight_yellow", "", 5, 1 },
            { "Chemlight_green", "", 5, 1 },
            { "Chemlight_blue", "", 5, 1 },
            { "Rangefinder", "", 100, 1 }
        };
        mags[] = {
            { "rhsusf_8Rnd_00Buck", "Buckshot 8rnd", 15 },
            { "rhsusf_8Rnd_Slug", "Slug 8rnd", 15 },
            { "DDOPP_1Rnd_X26", "Chargeur x26", 5 }
        };
        accs[] = {
        };
    };

    class cop_sergeant {
        name = "Altis Sergeant Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "Vous n'êtes pas sergent!" };
        items[] = {
            { "DDOPP_X26_b", "Tazer x26 Noir", 100, 50 },
            { "DDOPP_X26", "Tazer x26 Jaune", 100, 50 },
            { "rhs_weap_M590_8RD", "Fusil à pompe long", 650, 100 },
            { "RH_m1911", "M1911", 450, 100 },
            { "rhs_weap_m4a1_carryhandle", "M4A1", 5000, -1 },
            { "Toolkit", "", 100, 15 },
            { "ACE_quikclot", "", 10, 1 },
            { "Mattaust_Phone", "iPhone", 75, 1 },
            { "tf_anprc152", "Radio EMS/Police", 75, 1 },
            { "tf_anprc148jem", "Radio civile", 75, 1 },
            { "NVGoggles_OPFOR", "", 750, 100 },
            { "Chemlight_red", "", 5, -1 },
            { "Chemlight_yellow", "", 5, 1 },
            { "Chemlight_green", "", 5, 1 },
            { "Chemlight_blue", "", 5, 1 },
            { "Rangefinder", "", 100, 1 }
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "30Rnd", 35 },
            { "rhsusf_8Rnd_00Buck", "Buckshot 8rnd", 15 },
            { "rhsusf_8Rnd_Slug", "Slug 8rnd", 15 },
            { "RH_7Rnd_45cal_m1911", "7Rnd", 10 },
            { "DDOPP_1Rnd_X26", "Chargeur x26", 5 }
        };
        accs[] = {
            { "RH_eotech553", "", 125 },
            { "ACE_muzzle_mzls_L", "", 125 },
            { "rhsusf_acc_compm4", "", 125 },
            { "acc_flashlight", "", 5 }
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 100, 45 },
            { "Binocular", "", 75, -1 },
            { "ACE_elasticBandage", "", 5, 1 },
            { "ACE_fieldDressing", "", 5, 1 },
            { "ACE_quikclot", "", 5, 1 },
            { "ACE_packingBandage", "", 5, 1 },
            { "ACE_bodyBag", "", 50, 1 },
            { "ACE_plasmaIV", "", 25, 1 },
            { "ACE_bloodIV", "", 25, 1 },
            { "ACE_salineIV", "", 25, 1 },
            { "ACE_surgicalKit", "", 75, 25 },
            { "ACE_personalAidKit", "", 50, 1 },
            { "ACE_atropine", "", 10, 1 },
            { "ACE_morphine", "", 10, 1 },
            { "ACE_epinephrine", "", 10, 1 },
            { "ToolKit", "", 100, 1 },
            { "tf_anprc152", "Radio EMS/Police", 75, 1 },
            { "tf_anprc148jem", "Radio civile", 75, 1 },
            { "Mattaust_Phone", "iPhone", 75, 1 },
            { "Toolkit", "", 100, 15 },
            { "NVGoggles_INDEP", "", 500, 250 },
            { "Chemlight_red", "", 5, -1 },
            { "Chemlight_yellow", "", 5, 1 },
            { "Chemlight_green", "", 5, 1 },
            { "Chemlight_blue", "", 5, 1 }
        };
        mags[] = {};
        accs[] = {};
    };
};
/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        4: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Retirer tenue", 0, { "", "", -1 } },
            { "U_CAF_AG_AFR_CLOTHES_01", "Vêtements sales 1", 10, { "", "", -1 } },
            { "U_CAF_AG_AFR_CLOTHES_01a", "Vêtements sales 2", 10, { "", "", -1 } },
            { "U_CAF_AG_AFR_CLOTHES_01b", "Vêtements sales 3", 10, { "", "", -1 } },
            { "U_CAF_AG_AFR_CLOTHES_01c", "Vêtements sales 4", 10, { "", "", -1 } },
            { "U_CAF_AG_AFR_CLOTHES_01d", "Vêtements sales 5", 10, { "", "", -1 } },
            { "U_CAF_AG_AFR_CLOTHES_01e", "Vêtements sales 6", 10, { "", "", -1 } },
            { "U_CAF_AG_AFR_CLOTHES_02a", "Vêtements sales 7", 10, { "", "", -1 } },
            { "U_CAF_AG_AFR_CLOTHES_02b", "Vêtements sales 8", 10, { "", "", -1 } },
            { "rds_uniform_assistant", "Sarrau bleu", 40, { "", "", -1 } },
            { "rds_uniform_schoolteacher", "Sarrau de professeur", 40, { "", "", -1 } },
            { "U_C_Polo_Barcelona", "Maillot Barcelone", 50, { "", "", -1 } },
            { "ALE_CivilOM", "Maillot OM", 50, { "", "", -1 } },
            { "ALE_CivilPSG", "Maillot PSG", 50, { "", "", -1 } },
            { "U_C_Polo_Toulouse", "Maillot Toulouse", 50, { "", "", -1 } },
            { "U_C_Polo_TransportLife", "Maillot d'arbitre", 50, { "", "", -1 } },
            { "U_C_WorkerCoveralls", "Blouse d'ouvrier", 40, { "", "", -1 } },
            { "rds_uniform_citizen1", "Tenue de paysan 1", 40, { "", "", -1 } },
            { "rds_uniform_citizen2", "Tenue de paysan 2", 40, { "", "", -1 } },
            { "rds_uniform_citizen3", "Tenue de paysan 3", 40, { "", "", -1 } },
            { "rds_uniform_citizen4", "Tenue de paysan 4", 40, { "", "", -1 } },
            { "rds_uniform_Woodlander1", "Tenue de paysan 5", 40, { "", "", -1 } },
            { "rds_uniform_Woodlander2", "Tenue de paysan 6", 40, { "", "", -1 } },
            { "rds_uniform_Woodlander3", "Tenue de paysan 7", 40, { "", "", -1 } },
            { "rds_uniform_Woodlander4", "Tenue de paysan 8", 40, { "", "", -1 } },
            { "rds_uniform_Worker1", "Tenue de paysan 9", 40, { "", "", -1 } },
            { "rds_uniform_Worker2", "Tenue de paysan 10", 40, { "", "", -1 } },
            { "rds_uniform_Worker3", "Tenue de paysan 11", 40, { "", "", -1 } },
            { "rds_uniform_Worker4", "Tenue de paysan 12", 40, { "", "", -1 } },
            { "ALE_Worker", "", 40, { "Vêtements de villageois 1", "", -1 } },
            { "rds_uniform_Villager1", "", 40, { "Vêtements de villageois 2", "", -1 } },
            { "rds_uniform_Villager2", "", 40, { "Vêtements de villageois 3", "", -1 } },
            { "rds_uniform_Villager3", "", 40, { "Vêtements de villageois 4", "", -1 } },
            { "rds_uniform_Villager4", "", 40, { "Vêtements de villageois 5", "", -1 } },
            { "ALE_Worker", "", 40, { "Vêtements de villageois 1", "", -1 } },
            { "ALE_Worker", "", 40, { "Vêtements de villageois 1", "", -1 } },
            { "ALE_Worker", "", 40, { "Vêtements de villageois 1", "", -1 } },
            { "U_OrestesBody", "", 40, { "", "", -1 } },
            { "ALE_Worker", "", 40, { "", "", -1 } },
            { "U_C_Poor_1", "", 40, { "", "", -1 } },
            { "ALE_Worker", "", 40, { "", "", -1 } },
            { "ALE_Worker", "", 40, { "", "", -1 } },
            { "ALE_Worker", "", 40, { "", "", -1 } },
            { "ALE_Worker", "", 40, { "", "", -1 } },
            { "ALE_Worker", "", 40, { "", "", -1 } },
            { "U_BG_Guerilla2_2", "", 40, { "", "", -1 } },
            { "U_BG_Guerilla2_3", "", 40, { "", "", -1 } },
            { "U_BG_Guerilla2_1", "", 40, { "", "", -1 } },
            { "U_C_HunterBody_grn", "Habits de chasse", 40, { "", "", -1 } },
            { "U_BG_Guerilla3_1", "Habits de chasse 2", 40, { "", "", -1 } },
            { "U_C_Poloshirt_blue", "", 30, { "", "", -1 } },
            { "U_C_Poloshirt_burgundy", "", 30, { "", "", -1 } },
            { "U_C_Poloshirt_stripped", "", 30, { "", "", -1 } },
            { "U_C_Poloshirt_redwhite", "", 30, { "", "", -1 } },
            { "U_C_Poloshirt_salmon", "", 30, { "", "", -1 } },
            { "U_C_Poloshirt_tricolour", "", 30, { "", "", -1 } },
            { "U_C_Polo_Mali", "Tenue Mali", 30, { "", "", -1 } },
            { "U_CAF_AG_ME_ROBES_01", "Vêtements orientaux 1", 40, { "", "", -1 } },
            { "U_CAF_AG_ME_ROBES_01a", "Vêtements orientaux 2", 40, { "", "", -1 } },
            { "U_CAF_AG_ME_ROBES_01c", "Vêtements orientaux 3", 40, { "", "", -1 } },
            { "U_CAF_AG_ME_ROBES_01d", "Vêtements orientaux 4", 40, { "", "", -1 } },
            { "U_CAF_AG_ME_ROBES_02", "Vêtements orientaux 5", 40, { "", "", -1 } },
            { "U_CAF_AG_ME_ROBES_02a", "Vêtements orientaux 6", 40, { "", "", -1 } },
            { "U_CAF_AG_ME_ROBES_02b", "Vêtements orientaux 7", 40, { "", "", -1 } },
            { "U_CAF_AG_ME_ROBES_02c", "Vêtements orientaux 8", 40, { "", "", -1 } },
            { "U_CAF_AG_ME_ROBES_03", "Vêtements orientaux 9", 40, { "", "", -1 } },
            { "U_CAF_AG_ME_ROBES_03a", "Vêtements orientaux 10", 40, { "", "", -1 } },
            { "U_CAF_AG_ME_ROBES_03b", "Vêtements orientaux 11", 40, { "", "", -1 } },
            { "U_CAF_AG_ME_ROBES_03c", "Vêtements orientaux 12", 40, { "", "", -1 } },
            { "U_CAF_AG_ME_ROBES_03d", "Vêtements orientaux 13", 40, { "", "", -1 } },
            { "U_CAF_AG_ME_ROBES_04", "Vêtements orientaux 14", 40, { "", "", -1 } },
            { "U_CAF_AG_ME_ROBES_04a", "Vêtements orientaux 15", 40, { "", "", -1 } },
            { "U_CAF_AG_ME_ROBES_04b", "Vêtements orientaux 16", 40, { "", "", -1 } },
            { "U_CAF_AG_ME_ROBES_04c", "Vêtements orientaux 17", 40, { "", "", -1 } },
            { "U_CAF_AG_ME_ROBES_04d", "Vêtements orientaux 18", 40, { "", "", -1 } },
            { "eaglkes_wwi_fr_pilot_cloth", "Vêtments de pilote 1", 40, { "", "", -1 } },
            { "eaglkes_wwi_ger_pilot_cloth", "Vêtments de pilote 2", 40, { "", "", -1 } },
            { "ALE_CivilLacoste_B", "", 50, { "", "", -1 } },
            { "ALE_CivilLacoste_Bl", "", 50, { "", "", -1 } },
            { "ALE_CivilLacoste_O", "", 50, { "", "", -1 } },
            { "ALE_CivilLacoste_V", "", 50, { "", "", -1 } },
            { "ALE_CivilGrisNoir", "", 50, { "", "", -1 } },
            { "ALE_CivilMickey", "", 50, { "", "", -1 } },
            { "ALE_CivilPorsche", "", 50, { "", "", -1 } },
            { "ALE_CivilRougeBlanc", "", 50, { "", "", -1 } },
            { "ALE_CivilVioletJaune", "", 50, { "", "", -1 } },
            { "ALE_CivilAveng", "", 50, { "", "", -1 } },
            { "civ_tenue_Adidas", "Tenue Adidas", 50, { "", "", -1 } },
            { "civ_tenue_Coq1", "", 50, { "", "", -1 } },
            { "civ_tenue_Adidas", "Tenue Adidas", 50, { "", "", -1 } },
            { "civ_tenue_Denim", "Tenue Denim", 50, { "", "", -1 } },
            { "civ_tenue_Heisenberg1", "Tenue Heisenberg", 50, { "", "", -1 } },
            { "civ_tenue_Just", "", 50, { "", "", -1 } },
            { "civ_tenue_Mustang", "", 50, { "", "", -1 } },
            { "civ_tenue_Nike", "Tenue Nike", 50, { "", "", -1 } },
            { "ALE_CivilObey", "Tenue Obey", 50, { "", "", -1 } },
            { "civ_tenue_Puma", "Tenue Puma", 50, { "", "", -1 } },
            { "civ_tenue_Adidas", "Tenue Adidas", 50, { "", "", -1 } },
            { "civ_tenue_Adidas", "Tenue Adidas", 50, { "", "", -1 } },
            { "civ_tenue_Adidas", "Tenue Adidas", 50, { "", "", -1 } },
            { "civ_tenue_Adidas", "Tenue Adidas", 50, { "", "", -1 } },
            { "rds_uniform_priest", "Vêtements de prêtre", 40, { "", "", -1 } },
            { "rds_uniform_Profiteer1", "", 40, { "", "", -1 } },
            { "rds_uniform_Profiteer2", "", 40, { "", "", -1 } },
            { "rds_uniform_Profiteer3", "", 40, { "", "", -1 } },
            { "rds_uniform_Profiteer4", "", 40, { "", "", -1 } },
            { "U_C_Slender", "Tenue Slender", 40, { "", "", -1 } },
            { "U_C_Travello1", "", 65, { "", "", -1 } },
            { "U_C_Travello2", "", 65, { "", "", -1 } },
            { "TRYK_U_B_PCUHsW3nh", "Tenue TRYK 1", 50, { "", "", -1 } },
            { "TRYK_U_B_PCUHsW3", "Tenue TRYK 2", 50, { "", "", -1 } },
            { "TRYK_U_B_BLKTAN", "Tenue TRYK 4", 50, { "", "", -1 } },
            { "TRYK_U_B_BLK", "Tenue TRYK 5", 50, { "", "", -1 } },
            { "TRYK_U_B_BLKTAN_Tshirt", "Tenue TRYK 6", 50, { "", "", -1 } },
            { "TRYK_U_B_BLK_Tshirt", "Tenue TRYK 7", 50, { "", "", -1 } },
            { "TRYK_U_B_BLK_OD", "Tenue TRYK 8", 50, { "", "", -1 } },
            { "TRYK_U_B_BLK_OD_Tshirt", "Tenue TRYK 9", 50, { "", "", -1 } },
            { "TRYK_U_B_OD_BLK", "Tenue TRYK 10", 50, { "", "", -1 } },
            { "TRYK_U_B_OD_BLK_2", "Tenue TRYK 11", 50, { "", "", -1 } },
            { "TRYK_U_B_ODTAN", "Tenue TRYK 12", 50, { "", "", -1 } },
            { "TRYK_U_B_ODTAN_Tshirt", "Tenue TRYK 13", 50, { "", "", -1 } },
            { "TRYK_U_B_BLK_TAN_1", "Tenue TRYK 14", 50, { "", "", -1 } },
            { "TRYK_U_B_BLK_TAN_2", "Tenue TRYK 15", 50, { "", "", -1 } },
            { "TRYK_U_B_PCUGs_BLK_R", "Tenue TRYK 16", 50, { "", "", -1 } },
            { "TRYK_U_B_PCUGs_gry_R", "Tenue TRYK 17", 50, { "", "", -1 } },
            { "TRYK_U_B_PCUGs_OD_R", "Tenue TRYK 18", 50, { "", "", -1 } },
            { "TRYK_U_B_PCUGs_BLK", "Tenue TRYK 19", 50, { "", "", -1 } },
            { "TRYK_U_B_PCUGs_gry", "Tenue TRYK 20", 50, { "", "", -1 } },
            { "TRYK_U_B_PCUGs_OD", "Tenue TRYK 21", 50, { "", "", -1 } },
            { "TRYK_U_B_BLK_OD_Rollup_CombatUniform", "Tenue TRYK 22", 50, { "", "", -1 } },
            { "TRYK_U_B_BLK_tan_Rollup_CombatUniform", "Tenue TRYK 23", 50, { "", "", -1 } },
            { "TRYK_U_B_wh_blk_Rollup_CombatUniform", "Tenue TRYK 24", 50, { "", "", -1 } },
            { "TRYK_U_B_wh_OD_Rollup_CombatUniform", "Tenue TRYK 25", 50, { "", "", -1 } },
            { "TRYK_U_B_wh_tan_Rollup_CombatUniform", "Tenue TRYK 26", 50, { "", "", -1 } },
            { "TRYK_shirts_DENIM_BK", "Tenue TRYK 27", 50, { "", "", -1 } },
            { "TRYK_shirts_DENIM_BL", "Tenue TRYK 28", 50, { "", "", -1 } },
            { "TRYK_shirts_DENIM_BWH", "Tenue TRYK 29", 50, { "", "", -1 } },
            { "TRYK_shirts_DENIM_od", "Tenue TRYK 30", 50, { "", "", -1 } },
            { "TRYK_shirts_DENIM_R", "Tenue TRYK 31", 50, { "", "", -1 } },
            { "TRYK_shirts_DENIM_RED2", "Tenue TRYK 32", 50, { "", "", -1 } },
            { "TRYK_shirts_DENIM_WH", "Tenue TRYK 33", 50, { "", "", -1 } },
            { "TRYK_shirts_DENIM_WHB", "Tenue TRYK 34", 50, { "", "", -1 } },
            { "TRYK_shirts_DENIM_ylb", "Tenue TRYK 35", 50, { "", "", -1 } },
            { "TRYK_U_B_BLK_T_BK", "Tenue TRYK 36", 50, { "", "", -1 } },
            { "TRYK_U_B_RED_T_BR", "Tenue TRYK 37", 50, { "", "", -1 } },
            { "TRYK_U_B_BLK_T_WH", "Tenue TRYK 38", 50, { "", "", -1 } },
            { "TRYK_U_B_Denim_T_BK", "Tenue TRYK 39", 50, { "", "", -1 } },
            { "TRYK_U_B_Denim_T_WH", "Tenue TRYK 40", 50, { "", "", -1 } },
            { "TRYK_U_B_PCUHsW5", "Tenue TRYK 41", 50, { "", "", -1 } },
            { "TRYK_U_B_PCUHsW6", "Tenue TRYK 42", 50, { "", "", -1 } },
            { "tacs_Uniform_Combat_LS_BS_GP_BB", "", 500, { "", "", -1 } },
            { "tacs_Uniform_Combat_LS_BS_TP_BB", "", 500, { "", "", -1 } },
            { "tacs_Uniform_Combat_LS_CDBS_GP_TB", "", 500, { "", "", -1 } },
            { "tacs_Uniform_Combat_LS_CLBS_GP_BB", "", 500, { "", "", -1 } },
            { "tacs_Uniform_Combat_LS_CPS_BP_BB", "", 500, { "", "", -1 } },
            { "tacs_Uniform_Combat_LS_TS_BP_BB", "", 500, { "", "", -1 } },
            { "tacs_Uniform_Combat_LS_TS_GP_BB", "", 500, { "", "", -1 } },
            { "tacs_Uniform_Combat_RS_BS_GP_BB", "", 500, { "", "", -1 } },
            { "tacs_Uniform_Combat_RS_CLRS_TP_BB", "", 500, { "", "", -1 } },
            { "tacs_Uniform_Combat_RS_CPS_BP_BB", "", 500, { "", "", -1 } },
            { "tacs_Suit_VIP", "", 500, { "", "", -1 } },
            { "KAEL_SUITS_BR_F24", "Costard 1", 500, { "", "", -1 } },
            { "KAEL_SUITS_BR_F25", "Costard 2", 500, { "", "", -1 } },
            { "KAEL_SUITS_BR_F16", "Costard 3", 500, { "", "", -1 } },
            { "KAEL_SUITS_BR_F17", "Costard 4", 500, { "", "", -1 } },
            { "KAEL_SUITS_BR_F18", "Costard 5", 500, { "", "", -1 } },
            { "KAEL_SUITS_BR_F19", "Costard 6", 500, { "", "", -1 } },
            { "KAEL_SUITS_BR_F20", "Costard 7", 500, { "", "", -1 } },
            { "KAEL_SUITS_BR_F21", "Costard 8", 500, { "", "", -1 } },
            { "KAEL_SUITS_BR_F22", "Costard 9", 500, { "", "", -1 } },
            { "KAEL_SUITS_BR_F23", "Costard 10", 500, { "", "", -1 } },
            { "KAEL_SUITS_BR_F15", "Costard 11", 500, { "", "", -1 } },
            { "KAEL_SUITS_BR_F26", "Costard 12", 500, { "", "", -1 } },
            { "KAEL_SUITS_BR_F27", "Costard 13", 500, { "", "", -1 } },
            { "KAEL_SUITS_BR_F28", "Costard 14", 500, { "", "", -1 } },
            { "KAEL_SUITS_BR_F29", "Costard 15", 500, { "", "", -1 } },
            { "KAEL_SUITS_BR_F30", "Costard 16", 500, { "", "", -1 } },
            { "KAEL_SUITS_BR_F31", "Costard 17", 500, { "", "", -1 } },
            { "KAEL_SUITS_BR_F32", "Costard 18", 500, { "", "", -1 } },
            { "KAEL_SUITS_BR_F33", "Costard 19", 500, { "", "", -1 } },
            { "KAEL_SUITS_BR_F34", "Costard 20", 500, { "", "", -1 } },
            { "KAEL_SUITS_BR_F26", "Costard 21", 500, { "", "", -1 } },
            { "KAEL_SUITS_BR_F35", "Costard 22", 500, { "", "", -1 } },
            { "rds_uniform_Functionary1", "Costard 23", 500, { "", "", -1 } },
            { "rds_uniform_Functionary2", "Costard 24", 500, { "", "", -1 } },
            { "rds_uniform_Functionary3", "Costard 25", 500, { "", "", -1 } },
            { "rds_uniform_Functionary4", "Costard 26", 500, { "", "", -1 } },
            { "rds_uniform_Functionary5", "Costard 27", 500, { "", "", -1 } },
            { "rds_uniform_Functionary6", "Costard 28", 500, { "", "", -1 } },
            { "KAEL_SUITS_BR_F35", "Costard 29", 500, { "", "", -1 } },
            { "rds_uniform_Functionary7", "Costard 30", 500, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Retirer couvre-chef", 0, { "", "", -1 } },
            { "H_Bandanna_blu", "", 25, { "", "", -1 } },
            { "H_Bandanna_cbr", "", 25, { "", "", -1 } },
            { "H_Bandanna_khk", "", 25, { "", "", -1 } },
            { "H_Bandanna_gry", "", 25, { "", "", -1 } },
            { "H_Bandanna_sand", "", 25, { "", "", -1 } },
            { "H_ag_bandanna_01", "", 25, { "", "", -1 } },
            { "H_ag_bandanna_02", "", 25, { "", "", -1 } },
            { "H_Bandanna_surfer", "", 25, { "", "", -1 } },
            { "H_Bandanna_surfer_blk", "", 25, { "", "", -1 } },
            { "H_Bandanna_surfer_grn", "", 25, { "", "", -1 } },
            { "H_ag_bandana_03", "", 25, { "", "", -1 } },
            { "H_ag_bandana_04", "", 25, { "", "", -1 } },
            { "H_Bandanna_surfer_grn", "", 25, { "", "", -1 } },
            { "H_Bandanna_surfer_grn", "", 25, { "", "", -1 } },
            { "H_Bandanna_sgg", "", 25, { "", "", -1 } },
            { "rhs_beanie_green", "Beanie Vert", 25, { "", "", -1 } },
            { "rhs_beanie", "", 25, { "", "", -1 } },
            { "tacs_Cap_BlackLogo", "Casquette noire", 25, { "", "", -1 } },
            { "tacs_Cap_TanLogo", "Casquette tan", 25, { "", "", -1 } },
            { "tacs_Cap_Backwards_BlackLogo", "Casquette à l'envers (Noire)", 25, { "", "", -1 } },
            { "tacs_Cap_Backwards_TanLogo", "Casqutte à l'envers (Tan)", 25, { "", "", -1 } },
            { "tacs_Cap_Earpiece_BlackLogo", "Casquette oreillette (Noire)", 25, { "", "", -1 } },
            { "tacs_Cap_Earpiece_TanLogo", "Casquette oreillette (Tan)", 25, { "", "", -1 } },
            { "tacs_Cap_Headphones_BlackLogo", "Casquette avec casque et micro", 25, { "", "", -1 } },
            { "H_Cap_blu", "", 25, { "", "", -1 } },
            { "H_Cap_oli", "", 25, { "", "", -1 } },
            { "H_Cap_oli_hs", "Casquette olive (micro)", 25, { "", "", -1 } },
            { "H_Cap_red", "Casquette rouge", 25, { "", "", -1 } },
            { "rds_Profiteer_cap3", "", 25, { "", "", -1 } },
            { "rds_Profiteer_cap1", "", 25, { "", "", -1 } },
            { "rds_Profiteer_cap4", "", 25, { "", "", -1 } },
            { "rds_Profiteer_cap2", "", 25, { "", "", -1 } },
            { "H_Booniehat_khk", "", 25, { "", "", -1 } },
            { "H_Booniehat_tan", "", 25, { "", "", -1 } },
            { "ALE_H_Cowboy_White", "", 25, { "", "", -1 } },
            { "ALE_H_Cowboy_Brown", "", 25, { "", "", -1 } },
            { "ALE_H_Cowboy_Black", "", 25, { "", "", -1 } },
            { "cowboyhat", "Chapeau de Cowboy (Orange)", 25, { "", "", -1 } },
            { "rangehat", "Chapeau de Cowboy (Grand)", 25, { "", "", -1 } },
            { "H_Booniehat_tan", "", 25, { "", "", -1 } },                        
            { "H_Cap_surfer", "", 25, { "", "", -1 } },
            { "ALE_H_NewEra_Cyan", "", 35, { "", "", -1 } },
            { "ALE_H_NewEra_Monster", "", 35, { "", "", -1 } },
            { "ALE_H_NewEra_Black", "", 35, { "", "", -1 } },
            { "ALE_H_NewEra_Lakers", "", 35, { "", "", -1 } },
            { "ALE_H_NewEra_Rouge", "", 35, { "", "", -1 } },
            { "ALE_H_NewEra_Superman", "", 35, { "", "", -1 } },
            { "ALE_H_NewEra_Redsox", "", 35, { "", "", -1 } },
            { "H_Hat_blue", "", 25, { "", "", -1 } },
            { "H_Hat_checker", "", 25, { "", "", -1 } },
            { "H_Hat_grey", "", 25, { "", "", -1 } },
            { "H_Hat_tan", "", 25, { "", "", -1 } },
            { "H_Hat_brown", "", 25, { "", "", -1 } },
            { "H_StrawHat", "", 25, { "", "", -1 } },
            { "H_StrawHat_dark", "", 25, { "", "", -1 } },
            { "rhs_gssh18", "Casque avec micro", 35, { "", "", -1 } },
            { "A3L_crown", "Couronne en plastique", 10, { "", "", -1 } },
            { "A3L_sombrero", "Sombrero", 35, { "", "", -1 } },
            { "TRYK_H_wig", "Perruque grise", 25, { "", "", -1 } },
            { "rhs_tsh4", "Bonnet de pilote", 25, { "", "", -1 } },
            { "H_caf_ag_turban", "", 25, { "", "", -1 } },
            { "rds_Woodlander_cap3", "Ushanka 1", 25, { "", "", -1 } },
            { "rds_Woodlander_cap4", "Ushanka 2", 25, { "", "", -1 } },
            { "rds_Woodlander_cap2", "Ushanka 3", 25, { "", "", -1 } },
            { "rds_Woodlander_cap1", "Ushanka 4", 25, { "", "", -1 } },
            { "rds_Villager_cap1", "Paktol 1", 25, { "", "", -1 } },
            { "rds_Villager_cap2", "Paktol 2", 25, { "", "", -1 } },
            { "rds_Villager_cap3", "Paktol 3", 25, { "", "", -1 } },
            { "rds_Villager_cap4", "Paktol 4", 25, { "", "", -1 } },
            { "Kio_Hat", "Bonnet bleu", 35, { "", "", -1 } },
            { "witch_hat", "Chapeau de sorcière", 100, { "", "", -1 } },
            { "rds_worker_cap2", "Bonnet 1", 25, { "", "", -1 } },
            { "rds_worker_cap1", "Bonnet 2", 25, { "", "", -1 } },
            { "rds_worker_cap4", "Bonnet 3", 25, { "", "", -1 } },
            { "rds_worker_cap3", "Bonnet 4", 25, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Retirer lunettes", 0, { "", "", -1 } },
            { "EWK_Glasses_Cig1", "Lunettes aviateur + cigarette", 25, { "", "", -1 } },
            { "EWK_Cig1", "Cigarette", 20, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Shades_Black", "", 20, { "", "", -1 } },
            { "G_Shades_Red", "", 20, { "", "", -1 } },
            { "G_Shades_Green", "", 20, { "", "", -1 } },
            { "G_Squares_Tinted", "", 20, { "", "", -1 } },
            { "G_Sport_Red", "", 20, { "", "", -1 } },
            { "G_Sport_Checkered", "", 20, { "", "", -1 } },
            { "G_Sport_Greenblack", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 20, { "", "", -1 } },
            { "G_Spectacles", "", 20, { "", "", -1 } },
            { "G_Spectacles_Tinted", "", 20, { "", "", -1 } },
            { "EWK_Shemag_LULZ", "Écharpe Hello Kitty", 20, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Retirer gilets", 0, { "", "", -1 } },
            { "V_BandollierB_cbr", "", 125, { "", "", -1 } },
            { "V_BandollierB_khk", "", 125, { "", "", -1 } },
            { "V_BandollierB_blk", "", 125, { "", "", -1 } },
            { "V_BandollierB_oli", "", 125, { "", "", -1 } },
            { "V_BandollierB_rgr", "", 125, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Retirer sac", 0, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 200, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 200, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 200, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 200, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 250, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 250, { "", "", -1 } },
            { "B_Kitbag_rgr", "", 250, { "", "", -1 } },
            { "B_TacticalPack_blk", "", 275, { "", "", -1 } },
            { "B_AFR_RPG_BAG", "", 275, { "", "", -1 } },
            { "B_TacticalPack_rgr", "", 275, { "", "", -1 } },
            { "rhs_sidor", "", 175, { "", "", -1 } },
            { "TRYK_B_tube_blk", "", 175, { "", "", -1 } },
            { "TRYK_B_tube_cyt", "", 175, { "", "", -1 } },
            { "TRYK_B_tube_od", "", 175, { "", "", -1 } },
            { "TRYK_B_Coyotebackpack_BLK", "", 275, { "", "", -1 } },
            { "TRYK_B_Coyotebackpack", "", 275, { "", "", -1 } },
            { "TRYK_B_Coyotebackpack_OD", "", 275, { "", "", -1 } },
            { "TRYK_B_Coyotebackpack_WH", "", 275, { "", "", -1 } },
            { "TRYK_B_Carryall_blk", "", 300, { "", "", -1 } },
            { "TRYK_B_Carryall_wh", "", 300, { "", "", -1 } },
            { "B_Carryall_oli", "", 300, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 300, { "", "", -1 } },
            { "B_Carryall_cbr", "", 300, { "", "", -1 } },
            { "B_Carryall_khk", "", 300, { "", "", -1 } }
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        license = "";
        side = "cop";
        uniforms[] = {
            { "NONE", "Retirer Tenue", 0, { "", "", -1 } },
            { "TCG_PDO", "Tenue de service", 25, { "", "", -1 } }
            //{ "TCG_PDO", "Tenue de service", 25, { "life_coplevel", "SCALAR", 2 } },
        };
        headgear[] = {
            { "NONE", "Retirer couvre-chef", 0, { "", "", -1 } },
            { "corrections_cap", "Casquette 1", 25, { "", "", -1 } },
            { "Patrol_Cap", "Casquette 2", 25, { "life_coplevel", "SCALAR", 1 } },
            { "H_MilCap_blue", "Képi", 25, { "life_coplevel", "SCALAR", 1 } },
            { "H_Beret_02", "Béret haut-gradé", 100, { "life_coplevel", "SCALAR", 9 } },
            { "Campaign_Hat_Washedout", "Chapeau", 25, { "life_coplevel", "SCALAR", 1 } }
        };
        goggles[] = {
            { "NONE", "Retirer lunettes", 0, { "", "", -1 } },
            //{ "EWK_Glasses_Cig1", "Lunettes aviateur + cigarette", 25, { "", "", -1 } },
            //{ "EWK_Cig1", "Cigarette", 20, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Shades_Black", "", 20, { "", "", -1 } },
            { "G_Shades_Red", "", 20, { "", "", -1 } },
            { "G_Shades_Green", "", 20, { "", "", -1 } },
            { "G_Squares_Tinted", "", 20, { "", "", -1 } },
            { "G_Sport_Red", "", 20, { "", "", -1 } },
            { "G_Sport_Checkered", "", 20, { "", "", -1 } },
            { "G_Sport_Greenblack", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 20, { "", "", -1 } },
            { "G_Spectacles", "", 20, { "", "", -1 } },
            { "G_Spectacles_Tinted", "", 20, { "", "", -1 } }
            //{ "EWK_Shemag_LULZ", "Écharpe Hello Kitty", 20, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Retirer gilet", 0, { "", "", -1 } },
            { "TRYK_V_tacv1LP_BK", "Gilet de service", 100, { "", "", -1 } },
            //{ "V_TacVest_blk_POLICE", "", 1000, { "life_coplevel", "SCALAR", 1 } },
            //{ "V_PlateCarrier2_rgr", "", 1500, { "life_coplevel", "SCALAR", 2 } }
        };
        backpacks[] = {
            { "NONE", "Retirer sac", 0, { "", "", -1 } },
            { "Invisible_Carryall", "", 100, { "", "", -1 } }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        license = "dive";
        side = "civ";
        uniforms[] = {
            { "NONE", "Retirer Tenue", 0, { "", "", -1 } },
            { "U_B_Wetsuit", "", 2000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Retirer Couvre-Chef", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Retirer Lunettes", 0, { "", "", -1 } },
            { "G_Diving", "", 500, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Retirer Gilet", 0, { "", "", -1 } },
            { "V_RebreatherB", "", 5000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Retirer Sac", 0, { "", "", -1 } }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        license = "gun";
        side = "civ";
        uniforms[] = {
            { "NONE", "Retirer Tenue", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Retirer Couvre-Chef", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Retirer Lunettes", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Retirer Gilet", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 100, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Retirer Sac", 0, { "", "", -1 } }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Retirer Tenue", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Retirer Couvre-Chef", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Retirer Lunettes", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Retirer Gilet", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 100, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Retirer Sac", 0, { "", "", -1 } }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        license = "";
        side = "med";
        uniforms[] = {
            { "NONE", "Retirer uniforme", 0, { "", "", -1 } },
            { "CG_EMS2", "Combinaison Stagiaire", 50, { "life_mediclevel", "SCALAR", 1 } },
            { "CG_EMS2", "Combinaison Secouriste", 50, { "life_mediclevel", "SCALAR", 2 } },
            { "CG_EMS2", "Combinaison Infirmier", 50, { "life_mediclevel", "SCALAR", 3 } },
            { "CG_EMS6", "Combinaison Médecin", 50, { "life_mediclevel", "SCALAR", 4 } },
            { "CG_EMS8", "Combinaison Médecin-Chef", 50, { "life_mediclevel", "SCALAR", 5 } }

        };
        headgear[] = {
            { "NONE", "Retirer Couvre-Chef", 0, { "", "", -1 } },
            { "H_Cap_marshal", "Casquette", 25, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Retirer Lunettes", 0, { "", "", -1 } },
            { "G_Lady_Blue", "Lunettes de protection", 10, { "", "", -1 } },
            { "G_Aviator", "", 10, { "", "", -1 } },
            { "Masque_Chirurgical", "", 10, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Retirer Gilet", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Retirer Sac", 0, { "", "", -1 } },
            { "Invisible_Carryall", "Sac Invisible", 500, { "", "", -1 } },
            { "tf_bussole", "Sac et radio longue portée", 200, { "", "", -1 } }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        license = "rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", "Retirer Tenue", 0, { "", "", -1 } },
            { "rhs_uniform_flora_patchless", "", 400, {"", "", -1} },
            { "rhs_uniform_flora_patchless_alt", "", 400, {"", "", -1} },
            { "rhs_uniform_FROG01_m81", "", 400, {"", "", -1} },
            { "rhs_uniform_mvd_izlom", "", 400, {"", "", -1} },
            { "rhs_uniform_m88_patchless", "", 400, {"", "", -1} },
            { "U_CAF_AG_ME_FATIGUES_01", "", 400, {"", "", -1} },
            { "U_CAF_AG_ME_FATIGUES_01a", "", 400, {"", "", -1} },
            { "U_CAF_AG_ME_ROBES_Mil_01", "", 400, {"", "", -1} },
            { "U_CAF_AG_ME_ROBES_mil_01a", "", 400, {"", "", -1} },
            { "rhs_uniform_vdv_mflora", "", 400, {"", "", -1} },
            { "Smill_B_69BD_U01", "", 400, {"", "", -1} },
            { "Smill_B_DPM70_U3", "", 400, {"", "", -1} },
            { "Smill_B_DPM70_U10", "", 400, {"", "", -1} },
            { "U_B_CombatUniform_mcam", "", 400, {"", "", -1} },
            { "U_B_CombatUniform_mcam_tshirt", "", 400, {"", "", -1} },
            { "U_I_CombatUniform_shortsleeve", "", 400, {"", "", -1} },
            { "U_O_OfficerUniform_ocamo", "", 400, {"", "", -1} },
            { "TRYK_U_B_ARO1_GR_R_CombatUniform", "", 400, {"", "", -1} },
            { "TRYK_U_B_AOR2_OD_CombatUniform", "", 400, {"", "", -1} },
            { "TRYK_ZARATAKI", "", 400, {"", "", -1} },
            { "TRYK_ZARATAKI2", "", 400, {"", "", -1} },
            { "TRYK_ZARATAKI3", "", 400, {"", "", -1} }
        };
        headgear[] = {
            { "NONE", "Retirer Couvre-Chef", 0, { "", "", -1 } },
            { "U_C_Poor_1", "", 100, { "", "", -1 } },
            { "kio_skl_msk_black", "", 200, { "", "", -1 } },
            { "kio_skl_msk_blood", "", 200, { "", "", -1 } },
            { "kio_skl_msk_can", "", 200, { "", "", -1 } },
            { "kio_skl_msk_fire", "", 200, { "", "", -1 } },
            { "kio_skl_msk_fran", "", 200, { "", "", -1 } },
            { "kio_skl_msk_frost", "", 200, { "", "", -1 } },
            { "kio_skl_msk_GOW", "", 200, { "", "", -1 } },
            { "kio_skl_msk_german", "", 200, { "", "", -1 } },
            { "kio_skl_msk_grey", "", 200, { "", "", -1 } },
            { "kio_skl_msk_irish", "", 200, { "", "", -1 } },
            { "kio_skl_msk_nirish", "", 200, { "", "", -1 } },
            { "kio_skl_msk_o", "", 200, { "", "", -1 } },
            { "Paintball_Mask_01", "", 200, { "", "", -1 } },
            { "kio_skl_msk_pun", "", 200, { "", "", -1 } },
            { "kio_skl_msk_p", "", 200, { "", "", -1 } },
            { "kio_skl_msk_redranger", "", 200, { "", "", -1 } },
			{ "kio_skl_msk_grn", "", 200, { "", "", -1 } },
			{ "kio_skl_msk", "", 200, { "", "", -1 } },
			{ "kio_skl_msk_red", "", 200, { "", "", -1 } },
			{ "kio_skl_msk_scot", "", 200, { "", "", -1 } },
			{ "kio_skl_msk_UK", "", 200, { "", "", -1 } },
			{ "kio_skl_msk_US", "", 200, { "", "", -1 } },
			{ "kio_skl_msk_weed", "", 200, { "", "", -1 } },
			{ "kio_skl_msk_can", "", 200, { "", "", -1 } },
			{ "kio_skl_msk_can", "", 200, { "", "", -1 } },
			{ "kio_skl_msk_can", "", 200, { "", "", -1 } },
			{ "kio_skl_msk_can", "", 200, { "", "", -1 } },
			{ "kio_skl_msk_can", "", 200, { "", "", -1 } },
            { "H_Cap_blk_Raven", "", 100, { "", "", -1 } },
            { "H_Cap_brn_SPECOPS", "", 100, { "", "", -1 } },
            { "H_Hat_camo", "", 100, { "", "", -1 } },
            { "H_Orel_Mask_Dead", "", 200, { "", "", -1 } },
            { "Payday_GeneralO", "", 200, { "", "", -1 } },
            { "H_caf_ag_wrap", "", 200, { "", "", -1 } },
            { "Masque_Aubrey", "", 200, { "", "", -1 } },
            { "Masque_Bonnie", "", 200, { "", "", -1 } },
            { "Masque_Chains", "", 200, { "", "", -1 } },
            { "Masque_Chuck", "", 200, { "", "", -1 } },
            { "Masque_Dallas", "", 200, { "", "", -1 } },
            { "Masque_Hockey", "", 200, { "", "", -1 } },
            { "Masque_Hoxton", "", 200, { "", "", -1 } },
            { "Masque_Religieuse", "", 200, { "", "", -1 } },
            //{ "mgsr_headbag", "", 200, { "", "", -1 } },
            { "mgsr_eyepatch", "", 50, { "", "", -1 } },
            { "H_ShemagOpen_khk", "", 200, { "", "", -1 } },
            { "rhs_tsh4_ess_bala", "", 200, { "", "", -1 } },
            { "rhs_Booniehat_flora", "", 200, { "", "", -1 } },
            { "tacs_Hat_Boonie_Woodland", "", 200, { "", "", -1 } },
            { "tacs_Hat_Boonie_DesertMARPAT", "", 200, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Retirer Lunettes", 0, { "", "", -1 } },
            { "rhs_balaclava", "", 75, { "", "", -1 } },
            { "G_Balaclava_blk", "", 75, { "", "", -1 } },
            { "G_Bandanna_tan", "", 75, { "", "", -1 } },
            { "G_Bandanna_beast", "", 75, { "", "", -1 } },
            { "G_Bandanna_khk", "", 75, { "", "", -1 } },
            { "G_Bandanna_blk", "", 75, { "", "", -1 } },
            { "G_Bandanna_oli", "", 75, { "", "", -1 } },
            { "G_Bandanna_sport", "", 75, { "", "", -1 } },
            { "Masque_Solitaire", "", 75, { "", "", -1 } },
            { "EWK_Shemag_GRE", "", 75, { "", "", -1 } },
            { "EWK_Shemag_tan", "", 75, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Retirer Gilet", 0, { "", "", -1 } },
            { "V_HarnessOGL_gry", "Veste explosive", 15000, { "", "", -1 } },
            { "TRYK_V_ChestRig", "", 500, { "", "", -1 } },
            { "rhs_vydra_3m", "", 500, { "", "", -1 } },
            { "V_TacVest_camo", "", 500, { "", "", -1 } },
            { "V_TacVest_khk", "", 500, { "", "", -1 } },
            { "V_TacVest_brn", "", 500, { "", "", -1 } },
            { "V_I_G_resistanceLeader_F", "", 500, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Retirer Sac", 0, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 500, { "", "", -1 } },
            { "rhs_assault_umbts_engineer_empty", "", 500, { "", "", -1 } },
            { "Smill_B_DPM70_FP_DPM_LATE", "", 500, { "", "", -1 } },
            { "Smill_B_DPM70_CA_DPM", "", 600, { "", "", -1 } },
            { "Smill_B_DPM70_CA_DPM_LATE", "", 600, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 600, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 600, { "", "", -1 } }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Retirer Tenue", 0, { "", "", -1 } },
            { "U_C_Driver_1_black", "", 100, { "", "", -1 } },
            { "U_C_Driver_1_blue", "", 100, { "", "", -1 } },
            { "U_C_Driver_1_red", "", 100, { "", "", -1 } },
            { "U_C_Driver_1_orange", "", 100, { "", "", -1 } },
            { "U_C_Driver_1_green", "", 100, { "", "", -1 } },
            { "U_C_Driver_1_white", "", 100, { "", "", -1 } },
            { "U_C_Driver_1_yellow", "", 100, { "", "", -1 } },
            { "U_C_Driver_2", "", 100, { "", "", -1 } },
            { "U_C_Driver_1", "", 100, { "", "", -1 } },
            { "U_C_Driver_3", "", 100, { "", "", -1 } },
            { "U_C_Driver_4", "", 100, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Retirer Couvre-Chef", 0, { "", "", -1 } },
            { "H_RacingHelmet_1_black_F", "", 100, { "", "", -1 } },
            { "H_RacingHelmet_1_red_F", "", 100, { "", "", -1 } },
            { "H_RacingHelmet_1_white_F", "", 100, { "", "", -1 } },
            { "H_RacingHelmet_1_blue_F", "", 100, { "", "", -1 } },
            { "H_RacingHelmet_1_yellow_F", "", 100, { "", "", -1 } },
            { "H_RacingHelmet_1_green_F", "", 100, { "", "", -1 } },
            { "H_RacingHelmet_1_F", "", 100, { "", "", -1 } },
            { "H_RacingHelmet_2_F", "", 100, { "", "", -1 } },
            { "H_RacingHelmet_3_F", "", 100, { "", "", -1 } },
            { "H_RacingHelmet_4_F", "", 100, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Retirer Lunettes", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Retirer Gilet", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Retirer Sac", 0, { "", "", -1 } }
        };
    };
};

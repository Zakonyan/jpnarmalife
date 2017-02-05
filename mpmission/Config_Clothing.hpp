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
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Poloshirt_stripped", "Poloshirt stripped", 25, { "", "", -1 } },
            { "U_C_Poloshirt_redwhite", "Poloshirt Red/White", 25, { "", "", -1 } },
            { "U_C_Poloshirt_salmon", "Poloshirt Salmon", 25, { "", "", -1 } },
            { "U_C_Poloshirt_blue", "Poloshirt Blue", 25, { "", "", -1 } },
            { "U_C_Poor_2", "Rag tagged clothes", 25, { "", "", -1 } },
            { "U_C_Poloshirt_burgundy", "Poloshirt Burgundy", 25, { "", "", -1 } },
            { "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 25, { "", "", -1 } },
            { "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 25, { "", "", -1 } },
            { "U_IG_Guerilla3_1", "Brown Jacket & Pants", 25, { "", "", -1 } },
            { "U_OrestesBody", "Surfing On Land", 25, { "", "", -1 } },
            { "U_IG_Guerilla2_3", "The Outback Rangler", 25, { "", "", -1 } },
            { "U_C_HunterBody_grn", "The Hunters Look", 25, { "", "", -1 } },
            { "U_C_WorkerCoveralls", "Mechanic Coveralls", 25, { "", "", -1 } },
            { "U_NikosAgedBody", "Casual Wears", 25, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Bandanna_camo", "Camo Bandanna", 330, { "", "", -1 } },
            { "H_Bandanna_surfer", "Surfer Bandanna", 330, { "", "", -1 } },
            { "H_Bandanna_surfer", "", 5, { "", "", -1 } },
            { "H_Bandanna_khk", "Khaki Bandanna", 330, { "", "", -1 } },
            { "H_Cap_blu", "", 5, { "", "", -1 } },
            { "H_Cap_grn", "", 5, { "", "", -1 } },
            { "H_Cap_grn_BI", "", 5, { "", "", -1 } },
            { "H_Cap_oli", "", 5, { "", "", -1 } },
            { "H_Cap_red", "", 5, { "", "", -1 } },
            { "H_Cap_tan", "", 5, { "", "", -1 } },
            { "H_Bandanna_gry", "Grey Bandanna", 330, { "", "", -1 } },
            { "H_Bandanna_sgg", "Sage Bandanna", 330, { "", "", -1 } },
            { "H_Bandanna_cbr", "", 5, { "", "", -1 } },
            { "H_StrawHat", "Straw Fedora", 5, { "", "", -1 } },
            { "H_Hat_tan", "", 5, { "", "", -1 } },
            { "H_Hat_brown", "", 5, { "", "", -1 } },
            { "H_Hat_grey", "", 5, { "", "", -1 } },
            { "H_BandMask_blk", "Hat & Bandanna", 330, { "", "", -1 } },
            { "H_Hat_blue", "", 5, { "", "", -1 } },
            { "H_Hat_checker", "", 5, { "", "", -1 } },
            { "H_Booniehat_tan", "", 5, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 10, { "", "", -1 } },
            { "G_Shades_Blue", "", 10, { "", "", -1 } },
            { "G_Shades_Green", "", 10, { "", "", -1 } },
            { "G_Shades_Red", "", 10, { "", "", -1 } },
            { "G_Sport_Blackred", "", 10, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 10, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 10, { "", "", -1 } },
            { "G_Sport_Checkered", "", 10, { "", "", -1 } },
            { "G_Sport_Greenblack", "", 10, { "", "", -1 } },
            { "G_Sport_Red", "", 10, { "", "", -1 } },
            { "G_Lowprofile", "", 10, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Aviator", "", 10, { "", "", -1 } },
            { "G_Lady_Mirror", "", 10, { "", "", -1 } },
            { "G_Lady_Dark", "", 10, { "", "", -1 } },
            { "G_Lady_Blue", "", 10, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 60, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 60, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 60, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 60, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 60, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 60, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 60, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 60, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 50, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 50, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 50, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 50, { "", "", -1 } },
            { "B_Bergen_sgg", "", 150, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 150, { "", "", -1 } },
            { "B_Bergen_rgr", "", 150, { "", "", -1 } },
            { "B_Bergen_blk", "", 150, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 250, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 250, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 250, { "", "", -1 } },
            { "B_Carryall_oli", "", 250, { "", "", -1 } },
            { "B_Carryall_khk", "", 250, { "", "", -1 } },
            { "B_Carryall_cbr", "", 250, { "", "", -1 } }
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        license = "";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_Rangemaster", "Cop Uniform", 25, { "", "", -1 } },
            { "U_B_CombatUniform_mcam_tshirt", "", 350, { "life_coplevel", "SCALAR", 1 } },
            { "U_B_CombatUniform_mcam_worn", "", 550, { "life_coplevel", "SCALAR", 2 } },
            { "U_B_survival_uniform", "", 1250, { "life_coplevel", "SCALAR", 1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Cap_police", "", 25, { "", "", -1 } },
            { "H_Beret_blk_POLICE", "", 50, { "life_coplevel", "SCALAR", 2 } },
            { "H_HelmetB_plain_mcamo", "", 75, { "life_coplevel", "SCALAR", 1 } },
            { "H_MilCap_mcamo", "", 100, { "life_coplevel", "SCALAR", 2 } },
            { "H_Booniehat_mcamo", "", 120, { "life_coplevel", "SCALAR", 1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Shades_Blue", "", 10, { "", "", -1 } },
            { "G_Sport_Blackred", "", 10, { "", "", -1 } },
            { "G_Sport_Checkered", "", 10, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 10, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 10, { "", "", -1 } },
            { "G_Shades_Black", "", 10, { "", "", -1 } },
            { "G_Lowprofile", "", 10, { "", "", -1 } },
            { "G_Combat", "", 10, { "", "", -1 } },
            { "G_Aviator", "", 10, { "", "", -1 } },
            { "G_Lady_Mirror", "", 10, { "", "", -1 } },
            { "G_Lady_Dark", "", 10, { "", "", -1 } },
            { "G_Lady_Blue", "", 10, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 800, { "", "", -1 } },
            { "V_TacVest_blk_POLICE", "", 1000, { "life_coplevel", "SCALAR", 1 } },
            { "V_PlateCarrier2_rgr", "", 1500, { "life_coplevel", "SCALAR", 2 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_FieldPack_cbr", "", 500, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 700, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 800, { "", "", -1 } },
            { "B_Bergen_sgg", "", 2500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 3500, { "", "", -1 } }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        license = "dive";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_B_Wetsuit", "", 200, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Diving", "", 200, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_RebreatherB", "", 200, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        license = "gun";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 450, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_OG_Guerilla1_1", "", 500, { "", "", -1 } },
            { "U_IG_Guerilla2_1", "", 500, { "", "", -1 } },
            { "U_IG_leader", "", 700, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 450, { "", "", -1 } },
            { "V_Chestrig_khk", "", 450, { "", "", -1 } },
            { "V_HarnessOGL_brn", "", 450, { "", "", -1 } },
            { "V_HarnessOSpec_gry", "", 450, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 60, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 60, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 60, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 60, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 60, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 60, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 60, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 60, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 50, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 50, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 50, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 50, { "", "", -1 } },
            { "B_Bergen_sgg", "", 150, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 150, { "", "", -1 } },
            { "B_Bergen_rgr", "", 150, { "", "", -1 } },
            { "B_Bergen_blk", "", 150, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 250, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 250, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 250, { "", "", -1 } },
            { "B_Carryall_oli", "", 250, { "", "", -1 } },
            { "B_Carryall_khk", "", 250, { "", "", -1 } },
            { "B_Carryall_cbr", "", 250, { "", "", -1 } }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        license = "";
        side = "med";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_Rangemaster", "EMS Uniform", 50, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Cap_blu", "", 10, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Blue", "", 10, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_FieldPack_oli", "EMS Backpack", 3000, { "", "", -1 } }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        license = "rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_IG_Guerilla1_1", "", 300, {"", "", -1} },
            { "U_I_G_Story_Protagonist_F", "", 300, { "", "", -1 } },
            { "U_I_G_resistanceLeader_F", "", 300, { "", "", -1 } },
            { "U_IG_leader", "Guerilla Leader", 300, { "", "", -1 } },
            { "U_O_PilotCoveralls", "", 300, { "", "", -1 } },
            { "U_O_SpecopsUniform_ocamo", "", 300, { "", "", -1 } },
            { "U_O_GhillieSuit", "", 5000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Bandanna_camo", "", 650, { "", "", -1 } },
            { "H_ShemagOpen_khk", "", 800, { "", "", -1 } },
            { "H_ShemagOpen_tan", "", 850, { "", "", -1 } },
            { "H_Shemag_olive", "", 850, { "", "", -1 } },
            { "H_MilCap_oucamo", "", 1200, { "", "", -1 } },
            { "H_HelmetO_ocamo", "", 2500, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 10, { "", "", -1 } },
            { "G_Shades_Blue", "", 10, { "", "", -1 } },
            { "G_Shades_Green", "", 10, { "", "", -1 } },
            { "G_Shades_Red", "", 10, { "", "", -1 } },
            { "G_Sport_Blackred", "", 10, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 10, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 10, { "", "", -1 } },
            { "G_Sport_Checkered", "", 10, { "", "", -1 } },
            { "G_Sport_Greenblack", "", 10, { "", "", -1 } },
            { "G_Sport_Red", "", 10, { "", "", -1 } },
            { "G_Lowprofile", "", 10, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Aviator", "", 10, { "", "", -1 } },
            { "G_Lady_Mirror", "", 10, { "", "", -1 } },
            { "G_Lady_Dark", "", 10, { "", "", -1 } },
            { "G_Lady_Blue", "", 10, { "", "", -1 } },
            { "G_Combat", "", 10, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_BandollierB_cbr", "", 450, { "", "", -1 } },
            { "V_HarnessO_brn", "", 350, { "", "", -1 } },
            { "V_TacVest_khk", "", 350, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 60, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 60, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 60, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 60, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 60, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 60, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 60, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 60, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 50, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 50, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 50, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 50, { "", "", -1 } },
            { "B_Bergen_sgg", "", 150, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 150, { "", "", -1 } },
            { "B_Bergen_rgr", "", 150, { "", "", -1 } },
            { "B_Bergen_blk", "", 150, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 250, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 250, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 250, { "", "", -1 } },
            { "B_Carryall_oli", "", 250, { "", "", -1 } },
            { "B_Carryall_khk", "", 250, { "", "", -1 } },
            { "B_Carryall_cbr", "", 250, { "", "", -1 } }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Driver_1_black", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_blue", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_red", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_orange", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_green", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_white", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_yellow", "", 1500, { "", "", -1 } },
            { "U_C_Driver_2", "", 3500, { "", "", -1 } },
            { "U_C_Driver_1", "", 3600, { "", "", -1 } },
            { "U_C_Driver_3", "", 3700, { "", "", -1 } },
            { "U_C_Driver_4", "", 3700, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_RacingHelmet_1_black_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_red_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_white_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_blue_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_yellow_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_green_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_2_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_3_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_4_F", "", 2500, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

	class bounty {
        title = "STR_Shops_C_Bounty";
        license = "bounty";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_Rangemaster", "", 25, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Shades_Blue", "", 10, { "", "", -1 } },
            { "G_Sport_Blackred", "", 10, { "", "", -1 } },
            { "G_Sport_Checkered", "", 10, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 10, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "G_Shades_Black", "", 10, { "", "", -1 } },
            { "G_Lowprofile", "", 10, { "", "", -1 } },
            { "G_Combat", "", 10, { "", "", -1 } },
            { "G_Aviator", "", 10, { "", "", -1 } },
            { "G_Lady_Mirror", "", 10, { "", "", -1 } },
            { "G_Lady_Dark", "", 10, { "", "", -1 } },
            { "G_Lady_Blue", "", 10, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 800, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 60, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 60, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 60, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 60, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 60, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 60, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 60, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 60, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 50, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 50, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 50, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 50, { "", "", -1 } },
            { "B_Bergen_sgg", "", 150, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 150, { "", "", -1 } },
            { "B_Bergen_rgr", "", 150, { "", "", -1 } },
            { "B_Bergen_blk", "", 150, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 250, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 250, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 250, { "", "", -1 } },
            { "B_Carryall_oli", "", 250, { "", "", -1 } },
            { "B_Carryall_khk", "", 250, { "", "", -1 } },
            { "B_Carryall_cbr", "", 250, { "", "", -1 } }
        };
    };
};

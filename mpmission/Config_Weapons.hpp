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
            { "hgun_Rook40_F", "", 1800, 900 },
            { "hgun_Pistol_01_F", "", 1000, 500 },
            { "hgun_ACPC2_F", "", 3600, 1300 },
            { "hgun_PDW2000_F", "", 7500, 3750 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 60 },
			      { "10Rnd_9x21_Mag", "", 50 },
            { "9Rnd_45ACP_Mag", "", 80 },
            { "30Rnd_9x21_Mag", "", 120 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 1000 }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_TRG20_F", "", 25000, 2500 },
            { "arifle_Katiba_F", "", 30000, 5000 },
            { "srifle_DMR_01_F", "", 50000, -1 },
            { "arifle_SDAR_F", "", 20000, 7500 },
			      { "launch_RPG7_F", "", 40000, 5000 }
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 300 },
            { "30Rnd_65x39_caseless_green", "", 275 },
            { "10Rnd_762x54_Mag", "", 500 },
			      { "RPG7_F", "", 20000 },
            { "20Rnd_556x45_UW_mag", "", 125 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500 },
            { "optic_Holosight", "", 3600 },
            { "optic_Hamr", "", 7500 },
            { "acc_flashlight", "", 1000 }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Pistol_heavy_02_F", "", 2500, 300 },
            { "hgun_ACPC2_F", "", 3500, 400 },
            { "hgun_Pistol_heavy_01_F", "", 4500, 500 },
            { "SMG_02_F", "", 9500, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "11Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag_SMG_02", "", 75 }
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
		      	{ "ItemWatch", "", 10, 5 },
			      { "ItemCompass", "", 10, 5 },
            { "Binocular", "", 180, 90 },
		        { "ItemMap", "", 10, 5 },
            { "ItemGPS", "", 200, 100 },
            { "FirstAidKit", "", 30, 15 },
            { "NVGoggles", "", 120, 60 },
            { "Chemlight_red", "", 10, 5 },
            { "Chemlight_yellow", "", 10, 5 },
            { "Chemlight_green", "", 10, 5 },
            { "Chemlight_blue", "", 10, 5 }
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
			      { "ItemWatch", "", 10, 5 },
			      { "ItemCompass", "", 10, 5 },
            { "Binocular", "", 180, 90 },
		        { "ItemMap", "", 10, 5 },
            { "ItemGPS", "", 200, 100 },
            { "FirstAidKit", "", 30, 15 },
            { "NVGoggles", "", 120, 60 },
            { "Chemlight_red", "", 10, 5 },
            { "Chemlight_yellow", "", 10, 5 },
            { "Chemlight_green", "", 10, 5 },
            { "Chemlight_blue", "", 10, 5 }
        };
        mags[] = {};
        accs[] = {};
    };

	class bounty {
        name = "Bounty Hunter Weapon";
        side = "civ";
        license = "bounty";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_P07_snds_F", "Stun Pistol", 1700, 850 },
            { "HandGrenade_Stone", "Flashbang", 1000, -1 },
		      	{ "ItemWatch", "", 10, 5 },
			      { "ItemCompass", "", 10, 5 },
            { "Binocular", "", 180, 90 },
		        { "ItemMap", "", 10, 5 },
            { "ItemGPS", "", 200, 100 },
            { "FirstAidKit", "", 30, 15 },
            { "NVGoggles", "", 120, 60 },
			      { "Chemlight_red", "", 10, 5 },
            { "Chemlight_yellow", "", 10, 5 },
            { "Chemlight_green", "", 10, 5 },
            { "Chemlight_blue", "", 10, 5 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 }
        };
        accs[] = {
            { "muzzle_snds_L", "", 550 }
        };
    };

    //Cop Shops
    class cop_basic {
        name = "Altis Cop Shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_sdar_F", "Taser Rifle", 20000, 7500 },
            { "hgun_P07_snds_F", "Stun Pistol", 2000, 650 },
            { "hgun_P07_F", "", 7500, 1500 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "30Rnd_556x45_Stanag", "Taser Rifle Magazine", 45 }
        };
        accs[] = {
            { "muzzle_snds_L", "", 650 }
        };
    };

    class cop_patrol {
        name = "Altis Patrol Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "You must be a Patrol Officer Rank!" };
        items[] = {
            { "arifle_MX_F", "", 35000, 7500 },
            { "SMG_02_ACO_F", "", 30000, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "acc_flashlight", "", 750, 100 },
            { "optic_Holosight", "", 1200, 275 },
            { "optic_Arco", "", 2500, -1 },
            { "muzzle_snds_H", "", 2750, -1 }
        };
        mags[] = {
            { "30Rnd_65x39_caseless_mag", "", 130 },
            { "30Rnd_9x21_Mag", "", 250 }
        };
        accs[] = {
            { "acc_flashlight", "", 750 },
            { "optic_Holosight", "", 1200 },
            { "optic_Arco", "", 2500 },
            { "muzzle_snds_H", "", 2750 }
        };
    };

    class cop_sergeant {
        name = "Altis Sergeant Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a Sergeant Rank!" };
        items[] = {
            { "hgun_ACPC2_F", "", 17500, -1 },
            { "SMG_02_ACO_F", "", 15000, -1 },
            { "arifle_MXC_F", "", 30000, 5000 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "optic_Arco", "", 2500, -1 },
            { "muzzle_snds_H", "", 2750, -1 }
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 200 },
            { "30Rnd_9x21_Mag", "", 60 },
            { "30Rnd_65x39_caseless_mag", "", 100 }
        };
        accs[] = {
            { "optic_Arco", "", 2500 },
            { "muzzle_snds_H", "", 2750 }
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
			      { "ItemWatch", "", 10, 5 },
			      { "ItemCompass", "", 10, 5 },
            { "Binocular", "", 180, 90 },
		        { "ItemMap", "", 10, 5 },
            { "ItemGPS", "", 200, 100 },
            { "FirstAidKit", "", 30, 15 },
            { "NVGoggles", "", 120, 60 },
			      { "Chemlight_red", "", 10, 5 },
            { "Chemlight_yellow", "", 10, 5 },
            { "Chemlight_green", "", 10, 5 },
            { "Chemlight_blue", "", 10, 5 }
        };
        mags[] = {};
        accs[] = {};
    };
};

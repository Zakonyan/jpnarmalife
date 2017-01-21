#define ST_CENTER         0x02
/*
    Author: Daniel Stuart

    File: hud_stats.hpp
*/

class playerHUD {
    idd = -1;
    duration = 10e10;
    movingEnable = 0;
    fadein = 0;
    fadeout = 0;
    name = "playerHUD";
    onLoad = "uiNamespace setVariable ['playerHUD',_this select 0]";
    objects[] = {};
    controls[] = {
        Life_RscBackground_HUD,
        /*Life_RscProgress_HUDFood,
        Life_RscProgress_HUDHealth,
        Life_RscProgress_HUDWater,*/
		Life_RscPictureFood,
		Life_RscPictureWater,
		Life_RscPictureHealth,
        Life_RscText_HUDFood,
        Life_RscText_HUDHealth,
        Life_RscText_HUDWater
    };

    /* Background */
    class Life_RscBackground_HUD: Life_RscBackground {
        colorBackground[] = {0,0,0,0.35};
        x = 0.390 * safezoneW + safezoneX;
        y = 0.9479 * safezoneH + safezoneY;
        w = 0.20 * safezoneW;
        h = 0.035* safezoneH;
    };

    /* Progress Bars */
    /*class LIFE_RscProgress_HUDCommon: Life_RscProgress {
        colorFrame[] = {0, 0, 0, 0.8};
        y = 0.972223 * safezoneH + safezoneY;
        w = 0.0462964 * safezoneW;
        h = 0.0222222 * safezoneH;
    };

    class Life_RscProgress_HUDFood: LIFE_RscProgress_HUDCommon {
        idc = 2200;
        colorBar[] = {0,0.50,0,0.65};
        x = 0.418981 * safezoneW + safezoneX;
    };

    class Life_RscProgress_HUDHealth: LIFE_RscProgress_HUDCommon {
        idc = 2201;
        colorBar[] = {0.85,0.05,0,0.65};
        x = 0.476852 * safezoneW + safezoneX;
    };

    class Life_RscProgress_HUDWater: LIFE_RscProgress_HUDCommon {
        idc = 2202;
        colorBar[] = {0,0.25,0.65,0.65};
        x = 0.534723 * safezoneW + safezoneX;
    };*/

    /* Texts */
    class Life_RscText_HUDCommon: Life_RscText {
        SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.5)";
        style = ST_CENTER;
        y = 0.950023 * safezoneH + safezoneY;
        w = 0.0462964 * safezoneW;
        h = 0.0222222 * safezoneH;
    };

    class Life_RscText_HUDFood: Life_RscText_HUDCommon {
        idc = 1200;
        text = "";
        x = 0.4175 * safezoneW + safezoneX;
    };

    class Life_RscText_HUDHealth: Life_RscText_HUDCommon {
        idc = 1201;
        text = "";
        x = 0.476852 * safezoneW + safezoneX;
    };

    class Life_RscText_HUDWater: Life_RscText_HUDCommon {
        idc = 1202;
        text = "";
        x = 0.534723 * safezoneW + safezoneX;
    };
	
	//Icon
	class Life_RscPictureFood: life_RscPicture
	{
		idc = 1203;
		text = "icons\HUD_food.paa";
		x = 0.405 * safezoneW + safezoneX;
		y = 0.950022 * safezoneH + safezoneY;
		w = 0.03; 
		h = 0.04;
	};

	class Life_RscPictureWater: life_RscPicture
	{
		idc = 1204;
		text = "icons\HUD_water.paa";
		x = 0.5265 * safezoneW + safezoneX;
		y = 0.950022 * safezoneH + safezoneY;
		w = 0.03; 
		h = 0.04;
	};

	class Life_RscPictureHealth: life_RscPicture
	{
		idc = 1205;
		text = "icons\HUD_health.paa";
		x = 0.465 * safezoneW + safezoneX;
		y = 0.950022 * safezoneH + safezoneY;
		w = 0.03;
		h = 0.04;
	};
};
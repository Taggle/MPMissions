#define ST_CENTER         0x02
#define CT_STRUCTURED_TEXT  13
#define ST_LEFT           0x00
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
		Life_RscProgress_HUDFood,
		Life_RscProgress_HUDHealth,
		Life_RscProgress_HUDWater,
		Life_RscText_HUDFood,
		Life_RscText_HUDHealth,
		Life_RscText_HUDWater
	};

	/* Background */
	class Life_RscBackground_HUD: Life_RscBackground {
		colorBackground[] = {0,0,0,0.35};
		x = 0.414815 * safezoneW + safezoneX;
		y = 0.966667 * safezoneH + safezoneY;
		w = 0.170371 * safezoneW;
		h = 0.0333333 * safezoneH;
	};

	/* Progress Bars */
	class LIFE_RscProgress_HUDCommon: Life_RscProgress {
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
	};

	/* Texts */
	class Life_RscText_HUDCommon: Life_RscText {
		SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
		style = ST_CENTER;
		y = 0.970023 * safezoneH + safezoneY;
		w = 0.0462964 * safezoneW;
		h = 0.0222222 * safezoneH;
	};

	class Life_RscText_HUDFood: Life_RscText_HUDCommon {
		idc = 1200;
		text = "$STR_HUD_Food";
		x = 0.418981 * safezoneW + safezoneX;
	};

	class Life_RscText_HUDHealth: Life_RscText_HUDCommon {
		idc = 1201;
		text = "$STR_HUD_Health";
		x = 0.476852 * safezoneW + safezoneX;
	};

	class Life_RscText_HUDWater: Life_RscText_HUDCommon {
		idc = 1202;
		text = "$STR_HUD_Water";
		x = 0.534723 * safezoneW + safezoneX;
	};
};

class RSC_DOMSG7
{
	idd = -1;
	fadein=1;
	fadeout=1;
	duration = 4;
	name="RSC_DOMSG7";
	onLoad="uiNamespace setVariable ['RSC_DOMSG7',_this select 0]";
	objects[]={};
	class controls
	{
		class Shark_text7
		{
			type=13;
			style=0x0c+0x02;
			idc=13377;
			x = 0.01 * safezoneW + safezoneX;
			y = 0.200 * safezoneH + safezoneY;
			w = 0.55;
			h = 0.11;
			sizeEx=0.035;
			size=0.035;
			font="PuristaMedium";
			colorBackground[]={0,0,0,0.6};
			colorText[] = { 1 , 1 , 1 , 1 };
			shadow=false;
			text="";
		};
	};
};

class RSC_DOMSG6
{
	idd = -1;
	fadein=1;
	fadeout=1;
	duration = 7;
	name="RSC_DOMSG6";
	onLoad="uiNamespace setVariable ['RSC_DOMSG6',_this select 0]";
	objects[]={};
	class controls
	{
		class Shark_text6
		{
			type=CT_STRUCTURED_TEXT;
			idc=13376;
			style=ST_LEFT;
			x = 0.01 * safezoneW + safezoneX;
			y = 0.350 * safezoneH + safezoneY;
			w = 0.55;
			h = 0.11;
			valign = "left";
			sizeEx=0.035;
			size=0.035;
			font="PuristaMedium";
			colorBackground[]={0,0,0,0.6};
			colorText[] = { 1 , 1 , 1 , 1 };
			shadow=false;
			text="";
		};
	};
};

class RSC_DOMSG5
{
	idd = -1;
	fadein=1;
	fadeout=1;
	duration = 7;
	name="RSC_DOMSG5";
	onLoad="uiNamespace setVariable ['RSC_DOMSG5',_this select 0]";
	objects[]={};
	class controls
	{
		class Shark_text5
		{
			type=CT_STRUCTURED_TEXT;
			idc=13375;
			style=ST_LEFT;
			x = 0.01 * safezoneW + safezoneX;
			y = 0.420 * safezoneH + safezoneY;
			w = 0.55;
			h = 0.11;
			valign = "left";
			sizeEx=0.035;
			size=0.035;
			font="PuristaMedium";
			colorBackground[]={0,0,0,0.6};
			colorText[] = { 1 , 1 , 1 , 1 };
			shadow=false;
			text="";
		};
	};
};


class RSC_DOMSG4
{
	idd = -1;
	fadein=1;
	fadeout=1;
	duration = 7;
	name="RSC_DOMSG4";
	onLoad="uiNamespace setVariable ['RSC_DOMSG4',_this select 0]";
	objects[]={};
	class controls
	{
		class Shark_text4
		{
			type=CT_STRUCTURED_TEXT;
			idc=13374;
			style=ST_LEFT;
			x = 0.01 * safezoneW + safezoneX;
			y = 0.490 * safezoneH + safezoneY;
			w = 0.55;
			h = 0.11;
			valign = "left";
			sizeEx=0.035;
			size=0.035;
			font="PuristaMedium";
			colorBackground[]={0,0,0,0.6};
			colorText[] = { 1 , 1 , 1 , 1 };
			shadow=false;
			text="";
		};

	};
};

class RSC_DOMSG3
{
	idd = -1;
	fadein=1;
	fadeout=1;
	duration = 7;
	name="RSC_DOMSG3";
	onLoad="uiNamespace setVariable ['RSC_DOMSG3',_this select 0]";
	objects[]={};
	class controls
	{

		class Shark_text3
		{
			type=CT_STRUCTURED_TEXT;
			idc=13373;
			style=ST_LEFT;
			x = 0.01 * safezoneW + safezoneX;
			y = 0.560 * safezoneH + safezoneY;
			w = 0.55;
			h = 0.11;
			valign = "left";
			sizeEx=0.035;
			size=0.035;
			font="PuristaMedium";
			colorBackground[]={0,0,0,0.6};
			colorText[] = { 1 , 1 , 1 , 1 };
			shadow=false;
			text="";
		};

	};
};

class RSC_DOMSG2
{
	idd = -1;
	fadein=1;
	fadeout=1;
	duration = 7;
	name="RSC_DOMSG2";
	onLoad="uiNamespace setVariable ['RSC_DOMSG2',_this select 0]";
	objects[]={};
	class controls
	{
		class Shark_text2
		{
			type=CT_STRUCTURED_TEXT;
			idc=13372;
			style=ST_LEFT;
			x = 0.01 * safezoneW + safezoneX;
			y = 0.630 * safezoneH + safezoneY;
			w = 0.55;
			h = 0.11;
			valign = "left";
			sizeEx=0.035;
			size=0.035;
			font="PuristaMedium";
			colorBackground[]={0,0,0,0.6};
			colorText[] = { 1 , 1 , 1 , 1 };
			shadow=false;
			text="";
		};
	};
};

class RSC_DOMSG1
{
	idd = -1;
	fadein=1;
	fadeout=1;
	duration = 7;
	name="RSC_DOMSG1";
	onLoad="uiNamespace setVariable ['RSC_DOMSG1',_this select 0]";
	objects[]={};
	class controls
	{
		class Shark_text1
		{
			type=CT_STRUCTURED_TEXT;
			idc=13371;
			style=ST_LEFT;
			x = 0.01 * safezoneW + safezoneX;
			y = 0.700 * safezoneH + safezoneY;
			w = 0.55;
			h = 0.11;
			valign = "left";
			sizeEx=0.035;
			size=0.035;
			font="PuristaMedium";
			colorBackground[]={0,0,0,0.6};
			colorText[] = { 1 , 1 , 1 , 1 };
			shadow=false;
			text="";
		};
	};
};
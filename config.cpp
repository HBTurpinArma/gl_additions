#include "config_macros.hpp"

class CfgPatches
{
	class ADDON {
		name=ADDON_NAME;
		units[]={};
		weapons[]={};
		magazines[]={
			"gla_mag_m4009_impact",
			"gla_mag_M1060_Thermobaric",
			"gla_mag_XM678_Flechette",
			"gla_mag_M1006_LessLethal",
			"gla_mag_APERS40_MINE",
			"gla_mag_3Rnd_M441_HE",
			"gla_mag_3Rnd_M397_HET",
			"gla_mag_3Rnd_m4009",
			"gla_mag_3Rnd_m4009_impact",
			"gla_mag_3Rnd_M433_HEDP",
			"gla_mag_3Rnd_M576_Buckshot",
			"gla_mag_3Rnd_M781_Practice",
			"gla_mag_3Rnd_M1060_Thermobaric",
			"gla_mag_3Rnd_XM678_Flechette",
			"gla_mag_3Rnd_M1006_LessLethal",
			"gla_mag_3Rnd_APERS40_MINE",
			"gla_mag_3Rnd_40mm_Pike",
			"gla_mag_6Rnd_m4009_impact",
			"gla_mag_6Rnd_M1060_Thermobaric",
			"gla_mag_6Rnd_XM678_Flechette",
			"gla_mag_6Rnd_M1006_LessLethal",
			"gla_mag_6Rnd_APERS40_MINE",
			"gla_mag_6Rnd_40mm_Pike",
			"gla_mag_6Rnd_SmokeBlue",
			"gla_mag_6Rnd_SmokeGreen",
			"gla_mag_6Rnd_SmokeOrange",
			"gla_mag_6Rnd_SmokePurple",
			"gla_mag_6Rnd_SmokeRed",
			"gla_mag_6Rnd_SmokeWhite",
			"gla_mag_6Rnd_SmokeYellow",
			"gla_mag_6Rnd_FlareGreen",
			"gla_mag_6Rnd_FlareRed",
			"gla_mag_6Rnd_FlareWhite",
			"gla_mag_6Rnd_FlareYellow",
			"gla_mag_6Rnd_FlareCIR"
		};
		requiredVersion=1.0;
		requiredAddons[]=
		{
			"A3_Functions_F",
			"A3_Data_F",
			"A3_Soft_F",
			"A3_Functions_F",
			"A3_Air_F",
			"A3_Weapons_F",
			"ace_common",
			"rhsusf_main",
			"rhsusf_c_weapons"
		};
		name="Grenade Launcher Additions";
		author="HBTurpin";
		authors[]={"HBTurpin"};
		url="https://github.com/HBTurpinArma";
	};
};

#include "CfgMagazineWells.hpp"
#include "CfgMagazines.hpp"
#include "cfgCloudlets.hpp"
#include "CfgAmmo.hpp"

class CfgFunctions
{
	class ADDON
	{
		class Core
		{
			tag = QUOTE(ADDON);
            file = FUNCTION_PATH;
			// class init {postInit=1;};
			// class firedHandler {};
			// class teargasEffectAI {};
			// class teargasEffectPlayer {};
			// class teargasGrenade {};
		};
	};
};



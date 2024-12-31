#include "config_macros.hpp"

class CfgPatches
{
	class ADDON {
		name=ADDON_NAME;
		units[]={};
		weapons[]={};
		magazines[]={};
		requiredVersion=1.0;
		requiredAddons[]=
		{
			"ace_common",
			"rhsusf_main",
			"rhsusf_c_weapons",
			"A3_Functions_F"
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
			class init {postInit=1;};
			class firedHandler {};
			class teargasEffectAI {};
			class teargasEffectPlayer {};
			class teargasGrenade {};
		};
	};
};



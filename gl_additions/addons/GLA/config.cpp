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
#include "CfgVehicles.hpp"

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
			class dronePlaceCheck {};
			class dronePlace {};
		};
	};
};


//Move this to the drone addon directly, doesn't need to be apart of GL Additions.
class CfgVehicles {
	class Man;
	class CAManBase: Man {
		class ACE_SelfActions {
			class ACE_Equipment {
				class INVENTORY_DRONES {
					displayName = "Place Drone";
					condition = QUOTE([_player, 'gla_mag_Drone40_Recon'] call GLA_fnc_dronePlaceCheck);
                    exceptions[] = {};
                    showDisabled = 0;	
					class DRONE_40_RECON {
						displayName = "Drone40 (Recon)";
						condition = QUOTE([_player, 'gla_mag_Drone40_Recon'] call GLA_fnc_dronePlaceCheck);
						// Wait a frame to handle "Do When releasing action menu key" option
						statement = QUOTE([ARR_2({[_this, 'gla_mag_Drone40_Recon', 'B_UAV_01_F'] call GLA_fnc_dronePlace}, _player)] call CBA_fnc_execNextFrame);
						exceptions[] = {};
						showDisabled = 0;
						icon = "\a3\air_f_exp\uav_03\data\ui\uav_03_ca.paa";
					};
				};
			};
		};
	};
};
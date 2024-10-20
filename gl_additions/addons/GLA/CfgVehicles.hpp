//Move this to the drone addon directly, doesn't need to be apart of GL Additions.
class CfgVehicles {

	class Man;
	class CAManBase: Man {
		class ACE_SelfActions {
			class ACE_Equipment {
				class INVENTORY_DRONES {
					displayName = "Place Drone";
					condition = QUOTE([_player, ''] call GLA_fnc_dronePlaceCheck);
                    exceptions[] = {};
                    showDisabled = 0;	
					class DRONE_40_RECON {
						displayName = "Drone40 (Recon)";
						condition = QUOTE([_player, 'gla_mag_Drone40_Recon'] call GLA_fnc_dronePlaceCheck);
						// Wait a frame to handle "Do When releasing action menu key" option
						statement = QUOTE([ARR_2({[_this, 'gla_mag_Drone40_Recon', 'B_UAV_01_F'] call GLA_fnc_dronePlace}, _player)] call CBA_fnc_execNextFrame);
						exceptions[] = {};
						showDisabled = 0;
						icon = "\a3\air_f_exp\uav_03\data\ui\uav_01_ca.paa";
					};
				};
			};
		};
	};







};
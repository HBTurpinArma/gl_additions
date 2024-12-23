params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];


//Teargas
if ((typeOf _projectile) == 'gla_40mm_cs_gas') then {
	sleep 2;
	_impactPos = getPosATL _projectile;
	while {!alive _projectile} do
	{
	    sleep 6;
		_impactPos = getPosATL _projectile;
	};
	[[_impactPos],"GLA_fnc_teargasGrenade",true,false] call BIS_fnc_MP;
};

//Drones
if ((typeOf _projectile) == 'gla_40mm_Drone40_Recon') then {
		sleep 2;

		if (isNull _projectile) exitWith {};
		if ((vectorMagnitude (velocity _projectile)) < 0.1) exitWith {};

		[{
			params ["_position"];
			deleteVehicle (_projectile);
			_drone = [_unit, '', 'B_UAV_01_F', _position, [0,0,0], [0,0,0], false] call GLA_fnc_dronePlace;
			

			// //This should all just get rewritten into dronePlace and then we can handle everything there, i.e if we spawn it in the air
			// private _drone = createVehicle ["B_UAV_01_F", _position, [], 0, "FLY"];
			// _drone setPosATL _position;

			// // Swap to the same faction as player
			// createVehicleCrew _drone;
			// crew _drone join createGroup (side _unit);

			// // Auto connect the player if they have the CBA setting enabled..
			// _unit connectTerminalToUAV _drone;
			// driver _drone switchCamera "Internal";
			// _unit remoteControl driver _drone;

			// // Add ace interact pickup option

			


		}, [getPosATL _projectile], 1, 0] call CBA_fnc_waitAndExecute;

};

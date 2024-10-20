private ["_ammo", "_impactPos"];
_ammo = _this select 0;


if ((typeOf _ammo) == 'gla_40mm_cs_gas') then {
	sleep 2;
	_impactPos = getPosATL _ammo;
	while {!alive _ammo} do
	{
	        sleep 6;
		_impactPos = getPosATL _ammo;
	};
	[[_impactPos],"GLA_fnc_teargasGrenade",true,false] call BIS_fnc_MP;
};

 
if ((typeOf _ammo) == 'gla_40mm_Drone40_Recon') then {
		sleep 2;

		if (isNull _ammo) exitWith {};
		if ((vectorMagnitude (velocity _ammo)) < 0.1) exitWith {};

		[{
			params ["_position"];
			private _drone = createVehicle ["B_UAV_01_F", _position, [], 0, "FLY"];
			_drone setPosATL _position;
		}, [getPosATL _ammo], 1, 0] call CBA_fnc_waitAndExecute;
};

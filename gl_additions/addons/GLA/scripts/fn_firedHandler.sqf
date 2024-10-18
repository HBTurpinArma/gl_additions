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

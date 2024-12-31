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
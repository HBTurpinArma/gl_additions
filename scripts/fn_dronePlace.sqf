params ["_unit", "_ammo", "_droneClass", "_position", "_direction", "_velocity", "_place"];


if (_place) then { // Place drone
	systemChat format ["Attempting to place: %1 at %2", _droneClass, _unit];
	//Check if all requirements are met (has ammo, can place)

	//Play animation when you place it
	["ace_common_playActionNow", [_unit, "ace_gestures_cover"], _unit] call CBA_fnc_targetEvent;

	//Remove a single ammo from the player

	_drone = createVehicle [_droneClass, _position, [], 0, "CAN_COLLIDE"];
} else { // Spawn drone from GL
	systemChat format ["Drone fired: %1 by %2", _droneClass, _unit];

	//Spawn drone in the air with flying state.
	_drone = createVehicle [_droneClass, _position, [], 0, "FLY"];
	_drone setPosATL _position;

	//Set direction of the drone


	//Add some directional momentum
}

// Swap to the same faction as player
createVehicleCrew _drone;
crew _drone join createGroup (side _unit);

// Auto connect the player if they have the CBA setting enabled..
_unit connectTerminalToUAV _drone;
driver _drone switchCamera "Internal";
_unit remoteControl driver _drone;

// Add ace interact pickup option



// Return the drone
_drone
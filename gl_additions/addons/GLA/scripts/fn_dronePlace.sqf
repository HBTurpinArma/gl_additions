
params ["_unit", "_ammo", "_droneClass"];
systemChat format ["Attempting to place: %1 on %2", _droneClass, _unit];

//Check if all requirements are met (has ammo, can place)


//Remove a single ammo from the player


// Play gesture
["ace_common_playActionNow", [_unit, "ace_gestures_cover"], _unit] call CBA_fnc_targetEvent;

// Place drone
_drone = createVehicle [_droneClass, screenToWorld [0.5,0.5], [], 0, "CAN_COLLIDE"];

// Swap to the same faction as player
createVehicleCrew _drone;
crew _drone join createGroup (side _unit);

// Add ace interact pickup option

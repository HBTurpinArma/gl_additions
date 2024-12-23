
params ["_unit", "_ammo"];



if (!alive _unit) exitWith {false};
if !([_unit, objNull, ["isNotDragging", "isNotCarrying", "isNotSwimming"]] call ace_common_fnc_canInteractWith) exitWith {false};


// Check if unit is a player
private _isPlayer = isPlayer _unit;
if (_isPlayer && {!local _unit}) exitWith {false};


private _playerItems = itemsWithMagazines _unit;
if (_ammo != "" && !(_ammo in _playerItems)) exitWith {false};

systemChat format ["Has item: %1", _ammo];


private _startPos = if (_isPlayer) then {
    AGLToASL positionCameraToWorld [0, 0, 0]
} else {
    eyePos _unit
};

// Check 2m in front of unit if there is an object
private _intersections = lineIntersectsSurfaces [_startPos, _startPos vectorAdd ((getCameraViewDirection _unit) vectorMultiply 2), _unit];

if (_intersections isEqualTo []) exitWith {false};

(_intersections # 0) params ["_intersectPosASL", "", "_intersectObj", "_parentObject"];

// Terrain
if (isNull _intersectObj && {isNull _parentObject}) exitWith {true};
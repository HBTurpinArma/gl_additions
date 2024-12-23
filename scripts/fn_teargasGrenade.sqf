private ["_pos", "_objects"];
_pos = _this select 0;

_objects = _pos nearEntities ["CAManBase", 15];
{
	private ["_eyePos", "_pos2"];
	_eyePos = eyePos _x;
	_pos2 = [_pos select 0,_pos select 1,(_pos select 2)+0.2];
	if (!lineIntersects [_eyePos, ATLtoASL _pos2,_x]) then {
		if (isPlayer _x) then {

		} else {
			if (alive _x) then {
				_script = _x spawn GLA_fnc_teargasEffectAI;
			};
		};
	};
} count _objects;

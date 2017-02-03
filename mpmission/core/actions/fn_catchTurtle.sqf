private "_obj";
_obj = cursorObject;
if(isNull _obj) exitWith {}; //Not valid
if(alive _obj) exitWith {}; //It's alive, don't take it charlie!


private["_resourceZones","_zone"];
_resourceZones = ["turtle_1","turtle_2","turtle_3"];

{
	if(player distance (getMarkerPos _x) < 250) exitWith {
		if(([true,"turtle_raw",1] call life_fnc_handleInv)) then {
			deleteVehicle _obj;
			titleText[localize "STR_ANIM_Turtle","PLAIN"];
		};
	};
} foreach _resourceZones;

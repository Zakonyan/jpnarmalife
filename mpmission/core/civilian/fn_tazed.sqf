#include "..\..\script_macros.hpp"
/*
    File: fn_tazed.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Starts the tazed animation and broadcasts out what it needs to.
*/
private["_curWep","_curMags","_attach"];
params [
    ["_unit",objNull,[objNull]],
    ["_shooter",objNull,[objNull]]
];


//Activate ppEffects 
"chromAberration" ppEffectEnable true;
"radialBlur" ppEffectEnable true;
enableCamShake true;


if (isNull _unit || isNull _shooter) exitWith {player allowDamage true; life_istazed = false;};

if (_shooter isKindOf "Man" && alive player) then {
    if (!life_istazed) then {
        life_istazed = true;
		
			//effect
			"chromAberration" ppEffectAdjust [random 0.25,random 0.25,true];
			"chromAberration" ppEffectCommit 1;   
			"radialBlur" ppEffectAdjust  [random 0.02,random 0.02,0.15,0.15];
			"radialBlur" ppEffectCommit 1;
			addcamShake[random 3, 1, random 3];
			
        _curWep = currentWeapon player;
        _curMags = magazines player;
        _attach = if (!(primaryWeapon player isEqualTo "")) then {primaryWeaponItems player} else {[]};

        {player removeMagazine _x} forEach _curMags;
        player removeWeapon _curWep;
        player addWeapon _curWep;
        if (!(count _attach isEqualTo 0) && !(primaryWeapon player isEqualTo "")) then {
            {
                _unit addPrimaryWeaponItem _x;
            } forEach _attach;
        };

        if (!(count _curMags isEqualTo 0)) then {
            {player addMagazine _x;} forEach _curMags;
        };

        [_unit] remoteExecCall ["life_fnc_tazeSound",RCLIENT];
        _obj = "Land_ClutterCutter_small_F" createVehicle ASLTOATL(visiblePositionASL player);
        _obj setPosATL ASLTOATL(visiblePositionASL player);
        [player,"AinjPfalMstpSnonWnonDf_carried_fallwc"] remoteExecCall ["life_fnc_animSync",RCLIENT];
        [0,"STR_NOTF_Tazed",true,[profileName, _shooter getVariable ["realname",name _shooter]]] remoteExecCall ["life_fnc_broadcast",RCLIENT];
        _unit attachTo [_obj,[0,0,0]];
        disableUserInput true;
        sleep 45;

        [player,"AmovPpneMstpSrasWrflDnon"] remoteExecCall ["life_fnc_animSync",RCLIENT];
		
		
		//Stop effects
		"chromAberration" ppEffectAdjust [0,0,true];
		"chromAberration" ppEffectCommit 5;
		"radialBlur" ppEffectAdjust  [0,0,0,0];
		"radialBlur" ppEffectCommit 5;
		sleep 7;
		
		//Deactivate ppEffects
		"chromAberration" ppEffectEnable false;
		"radialBlur" ppEffectEnable false;
		resetCamShake;

		
        if (!(player getVariable ["Escorting",false])) then {
            detach player;
        };
        life_istazed = false;
        player allowDamage true;
        disableUserInput false;
    };
} else {
    _unit allowDamage true;
    life_iztazed = false;
};

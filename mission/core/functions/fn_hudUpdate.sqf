#include "..\..\script_macros.hpp"
/*
    File: fn_hudUpdate.sqf
    Author: Daniel Stuart

    Description:
    Updates the HUD when it needs to.
*/
disableSerialization;

if (isNull LIFEdisplay) then {[] call life_fnc_hudSetup;};
/*LIFEctrl(2200) progressSetPosition (life_hunger / 100);
LIFEctrl(2201) progressSetPosition (1 - (damage player));
LIFEctrl(2202) progressSetPosition (life_thirst / 100);*/

LIFEctrl(1200) ctrlsetText format["%1 ％", life_hunger];
LIFEctrl(1201) ctrlsetText format["%1 ％", round((1 - (damage player)) * 100)];
LIFEctrl(1202) ctrlsetText format["%1 ％", life_thirst];

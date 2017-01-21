/*
    File: fn_setupActions.sqf
    Author:

    Description:
    Master addAction file handler for all client-based actions.
*/
switch (playerSide) do {
    case civilian: {
        //Drop fishing net
        life_actions = [player addAction[localize "STR_pAct_DropFishingNet",life_fnc_dropFishingNet,"",0,false,false,"",'
        (surfaceisWater (getPos vehicle player)) && (vehicle player isKindOf "Ship") && life_carryWeight < life_maxWeight && speed (vehicle player) < 2 && speed (vehicle player) > -1 && !life_net_dropped ']];
        
		//Rob person
        life_actions = life_actions + [player addAction[localize "STR_pAct_RobPerson",life_fnc_robAction,"",0,false,false,"",'
        !isNull cursorObject && player distance cursorObject < 3.5 && isPlayer cursorObject && animationState cursorObject == "Incapacitated" && !(cursorObject getVariable["robbed",FALSE]) ']];
    };
	
	case west: {
		//Impound
		life_actions = life_actions + [player addAction["<t color='#00AFFF'>Impound Vehicle</t>",life_fnc_impoundAction,"",0,false,false,"",'
		!isNull cursorObject && ((cursorObject isKindOf "Car") || (cursorObject isKindOf "Ship") || (cursorObject isKindOf "Air")) ']]; 
		
		//Registration
		life_actions = life_actions + [player addAction["<t color='#00AFFF'>Search Owner</t>",life_fnc_searchVehAction,"",0,false,false,"",'
		!isNull cursorObject && ((cursorObject isKindOf "Car") || (cursorObject isKindOf "Ship") || (cursorObject isKindOf "Air")) ']]; 
		
		//SearchVehicle
		life_actions = [player addAction["<t color='#00AFFF'>Search Vehicle</t>",life_fnc_vehInvSearch,"",0,false,false,"",'
		!isNull cursorObject && ((cursorObject isKindOf "Car") || (cursorObject isKindOf "Ship") || (cursorObject isKindOf "Air")) ']]; 
	};
};

//Caputure
life_actions = life_actions + [player addAction["<t color='#FF0000'>Capture Gang Location</t>",life_fnc_areaCapture,"",0,false,false,"",' ((typeOf cursorObject) == "Flag_Red_F") ']];

//Repair
life_actions = life_actions + [player addAction["<t color='#ff0000'>Repair Vehicle</t>",life_fnc_repairTruck,"",0,false,false,"",'
!isNull cursorObject && ((cursorObject isKindOf "Car") || (cursorObject isKindOf "Ship") || (cursorObject isKindOf "Air")) && (life_inv_toolkit >= 1) && alive cursorObject && (cursorObject call life_fnc_isDamaged) ']]; 

//Unflip
life_actions = [player addAction["<t color='#ff0000'>Push Vehicle</t>",life_fnc_pushObject,"",0,false,false,"",'
!isNull cursorObject && ((cursorObject isKindOf "Car") || (cursorObject isKindOf "Ship") || (cursorObject isKindOf "Air")) && (crew cursorObject isEqualTo []) ']]; 

//Pull Out
life_actions = life_actions + [player addAction["<t color='#00AFFF'>Pull Out</t>",life_fnc_pulloutAction,"",0,false,false,"",'
!isNull cursorObject && (playerSide isEqualTo west || (license_civ_bounty)) && ((cursorObject isKindOf "Car") || (cursorObject isKindOf "Ship") || (cursorObject isKindOf "Air")) && !(crew cursorObject isEqualTo [])']]; 

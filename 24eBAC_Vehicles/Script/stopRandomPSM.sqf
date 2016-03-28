if (isServer) then {
	_this setVariable ["BIS_enableRandomzation",false];
	_this addItemCargoGlobal ["Medikit", 10];
	_this addItemCargoGlobal ["FirstAidKit", 48];
	_this addMagazineCargoGlobal ["SmokeShell", 10];
	_this addMagazineCargoGlobal ["SmokeShellGreen", 10];
	_this addMagazineCargoGlobal ["SmokeShellOrange", 10];
	_this addMagazineCargoGlobal ["Chemlight_red", 10];
};
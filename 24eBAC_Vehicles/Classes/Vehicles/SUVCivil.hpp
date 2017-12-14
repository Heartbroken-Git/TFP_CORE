class 24eBAC_SUVMSF:C_SUV_01_F
{
	_generalMacro = "C_SUV_01_F";
	scope = 2;
	side = 3;
	faction = "CIV_F";
	displayName="SUV MSF";
	author = "Heartbroken";
	crew = "C_scientist_F";
	hiddenSelections[]= {"Camo1"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\SUV_Civ\SUV_MSF.paa"};
	typicalCargo[] = {"C_scientist_F"};
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandom.sqf""";
	};
};

class 24eBAC_SUVCICR:C_SUV_01_F
{
	_generalMacro = "C_SUV_01_F";
	scope = 2;
	side = 3;
	faction = "CIV_F";
	displayName="SUV CICR";
	author = "Heartbroken";
	crew = "TFD_Benevole_polo";
	hiddenSelections[]= {"Camo1"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\SUV_Civ\SUV_CICR.paa"};
	typicalCargo[] = {"TFD_Benevole_polo","TFD_Benevole_polo"};
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandom.sqf""";
	};
};

class 24eBAC_SUVSAMU:C_SUV_01_F
{
	_generalMacro = "C_SUV_01_F";
	scope = 2;
	side = 3;
	faction = "CIV_F";
	displayName="SUV SAMU";
	author = "Heartbroken";
	crew = "TFD_Ambulancier_SAMU";
	hiddenSelections[]= {"Camo1"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\SUV_Civ\SUV_SAMU.paa"};
	typicalCargo[] = {"TFD_Ambulancier_SAMU"};
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandom.sqf""";
	};
};
class 24eBAC_OffroadDGA_securite:C_Offroad_01_F
{
	_generalMacro = "C_Offroad_01_F";
	scope = 2;
	side = 3;
	faction = "CIV_F";
	displayName="Tout-terrain DGA (Securite)";
	author = "Heartbroken";
	crew = "TFD_Vigile_polo";
	hiddenSelections[]= {"camo", "camo2"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Offroad_Civ\Offroad_DGASec.paa", "\24eBAC_Vehicles\Data\Offroad_Civ\Offroad_DGASec.paa"};
	typicalCargo[] = {"TFD_Vigile_polo"};
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandomPolOffroad.sqf""";
	};
};

class 24eBAC_OffroadDGAC_followme:C_Offroad_01_F
{
	_generalMacro = "C_Offroad_01_F"; //peut-�tre � remplacer par la version R�paration
	scope = 2;
	side = 3;
	faction = "CIV_F";
	displayName="Tout-terrain DGAC (Follow Me)";
	author = "Heartbroken";
	crew = "C_man_w_worker_F";
	hiddenSelections[]= {"camo", "camo2"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Offroad_Civ\Offroad_DGAC.paa", "\24eBAC_Vehicles\Data\Offroad_Civ\Offroad_DGASec.paa"};
	typicalCargo[] = {"C_man_w_worker_F"};
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandomServOffroad.sqf""";
	};
};

class 24eBAC_OffroadDIR:C_Offroad_01_F
{
	_generalMacro = "C_Offroad_01_F"; //peut-�tre � remplacer par la version R�paration
	scope = 2;
	side = 3;
	faction = "CIV_F";
	displayName="Tout-terrain DIR";
	author = "Heartbroken";
	crew = "TFD_Patrouilleur_DIR";
	hiddenSelections[]= {"camo", "camo2"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Offroad_Civ\Offroad_DIR.paa", "\24eBAC_Vehicles\Data\Offroad_Civ\Offroad_DGASec.paa"};
	typicalCargo[] = {"TFD_Patrouilleur_DIR"};
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandomServOffroad.sqf""";
	};
};

class 24eBAC_OffroadCICR:C_Offroad_01_F
{
	_generalMacro = "C_Offroad_01_F";
	scope = 2;
	side = 3;
	faction = "CIV_F";
	displayName="Tout-terrain CICR";
	author = "Heartbroken";
	crew = "TFD_Benevole_polo";
	hiddenSelections[]= {"camo", "camo2"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Offroad_Civ\Offroad_CICR.paa", "\24eBAC_Vehicles\Data\Offroad_Civ\Offroad_CICR.paa"};
	typicalCargo[] = {"TFD_Benevole_polo"};
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandomNGOOffroad.sqf""";
	};
};

class 24eBAC_OffroadMSF:C_Offroad_01_F
{
	_generalMacro = "C_Offroad_01_F";
	scope = 2;
	side = 3;
	faction = "CIV_F";
	displayName="Tout-terrain MSF";
	author = "Heartbroken";
	crew = "C_scientist_F";
	hiddenSelections[]= {"camo", "camo2"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Offroad_Civ\Offroad_MSF.paa", "\24eBAC_Vehicles\Data\Offroad_Civ\Offroad_MSF.paa"};
	typicalCargo[] = {"C_scientist_F"};
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandomNGOOffroad.sqf""";
	};
};

class 24eBAC_OffroadRC:C_Offroad_01_F
{
	_generalMacro = "C_Offroad_01_F";
	scope = 2;
	side = 3;
	faction = "CIV_F";
	displayName="Tout-terrain Croissant Rouge";
	author = "Heartbroken";
	crew = "C_scientist_F";
	hiddenSelections[]= {"camo", "camo2"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Offroad_Civ\Offroad_RC.paa", "\24eBAC_Vehicles\Data\Offroad_Civ\Offroad_RC.paa"};
	typicalCargo[] = {"C_scientist_F"};
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandomNGOOffroad.sqf""";
	};
};
class 24eBAC_VanDGA:C_Van_01_transport_F
{
	_generalMacro = "C_Van_01_transport_F";
	scope = 2;
	side = 3;
	faction = "CIV_F";
	displayName="Camionnette (DGA)";
	author = "Heartbroken";
	crew = "C_scientist_F";
	hiddenSelections[]= {"Camo1", "Camo2"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Van_Blanc\VanCabine_DGA.paa", "\24eBAC_Vehicles\Data\Van_Blanc\VanSupplements_Blanc.paa"};
	typicalCargo[] = {"C_scientist_F"};
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandom.sqf""";
	};
};

class 24eBAC_VanDGAC:C_Van_01_transport_F
{
	_generalMacro = "C_Van_01_transport_F";
	scope = 2;
	side = 3;
	faction = "CIV_F";
	displayName="Camionnette (DGAC)";
	author = "Heartbroken";
	crew = "C_man_w_worker_F";
	hiddenSelections[]= {"Camo1", "Camo2"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Van_Blanc\VanCabine_DGAC.paa", "\24eBAC_Vehicles\Data\Van_Blanc\VanSupplements_Blanc.paa"};
	typicalCargo[] = {"C_man_w_worker_F"};
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandom.sqf""";
	};
};
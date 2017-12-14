class 24eBAC_VanSable:C_Van_01_transport_F
{
	_generalMacro = "C_Van_01_transport_F";
	scope = 2;
	side = 1;
	faction = "TFD_AA";
	displayName="Camionnette (Sable)";
	author = "Heartbroken";
	crew = "B_soldier_F";
	hiddenSelections[]= {"Camo1", "Camo2"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Van_Sable\VanCabine_Standard_sable.paa", "\24eBAC_Vehicles\Data\Van_Sable\VanSupplements_sable.paa"};
	typicalCargo[] = {"B_soldier_F"};
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandom.sqf""";
	};
};

class 24eBAC_VanSable_container:C_Van_01_box_F
{
	_generalMacro = "C_Van_01_box_F";
	scope = 2;
	side = 1;
	faction = "TFD_AA";
	displayName="Camionnette Container (Sable)";
	author = "Heartbroken";
	crew = "B_soldier_F";
	hiddenSelections[]= {"Camo1", "Camo2"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Van_Sable\VanCabine_Container_sable.paa", "\24eBAC_Vehicles\Data\Van_Sable\VanSupplements_sable.paa"};
	typicalCargo[] = {"B_soldier_F"};
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandom.sqf""";
	};
};

class 24eBAC_VanSable_PSM:C_Van_01_box_F
{
	_generalMacro = "C_Van_01_box_F";
	scope = 2;
	side = 1;
	faction = "TFD_AT";
	displayName="PSM (Sable)";
	author = "Heartbroken";
	crew = "B_medic_F";
	hiddenSelections[]= {"Camo1", "Camo2"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Van_Sable\VanCabine_PSM_sable.paa", "\24eBAC_Vehicles\Data\Van_Sable\VanSupplements_PSM_sable.paa"};
	typicalCargo[] = {"B_medic_F"};
	vehicleClass = "Support";
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandomPSM.sqf""";
	};
};

class 24eBAC_VanSable_fuel:C_Van_01_fuel_F
{
	_generalMacro = "C_Van_01_fuel_F";
	scope = 2;
	side = 1;
	faction = "TFD_AA";
	displayName="Camionnette SEA (Sable)";
	author = "Heartbroken";
	crew = "B_soldier_F";
	hiddenSelections[]= {"Camo1", "Camo2"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Van_Sable\VanCabine_Essence_sable.paa", "\24eBAC_Vehicles\Data\Van_Sable\VanEssence_sable.paa"};
	typicalCargo[] = {"B_soldier_F"};
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandom.sqf""";
	};
};
class 24eBAC_VanKaki:C_Van_01_transport_F
{
	_generalMacro = "C_Van_01_transport_F";
	scope = 2;
	side = 1;
	faction = "TFD_AA";
	displayName="Camionnette (Kaki)";
	author = "Heartbroken";
	crew = "B_soldier_F";
	hiddenSelections[]= {"Camo1", "Camo2"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Van_Kaki\VanCabine_Standard.paa", "\24eBAC_Vehicles\Data\Van_Kaki\VanSupplements.paa"};
	typicalCargo[] = {"B_soldier_F"};
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandom.sqf""";
	};
};

class C_Van_01_box_F;
class 24eBAC_VanKaki_container:C_Van_01_box_F
{
	_generalMacro = "C_Van_01_box_F";
	scope = 2;
	side = 1;
	faction = "TFD_AA";
	displayName="Camionnette Container (Kaki)";
	author = "Heartbroken";
	crew = "B_soldier_F";
	hiddenSelections[]= {"Camo1", "Camo2"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Van_Kaki\VanCabine_Container.paa", "\24eBAC_Vehicles\Data\Van_Kaki\VanSupplements.paa"};
	typicalCargo[] = {"B_soldier_F"};
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandom.sqf""";
	};
};

class 24eBAC_VanKaki_PSM:C_Van_01_box_F
{
	_generalMacro = "C_Van_01_box_F";
	scope = 2;
	side = 1;
	faction = "TFD_AT";
	displayName="PSM (Kaki)";
	author = "Heartbroken";
	crew = "B_medic_F";
	hiddenSelections[]= {"Camo1", "Camo2"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Van_Kaki\VanCabine_PSM.paa", "\24eBAC_Vehicles\Data\Van_Kaki\VanSupplements_PSM.paa"};
	typicalCargo[] = {"B_medic_F"};
	vehicleClass = "Support";
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandomPSM.sqf""";
	};
};

class C_Van_01_fuel_F;
class 24eBAC_VanKaki_fuel:C_Van_01_fuel_F
{
	_generalMacro = "C_Van_01_fuel_F";
	scope = 2;
	side = 1;
	faction = "TFD_AA";
	displayName="Camionnette SEA (Kaki)";
	author = "Heartbroken";
	crew = "B_soldier_F";
	hiddenSelections[]= {"Camo1", "Camo2"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Van_Kaki\VanCabine_Essence.paa", "\24eBAC_Vehicles\Data\Van_Kaki\VanEssence.paa"};
	typicalCargo[] = {"B_soldier_F"};
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandom.sqf""";
	};
};
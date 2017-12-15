class 24eBAC_VanLaPoste:C_Van_01_transport_F
{
	_generalMacro = "C_Van_01_transport_F";
	scope = 2;
	side = 3;
	faction = "CIV_F";
	displayName="Camionnette (La Poste)";
	author = "Heartbroken";
	crew = "C_man_p_fugitive_F_euro";
	hiddenSelections[]= {"Camo1", "Camo2"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Van_Bonus\VanCabine_LaPoste.paa", "\24eBAC_Vehicles\Data\Van_Bonus\VanSupplements_LaPoste.paa"};
	typicalCargo[] = {"C_man_p_fugitive_F_euro"};
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandom.sqf""";
	};
};

class 24eBAC_VanLaPoste_container:C_Van_01_box_F
{
	_generalMacro = "C_Van_01_box_F";
	scope = 2;
	side = 3;
	faction = "CIV_F";
	displayName="Camionnette Container (La Poste)";
	author = "Heartbroken";
	crew = "C_man_p_fugitive_F_euro";
	hiddenSelections[]= {"Camo1", "Camo2"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Van_Bonus\VanCabine_LaPoste.paa", "\24eBAC_Vehicles\Data\Van_Bonus\VanSupplements_LaPoste.paa"};
	typicalCargo[] = {"C_man_p_fugitive_F_euro"};
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandom.sqf""";
	};
};
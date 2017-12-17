class 24eBAC_CamionCiv_MSF:I_Truck_02_covered_F
{
	scope = 2;
	side = 3;
	faction = "CIV_F";
	displayName="Zamak EVASAN (MSF)";
	author = "Heartbroken";
	crew = "C_scientist_F";
	hiddenSelections[]= {"camo1", "camo2"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Camion_Civ\ZamakCivCabine_MSF.paa", "\24eBAC_Vehicles\Data\Camion_Civ\ZamakCivBache_MSF.paa"};
	typicalCargo[] = {"C_scientist_F"};
	vehicleClass = "Support";
};

class 24eBAC_CamionCiv_CICR:I_Truck_02_covered_F
{
	scope = 2;
	side = 3;
	faction = "CIV_F";
	displayName="Zamak EVASAN (CICR)";
	author = "Heartbroken";
	crew = "TFD_Chirurgien_CICR";
	hiddenSelections[]= {"camo1", "camo2"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Camion_Civ\ZamakCivCabine_CICR.paa", "\24eBAC_Vehicles\Data\Camion_Civ\ZamakCivBache_CICR.paa"};
	typicalCargo[] = {"TFD_Medecin_CICR","TFD_Chirurgien_CICR", "TFD_Chirurgien_CICR"};
	vehicleClass = "Support";
};

class 24eBAC_CamionCiv_CICRnonbache:I_Truck_02_transport_F
{
	scope = 2;
	side = 3;
	faction = "CIV_F";
	displayName="Zamak (CICR)";
	author = "Heartbroken";
	crew = "TFD_Medecin_CICR";
	hiddenSelections[]= {"camo1", "camo2"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Camion_Civ\ZamakCivCabine_CICR.paa", "\24eBAC_Vehicles\Data\Camion_Civ\ZamakCivBache_CICR.paa"};
	typicalCargo[] = {"TFD_Medecin_CICR", "TFD_Medecin_CICR"};
	vehicleClass = "Support";
};

class 24eBAC_CamionCiv_SP:C_IDAP_Truck_02_water_F
{
	scope = 2;
	side = 3;
	faction = "CIV_F";
	displayName="CCGC (SDIS 44)";
	author = "Heartbroken";
	crew = "TFD_Pompier_polo";
	hiddenSelections[]= {"camo1", "camo2"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Camion_Civ\ZamakCivCabine_SP.paa", "\24eBAC_Vehicles\Data\Camion_Civ\ZamakCivCiterne_SP.paa"};
	typicalCargo[] = {"TFD_Pompier_polo", "TFD_Pompier_polo"};
	vehicleClass = "Support";
	DLC = "";
};

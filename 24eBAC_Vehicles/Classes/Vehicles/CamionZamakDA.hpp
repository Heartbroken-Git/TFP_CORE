class 24eBAC_CamionDA:I_Truck_02_covered_F
{
	scope = 2;
	side = 1;
	faction = "TFD_AT";
	displayName="Zamak Bache (Daguet)";
	author = "Heartbroken";
	crew = "B_soldier_F";
	hiddenSelections[]= {"camo1", "camo2"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Camion_DA\ZamakDACabine_Assaut.paa", "\24eBAC_Vehicles\Data\Camion_DA\ZamakDABache.paa"};
	typicalCargo[] = {"B_soldier_F"};
};

class 24eBAC_CamionDA_fuel:I_Truck_02_fuel_F
{
	scope = 2;
	side = 1;
	faction = "TFD_AT";
	displayName="Zamak SEA (Daguet)";
	author = "Heartbroken";
	crew = "B_soldier_F";
	hiddenSelections[]= {"camo1", "camo2"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Camion_DA\ZamakDACabine_Intendance.paa", "\24eBAC_Vehicles\Data\Camion_DA\ZamakDAEssence.paa"};
	typicalCargo[] = {"B_soldier_F"};
};

class 24eBAC_CamionDA_nonbache:I_Truck_02_transport_F
{
	scope = 2;
	side = 1;
	faction = "TFD_AT";
	displayName="Zamak (Daguet)";
	author = "Heartbroken";
	crew = "B_soldier_F";
	hiddenSelections[]= {"camo1", "camo2"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Camion_DA\ZamakDACabine_NonBache.paa", "\24eBAC_Vehicles\Data\Camion_DA\ZamakDANonBache.paa"};
	typicalCargo[] = {"B_soldier_F"};
};

//class I_Truck_02_medical_F; //Fait appara�tre des symboles sur la retexture
class 24eBAC_CamionDA_EVASAN:I_Truck_02_covered_F
{
	scope = 2;
	side = 1;
	faction = "TFD_AT";
	displayName="Zamak EVASAN (Daguet)";
	author = "Heartbroken";
	crew = "B_medic_F";
	hiddenSelections[]= {"camo1", "camo2"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Camion_DA\ZamakDACabine_EVASAN.paa", "\24eBAC_Vehicles\Data\Camion_DA\ZamakDAEVASAN.paa"};
	typicalCargo[] = {"B_medic_F"};
	vehicleClass = "Support";
	attendant = 1;
};

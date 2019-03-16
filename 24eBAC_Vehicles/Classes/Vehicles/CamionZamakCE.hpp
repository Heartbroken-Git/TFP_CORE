class 24eBAC_CamionCE:I_Truck_02_covered_F
{
	scope = 2;
	side = 1;
	faction = "TFD_AT";
	displayName="Zamak Bache (Centre Europe)";
	author = "Heartbroken";
	crew = "B_soldier_F";
	hiddenSelections[]= {"camo1", "camo2"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Camion_CE\ZamakCECabine_Assaut.paa", "\24eBAC_Vehicles\Data\Camion_CE\ZamakCEBache.paa"};
	typicalCargo[] = {"B_soldier_F"};
};

class I_Truck_02_fuel_F;
class 24eBAC_CamionCE_fuel:I_Truck_02_fuel_F
{
	scope = 2;
	side = 1;
	faction = "TFD_AT";
	displayName="Zamak SEA (Centre Europe)";
	author = "Heartbroken";
	crew = "B_soldier_F";
	hiddenSelections[]= {"camo1", "camo2"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Camion_CE\ZamakCECabine_Intendance.paa", "\24eBAC_Vehicles\Data\Camion_CE\ZamakCEEssence.paa"};
	typicalCargo[] = {"B_soldier_F"};
};

class I_Truck_02_transport_F;
class 24eBAC_CamionCE_nonbache:I_Truck_02_transport_F
{
	scope = 2;
	side = 1;
	faction = "TFD_AT";
	displayName="Zamak (Centre Europe)";
	author = "Heartbroken";
	crew = "B_soldier_F";
	hiddenSelections[]= {"camo1", "camo2"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Camion_CE\ZamakCECabine_NonBache.paa", "\24eBAC_Vehicles\Data\Camion_CE\ZamakCENonBache.paa"};
	typicalCargo[] = {"B_soldier_F"};
};

//class I_Truck_02_medical_F; //Fait apparaître des symboles sur la retexture
class 24eBAC_CamionCE_EVASAN:I_Truck_02_covered_F
{
	scope = 2;
	side = 1;
	faction = "TFD_AT";
	displayName="Zamak EVASAN (Centre Europe)";
	author = "Heartbroken";
	crew = "B_medic_F";
	hiddenSelections[]= {"camo1", "camo2"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Camion_CE\ZamakCECabine_EVASAN.paa", "\24eBAC_Vehicles\Data\Camion_CE\ZamakCEEVASAN.paa"};
	typicalCargo[] = {"B_medic_F"};
	vehicleClass = "Support";
	attendant = 1;
};

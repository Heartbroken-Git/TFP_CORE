//A FINIR !

class DefaultEventhandlers;	// External class reference

class CfgPatches
{
    class 24eBAC_Vehicles {
        units[] = {"24eBAC_LynxMN_camo","24eBAC_LynxMN_camo_armed","24eBAC_LynxMN","24eBAC_PantherMN","24eBAC_PantherMN_AEM","24eBAC_PantherMN_pedro","24eBAC_PantherMN_armed","24eBAC_VBCI_CE","24eBAC_CamionCE","24eBAC_CamionCE_fuel","24eBAC_VanKaki","24eBAC_VanKaki_container","24eBAC_VanKaki_fuel","24eBAC_VanDGA","24eBAC_VanDGAC","24eBAC_VanLaPoste","24eBAC_VanLaPoste_container","24eBAC_OffroadDGA_securite","24eBAC_OffroadDGAC_followme","24eBAC_OffroadDIR","24eBAC_OffroadTrain","24eBAC_OffroadTrain_CONVEX","24eBAC_PVP_CE","24eBAC_PVP40mm_CE","24eBAC_PVP127mm_CE","24eBAC_VanKaki_PSM","24eBAC_OffroadCoy","24eBAC_OffroadCoy_armed","24eBAC_EBG_CE","24eBAC_OffroadCICR","24eBAC_OffroadMSF","24eBAC_OffroadRC","24eBAC_SUVMSF","24eBAC_SUVCICR","24eBAC_Hatchback_CICR","24eBAC_Hatchback_MSF","24eBAC_Hatchback_RC","24eBAC_PantherCICR","24eBAC_CamionCE_nonbache","24eBAC_CamionCE_EVASAN","24eBAC_CamionCiv_MSF","24eBAC_CamionCiv_CICR","24eBAC_CamionCiv_CICRnonbache","24eBAC_VanSable","24eBAC_VanSable_container","24eBAC_VanSable_fuel","24eBAC_VanSable_PSM","24eBAC_VBCI_DA","24eBAC_EBG_DA","24eBAC_PVP_DA","24eBAC_PVP40mm_DA","24eBAC_PVP127mm_DA","24eBAC_OffroadCoyDA","24eBAC_OffroadCoyDA_armed","24eBAC_CamionDA","24eBAC_CamionDA_fuel","24eBAC_CamionDA_nonbache","24eBAC_CamionDA_EVASAN"}; 
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Air_F_EPB_Heli_light_03","TFD_Units"}; //Mettre les autres hélicos ici ?
		version = 2.3
		author = "Heartbroken";
    };
};


class cfgVehicles
{
    //Lynx
	class Heli_light_03_unarmed_base_F;  //Classname de l'hélico modifié 
    class 24eBAC_LynxMN_camo: Heli_light_03_unarmed_base_F 
        { 
            _generalMacro = "I_Heli_light_03_unarmed_F"; 
            scope = 2; 
            side = 1; 
            faction = "TFD_MN";               
            displayName="HAS.4 Lynx Marine";
			author = "Heartbroken";
			crew = "B_Helipilot_F"; //Ai ajouté un point virgule après cette ligne, si besoin de débug penser à l'enlever
			hiddenSelections[]= {"camo"}; 
			hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Lynx_MN\LynxMNCamo.paa"};            
			typicalCargo[] = {"B_Helipilot_F"}; 
            availableForSupportTypes[] = {"Drop","Transport"}; 
       };  
	
	class Heli_light_03_base_F; 
    class 24eBAC_LynxMN_camo_armed: Heli_light_03_base_F     
        { 
            _generalMacro = "I_Heli_light_03_F"; 
            scope = 2; 
            side = 1; 
            faction = "TFD_MN";            
            displayName="HAS.4 Lynx Marine (Arme)";
			author = "Heartbroken";
			crew = "B_Helipilot_F";
			hiddenSelections[]= {"camo"};
			hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Lynx_MN\LynxMNCamo.paa"};            
			typicalCargo[] = {"B_Helipilot_F"}; 
            availableForSupportTypes[] = {"Drop","Transport"};  //Devrais apparemment être vide ? (hélico armé)
       };  
	
    class 24eBAC_LynxMN:Heli_light_03_unarmed_base_F     //Lynx en simple gris Marine (transport uniquement)
        { 
            _generalMacro = "I_Heli_light_03_unarmed_F"; 
            scope = 2; 
            side = 1; 
            faction = "TFD_MN";             
            displayName="HAS.4 Lynx Marine (Gris)";
			author = "Heartbroken";
			crew = "B_Helipilot_F";
			hiddenSelections[]= {"camo"};
			hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Lynx_MN\LynxMNGris.paa"};            
			typicalCargo[] = {"B_Helipilot_F"}; 
            availableForSupportTypes[] = {"Drop","Transport"}; 
       };
	
	//Panther
	class Heli_Light_02_unarmed_base_F;
	class 24eBAC_PantherMN:Heli_Light_02_unarmed_base_F     //Base pour Panther
        { 
            _generalMacro = "O_Heli_Light_02_unarmed_F"; 
            scope = 2; 
            side = 1; 
            faction = "TFD_MN";             
            displayName="AS.365SB Panther Marine (Fonce)";
			author = "Heartbroken";
			crew = "B_Helipilot_F";
			hiddenSelections[]= {"camo1"};
			hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Panther_MN\PantherMNFonce.paa"};            
			typicalCargo[] = {"B_Helipilot_F"}; 
            availableForSupportTypes[] = {"Drop","Transport"}; 
		};
		
	class 24eBAC_PantherMN_AEM:Heli_Light_02_unarmed_base_F
        { 
            _generalMacro = "O_Heli_Light_02_unarmed_F"; 
            scope = 2; 
            side = 1; 
            faction = "TFD_MN";             
            displayName="AS.365SB Panther Marine (AEM)";
			author = "Heartbroken";
			crew = "B_Helipilot_F";
			hiddenSelections[]= {"camo1"};
			hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Panther_MN\PantherMNAEM.paa"};            
			typicalCargo[] = {"B_Helipilot_F"}; 
            availableForSupportTypes[] = {"Drop","Transport"}; 
		};
		
	class 24eBAC_PantherMN_pedro:Heli_Light_02_unarmed_base_F
        { 
            _generalMacro = "O_Heli_Light_02_unarmed_F"; 
            scope = 2; 
            side = 1; 
            faction = "TFD_MN";             
            displayName="AS.365SB Panther Marine (Pedro)";
			author = "Heartbroken";
			crew = "B_Helipilot_F";
			hiddenSelections[]= {"camo1"};
			hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Panther_MN\PantherMNPedro.paa"};            
			typicalCargo[] = {"B_Helipilot_F"}; 
            availableForSupportTypes[] = {"Drop","Transport"}; 
		};
		
	class 24eBAC_PantherCICR:Heli_Light_02_unarmed_base_F
        { 
            _generalMacro = "O_Heli_Light_02_unarmed_F"; 
            scope = 2; 
            side = 3; 
            faction = "CIV_F";             
            displayName="AS.365SB Panther CICR";
			author = "Heartbroken";
			crew = "C_Marshal_F";
			hiddenSelections[]= {"camo1"};
			hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Panther_Civ\PantherCICR.paa"};            
			typicalCargo[] = {"C_Marshal_F"}; 
            availableForSupportTypes[] = {"Drop","Transport"}; 
		};
		
	class Heli_Light_02_base_F;
	class 24eBAC_PantherMN_armed:Heli_Light_02_base_F
        { 
            _generalMacro = "O_Heli_Light_02_unarmed_F"; 
            scope = 2; 
            side = 1; 
            faction = "TFD_MN";             
            displayName="AS.365SB Panther Marine (Arme)";
			author = "Heartbroken";
			crew = "B_Helipilot_F";
			hiddenSelections[]= {"camo1"};
			hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Panther_MN\PantherMNFonce.paa"};            
			typicalCargo[] = {"B_Helipilot_F"}; 
            availableForSupportTypes[] = {"Drop","Transport"}; 
		};
		
	//VBCI
	class B_APC_Wheeled_01_cannon_F;
	class 24eBAC_VBCI_CE:B_APC_Wheeled_01_cannon_F
        { 
            //_generalMacro = "B_APC_Wheeled_01_cannon_F"; 
            scope = 2; 
            side = 1; 
            faction = "TFD_AT";             
            displayName="VBCI (Centre Europe)";
			author = "Heartbroken";
			crew = "B_crew_F";
			hiddenSelections[]= {"camo1", "camo2", "camo3"};
			hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\VBCI_CE\VBCICE_Corps.paa", "\24eBAC_Vehicles\Data\VBCI_CE\VBCICE_Roues.paa", "\24eBAC_Vehicles\Data\VBCI_CE\VBCICE_Tourelle.paa"};            
			typicalCargo[] = {"B_soldier_F"}; 
		};
		
	class 24eBAC_VBCI_DA:B_APC_Wheeled_01_cannon_F
        { 
            //_generalMacro = "B_APC_Wheeled_01_cannon_F"; 
            scope = 2; 
            side = 1; 
            faction = "TFD_AT";             
            displayName="VBCI (Daguet)";
			author = "Heartbroken";
			crew = "B_crew_F";
			hiddenSelections[]= {"camo1", "camo2", "camo3"};
			hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\VBCI_DA\VBCIDA_Corps.paa", "\24eBAC_Vehicles\Data\VBCI_DA\VBCIDA_Roues.paa", "\24eBAC_Vehicles\Data\VBCI_DA\VBCIDA_Tourelle.paa"};            
			typicalCargo[] = {"B_soldier_F"}; 
		};
		
	//Camion (Zamak) CE
	class I_Truck_02_covered_F;
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
		};
		
	//Camion (Zamak) Civil
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
		
	//Camion (Zamak) DA
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
		
	//class I_Truck_02_medical_F; //Fait apparaître des symboles sur la retexture
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
		};
	
	//Van Kaki
	class C_Van_01_transport_F;
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
					init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandom.sqf"""
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
					init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandom.sqf"""
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
					init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandomPSM.sqf"""
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
					init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandom.sqf"""
				};
		};
		
	//Van Sable
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
					init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandom.sqf"""
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
					init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandom.sqf"""
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
					init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandomPSM.sqf"""
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
					init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandom.sqf"""
				};
		};
	
	//Van Blanc
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
					init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandom.sqf"""
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
					init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandom.sqf"""
				};
		};
	
	//Van Bonus
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
					init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandom.sqf"""
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
					init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandom.sqf"""
				};
		};
		
	//Offroad Civil
	class C_Offroad_01_F;
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
					init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandomPolOffroad.sqf"""
				};
		};
		
	class 24eBAC_OffroadDGAC_followme:C_Offroad_01_F
        { 
			_generalMacro = "C_Offroad_01_F"; //peut-être à remplacer par la version Réparation
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
					init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandomServOffroad.sqf"""
				};
		};
	
	class 24eBAC_OffroadDIR:C_Offroad_01_F
        { 
			_generalMacro = "C_Offroad_01_F"; //peut-être à remplacer par la version Réparation
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
					init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandomServOffroad.sqf"""
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
					init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandomNGOOffroad.sqf"""
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
					init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandomNGOOffroad.sqf"""
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
					init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandomNGOOffroad.sqf"""
				};
		};
		
	//SUV Civil
	class C_SUV_01_F;
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
					init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandom.sqf"""
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
					init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandom.sqf"""
				};
		};
	
	//Hatchback Civil
	class C_Hatchback_01_F;
	class 24eBAC_Hatchback_CICR:C_Hatchback_01_F
        { 
			_generalMacro = "C_Hatchback_01_F";
            scope = 2; 
            side = 3; 
            faction = "CIV_F";             
            displayName="Voiture a hayon CICR";
			author = "Heartbroken";
			crew = "TFD_Benevole_polo";
			hiddenSelections[]= {"Camo1"};
			hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Hatchback_Civ\Hatchback_CICR.paa"};            
			typicalCargo[] = {"TFD_Benevole_polo","TFD_Benevole_polo"}; 
			class EventHandlers 
				{
					init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandom.sqf"""
				};
		};
		
	class 24eBAC_Hatchback_MSF:C_Hatchback_01_F
        { 
			_generalMacro = "C_Hatchback_01_F";
            scope = 2; 
            side = 3; 
            faction = "CIV_F";             
            displayName="Voiture a hayon MSF";
			author = "Heartbroken";
			crew = "C_scientist_F";
			hiddenSelections[]= {"Camo1"};
			hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Hatchback_Civ\Hatchback_MSF.paa"};            
			typicalCargo[] = {"C_scientist_F"}; 
			class EventHandlers 
				{
					init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandom.sqf"""
				};
		};
	
	class 24eBAC_Hatchback_RC:C_Hatchback_01_F
        { 
			_generalMacro = "C_Hatchback_01_F";
            scope = 2; 
            side = 3; 
            faction = "CIV_F";             
            displayName="Voiture a hayon Croissant Rouge";
			author = "Heartbroken";
			crew = "C_scientist_F";
			hiddenSelections[]= {"Camo1"};
			hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Hatchback_Civ\Hatchback_RC.paa"};            
			typicalCargo[] = {"C_scientist_F"}; 
			class EventHandlers 
				{
					init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandom.sqf"""
				};
		};
	
	//Offroad Militaire
	class 24eBAC_OffroadTrain:C_Offroad_01_F
        { 
			_generalMacro = "C_Offroad_01_F";
            scope = 2; 
            side = 1; 
            faction = "TFD_AT";             
            displayName="Tout-terrain Train";
			author = "Heartbroken";
			crew = "B_soldier_F";
			hiddenSelections[]= {"camo", "camo2"};
			hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Offroad_Mil\OffroadTrain.paa", "\24eBAC_Vehicles\Data\Offroad_Civ\Offroad_DGASec.paa"};            
			typicalCargo[] = {"B_soldier_F"}; 
			class EventHandlers 
				{
					init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandom.sqf"""
				};
		};
		
	class 24eBAC_OffroadTrain_CONVEX:C_Offroad_01_F
        { 
			_generalMacro = "C_Offroad_01_F";
            scope = 2; 
            side = 1; 
            faction = "TFD_AT";             
            displayName="Tout-terrain Train (CONVEX)";
			author = "Heartbroken";
			crew = "B_soldier_F";
			hiddenSelections[]= {"camo", "camo2"};
			hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Offroad_Mil\OffroadTrain_CONVEX.paa", "\24eBAC_Vehicles\Data\Offroad_Civ\Offroad_DGASec.paa"};            
			typicalCargo[] = {"B_soldier_F"}; 
			class EventHandlers 
				{
					init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandomServOffroad.sqf"""
				};
		};
	
	class B_G_Offroad_01_F;
	class 24eBAC_OffroadCoy:B_G_Offroad_01_F
        { 
			_generalMacro = "B_G_Offroad_01_F";
            scope = 2; 
            side = 1; 
            faction = "TFD_AT";             
            displayName="Tout-terrain Commandos (Centre Europe)";
			author = "Heartbroken";
			crew = "B_recon_F";
			hiddenSelections[]= {"camo", "camo2"};
			hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Offroad_Mil\OffroadCoyCE.paa", "\24eBAC_Vehicles\Data\Offroad_Mil\OffroadCoyCE.paa"};            
			typicalCargo[] = {"B_recon_F"}; 
			class EventHandlers 
				{
					init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandomCoyOffroad.sqf"""
				};
		};
		
	class B_G_Offroad_01_armed_F;
	class 24eBAC_OffroadCoy_armed:B_G_Offroad_01_armed_F
        { 
			_generalMacro = "B_G_Offroad_01_armed_F";
            scope = 2; 
            side = 1; 
            faction = "TFD_AT";             
            displayName="Tout-terrain Commandos 12.7mm (Centre Europe)";
			author = "Heartbroken";
			crew = "B_recon_F";
			hiddenSelections[]= {"camo", "camo2"};
			hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Offroad_Mil\OffroadCoyCE_hmg.paa", "\24eBAC_Vehicles\Data\Offroad_Mil\OffroadCoyCE_hmg.paa"};            
			typicalCargo[] = {"B_recon_F"}; 
			class EventHandlers 
				{
					init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandomCoyOffroad.sqf"""
				};
		};
		
	class 24eBAC_OffroadCoyDA:B_G_Offroad_01_F
        { 
			_generalMacro = "B_G_Offroad_01_F";
            scope = 2; 
            side = 1; 
            faction = "TFD_AT";             
            displayName="Tout-terrain Commandos (Daguet)";
			author = "Heartbroken";
			crew = "B_recon_F";
			hiddenSelections[]= {"camo", "camo2"};
			hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Offroad_Mil\OffroadCoyDA.paa", "\24eBAC_Vehicles\Data\Offroad_Mil\OffroadCoyDA.paa"};            
			typicalCargo[] = {"B_recon_F"}; 
			class EventHandlers 
				{
					init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandomCoyOffroad.sqf"""
				};
		};
		
	class 24eBAC_OffroadCoyDA_armed:B_G_Offroad_01_armed_F
        { 
			_generalMacro = "B_G_Offroad_01_armed_F";
            scope = 2; 
            side = 1; 
            faction = "TFD_AT";             
            displayName="Tout-terrain Commandos 12.7mm (Daguet)";
			author = "Heartbroken";
			crew = "B_recon_F";
			hiddenSelections[]= {"camo", "camo2"};
			hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Offroad_Mil\OffroadCoyDA_hmg.paa", "\24eBAC_Vehicles\Data\Offroad_Mil\OffroadCoyDA_hmg.paa"};            
			typicalCargo[] = {"B_recon_F"}; 
			class EventHandlers 
				{
					init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandomCoyOffroad.sqf"""
				};
		};
	
	//PVP
	class B_MRAP_01_F;
	class 24eBAC_PVP_CE:B_MRAP_01_F
        { 
            _generalMacro = "B_MRAP_01_F"; 
            scope = 2; 
            side = 1; 
            faction = "TFD_AT";             
            displayName="PVP (Centre Europe)";
			author = "Heartbroken";
			crew = "B_soldier_F";
			hiddenSelections[]= {"camo1", "camo2"};
			hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\PVP_CE\PVPCE_Avant.paa", "\24eBAC_Vehicles\Data\PVP_CE\PVPCE_Arriere.paa"};            
			typicalCargo[] = {"B_soldier_F"}; 
		};
		
	class B_MRAP_01_gmg_F;
	class 24eBAC_PVP40mm_CE:B_MRAP_01_gmg_F
        { 
            _generalMacro = "B_MRAP_01_gmg_F"; 
            scope = 2; 
            side = 1; 
            faction = "TFD_AT";             
            displayName="PVP 40mm (Centre Europe)";
			author = "Heartbroken";
			crew = "B_soldier_F";
			hiddenSelections[]= {"camo1", "camo2","camo3"};
			hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\PVP_CE\PVPCE_Avant_gmg.paa", "\24eBAC_Vehicles\Data\PVP_CE\PVPCE_Arriere_gmg.paa", "\24eBAC_Vehicles\Data\PVP_CE\PVPCE_Tourelle.paa"};            
			typicalCargo[] = {"B_soldier_F"}; 
		};
		
	class B_MRAP_01_hmg_F;
	class 24eBAC_PVP127mm_CE:B_MRAP_01_hmg_F
        { 
            _generalMacro = "B_MRAP_01_hmg_F"; 
            scope = 2; 
            side = 1; 
            faction = "TFD_AT";             
            displayName="PVP 12.7mm (Centre Europe)";
			author = "Heartbroken";
			crew = "B_soldier_F";
			hiddenSelections[]= {"camo1", "camo2","camo3"};
			hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\PVP_CE\PVPCE_Avant_hmg.paa", "\24eBAC_Vehicles\Data\PVP_CE\PVPCE_Arriere_hmg.paa","\24eBAC_Vehicles\Data\PVP_CE\PVPCE_Tourelle.paa"};            
			typicalCargo[] = {"B_soldier_F"}; 
		};
		
	class 24eBAC_PVP_DA:B_MRAP_01_F
        { 
            _generalMacro = "B_MRAP_01_F"; 
            scope = 2; 
            side = 1; 
            faction = "TFD_AT";             
            displayName="PVP (Daguet)";
			author = "Heartbroken";
			crew = "B_soldier_F";
			hiddenSelections[]= {"camo1", "camo2"};
			hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\PVP_DA\PVPDA_Avant.paa", "\24eBAC_Vehicles\Data\PVP_DA\PVPDA_Arriere.paa"};            
			typicalCargo[] = {"B_soldier_F"}; 
		};
		
	class 24eBAC_PVP40mm_DA:B_MRAP_01_gmg_F
        { 
            _generalMacro = "B_MRAP_01_gmg_F"; 
            scope = 2; 
            side = 1; 
            faction = "TFD_AT";             
            displayName="PVP 40mm (Daguet)";
			author = "Heartbroken";
			crew = "B_soldier_F";
			hiddenSelections[]= {"camo1", "camo2","camo3"};
			hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\PVP_DA\PVPDA_Avant_gmg.paa", "\24eBAC_Vehicles\Data\PVP_DA\PVPDA_Arriere_gmg.paa", "\24eBAC_Vehicles\Data\PVP_DA\PVPDA_Tourelle.paa"};            
			typicalCargo[] = {"B_soldier_F"}; 
		};
		
	class 24eBAC_PVP127mm_DA:B_MRAP_01_hmg_F
        { 
            _generalMacro = "B_MRAP_01_hmg_F"; 
            scope = 2; 
            side = 1; 
            faction = "TFD_AT";             
            displayName="PVP 12.7mm (Daguet)";
			author = "Heartbroken";
			crew = "B_soldier_F";
			hiddenSelections[]= {"camo1", "camo2","camo3"};
			hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\PVP_DA\PVPDA_Avant_hmg.paa", "\24eBAC_Vehicles\Data\PVP_DA\PVPDA_Arriere_hmg.paa","\24eBAC_Vehicles\Data\PVP_DA\PVPDA_Tourelle.paa"};            
			typicalCargo[] = {"B_soldier_F"}; 
		};
		
	//EBG
	class B_APC_Tracked_01_CRV_F;
	class 24eBAC_EBG_CE:B_APC_Tracked_01_CRV_F
        { 
            _generalMacro = "B_APC_Tracked_01_CRV_F"; 
            scope = 2; 
            side = 1; 
            faction = "TFD_AT";             
            displayName="EBG (Centre Europe)";
			author = "Heartbroken";
			crew = "B_engineer_F";
			hiddenSelections[]= {"camo1", "camo2","camo3","camo4"};
			hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\EBG_CE\EBGCE_Corps.paa", "\24eBAC_Vehicles\Data\EBG_CE\EBGCE_Jupes.paa", "\24eBAC_Vehicles\Data\PVP_CE\PVPCE_Tourelle.paa","\24eBAC_Vehicles\Data\EBG_CE\EBGCE_Dozer.paa"};            
			typicalCargo[] = {"B_engineer_F"}; 
		};
		
	class 24eBAC_EBG_DA:B_APC_Tracked_01_CRV_F
        { 
            _generalMacro = "B_APC_Tracked_01_CRV_F"; 
            scope = 2; 
            side = 1; 
            faction = "TFD_AT";             
            displayName="EBG (Daguet)";
			author = "Heartbroken";
			crew = "B_engineer_F";
			hiddenSelections[]= {"camo1", "camo2","camo3","camo4"};
			hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\EBG_DA\EBGDA_Corps.paa", "\24eBAC_Vehicles\Data\EBG_DA\EBGDA_Jupes.paa", "\24eBAC_Vehicles\Data\PVP_DA\PVPDA_Tourelle.paa","\24eBAC_Vehicles\Data\EBG_DA\EBGDA_Dozer.paa"};            
			typicalCargo[] = {"B_engineer_F"}; 
		};
};
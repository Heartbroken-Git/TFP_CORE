class CfgPatches {
	class TFD_Units {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {/*Mettre un addon de base avec des unités*/};
		version = 1.0
		author[] = {"Heartbroken"};
	};
};

class CfgFactionClasses {
	
	class TFD_AA {
		displayName = "Armee de l'Air";
		priority = 5;
		side = 1;
		icon = "\TFD_Units\Data\Icons\Ico_AA.paa";
		//flag = "\a3\Data_f\Flags\flag_Altis_co.paa"; //Mettre le drapeau de la France plus tard ?
	};
	
	class TFD_AT {
		displayName = "Armee de Terre";
		priority = 6;
		side = 1;
		icon = "\TFD_Units\Data\Icons\Ico_AT.paa";
		//flag = "\a3\Data_f\Flags\flag_Altis_co.paa"; //Mettre le drapeau de la France plus tard ?
	};
	
	class TFD_GN {
		displayName = "Gendarmerie Nationale";
		priority = 7;
		side = 1;
		icon = "\TFD_Units\Data\Icons\Ico_GN.paa";
		//flag = "\a3\Data_f\Flags\flag_Altis_co.paa"; //Mettre le drapeau de la France plus tard ?
	};
	
	class TFD_MN {
		displayName = "Marine Nationale";
		priority = 8;
		side = 1;
		icon = "\TFD_Units\Data\Icons\Ico_MN.paa";
		//flag = "\a3\Data_f\Flags\flag_Altis_co.paa"; //Mettre le drapeau de la France plus tard ?
	};
};

class CfgWeapons {
	
	class H_MilCap_blue;
	class TFD_CasquetteGend_Depart : H_MilCap_blue {
		_generalMacro = "H_MilCap_blue"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Casquette Souple (Gendarmerie Departementale)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Headgear\CasquetteGend_Depart.paa"};  
	};
	
	class TFD_CasquetteGend_Mobile : H_MilCap_blue {
		_generalMacro = "H_MilCap_blue"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Casquette Souple (Gendarmerie Mobile)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Headgear\CasquetteGend_Mobile.paa"};  
	};
	
	class TFD_CasquettePM_ASVP : H_MilCap_blue {
		_generalMacro = "H_MilCap_blue"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Casquette Souple (ASVP)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Headgear\CasquettePM_ASVP.paa"};  
	};
	
	class TFD_CasquettePM : H_MilCap_blue {
		_generalMacro = "H_MilCap_blue"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Casquette Souple (Police Municipale)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Headgear\CasquettePM.paa"};  
	};
}
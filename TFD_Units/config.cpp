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
	
	// CASQUETTE SOUPLE
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
	
	class TFD_CasquetteAdmPen : H_MilCap_blue {
		_generalMacro = "H_MilCap_blue"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Casquette Souple (Administration Penitentiaire)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Headgear\CasquetteAdmPen.paa"};  
	};
	
	class TFD_CasquetteSP : H_MilCap_blue {
		_generalMacro = "H_MilCap_blue"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Casquette Souple (Sapeur-Pompier)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Headgear\CasquetteSP.paa"};  
	};
	
	// VESTES
	
	// RECYCLEUR
	class V_RebreatherB;
	class TFD_RecycleurHV : V_RebreatherB {
		_generalMacro = "V_RebreatherB"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Recycleur (Haute Visibilite)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Vest\RecycleurHV.paa"};
		hiddenUnderwaterSelections[] = {"hide"};
		shownUnderwaterSelections[] = {"unhide","unhide2"};
		hiddenUnderwaterSelectionsTextures[] = {"\TFD_Units\Data\Vest\RecycleurHV.paa","\TFD_Units\Data\Vest\RecycleurHV.paa","\A3\characters_f\data\visors_ca.paa"};
	};
	
	// GILET TACTIQUE
	class V_TacVest_blk;
	class TFD_GHV_Infirmier : V_TacVest_blk {
		_generalMacro = " V_TacVest_blk"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Gilet Haute Visibilite (Infirmier)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Vest\GHV_Infirmier.paa"};
	};
	
	class TFD_GHV_Medecin : V_TacVest_blk {
		_generalMacro = " V_TacVest_blk"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Gilet Haute Visibilite (Medecin)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Vest\GHV_Medecin.paa"};
	};
	
	class TFD_GHV_Formateur : V_TacVest_blk {
		_generalMacro = " V_TacVest_blk"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Gilet Haute Visibilite (Formateur)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Vest\GHV_Formateur.paa"};
	};
	
	// UNIFORME
	class UniformItem;
	
	// POLO
	class U_Rangemaster;
	class TFD_PoloGend : U_Rangemaster {
		_generalMacro = "U_Rangemaster"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Polo (Gendarmerie Nationale)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Uniform\PoloGend.paa"};
		class ItemInfo: UniformItem{
            uniformModel = "-";
            uniformClass = TFD_Gendarme_Depart;
            containerClass = Supply40;
            mass = 40;
		};
	};
	
	class TFD_PoloSP : U_Rangemaster {
		_generalMacro = "U_Rangemaster"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Polo (Sapeur-Pompier)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Uniform\PoloSP.paa"};
		class ItemInfo: UniformItem{
            uniformModel = "-";
            uniformClass = TFD_Pompier_polo;
            containerClass = Supply40;
            mass = 40;
		};
	};
	
	class TFD_PoloSP_air : U_Rangemaster {
		_generalMacro = "U_Rangemaster"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Polo (Pompier de l'Air)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Uniform\PoloSP_air.paa"};
		class ItemInfo: UniformItem{
            uniformModel = "-";
            uniformClass = TFD_PompierAir_polo;
            containerClass = Supply40;
            mass = 40;
		};
	};
	
	// WETSUIT
	class U_B_Wetsuit;
	class TFD_WetsuitHV : U_B_Wetsuit {
		_generalMacro = "U_B_Wetsuit"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Combinaison de plongee (Haute Visibilite)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Uniform\WetsuitHV.paa"};
		class ItemInfo: UniformItem{
            uniformModel = "-";
            uniformClass = TFD_Pompier_PL;
            containerClass = Supply80;
			uniformType = "Neopren";
            mass = 60;
		};
	}
};

class CfgVehicles {
	
	/// Magazines macros definition ///
 
	#define mag_2(a) a, a
	#define mag_3(a) a, a, a
	#define mag_4(a) a, a, a, a
	#define mag_5(a) a, a, a, a, a
	#define mag_6(a) a, a, a, a, a, a
	#define mag_7(a) a, a, a, a, a, a, a
	#define mag_8(a) a, a, a, a, a, a, a, a
	#define mag_9(a) a, a, a, a, a, a, a, a, a
	#define mag_10(a) a, a, a, a, a, a, a, a, a, a
	#define mag_11(a) a, a, a, a, a, a, a, a, a, a, a
	#define mag_12(a) a, a, a, a, a, a, a, a, a, a, a, a
	
	class B_RangeMaster_F;                     // For inheritance to work, the base class has to be defined.
    class TFD_Gendarme_Depart: B_RangeMaster_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Heartbroken";         // The name of the author of the asset, which is displayed in the editor.
		displayName = "Gendarme (Departemental)";
		side = 1;
		faction = "TFD_GN";
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        uniformClass = "TFD_PoloGend";                          // This links this soldier to a particular uniform. For the details, see below.
		hiddenSelections[] = {"Camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\PoloGend.paa"}; 
        weapons[] = {hgun_Rook40_F, Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {hgun_Rook40_F, Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit};                // Which items the character has.
        RespawnItems[] = {FirstAidKit};         // Which items the character respawns with.
        magazines[] = {mag_4(16Rnd_9x21_Mag), Chemlight_green, Chemlight_green};               // What ammunition the character has.
        respawnMagazines[] = {mag_4(16Rnd_9x21_Mag), Chemlight_green, Chemlight_green};        // What ammunition the character respawns with.
        linkedItems[] = {V_Rangemaster_belt, TFD_CasquetteGend_Depart, ItemMap, ItemCompass, ItemWatch, ItemRadio};               // Which items the character has.
        respawnLinkedItems[] = {V_Rangemaster_belt, TFD_CasquetteGend_Depart, ItemMap, ItemCompass, ItemWatch, ItemRadio};        // Which items the character respawns with.
    };
	
	class TFD_Gendarme_Mobile: B_RangeMaster_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Heartbroken";         // The name of the author of the asset, which is displayed in the editor.
		displayName = "Gendarme (Mobile)";
		side = 1;
		faction = "TFD_GN";
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        uniformClass = "TFD_PoloGend";                          // This links this soldier to a particular uniform. For the details, see below.
		hiddenSelections[] = {"Camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\PoloGend.paa"}; 
        weapons[] = {hgun_Rook40_F, Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {hgun_Rook40_F, Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit};                // Which items the character has.
        RespawnItems[] = {FirstAidKit};         // Which items the character respawns with.
        magazines[] = {mag_4(16Rnd_9x21_Mag), Chemlight_green, Chemlight_green};               // What ammunition the character has.
        respawnMagazines[] = {mag_4(16Rnd_9x21_Mag), Chemlight_green, Chemlight_green};        // What ammunition the character respawns with.
        linkedItems[] = {V_Rangemaster_belt, TFD_CasquetteGend_Mobile, ItemMap, ItemCompass, ItemWatch, ItemRadio};               // Which items the character has.
        respawnLinkedItems[] = {V_Rangemaster_belt, TFD_CasquetteGend_Mobile, ItemMap, ItemCompass, ItemWatch, ItemRadio};        // Which items the character respawns with.
    };
	
	class TFD_Pompier_polo: B_RangeMaster_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Heartbroken";         // The name of the author of the asset, which is displayed in the editor.
		displayName = "Pompier (Polo)";
		side = 3;
		faction = "CIV_F";
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        uniformClass = "TFD_PoloSP";                          // This links this soldier to a particular uniform. For the details, see below.
		hiddenSelections[] = {"Camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\PoloSP.paa"}; 
        weapons[] = {Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};                // Which items the character has.
        RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};         // Which items the character respawns with.
        magazines[] = {Chemlight_green, Chemlight_green};               // What ammunition the character has.
        respawnMagazines[] = {Chemlight_green, Chemlight_green};        // What ammunition the character respawns with.
        linkedItems[] = {TFD_CasquetteSP, ItemMap, ItemCompass, ItemWatch, ItemRadio};               // Which items the character has.
        respawnLinkedItems[] = {TFD_CasquetteSP, ItemMap, ItemCompass, ItemWatch, ItemRadio};        // Which items the character respawns with.
    };
	
	class TFD_PompierAir_polo: B_RangeMaster_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Heartbroken";         // The name of the author of the asset, which is displayed in the editor.
		displayName = "Pompier de l'Air (Polo)";
		side = 1;
		faction = "TFD_AA";
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        uniformClass = "TFD_PoloSP_air";                          // This links this soldier to a particular uniform. For the details, see below.
		hiddenSelections[] = {"Camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\PoloSP_air.paa"}; 
        weapons[] = {Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};                // Which items the character has.
        RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};         // Which items the character respawns with.
        magazines[] = {Chemlight_green, Chemlight_green};               // What ammunition the character has.
        respawnMagazines[] = {Chemlight_green, Chemlight_green};        // What ammunition the character respawns with.
        linkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio};               // Which items the character has.
        respawnLinkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio};        // Which items the character respawns with.
    };
	
	class B_diver_F;
    class TFD_Pompier_PL: B_diver_F
    {
        author = "Heartbroken";
		displayName = "Sapeur-Pompier (Plongeur)";
		side = 3;
		faction = "CIV_F";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        uniformClass = "TFD_WetsuitHV";
		hiddenSelections[] = {"Camo1","Camo2"};
        hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\WetsuitHV.paa","\TFD_Units\Data\Vest\RecycleurHV.paa"};
		hiddenUnderwaterSelections[] = {"hide"};
		shownUnderwaterSelections[] = {"unhide","unhide2"};
		hiddenUnderwaterSelectionsTextures[] = {"\TFD_Units\Data\Vest\RecycleurHV.paa","\TFD_Units\Data\Vest\RecycleurHV.paa","\A3\characters_f\data\visors_ca.paa"};
		backpack="";
        weapons[] = {Throw, Put};
        respawnWeapons[] = {Throw, Put};
        Items[] = {FirstAidKit};
        RespawnItems[] = {FirstAidKit};
        magazines[] = {Chemlight_blue, Chemlight_blue, Chemlight_red, Chemlight_red, Chemlight_green, Chemlight_green};
        respawnMagazines[] = {Chemlight_blue, Chemlight_blue, Chemlight_red, Chemlight_red, Chemlight_green, Chemlight_green};
        linkedItems[] = {TFD_RecycleurHV, G_B_Diving, ItemMap, ItemCompass, ItemWatch, ItemRadio};
        respawnLinkedItems[] = {TFD_RecycleurHV, G_B_Diving, ItemMap, ItemCompass, ItemWatch, ItemRadio};
    };
};
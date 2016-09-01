class CfgPatches {
	class TFD_Units {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F_BLUFOR"};
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
	
	class TFD_CasquettePM_rurale : H_MilCap_blue {
		_generalMacro = "H_MilCap_blue"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Casquette Souple (Police Rurale)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Headgear\CasquettePM_rurale.paa"};  
	};
	
	// CASQUETTE
	class H_Cap_blk;
	class TFD_CasquetteSecurite : H_Cap_blk {
		_generalMacro = "H_Cap_blk"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Casquette (Securite)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Headgear\CasquetteSecurite.paa"};  
	};
	
	class TFD_CasquetteCadet : H_Cap_blk {
		_generalMacro = "H_Cap_blk"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Casquette (Cadet)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Headgear\CasquetteCadet.paa"};  
	};
	
	class TFD_CasquettePolice : H_Cap_blk {
		_generalMacro = "H_Cap_blk"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Casquette (Police)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Headgear\CasquettePolice.paa"};  
	};
	
	class TFD_CasquettePC : H_Cap_blk {
		_generalMacro = "H_Cap_blk"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Casquette (Protection Civile)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Headgear\CasquettePC.paa"};  
	};
	
	// CASQUE F2
	class H_HelmetB_plain_blk;
	class TFD_CasqueF2_HDR : H_HelmetB_plain_blk {
		_generalMacro = "H_HelmetB_plain_blk"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Casque F2 (Homme du Rang)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Headgear\CasqueF2_HDR.paa"};  
	};
	
	class TFD_CasqueF2_SO : H_HelmetB_plain_blk {
		_generalMacro = "H_HelmetB_plain_blk"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Casque F2 (Sous-Officier)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Headgear\CasqueF2_SO.paa"};  
	};
	
	class TFD_CasqueF2_Off : H_HelmetB_plain_blk {
		_generalMacro = "H_HelmetB_plain_blk"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Casque F2 (Officier)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Headgear\CasqueF2_Off.paa"};  
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
		_generalMacro = "V_TacVest_blk"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Gilet Haute Visibilite (Infirmier)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Vest\GHV_Infirmier.paa"};
	};
	
	class TFD_GHV_Medecin : V_TacVest_blk {
		_generalMacro = "V_TacVest_blk"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Gilet Haute Visibilite (Medecin)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Vest\GHV_Medecin.paa"};
	};
	
	class TFD_GHV_Formateur : V_TacVest_blk {
		_generalMacro = "V_TacVest_blk"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Gilet Haute Visibilite (Formateur)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Vest\GHV_Formateur.paa"};
	};
	
	class TFD_GiletTac_GN : V_TacVest_blk {
		_generalMacro = "V_TacVest_blk"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Gilet pare-balles (Gendarmerie)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Vest\GiletTac_GN.paa"};
	};
	
	class TFD_GiletTac_PN : V_TacVest_blk {
		_generalMacro = "V_TacVest_blk"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Gilet pare-balles (Police)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Vest\GiletTac_PN.paa"};
	};
	
	class TFD_GiletTac_ERIS : V_TacVest_blk {
		_generalMacro = "V_TacVest_blk"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Gilet pare-balles (ERIS)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Vest\GiletTac_ERIS.paa"};
	};
	
	class TFD_GiletTac_Nego : V_TacVest_blk {
		_generalMacro = "V_TacVest_blk"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Gilet pare-balles (Negociateur)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Vest\GiletTac_Nego.paa"};
	};
	
	class TFD_GiletTac_SC : V_TacVest_blk {
		_generalMacro = "V_TacVest_blk"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Gilet pare-balles (Deminage)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Vest\GiletTac_SC.paa"};
	};
	
	class V_TacVest_camo;
	class TFD_GiletTac_CE : V_TacVest_camo {
		_generalMacro = "V_TacVest_camo"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Gilet pare-balles (Centre Europe)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Vest\GiletTac_CE.paa"};
	};
	
	// GILET S3
	class V_Press_F;
	class TFD_GiletS3_GN : V_Press_F {
		_generalMacro = "V_Press_F"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Gilet S3 (Gendarmerie)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Vest\GiletS3_GN.paa"};
	};
	
	class TFD_GiletS3_PN : V_Press_F {
		_generalMacro = "V_Press_F"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Gilet S3 (Police)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Vest\GiletS3_PN.paa"};
	};
	
	class TFD_GiletS3_CE : V_Press_F {
		_generalMacro = "V_Press_F"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Gilet S3 (Centre Europe)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Vest\GiletS3_CE.paa"};
	};
	
	//GILET D'ASSAUT
	class Vest_Camo_Base;
	class VestItem;
	class TFD_GiletAssaut_GIPN : Vest_Camo_Base { 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Gilet d'assaut (GIPN)";
		picture = "\A3\characters_f_Beta\Data\UI\icon_V_I_Vest_01_ca.paa";
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Vest\GiletAssaut_GIPN.paa"};
		descriptionShort = "Protection ballistique III";
		class ItemInfo: VestItem {
			uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
			containerClass = "Supply120";
			mass = 60;
			armor = 20;
			passThrough = 0.3;
			hiddenSelections[]= {"camo"};
		}
	};
	
	class TFD_GiletAssaut_Douane : Vest_Camo_Base { 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Gilet d'assaut (Douane)";
		picture = "\A3\characters_f_Beta\Data\UI\icon_V_I_Vest_01_ca.paa";
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Vest\GiletAssaut_Douane.paa"};
		descriptionShort = "Protection ballistique III";
		class ItemInfo: VestItem {
			uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
			containerClass = "Supply120";
			mass = 60;
			armor = 20;
			passThrough = 0.3;
			hiddenSelections[]= {"camo"};
		}
	};
	
	class TFD_GiletAssaut_GN : Vest_Camo_Base { 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Gilet d'assaut (Gendarmerie)";
		picture = "\A3\characters_f_Beta\Data\UI\icon_V_I_Vest_01_ca.paa";
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Vest\GiletAssaut_GN.paa"};
		descriptionShort = "Protection ballistique III";
		class ItemInfo: VestItem {
			uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
			containerClass = "Supply120";
			mass = 60;
			armor = 20;
			passThrough = 0.3;
			hiddenSelections[]= {"camo"};
		}
	};
	
	//GILET D'ASSAUT LOURD
	class V_PlateCarrierIAGL_oli;
	class TFD_GiletAssautLourd_GIPN : V_PlateCarrierIAGL_oli {
		_generalMacro = "V_PlateCarrierIAGL_oli"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Gilet d'assaut lourd (GIPN)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo1","camo2"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Vest\GiletAssaut_GIPN.paa","\TFD_Units\Data\Vest\GiletAssautLourd_Noir.paa"};
	};
	
	class TFD_GiletAssautLourd_Douane : V_PlateCarrierIAGL_oli {
		_generalMacro = "V_PlateCarrierIAGL_oli"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Gilet d'assaut lourd (Douane)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo1","camo2"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Vest\GiletAssaut_Douane.paa","\TFD_Units\Data\Vest\GiletAssautLourd_Noir.paa"};
	};
	
	class TFD_GiletAssautLourd_GN : V_PlateCarrierIAGL_oli {
		_generalMacro = "V_PlateCarrierIAGL_oli"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Gilet d'assaut lourd (Gendarmerie)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo1","camo2"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Vest\GiletAssaut_GN.paa","\TFD_Units\Data\Vest\GiletAssautLourd_Noir.paa"};
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
	
	class TFD_PoloSecurite : U_Rangemaster {
		_generalMacro = "U_Rangemaster"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Polo (Securite)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Uniform\PoloSecurite.paa"};
		class ItemInfo: UniformItem{
            uniformModel = "-";
            uniformClass = TFD_Vigile_polo;
            containerClass = Supply40;
            mass = 40;
		};
	};
	
	class TFD_PoloPM_marine : U_Rangemaster {
		_generalMacro = "U_Rangemaster"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Polo (Police Municipale - Marine)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Uniform\PoloPM_marine.paa"};
		class ItemInfo: UniformItem{
            uniformModel = "-";
            uniformClass = TFD_PolicierMun_poloMarine;
            containerClass = Supply40;
            mass = 40;
		};
	};
	
	class TFD_PoloPM_blanc : U_Rangemaster {
		_generalMacro = "U_Rangemaster"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Polo (Police Municipale - Blanc)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Uniform\PoloPM_blanc.paa"};
		class ItemInfo: UniformItem{
            uniformModel = "-";
            uniformClass = TFD_PolicierMun_poloBlanc;
            containerClass = Supply40;
            mass = 40;
		};
	};
	
	class TFD_PoloPM_ASVP : U_Rangemaster {
		_generalMacro = "U_Rangemaster"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Polo (ASVP)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Uniform\PoloPM_ASVP.paa"};
		class ItemInfo: UniformItem{
            uniformModel = "-";
            uniformClass = TFD_PolicierMun_poloASVP;
            containerClass = Supply40;
            mass = 40;
		};
	};
	
	class TFD_PoloPM_rurale : U_Rangemaster {
		_generalMacro = "U_Rangemaster"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Polo (Police Rurale)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Uniform\PoloPM_rurale.paa"};
		class ItemInfo: UniformItem{
            uniformModel = "-";
            uniformClass = TFD_PolicierMun_poloRurale;
            containerClass = Supply40;
            mass = 40;
		};
	};
	
	class TFD_PoloAdmPen : U_Rangemaster {
		_generalMacro = "U_Rangemaster"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Polo (Administration Penitentiaire)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Uniform\PoloAdmPen.paa"};
		class ItemInfo: UniformItem{
            uniformModel = "-";
            uniformClass = TFD_SurveillantAdmPen_polo;
            containerClass = Supply40;
            mass = 40;
		};
	};
	
	class TFD_PoloFormateur : U_Rangemaster {
		_generalMacro = "U_Rangemaster"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Polo (Formateur)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Uniform\PoloFormateur.paa"};
		class ItemInfo: UniformItem{
            uniformModel = "-";
            uniformClass = TFD_Formateur_polo;
            containerClass = Supply40;
            mass = 40;
		};
	};
	
	class TFD_PoloBenevole : U_Rangemaster {
		_generalMacro = "U_Rangemaster"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Polo (CICR)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Uniform\PoloCICR.paa"};
		class ItemInfo: UniformItem{
            uniformModel = "-";
            uniformClass = TFD_Benevole_polo;
            containerClass = Supply40;
            mass = 40;
		};
	};
	
	class TFD_PoloDouane : U_Rangemaster {
		_generalMacro = "U_Rangemaster"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Polo (Douane)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Uniform\PoloDouane.paa"};
		class ItemInfo: UniformItem{
            uniformModel = "-";
            uniformClass = TFD_Douanier_polo;
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
	};
	
	//Combinaison
	class U_C_WorkerCoveralls;
	class TFD_CombiPistard : U_C_WorkerCoveralls {
		_generalMacro = "U_C_WorkerCoveralls"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Combinaison de mecanicien (Armee de l'Air)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Uniform\Combi_pistardAA.paa"};
		class ItemInfo: UniformItem{
            uniformModel = "-";
            uniformClass = TFD_Pistard_AA;
            containerClass = Supply30;
            mass = 30;
		};
	};
	
	class U_C_Scientist;
	class TFD_CombiSAMU : U_C_Scientist {
		_generalMacro = "U_C_Scientist"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Combinaison d'ambulancier (SAMU)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Uniform\Combi_SAMU.paa"};
		class ItemInfo: UniformItem{
            uniformModel = "-";
            uniformClass = TFD_Ambulancier_SAMU;
            containerClass = Supply30;
            mass = 30;
		};
	};
	
	class TFD_CombiCICR : U_C_Scientist {
		_generalMacro = "U_C_Scientist"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Combinaison de medecin (CICR)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Uniform\Combi_docCICR.paa"};
		class ItemInfo: UniformItem{
            uniformModel = "-";
            uniformClass = TFD_Medecin_CICR;
            containerClass = Supply30;
            mass = 30;
		};
	};
	
	class TFD_CombiCICR_sang : U_C_Scientist {
		_generalMacro = "U_C_Scientist"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Combinaison de chirurgien (CICR)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Uniform\Combi_docCICR_sang.paa"};
		class ItemInfo: UniformItem{
            uniformModel = "-";
            uniformClass = TFD_Chirurgien_CICR;
            containerClass = Supply30;
            mass = 30;
		};
	};
	
	//PULL
	class U_BG_Guerrilla_6_1;
	class TFD_PullCE_AT : U_BG_Guerrilla_6_1 {
		_generalMacro = "U_BG_Guerrilla_6_1"; 
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;             
        displayName="Pull-over (Armee de Terre)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"}; 
		hiddenSelectionsTextures[]= {"\TFD_Units\Data\Uniform\PullCE_AT.paa"};
		class ItemInfo: UniformItem{
            uniformModel = "-";
            uniformClass = TFD_Soldat_Pull;
            containerClass = Supply30;
            mass = 30;
		};
	};
	
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
	
	class TFD_Vigile_polo: B_RangeMaster_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Heartbroken";         // The name of the author of the asset, which is displayed in the editor.
		displayName = "Vigile (Polo)";
		side = 3;
		faction = "CIV_F";
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        uniformClass = "TFD_PoloSecurite";                          // This links this soldier to a particular uniform. For the details, see below.
		hiddenSelections[] = {"Camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\PoloSecurite.paa"}; 
        weapons[] = {Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};                // Which items the character has.
        RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};         // Which items the character respawns with.
        magazines[] = {Chemlight_green, Chemlight_green};               // What ammunition the character has.
        respawnMagazines[] = {Chemlight_green, Chemlight_green};        // What ammunition the character respawns with.
        linkedItems[] = {TFD_CasquetteSecurite, ItemMap, ItemCompass, ItemWatch, ItemRadio};               // Which items the character has.
        respawnLinkedItems[] = {TFD_CasquetteSecurite, ItemMap, ItemCompass, ItemWatch, ItemRadio};        // Which items the character respawns with.
    };
	
	class TFD_PolicierMun_poloMarine: B_RangeMaster_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Heartbroken";         // The name of the author of the asset, which is displayed in the editor.
		displayName = "Policier Municipal (Polo Marine)";
		side = 3;
		faction = "CIV_F";
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        uniformClass = "TFD_PoloPM_marine";                          // This links this soldier to a particular uniform. For the details, see below.
		hiddenSelections[] = {"Camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\PoloPM_marine.paa"}; 
        weapons[] = {Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};                // Which items the character has.
        RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};         // Which items the character respawns with.
        magazines[] = {Chemlight_green, Chemlight_green};               // What ammunition the character has.
        respawnMagazines[] = {Chemlight_green, Chemlight_green};        // What ammunition the character respawns with.
        linkedItems[] = {TFD_CasquettePM, ItemMap, ItemCompass, ItemWatch, ItemRadio};               // Which items the character has.
        respawnLinkedItems[] = {TFD_CasquettePM, ItemMap, ItemCompass, ItemWatch, ItemRadio};        // Which items the character respawns with.
    };
	
	class TFD_PolicierMun_poloBlanc: B_RangeMaster_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Heartbroken";         // The name of the author of the asset, which is displayed in the editor.
		displayName = "Policier Municipal (Polo Blanc)";
		side = 3;
		faction = "CIV_F";
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        uniformClass = "TFD_PoloPM_blanc";                          // This links this soldier to a particular uniform. For the details, see below.
		hiddenSelections[] = {"Camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\PoloPM_blanc.paa"}; 
        weapons[] = {Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};                // Which items the character has.
        RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};         // Which items the character respawns with.
        magazines[] = {Chemlight_green, Chemlight_green};               // What ammunition the character has.
        respawnMagazines[] = {Chemlight_green, Chemlight_green};        // What ammunition the character respawns with.
        linkedItems[] = {TFD_CasquettePM, ItemMap, ItemCompass, ItemWatch, ItemRadio};               // Which items the character has.
        respawnLinkedItems[] = {TFD_CasquettePM, ItemMap, ItemCompass, ItemWatch, ItemRadio};        // Which items the character respawns with.
    };
	
	class TFD_PolicierMun_poloASVP: B_RangeMaster_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Heartbroken";         // The name of the author of the asset, which is displayed in the editor.
		displayName = "ASVP (Polo)";
		side = 3;
		faction = "CIV_F";
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        uniformClass = "TFD_PoloPM_ASVP";                          // This links this soldier to a particular uniform. For the details, see below.
		hiddenSelections[] = {"Camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\PoloPM_ASVP.paa"}; 
        weapons[] = {Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};                // Which items the character has.
        RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};         // Which items the character respawns with.
        magazines[] = {Chemlight_green, Chemlight_green};               // What ammunition the character has.
        respawnMagazines[] = {Chemlight_green, Chemlight_green};        // What ammunition the character respawns with.
        linkedItems[] = {TFD_CasquettePM_ASVP, ItemMap, ItemCompass, ItemWatch, ItemRadio};               // Which items the character has.
        respawnLinkedItems[] = {TFD_CasquettePM_ASVP, ItemMap, ItemCompass, ItemWatch, ItemRadio};        // Which items the character respawns with.
    };
	
	class TFD_PolicierMun_poloRurale: B_RangeMaster_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Heartbroken";         // The name of the author of the asset, which is displayed in the editor.
		displayName = "Garde Champetre (Polo)";
		side = 3;
		faction = "CIV_F";
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        uniformClass = "TFD_PoloPM_rurale";                          // This links this soldier to a particular uniform. For the details, see below.
		hiddenSelections[] = {"Camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\PoloPM_rurale.paa"}; 
        weapons[] = {Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};                // Which items the character has.
        RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};         // Which items the character respawns with.
        magazines[] = {Chemlight_green, Chemlight_green};               // What ammunition the character has.
        respawnMagazines[] = {Chemlight_green, Chemlight_green};        // What ammunition the character respawns with.
        linkedItems[] = {TFD_CasquettePM_rurale, ItemMap, ItemCompass, ItemWatch, ItemRadio};               // Which items the character has.
        respawnLinkedItems[] = {TFD_CasquettePM_rurale, ItemMap, ItemCompass, ItemWatch, ItemRadio};        // Which items the character respawns with.
    };
	
	class TFD_SurveillantAdmPen_polo: B_RangeMaster_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Heartbroken";         // The name of the author of the asset, which is displayed in the editor.
		displayName = "Surveillant (Polo)";
		side = 3;
		faction = "CIV_F";
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        uniformClass = "TFD_PoloAdmPen";                          // This links this soldier to a particular uniform. For the details, see below.
		hiddenSelections[] = {"Camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\PoloAdmPen.paa"}; 
        weapons[] = {Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};                // Which items the character has.
        RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};         // Which items the character respawns with.
        magazines[] = {Chemlight_green, Chemlight_green};               // What ammunition the character has.
        respawnMagazines[] = {Chemlight_green, Chemlight_green};        // What ammunition the character respawns with.
        linkedItems[] = {TFD_CasquetteAdmPen, ItemMap, ItemCompass, ItemWatch, ItemRadio};               // Which items the character has.
        respawnLinkedItems[] = {TFD_CasquetteAdmPen, ItemMap, ItemCompass, ItemWatch, ItemRadio};        // Which items the character respawns with.
    };
	// FORMATEUR A FINIR EN AJOUTANT LA CASQUETTE QUI VA BIEN
	class TFD_Formateur_polo: B_RangeMaster_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Heartbroken";         // The name of the author of the asset, which is displayed in the editor.
		displayName = "Formateur (Polo)";
		side = 3;
		faction = "CIV_F";
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        uniformClass = "TFD_PoloFormateur";                          // This links this soldier to a particular uniform. For the details, see below.
		hiddenSelections[] = {"Camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\PoloFormateur.paa"}; 
        weapons[] = {Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};                // Which items the character has.
        RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};         // Which items the character respawns with.
        magazines[] = {Chemlight_green, Chemlight_green, Chemlight_red, Chemlight_red};               // What ammunition the character has.
        respawnMagazines[] = {Chemlight_green, Chemlight_green, Chemlight_red, Chemlight_red};        // What ammunition the character respawns with.
        linkedItems[] = {TFD_GHV_Formateur, ItemMap, ItemCompass, ItemWatch, ItemRadio};               // Which items the character has.
        respawnLinkedItems[] = {TFD_GHV_Formateur, ItemMap, ItemCompass, ItemWatch, ItemRadio};        // Which items the character respawns with.
    };
	
	class TFD_Benevole_polo: B_RangeMaster_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Heartbroken";         // The name of the author of the asset, which is displayed in the editor.
		displayName = "Benevole CICR (Polo)";
		side = 3;
		faction = "CIV_F";
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        uniformClass = "TFD_PoloBenevole";                          // This links this soldier to a particular uniform. For the details, see below.
		hiddenSelections[] = {"Camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\PoloCICR.paa"}; 
        weapons[] = {Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};                // Which items the character has.
        RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};         // Which items the character respawns with.
        magazines[] = {Chemlight_green, Chemlight_green, Chemlight_red, Chemlight_red};               // What ammunition the character has.
        respawnMagazines[] = {Chemlight_green, Chemlight_green, Chemlight_red, Chemlight_red};        // What ammunition the character respawns with.
        linkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio};               // Which items the character has.
        respawnLinkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio};        // Which items the character respawns with.
    };
	
	class TFD_Douanier_polo: B_RangeMaster_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Heartbroken";         // The name of the author of the asset, which is displayed in the editor.
		displayName = "Douanier (Polo)";
		side = 3;
		faction = "CIV_F";
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        uniformClass = "TFD_PoloDouane";                          // This links this soldier to a particular uniform. For the details, see below.
		hiddenSelections[] = {"Camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\PoloDouane.paa"}; 
        weapons[] = {hgun_Rook40_F, Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {hgun_Rook40_F, Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit};                // Which items the character has.
        RespawnItems[] = {FirstAidKit};         // Which items the character respawns with.
        magazines[] = {mag_4(16Rnd_9x21_Mag), Chemlight_green, Chemlight_green};               // What ammunition the character has.
        respawnMagazines[] = {mag_4(16Rnd_9x21_Mag), Chemlight_green, Chemlight_green};        // What ammunition the character respawns with.
        linkedItems[] = {V_Rangemaster_belt, ItemMap, ItemCompass, ItemWatch, ItemRadio};               // Which items the character has.
        respawnLinkedItems[] = {V_Rangemaster_belt, ItemMap, ItemCompass, ItemWatch, ItemRadio};        // Which items the character respawns with.
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
	
	class C_man_w_worker_F;                     // For inheritance to work, the base class has to be defined.
    class TFD_Pistard_AA: C_man_w_worker_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Heartbroken";         // The name of the author of the asset, which is displayed in the editor.
		displayName = "Pistard";
		side = 1;
		faction = "TFD_AA";
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        uniformClass = "TFD_CombiPistard";                          // This links this soldier to a particular uniform. For the details, see below.
		hiddenSelections[] = {"Camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\Combi_pistardAA.paa"}; 
        weapons[] = {Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit};                // Which items the character has.
        RespawnItems[] = {FirstAidKit};         // Which items the character respawns with.
        magazines[] = {Chemlight_green, Chemlight_green, Chemlight_red, Chemlight_red};               // What ammunition the character has.
        respawnMagazines[] = {Chemlight_green, Chemlight_green, Chemlight_red, Chemlight_red};        // What ammunition the character respawns with.
        linkedItems[] = {H_Cap_headphones, ItemMap, ItemCompass, ItemWatch, ItemRadio};               // Which items the character has.
        respawnLinkedItems[] = {H_Cap_headphones, ItemMap, ItemCompass, ItemWatch, ItemRadio};        // Which items the character respawns with.
		class EventHandlers 
			{
				init = "(_this select 0) execVM ""\TFD_Units\Script\stopRandom.sqf"""
			};
    };
	
	class C_scientist_F;                     // For inheritance to work, the base class has to be defined.
    class TFD_Ambulancier_SAMU: C_scientist_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Heartbroken";         // The name of the author of the asset, which is displayed in the editor.
		displayName = "Ambulancier";
		side = 3;
		faction = "CIV_F";
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        uniformClass = "TFD_CombiSAMU";                          // This links this soldier to a particular uniform. For the details, see below.
		hiddenSelections[] = {"Camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\Combi_SAMU.paa"}; 
        weapons[] = {Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};                // Which items the character has.
        RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};         // Which items the character respawns with.
        magazines[] = {Chemlight_green, Chemlight_green, Chemlight_red, Chemlight_red};               // What ammunition the character has.
        respawnMagazines[] = {Chemlight_green, Chemlight_green, Chemlight_red, Chemlight_red};        // What ammunition the character respawns with.
        linkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio};               // Which items the character has.
        respawnLinkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio};        // Which items the character respawns with.
		class EventHandlers 
			{
				init = "(_this select 0) execVM ""\TFD_Units\Script\stopRandom.sqf"""
			};
    };
	
	class TFD_Medecin_CICR: C_scientist_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Heartbroken";         // The name of the author of the asset, which is displayed in the editor.
		displayName = "Medecin (CICR)";
		side = 3;
		faction = "CIV_F";
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        uniformClass = "TFD_CombiCICR";                          // This links this soldier to a particular uniform. For the details, see below.
		hiddenSelections[] = {"Camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\Combi_docCICR.paa"}; 
        weapons[] = {Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};                // Which items the character has.
        RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};         // Which items the character respawns with.
        magazines[] = {Chemlight_green, Chemlight_green, Chemlight_red, Chemlight_red};               // What ammunition the character has.
        respawnMagazines[] = {Chemlight_green, Chemlight_green, Chemlight_red, Chemlight_red};        // What ammunition the character respawns with.
        linkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio};               // Which items the character has.
        respawnLinkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio};        // Which items the character respawns with.
		class EventHandlers 
			{
				init = "(_this select 0) execVM ""\TFD_Units\Script\stopRandom.sqf"""
			};
    };
	
	class TFD_Chirurgien_CICR: C_scientist_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Heartbroken";         // The name of the author of the asset, which is displayed in the editor.
		displayName = "Chirurgien (CICR)";
		side = 3;
		faction = "CIV_F";
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        uniformClass = "TFD_CombiCICR_sang";                          // This links this soldier to a particular uniform. For the details, see below.
		hiddenSelections[] = {"Camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\Combi_docCICR_sang.paa"}; 
        weapons[] = {Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};                // Which items the character has.
        RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};         // Which items the character respawns with.
        magazines[] = {Chemlight_green, Chemlight_green, Chemlight_red, Chemlight_red};               // What ammunition the character has.
        respawnMagazines[] = {Chemlight_green, Chemlight_green, Chemlight_red, Chemlight_red};        // What ammunition the character respawns with.
        linkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio};               // Which items the character has.
        respawnLinkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio};        // Which items the character respawns with.
		class EventHandlers 
			{
				init = "(_this select 0) execVM ""\TFD_Units\Script\stopRandom.sqf"""
			};
    };
	
	class B_G_Soldier_LAT_F;                     // For inheritance to work, the base class has to be defined.
    class TFD_Soldat_Pull: B_G_Soldier_LAT_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Heartbroken";         // The name of the author of the asset, which is displayed in the editor.
		displayName = "Soldat (Pull)";
		side = 1;
		faction = "TFD_AT";
        scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        uniformClass = "TFD_PullCE_AT";                          // This links this soldier to a particular uniform. For the details, see below.
		hiddenSelections[] = {"camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\PullCE_AT.paa"}; 
		backpack = "";
        weapons[] = {Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};                // Which items the character has.
        RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};         // Which items the character respawns with.
        magazines[] = {Chemlight_green, Chemlight_green, Chemlight_red, Chemlight_red};               // What ammunition the character has.
        respawnMagazines[] = {Chemlight_green, Chemlight_green, Chemlight_red, Chemlight_red};        // What ammunition the character respawns with.
        linkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio};               // Which items the character has.
        respawnLinkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio};        // Which items the character respawns with.
		class EventHandlers 
			{
				init = "(_this select 0) execVM ""\TFD_Units\Script\stopRandom.sqf"""
			};
    };
	
};
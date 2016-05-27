class CfgPatches {
	class TFD_Objects {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Structures_F_Mil_Flags"};
		version = 1.0
		author[] = {"Heartbroken"};
	};
};

class CfgVehicles {
	
	class FlagCarrier;
	
	class TFD_DrapeauUE : FlagCarrier {
		_generalMacro = "FlagCarrier"; 
        scope = 2;
		scopeCurator=2;		
        displayName="Drapeau (UE)";
		author = "Heartbroken";           
		class EventHandlers {
			init="(_this select 0) setFlagTexture '\TFD_Objects\Data\Drapeau_UE.paa'"
		}
	};
	
	class TFD_DrapeauFR : FlagCarrier {
		_generalMacro = "FlagCarrier"; 
        scope = 2;
		scopeCurator=2;		
        displayName="Drapeau (France)";
		author = "Heartbroken";           
		class EventHandlers {
			init="(_this select 0) setFlagTexture '\TFD_Objects\Data\Drapeau_FR.paa'"
		}
	};
	
	class TFD_DrapeauBE : FlagCarrier {
		_generalMacro = "FlagCarrier"; 
        scope = 2;
		scopeCurator=2;		
        displayName="Drapeau (Belgique)";
		author = "Heartbroken";           
		class EventHandlers {
			init="(_this select 0) setFlagTexture '\TFD_Objects\Data\Drapeau_BE.paa'"
		}
	};
	
	class TFD_DrapeauTFP : FlagCarrier {
		_generalMacro = "FlagCarrier"; 
        scope = 2;
		scopeCurator=2;		
        displayName="Drapeau (TFP)";
		author = "Heartbroken";           
		class EventHandlers {
			init="(_this select 0) setFlagTexture '\TFD_Objects\Data\Drapeau_TFP.paa'"
		}
	};
	
	class TFD_Drapeau24eBAC : FlagCarrier {
		_generalMacro = "FlagCarrier"; 
        scope = 2;
		scopeCurator=2;		
        displayName="Drapeau (24eBAC)";
		author = "Heartbroken";           
		class EventHandlers {
			init="(_this select 0) setFlagTexture '\TFD_Objects\Data\Drapeau_24eBAC.paa'"
		}
	};
	
	class TFD_DrapeauTFD : FlagCarrier {
		_generalMacro = "FlagCarrier"; 
        scope = 2;
		scopeCurator=2;		
        displayName="Drapeau (TFD)";
		author = "Heartbroken";           
		class EventHandlers {
			init="(_this select 0) setFlagTexture '\TFD_Objects\Data\Drapeau_TFD.paa'"
		}
	};
	
	class TFD_DrapeauURSS : FlagCarrier {
		_generalMacro = "FlagCarrier"; 
        scope = 2;
		scopeCurator=2;		
        displayName="Drapeau (URSS)";
		author = "Heartbroken";           
		class EventHandlers {
			init="(_this select 0) setFlagTexture '\TFD_Objects\Data\Drapeau_URSS.paa'"
		}
	};
	
	class TFD_DrapeauOPEXKoto : FlagCarrier {
		_generalMacro = "FlagCarrier"; 
        scope = 2;
		scopeCurator=2;		
        displayName="Drapeau (OPEX Suricate)";
		author = "Heartbroken";           
		class EventHandlers {
			init="(_this select 0) setFlagTexture '\TFD_Objects\Data\Drapeau_OPEXKoto.paa'"
		}
	};
	
	class SignAd_SponsorS_F;
	
	class TFD_PanneauVigipirate : SignAd_SponsorS_F {
		_generalMacro = "SignAd_SponsorS_F";
        scope = 2; 
        scopeCurator = 2;           
        displayName="Panneau (Vigipirate)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"\TFD_Objects\Data\Panneau_Vigipirate.paa"};
	};
	
	class TFD_PanneauVigipirateAA : SignAd_SponsorS_F {
		_generalMacro = "SignAd_SponsorS_F";
        scope = 2; 
        scopeCurator = 2;           
        displayName="Panneau (Vigipirate Alerte Attentat)";
		author = "Heartbroken";
		hiddenSelections[]= {"camo"};
		hiddenSelectionsTextures[]= {"\TFD_Objects\Data\Panneau_VigipirateAA.paa"};
	};
};
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
	}
}
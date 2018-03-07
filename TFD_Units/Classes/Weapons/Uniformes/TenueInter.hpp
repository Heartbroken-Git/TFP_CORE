// Tenue d'intervention foncée
class U_B_CombatUniform_mcam;
class TFD_TenueInter_GN : U_B_CombatUniform_mcam {
	_generalMacro = "U_B_CombatUniform_mcam";
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName="Tenue d'intervention (Gendarmerie Mobile)";
	author = "Heartbroken";
	hiddenSelections[]= {"camo"};
	hiddenSelectionsTextures[]= {"\TFD_Units\Data\Uniform\TenueInter_GN.paa"};
	class ItemInfo: UniformItem{
		uniformModel = "-";
		uniformClass = TFD_Gendarme_MobileInter;
		containerClass = Supply40;
		mass = 40;
	};
};

// PARKA / TENUE FEU
class U_O_T_Officer_F; // May be replaced by OPFOR uniform

class TFD_ParkaFeuSP : U_O_T_Officer_F {
	_generalMacro = "U_O_T_Officer_F";
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName="Tenue Feu (Sapeur-Pompier)";
	author = "Heartbroken";
	hiddenSelections[]= {"Camo", "insignia"};
	hiddenSelectionsTextures[]= {"\TFD_Units\Data\Uniform\ParkaFeuSP.paa"};
	class ItemInfo: UniformItem{
		uniformModel = "-";
		uniformClass = TFD_Pompier_FDF;
		containerClass = Supply40;
		mass = 40;
	};
};

class TFD_ParkaGN : U_O_T_Officer_F {
	_generalMacro = "U_O_T_Officer_F";
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName="Parka (Gendarmerie)";
	author = "Heartbroken";
	hiddenSelections[]= {"Camo", "insignia"};
	hiddenSelectionsTextures[]= {"\TFD_Units\Data\Uniform\ParkaGN.paa"};
	class ItemInfo: UniformItem{
		uniformModel = "-";
		uniformClass = TFD_Gendarme_Parka;
		containerClass = Supply40;
		mass = 40;
	};
};

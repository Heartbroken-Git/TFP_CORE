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

class TFD_PullMarine_AA : U_BG_Guerrilla_6_1 {
	_generalMacro = "U_BG_Guerrilla_6_1";
    scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
    displayName="Pull-over (Armee de l'Air)";
	author = "Heartbroken";
	hiddenSelections[]= {"camo"};
	hiddenSelectionsTextures[]= {"\TFD_Units\Data\Uniform\PullMarine_AA.paa"};
	class ItemInfo: UniformItem{
		uniformModel = "-";
		uniformClass = TFD_Aviateur_Pull;
		containerClass = Supply30;
		mass = 30;
	};
};

class TFD_PullMarine_GN : U_BG_Guerrilla_6_1 {
	_generalMacro = "U_BG_Guerrilla_6_1";
    scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
    displayName="Polaire (Gendarmerie Nationale)";
	author = "Heartbroken";
	hiddenSelections[]= {"camo"};
	hiddenSelectionsTextures[]= {"\TFD_Units\Data\Uniform\PullMarine_GN.paa"};
	class ItemInfo: UniformItem{
		uniformModel = "-";
		uniformClass = TFD_Gendarme_Polaire;
		containerClass = Supply30;
		mass = 30;
	};
};

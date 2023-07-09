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

class TFD_PoloUIISC : U_Rangemaster {
	_generalMacro = "U_Rangemaster";
    scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
    displayName="Polo (UIISC)";
	author = "Heartbroken";
	hiddenSelections[]= {"camo"};
	hiddenSelectionsTextures[]= {"\TFD_Units\Data\Uniform\PoloUIISC.paa"};
	class ItemInfo: UniformItem{
		uniformModel = "-";
		uniformClass = TFD_SapeurSauveteur_polo;
		containerClass = Supply40;
		mass = 40;
	};
};

class TFD_PoloPN : U_Rangemaster {
	_generalMacro = "U_Rangemaster";
    scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
    displayName="Polo (Police Nationale)";
	author = "Heartbroken";
	hiddenSelections[]= {"camo"};
	hiddenSelectionsTextures[]= {"\TFD_Units\Data\Uniform\PoloPN.paa"};
	class ItemInfo: UniformItem{
		uniformModel = "-";
		uniformClass = TFD_PolicierNat_Polo;
		containerClass = Supply40;
		mass = 40;
	};
};

class TFD_PoloCRF : U_Rangemaster {
	_generalMacro = "U_Rangemaster";
    scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
    displayName="Polo (Croix Rouge Francaise)";
	author = "Heartbroken";
	hiddenSelections[]= {"camo"};
	hiddenSelectionsTextures[]= {"\TFD_Units\Data\Uniform\PoloCRF.paa"};
	class ItemInfo: UniformItem{
		uniformModel = "-";
		uniformClass = TFD_BenevoleCRF_polo;
		containerClass = Supply40;
		mass = 40;
	};
};

class TFD_PoloPC : U_Rangemaster {
	_generalMacro = "U_Rangemaster";
    scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
    displayName="Polo (Protection Civile)";
	author = "Heartbroken";
	hiddenSelections[]= {"camo"};
	hiddenSelectionsTextures[]= {"\TFD_Units\Data\Uniform\PoloPC.paa"};
	class ItemInfo: UniformItem{
		uniformModel = "-";
		uniformClass = TFD_BenevolePC_polo;
		containerClass = Supply40;
		mass = 40;
	};
};

class TFD_PoloONF : U_Rangemaster {
	_generalMacro = "U_Rangemaster";
    scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
    displayName="Polo (Office National des Forets)";
	author = "Heartbroken";
	hiddenSelections[]= {"camo"};
	hiddenSelectionsTextures[]= {"\TFD_Units\Data\Uniform\PoloONF.paa"};
	class ItemInfo: UniformItem{
		uniformModel = "-";
		uniformClass = TFD_ForestierONF_polo;
		containerClass = Supply40;
		mass = 40;
	};
};

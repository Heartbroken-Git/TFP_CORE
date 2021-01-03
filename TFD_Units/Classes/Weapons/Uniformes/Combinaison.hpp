//Combinaison
class U_C_WorkerCoveralls;
class TFD_CombiPistard : U_C_WorkerCoveralls {
	_generalMacro = "U_C_WorkerCoveralls";
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName="Combinaison de mecanicien (Armee de l'Air)";
	author = "Heartbroken";
	hiddenSelections[]= {"camo","insignia"};
	hiddenSelectionsTextures[]= {"\TFD_Units\Data\Uniform\Combi_pistardAA.paa"};
	class ItemInfo: UniformItem{
		uniformModel = "-";
		uniformClass = TFD_Pistard_AA;
		containerClass = Supply30;
		mass = 30;
	};
};

class TFD_CombiDIR : U_C_WorkerCoveralls {
	_generalMacro = "U_C_WorkerCoveralls";
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName="Combinaison de patrouilleur (DIR)";
	author = "Heartbroken";
	hiddenSelections[]= {"camo","insignia"};
	hiddenSelectionsTextures[]= {"\TFD_Units\Data\Uniform\Combi_patrouilleurDIR.paa"};
	class ItemInfo: UniformItem{
		uniformModel = "-";
		uniformClass = TFD_Patrouilleur_DIR;
		containerClass = Supply30;
		mass = 30;
	};
};

class TFD_CombiTPB : U_C_WorkerCoveralls {
	_generalMacro = "U_C_WorkerCoveralls";
    scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
    displayName="Tenue de Protection de Base";
	author = "Heartbroken";
	hiddenSelections[]= {"camo","insignia"};
	hiddenSelectionsTextures[]= {"\TFD_Units\Data\Uniform\Combi_TPB.paa"};
	class ItemInfo: UniformItem{
		uniformModel = "-";
		uniformClass = TFD_Marin_TPB;
		containerClass = Supply30;
		mass = 30;
	};
};

class TFD_CombiTPBfeu : U_C_WorkerCoveralls {
	_generalMacro = "U_C_WorkerCoveralls";
    scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
    displayName="Tenue de Protection de Base (Feu)";
	author = "Heartbroken";
	hiddenSelections[]= {"camo","insignia"};
	hiddenSelectionsTextures[]= {"\TFD_Units\Data\Uniform\Combi_TPBfeu.paa"};
	class ItemInfo: UniformItem{
		uniformModel = "-";
		uniformClass = TFD_Marin_TPBfeu;
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
	hiddenSelections[]= {"camo","insignia"};
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
	hiddenSelections[]= {"camo","insignia"};
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
	hiddenSelections[]= {"camo","insignia"};
	hiddenSelectionsTextures[]= {"\TFD_Units\Data\Uniform\Combi_docCICR_sang.paa"};
	class ItemInfo: UniformItem{
		uniformModel = "-";
		uniformClass = TFD_Chirurgien_CICR;
		containerClass = Supply30;
		mass = 30;
	};
};

class U_B_HeliPilotCoveralls;
class TFD_CombiPilote_GN : U_B_HeliPilotCoveralls {
	_generalMacro = "U_B_HeliPilotCoveralls";
    scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
    displayName="Combinaison de pilote d'helicoptere (Gendarmerie)";
	author = "Heartbroken";
	hiddenSelections[]= {"camo","insignia"};
	hiddenSelectionsTextures[]= {"\TFD_Units\Data\Uniform\Combi_piloteGN.paa"};
	class ItemInfo: UniformItem{
		uniformModel = "-";
		uniformClass = TFD_Pilote_GN;
		containerClass = Supply30;
		mass = 30;
	};
};

class TFD_CombiPilote_SC : U_B_HeliPilotCoveralls {
	_generalMacro = "U_B_HeliPilotCoveralls";
    scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
    displayName="Combinaison de pilote d'helicoptere (Securite Civile)";
	author = "Heartbroken";
	hiddenSelections[]= {"camo","insignia"};
	hiddenSelectionsTextures[]= {"\TFD_Units\Data\Uniform\Combi_piloteSC.paa"};
	class ItemInfo: UniformItem{
		uniformModel = "-";
		uniformClass = TFD_Pilote_SC;
		containerClass = Supply30;
		mass = 30;
	};
};

class U_Tank_green_F;
class TFD_CombiInter_marine : U_Tank_green_F {
	_generalMacro = "U_Tank_green_F";
    scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
    displayName="Combinaison (bleu marine)";
	author = "Heartbroken";
	hiddenSelections[]= {"camo","insignia"};
	hiddenSelectionsTextures[]= {"\TFD_Units\Data\Uniform\CombiTank_marine.paa"};
	class ItemInfo: UniformItem{
		uniformModel = "-";
		uniformClass = TFD_Operateur_GIGN;
		containerClass = Supply30;
		mass = 30;
	};
};

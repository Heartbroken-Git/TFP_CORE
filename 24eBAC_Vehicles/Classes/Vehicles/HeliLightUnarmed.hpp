class 24eBAC_LynxMN_camo: Heli_light_03_unarmed_base_F
{
    _generalMacro = "I_Heli_light_03_unarmed_F";
    scope = 2;
    side = 1;
    faction = "TFD_MN";
    displayName="HAS.4 Lynx Marine";
	author = "Heartbroken";
	crew = "B_Helipilot_F"; //Ai ajout� un point virgule apr�s cette ligne, si besoin de d�bug penser � l'enlever
	hiddenSelections[]= {"camo"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Lynx_MN\LynxMNCamo.paa"};
	typicalCargo[] = {"B_Helipilot_F"};
    availableForSupportTypes[] = {"Drop","Transport"};
};

class Heli_light_03_base_F;
class 24eBAC_LynxMN_camo_armed: Heli_light_03_base_F
{
    _generalMacro = "I_Heli_light_03_F";
    scope = 2;
    side = 1;
    faction = "TFD_MN";
    displayName="HAS.4 Lynx Marine (Arme)";
	author = "Heartbroken";
	crew = "B_Helipilot_F";
	hiddenSelections[]= {"camo"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Lynx_MN\LynxMNCamo.paa"};
	typicalCargo[] = {"B_Helipilot_F"};
    availableForSupportTypes[] = {"Drop","Transport"};  //Devrais apparemment �tre vide ? (h�lico arm�)
};

class 24eBAC_LynxMN:Heli_light_03_unarmed_base_F     //Lynx en simple gris Marine (transport uniquement)
{
    _generalMacro = "I_Heli_light_03_unarmed_F";
    scope = 2;
    side = 1;
    faction = "TFD_MN";
    displayName="HAS.4 Lynx Marine (Gris)";
	author = "Heartbroken";
	crew = "B_Helipilot_F";
	hiddenSelections[]= {"camo"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Lynx_MN\LynxMNGris.paa"};
	typicalCargo[] = {"B_Helipilot_F"};
    availableForSupportTypes[] = {"Drop","Transport"};
};

//Panther
class Heli_Light_02_unarmed_base_F;
class 24eBAC_PantherMN:Heli_Light_02_unarmed_base_F     //Base pour Panther
{
    _generalMacro = "O_Heli_Light_02_unarmed_F";
    scope = 2;
    side = 1;
    faction = "TFD_MN";
    displayName="AS.365SB Panther Marine (Fonce)";
	author = "Heartbroken";
	crew = "B_Helipilot_F";
	hiddenSelections[]= {"camo1"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Panther_MN\PantherMNFonce.paa"};
	typicalCargo[] = {"B_Helipilot_F"};
    availableForSupportTypes[] = {"Drop","Transport"};
};

class 24eBAC_PantherMN_AEM:Heli_Light_02_unarmed_base_F
{
    _generalMacro = "O_Heli_Light_02_unarmed_F";
    scope = 2;
    side = 1;
    faction = "TFD_MN";
    displayName="AS.365SB Panther Marine (AEM)";
	author = "Heartbroken";
	crew = "B_Helipilot_F";
	hiddenSelections[]= {"camo1"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Panther_MN\PantherMNAEM.paa"};
	typicalCargo[] = {"B_Helipilot_F"};
    availableForSupportTypes[] = {"Drop","Transport"};
};

class 24eBAC_PantherMN_pedro:Heli_Light_02_unarmed_base_F
{
    _generalMacro = "O_Heli_Light_02_unarmed_F";
    scope = 2;
    side = 1;
    faction = "TFD_MN";
    displayName="AS.365SB Panther Marine (Pedro)";
	author = "Heartbroken";
	crew = "B_Helipilot_F";
	hiddenSelections[]= {"camo1"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Panther_MN\PantherMNPedro.paa"};
	typicalCargo[] = {"B_Helipilot_F"};
    availableForSupportTypes[] = {"Drop","Transport"};
};

class 24eBAC_PantherCICR:Heli_Light_02_unarmed_base_F
{
    _generalMacro = "O_Heli_Light_02_unarmed_F";
    scope = 2;
    side = 3;
    faction = "CIV_F";
    displayName="AS.365SB Panther CICR";
	author = "Heartbroken";
	crew = "C_Marshal_F";
	hiddenSelections[]= {"camo1"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Panther_Civ\PantherCICR.paa"};
	typicalCargo[] = {"C_Marshal_F"};
    availableForSupportTypes[] = {"Drop","Transport"};
};

class 24eBAC_PantherSAMU:Heli_Light_02_unarmed_base_F
{
    _generalMacro = "O_Heli_Light_02_unarmed_F";
    scope = 2;
    side = 3;
    faction = "CIV_F";
    displayName="AS.365SB Panther SAMU";
	author = "Heartbroken";
	crew = "TFD_Ambulancier_SAMU";
	hiddenSelections[]= {"camo1"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Panther_Civ\PantherSAMU.paa"};
	typicalCargo[] = {"TFD_Ambulancier_SAMU"};
    availableForSupportTypes[] = {"Drop","Transport"};
};
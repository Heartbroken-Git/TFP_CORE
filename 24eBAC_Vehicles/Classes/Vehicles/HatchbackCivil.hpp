class 24eBAC_Hatchback_CICR:C_Hatchback_01_F
{
	_generalMacro = "C_Hatchback_01_F";
	scope = 2;
	side = 3;
	faction = "CIV_F";
	displayName="Voiture a hayon CICR";
	author = "Heartbroken";
	crew = "TFD_Benevole_polo";
	hiddenSelections[]= {"Camo1"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Hatchback_Civ\Hatchback_CICR.paa"};
	typicalCargo[] = {"TFD_Benevole_polo","TFD_Benevole_polo"};
	attendant = 1;
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandom.sqf""";
	};
};

class 24eBAC_Hatchback_MSF:C_Hatchback_01_F
{
	_generalMacro = "C_Hatchback_01_F";
	scope = 2;
	side = 3;
	faction = "CIV_F";
	displayName="Voiture a hayon MSF";
	author = "Heartbroken";
	crew = "C_scientist_F";
	hiddenSelections[]= {"Camo1"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Hatchback_Civ\Hatchback_MSF.paa"};
	typicalCargo[] = {"C_scientist_F"};
	attendant = 1;
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandom.sqf""";
	};
};

class 24eBAC_Hatchback_RC:C_Hatchback_01_F
{
	_generalMacro = "C_Hatchback_01_F";
	scope = 2;
	side = 3;
	faction = "CIV_F";
	displayName="Voiture a hayon Croissant Rouge";
	author = "Heartbroken";
	crew = "C_scientist_F";
	hiddenSelections[]= {"Camo1"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Hatchback_Civ\Hatchback_RC.paa"};
	typicalCargo[] = {"C_scientist_F"};
	attendant = 1;
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandom.sqf""";
	};
};

class 24eBAC_Hatchback_SNCF:C_Hatchback_01_F
{
	_generalMacro = "C_Hatchback_01_F";
	scope = 2;
	side = 3;
	faction = "CIV_F";
	displayName="Voiture a hayon SNCF";
	author = "Heartbroken";
	crew = "C_man_polo_1_F_euro";
	hiddenSelections[]= {"Camo1"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Hatchback_Civ\Hatchback_SNCF.paa"};
	typicalCargo[] = {"C_man_polo_1_F_euro"};
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandom.sqf""";
	};
};

class 24eBAC_Hatchback_Securitas:C_Hatchback_01_F
{
	_generalMacro = "C_Hatchback_01_F";
	scope = 2;
	side = 3;
	faction = "CIV_F";
	displayName="Voiture a hayon Securitas";
	author = "Heartbroken";
	crew = "TFD_Vigile_polo";
	hiddenSelections[]= {"Camo1"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Hatchback_Civ\Hatchback_Securitas.paa"};
	typicalCargo[] = {"TFD_Vigile_polo"};
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandom.sqf""";
	};
};

class 24eBAC_Hatchback_LaPoste:C_Hatchback_01_F
{
	_generalMacro = "C_Hatchback_01_F";
	scope = 2;
	side = 3;
	faction = "CIV_F";
	displayName="Voiture a hayon La Poste";
	author = "Heartbroken";
	crew = "C_man_polo_1_F_euro";
	hiddenSelections[]= {"Camo1"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Hatchback_Civ\Hatchback_LaPoste.paa"};
	typicalCargo[] = {"C_man_polo_1_F_euro"};
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandom.sqf""";
	};
};

class 24eBAC_Hatchback_SP:C_Hatchback_01_F
{
	_generalMacro = "C_Hatchback_01_F";
	scope = 2;
	side = 3;
	faction = "CIV_F";
	displayName="Vehicule de Liaison (SDIS 44)";
	author = "Heartbroken";
	crew = "TFD_Pompier_polo";
	hiddenSelections[]= {"Camo1"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Hatchback_Civ\Hatchback_SP.paa"};
	typicalCargo[] = {"TFD_Pompier_polo"};
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandom.sqf""";
	};
};

class 24eBAC_Hatchback_AP:C_Hatchback_01_F
{
	_generalMacro = "C_Hatchback_01_F";
	scope = 2;
	side = 3;
	faction = "CIV_F";
	displayName="Voiture a hayon Administration Penitentiaire";
	author = "Heartbroken";
	crew = "TFD_SurveillantAdmPen_polo";
	hiddenSelections[]= {"Camo1"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Hatchback_Civ\Hatchback_AP.paa"};
	typicalCargo[] = {"TFD_SurveillantAdmPen_polo"};
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandom.sqf""";
	};
};

class 24eBAC_Hatchback_Douane:C_Hatchback_01_F
{
	_generalMacro = "C_Hatchback_01_F";
	scope = 2;
	side = 3;
	faction = "CIV_F";
	displayName="Voiture a hayon Douane";
	author = "Heartbroken";
	crew = "TFD_Douanier_polo";
	hiddenSelections[]= {"Camo1"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Hatchback_Civ\Hatchback_Douane.paa"};
	typicalCargo[] = {"TFD_Douanier_polo"};
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandom.sqf""";
    };
};

class 24eBAC_Hatchback_PM:C_Hatchback_01_F
{
	_generalMacro = "C_Hatchback_01_F";
	scope = 2;
	side = 3;
	faction = "CIV_F";
	displayName="Voiture a hayon Police Municipale";
	author = "Heartbroken";
	crew = "TFD_PolicierMun_poloMarine";
	hiddenSelections[]= {"Camo1"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Hatchback_Civ\Hatchback_PM.paa"};
	typicalCargo[] = {"TFD_PolicierMun_poloBlanc"};
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandom.sqf""";
	};
};

class 24eBAC_Hatchback_PMrurale:C_Hatchback_01_F
{
	_generalMacro = "C_Hatchback_01_F";
	scope = 2;
	side = 3;
	faction = "CIV_F";
	displayName="Voiture a hayon Police Rurale";
	author = "Heartbroken";
	crew = "TFD_PolicierMun_poloRurale";
	hiddenSelections[]= {"Camo1"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Hatchback_Civ\Hatchback_PMrurale.paa"};
	typicalCargo[] = {"TFD_PolicierMun_poloRurale"};
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandom.sqf""";
	};
};

class 24eBAC_Hatchback_PN:C_Hatchback_01_F
{
	_generalMacro = "C_Hatchback_01_F";
	scope = 2;
	side = 3;
	faction = "CIV_F";
	displayName="Voiture a hayon Police Nationale";
	author = "Heartbroken";
	crew = "TFD_PolicierNat_Polo";
	hiddenSelections[]= {"Camo1"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Hatchback_Civ\Hatchback_PN.paa"};
	typicalCargo[] = {"TFD_PolicierNat_Polo"};
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandom.sqf""";
	};
};

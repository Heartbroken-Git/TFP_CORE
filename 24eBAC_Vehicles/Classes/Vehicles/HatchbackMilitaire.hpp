class 24eBAC_Hatchback_Vigipirate:C_Hatchback_01_F
{
	_generalMacro = "C_Hatchback_01_F";
	scope = 2;
	side = 1;
	faction = "TFD_AT";
	displayName="Voiture a hayon (Vigipirate)";
	author = "Heartbroken";
	crew = B"_soldier_F";
	hiddenSelections[]= {"Camo1"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Hatchback_Mil\Hatchback_Vigipirate.paa"};
	typicalCargo[] = {"B_soldier_F"};
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandom.sqf""";
	};
};

class C_Hatchback_01_sport_F;
class 24eBAC_Hatchback_GN:C_Hatchback_01_sport_F
{
	_generalMacro = "C_Hatchback_01_F";
	scope = 2;
	side = 1;
	faction = "TFD_GN";
	displayName="VRI";
	author = "Heartbroken";
	crew = "TFD_Gendarme_Depart";
	hiddenSelections[]= {"Camo1"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Hatchback_Mil\Hatchback_GN.paa"};
	typicalCargo[] = {"TFD_Gendarme_Depart"};
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandom.sqf""";
	};
};

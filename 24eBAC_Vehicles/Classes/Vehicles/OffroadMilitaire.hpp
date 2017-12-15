class 24eBAC_OffroadTrain:C_Offroad_01_F
{
	_generalMacro = "C_Offroad_01_F";
    scope = 2;
    side = 1;
    faction = "TFD_AT";
    displayName="Tout-terrain Train";
	author = "Heartbroken";
	crew = "B_soldier_F";
	hiddenSelections[]= {"camo", "camo2"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Offroad_Mil\OffroadTrain.paa", "\24eBAC_Vehicles\Data\Offroad_Civ\Offroad_DGASec.paa"};
	typicalCargo[] = {"B_soldier_F"};
	class EventHandlers
		{
			init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandom.sqf""";
		};
};

class 24eBAC_OffroadTrain_CONVEX:C_Offroad_01_F
{
	_generalMacro = "C_Offroad_01_F";
    scope = 2;
    side = 1;
    faction = "TFD_AT";
    displayName="Tout-terrain Train (CONVEX)";
	author = "Heartbroken";
	crew = "B_soldier_F";
	hiddenSelections[]= {"camo", "camo2"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Offroad_Mil\OffroadTrain_CONVEX.paa", "\24eBAC_Vehicles\Data\Offroad_Civ\Offroad_DGASec.paa"};
	typicalCargo[] = {"B_soldier_F"};
	class EventHandlers
		{
			init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandomServOffroad.sqf""";
		};
};

class B_G_Offroad_01_F;
class 24eBAC_OffroadCoy:B_G_Offroad_01_F
{
	_generalMacro = "B_G_Offroad_01_F";
    scope = 2;
    side = 1;
    faction = "TFD_AT";
    displayName="Tout-terrain Commandos (Centre Europe)";
	author = "Heartbroken";
	crew = "B_recon_F";
	hiddenSelections[]= {"camo", "camo2"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Offroad_Mil\OffroadCoyCE.paa", "\24eBAC_Vehicles\Data\Offroad_Mil\OffroadCoyCE.paa"};
	typicalCargo[] = {"B_recon_F"};
	class EventHandlers
		{
			init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandomCoyOffroad.sqf""";
		};
};

class B_G_Offroad_01_armed_F;
class 24eBAC_OffroadCoy_armed:B_G_Offroad_01_armed_F
{
	_generalMacro = "B_G_Offroad_01_armed_F";
    scope = 2;
    side = 1;
    faction = "TFD_AT";
    displayName="Tout-terrain Commandos 12.7mm (Centre Europe)";
	author = "Heartbroken";
	crew = "B_recon_F";
	hiddenSelections[]= {"camo", "camo2"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Offroad_Mil\OffroadCoyCE_hmg.paa", "\24eBAC_Vehicles\Data\Offroad_Mil\OffroadCoyCE_hmg.paa"};
	typicalCargo[] = {"B_recon_F"};
	class EventHandlers
		{
			init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandomCoyOffroad.sqf""";
		};
};

class 24eBAC_OffroadCoyDA:B_G_Offroad_01_F
{
	_generalMacro = "B_G_Offroad_01_F";
    scope = 2;
    side = 1;
    faction = "TFD_AT";
    displayName="Tout-terrain Commandos (Daguet)";
	author = "Heartbroken";
	crew = "B_recon_F";
	hiddenSelections[]= {"camo", "camo2"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Offroad_Mil\OffroadCoyDA.paa", "\24eBAC_Vehicles\Data\Offroad_Mil\OffroadCoyDA.paa"};
	typicalCargo[] = {"B_recon_F"};
	class EventHandlers
		{
			init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandomCoyOffroad.sqf""";
		};
};

class 24eBAC_OffroadCoyDA_armed:B_G_Offroad_01_armed_F
{
	_generalMacro = "B_G_Offroad_01_armed_F";
    scope = 2;
    side = 1;
    faction = "TFD_AT";
    displayName="Tout-terrain Commandos 12.7mm (Daguet)";
	author = "Heartbroken";
	crew = "B_recon_F";
	hiddenSelections[]= {"camo", "camo2"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Offroad_Mil\OffroadCoyDA_hmg.paa", "\24eBAC_Vehicles\Data\Offroad_Mil\OffroadCoyDA_hmg.paa"};
	typicalCargo[] = {"B_recon_F"};
	class EventHandlers
		{
			init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandomCoyOffroad.sqf""";
		};
};

class 24eBAC_OffroadGN:C_Offroad_01_F
{
	_generalMacro = "C_Offroad_01_F";
    scope = 2;
    side = 1;
    faction = "TFD_GN";
    displayName="Tout-terrain";
	author = "Heartbroken";
	crew = "TFD_Gendarme_Depart";
	hiddenSelections[]= {"camo", "camo2"};
	hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Offroad_Mil\OffroadGN.paa", "\24eBAC_Vehicles\Data\Offroad_Mil\OffroadGN.paa"};
	typicalCargo[] = {"TFD_Gendarme_Depart"};
	class EventHandlers
		{
			init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandomPolOffroad.sqf""";
		};
};
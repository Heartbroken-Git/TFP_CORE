class 24eBAC_HorsBordDouanes:C_Boat_Civil_01_police_F {
    _generalMacro = "C_Boat_Civil_01_police_F";
    scope = 2;
    side = 3;
    faction = "CIV_F";
    displayName="Hors-Bord (Douanes)";
    author = "Heartbroken";
    crew = "TFD_Douanier_polo";
    hiddenSelections[]= {"camo", "camo2"};
    hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Hors-Bord\Hors-BordDouanes_ext.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_police_co.paa"};
    typicalCargo[] = {"TFD_Douanier_polo"};
    class EventHandlers
	{
		init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandomPolMotorboat.sqf""";
	};
};

class 24eBAC_HorsBordGN:C_Boat_Civil_01_police_F {
    _generalMacro = "C_Boat_Civil_01_police_F";
    scope = 2;
    side = 1;
    faction = "TFD_GN";
    displayName="VSMP";
    author = "Heartbroken";
    crew = "TFD_Gendarme_Depart";
    hiddenSelections[]= {"camo", "camo2"};
    hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Hors-Bord\Hors-BordGN_ext.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_police_co.paa"};
    typicalCargo[] = {"TFD_Gendarme_Depart"};
    class EventHandlers
	{
		init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandomPolMotorboat.sqf""";
	};
};

class 24eBAC_HorsBordMN:C_Boat_Civil_01_police_F {
    _generalMacro = "C_Boat_Civil_01_police_F";
    scope = 2;
    side = 1;
    faction = "TFD_MN";
    displayName="Vedette de Transport d'Autorite";
    author = "Heartbroken";
    crew = "TFD_Marin_TPB";
    hiddenSelections[]= {"camo", "camo2"};
    hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Hors-Bord\Hors-BordMN_ext.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_police_co.paa"};
    typicalCargo[] = {"TFD_Marin_TPB"};
    animationList[] = {"hidePolice",1,"HideRescueSigns",1,"HidePoliceSigns",1};
    class EventHandlers
	{
		init = "(_this select 0) execVM ""\24eBAC_Vehicles\Script\stopRandomCivFRMotorboat.sqf""";
	};
};

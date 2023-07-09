class 24eBAC_RhibGN:B_G_Boat_Transport_02_F {
    _generalMacro = "B_G_Boat_Transport_02_F";
    scope = 2;
    scopeCurator = 2;
    side = 1;
    faction = "TFD_GN";
    displayName="RHIB";
    author = "Heartbroken";
    crew = "TFD_Gendarme_Depart";
    // hiddenSelections[]= {"Camo_1", "Camo_2"};
    // hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\Hors-Bord\Hors-BordDouanes_ext.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_police_co.paa"};
    typicalCargo[] = {"TFD_Gendarme_Depart"};
};

class 24eBAC_RhibMN:B_G_Boat_Transport_02_F {
    _generalMacro = "B_G_Boat_Transport_02_F";
    scope = 2;
    scopeCurator = 2;
    side = 1;
    faction = "TFD_MN";
    displayName="RHIB";
    author = "Heartbroken";
    crew = "TFD_Marin_TPBpc";
    typicalCargo[] = {"TFD_Marin_TPBpc"};
};

class 24eBAC_RhibAA:B_G_Boat_Transport_02_F {
    _generalMacro = "B_G_Boat_Transport_02_F";
    scope = 2;
    scopeCurator = 2;
    side = 1;
    faction = "TFD_AA";
    displayName="RHIB";
    author = "Heartbroken";
    crew = "B_soldier_F";
    hiddenSelections[]= {"Camo_1", "Camo_2"};
    hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\RHIB_Mil\RHIBgris_ext.paa","\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_interior_2_CO.paa"};
    textureList[]= {"Gris", 1};
    typicalCargo[] = {"B_soldier_F"};
};

class 24eBAC_RhibGN_HV:B_G_Boat_Transport_02_F {
    _generalMacro = "B_G_Boat_Transport_02_F";
    scope = 2;
    scopeCurator = 2;
    side = 1;
    faction = "TFD_GN";
    displayName="RHIB (Haute Visibilite)";
    author = "Heartbroken";
    crew = "TFD_Gendarme_Depart";
    hiddenSelections[]= {"Camo_1", "Camo_2"};
    hiddenSelectionsTextures[]= {"\24eBAC_Vehicles\Data\RHIB_Mil\RHIBorange_ext.paa","\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_interior_2_CO.paa"};
    textureList[] = {"Orange", 1};
    typicalCargo[] = {"TFD_Gendarme_Depart"};
};

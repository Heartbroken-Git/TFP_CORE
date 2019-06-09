class TFD_Pompier_PL: B_diver_F
{
    author = "Heartbroken";
	displayName = "Sapeur-Pompier (Plongeur)";
	side = 3;
	faction = "CIV_F";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    uniformClass = "TFD_WetsuitHV";
	hiddenSelections[] = {"Camo1","Camo2","insignia"};
    hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\WetsuitHV.paa","\TFD_Units\Data\Vest\RecycleurHV.paa"};
	hiddenUnderwaterSelections[] = {"hide"};
	shownUnderwaterSelections[] = {"unhide","unhide2"};
	hiddenUnderwaterSelectionsTextures[] = {"\TFD_Units\Data\Vest\RecycleurHV.paa","\TFD_Units\Data\Vest\RecycleurHV.paa","\A3\characters_f\data\visors_ca.paa"};
	backpack="";
    weapons[] = {Throw, Put};
    respawnWeapons[] = {Throw, Put};
    Items[] = {FirstAidKit};
    RespawnItems[] = {FirstAidKit};
    magazines[] = {Chemlight_blue, Chemlight_blue, Chemlight_red, Chemlight_red, Chemlight_green, Chemlight_green};
    respawnMagazines[] = {Chemlight_blue, Chemlight_blue, Chemlight_red, Chemlight_red, Chemlight_green, Chemlight_green};
    linkedItems[] = {TFD_RecycleurHV, G_B_Diving, ItemMap, ItemCompass, ItemWatch, ItemRadio};
    respawnLinkedItems[] = {TFD_RecycleurHV, G_B_Diving, ItemMap, ItemCompass, ItemWatch, ItemRadio};
};

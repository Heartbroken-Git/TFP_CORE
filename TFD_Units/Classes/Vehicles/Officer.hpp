class TFD_Pompier_FDF: O_T_Officer_F
{
    author = "Heartbroken";
	displayName = "Sapeur-Pompier (FDF)";
	side = 3;
	faction = "CIV_F";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    uniformClass = "TFD_ParkaFeuSP";
	hiddenSelections[] = {"Camo", "insignia"};
    hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\ParkaFeuSP.paa"};
    weapons[] = {Throw, Put};
    respawnWeapons[] = {Throw, Put};
    Items[] = {FirstAidKit};
    RespawnItems[] = {FirstAidKit};
    magazines[] = {Chemlight_green, Chemlight_green};
    respawnMagazines[] = {Chemlight_green, Chemlight_green};
    linkedItems[] = {TFD_CasqueF2_HDR, G_Balaclava_TI_G_blk_F, ItemMap, ItemCompass, ItemWatch, ItemRadio};
    respawnLinkedItems[] = {TFD_CasqueF2_HDR, G_Balaclava_TI_G_blk_F, ItemMap, ItemCompass, ItemWatch, ItemRadio};
};

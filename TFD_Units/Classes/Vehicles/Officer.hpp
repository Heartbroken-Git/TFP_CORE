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

class TFD_Gendarme_Parka: O_T_Officer_F
{
    author = "Heartbroken";
	displayName = "Gendarme Departemental (Parka)";
	side = 1;
	faction = "TFD_GN";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    uniformClass = "TFD_ParkaGN";
	hiddenSelections[] = {"Camo", "insignia"};
    hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\ParkaGN.paa"};
    weapons[] = {hgun_Rook40_F, Throw, Put};               // Which weapons the character has.
    respawnWeapons[] = {hgun_Rook40_F, Throw, Put};        // Which weapons the character respawns with.
    Items[] = {FirstAidKit};                // Which items the character has.
    RespawnItems[] = {FirstAidKit};         // Which items the character respawns with.
    magazines[] = {mag_4(16Rnd_9x21_Mag), Chemlight_green, Chemlight_green};               // What ammunition the character has.
    respawnMagazines[] = {mag_4(16Rnd_9x21_Mag), Chemlight_green, Chemlight_green};        // What ammunition the character respawns with.
    linkedItems[] = {V_Rangemaster_belt, TFD_CasquetteGend_Depart, ItemMap, ItemCompass, ItemWatch, ItemRadio};               // Which items the character has.
    respawnLinkedItems[] = {V_Rangemaster_belt, TFD_CasquetteGend_Depart, ItemMap, ItemCompass, ItemWatch, ItemRadio};        // Which items the character respawns with.
};

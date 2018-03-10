class TFD_Gendarme_MobileInter: B_Soldier_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
{
    author = "Heartbroken";         // The name of the author of the asset, which is displayed in the editor.
	displayName = "Gendarme Mobile (Intervention)";
	side = 1;
	faction = "TFD_GN";
    scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
    scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
    scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
    uniformClass = "TFD_TenueInter_GN";                          // This links this soldier to a particular uniform. For the details, see below.
	hiddenSelections[] = {"camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
    hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\TenueInter_GN.paa"};
	backpack = "";
    weapons[] = {hgun_Rook40_F, Throw, Put};               // Which weapons the character has.
    respawnWeapons[] = {hgun_Rook40_F, Throw, Put};        // Which weapons the character respawns with.
    Items[] = {FirstAidKit};                // Which items the character has.
    RespawnItems[] = {FirstAidKit};         // Which items the character respawns with.
    magazines[] = {mag_4(16Rnd_9x21_Mag), Chemlight_green, Chemlight_green};               // What ammunition the character has.
    respawnMagazines[] = {mag_4(16Rnd_9x21_Mag), Chemlight_green, Chemlight_green};        // What ammunition the character respawns with.
    linkedItems[] = {V_Rangemaster_belt, TFD_CasquetteGend_Mobile, ItemMap, ItemCompass, ItemWatch, ItemRadio};               // Which items the character has.
    respawnLinkedItems[] = {V_Rangemaster_belt, TFD_CasquetteGend_Mobile, ItemMap, ItemCompass, ItemWatch, ItemRadio};
};

class TFD_PolicierNat_Inter: B_Soldier_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
{
    author = "Heartbroken";         // The name of the author of the asset, which is displayed in the editor.
	displayName = "Policier (Intervention)";
	side = 3;
	faction = "CIV_F";
    scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
    scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
    scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
    uniformClass = "TFD_TenueInter_PN";                          // This links this soldier to a particular uniform. For the details, see below.
	hiddenSelections[] = {"camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
    hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\TenueInter_PN.paa"};
	backpack = "";
    weapons[] = {hgun_Rook40_F, Throw, Put};               // Which weapons the character has.
    respawnWeapons[] = {hgun_Rook40_F, Throw, Put};        // Which weapons the character respawns with.
    Items[] = {FirstAidKit};                // Which items the character has.
    RespawnItems[] = {FirstAidKit};         // Which items the character respawns with.
    magazines[] = {mag_4(16Rnd_9x21_Mag), Chemlight_green, Chemlight_green};               // What ammunition the character has.
    respawnMagazines[] = {mag_4(16Rnd_9x21_Mag), Chemlight_green, Chemlight_green};        // What ammunition the character respawns with.
    linkedItems[] = {V_Rangemaster_belt, TFD_CasquettePolice, ItemMap, ItemCompass, ItemWatch, ItemRadio};               // Which items the character has.
    respawnLinkedItems[] = {V_Rangemaster_belt, TFD_CasquettePolice, ItemMap, ItemCompass, ItemWatch, ItemRadio};        // Which items the character respawns with.
};

class TFD_Gendarme_Depart: B_RangeMaster_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
{
    author = "Heartbroken";         // The name of the author of the asset, which is displayed in the editor.
	displayName = "Gendarme Departemental (Polo)";
	side = 1;
	faction = "TFD_GN";
    scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
    scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
    scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
    uniformClass = "TFD_PoloGend";                          // This links this soldier to a particular uniform. For the details, see below.
	hiddenSelections[] = {"Camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
    hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\PoloGend.paa"};
    weapons[] = {hgun_Rook40_F, Throw, Put};               // Which weapons the character has.
    respawnWeapons[] = {hgun_Rook40_F, Throw, Put};        // Which weapons the character respawns with.
    Items[] = {FirstAidKit};                // Which items the character has.
    RespawnItems[] = {FirstAidKit};         // Which items the character respawns with.
    magazines[] = {mag_4(16Rnd_9x21_Mag), Chemlight_green, Chemlight_green};               // What ammunition the character has.
    respawnMagazines[] = {mag_4(16Rnd_9x21_Mag), Chemlight_green, Chemlight_green};        // What ammunition the character respawns with.
    linkedItems[] = {V_Rangemaster_belt, TFD_CasquetteGend_Depart, ItemMap, ItemCompass, ItemWatch, ItemRadio};               // Which items the character has.
    respawnLinkedItems[] = {V_Rangemaster_belt, TFD_CasquetteGend_Depart, ItemMap, ItemCompass, ItemWatch, ItemRadio};        // Which items the character respawns with.
};

class TFD_Gendarme_Mobile: B_RangeMaster_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
{
    author = "Heartbroken";         // The name of the author of the asset, which is displayed in the editor.
	displayName = "Gendarme Mobile (Polo)";
	side = 1;
	faction = "TFD_GN";
    scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
    scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
    scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
    uniformClass = "TFD_PoloGend";                          // This links this soldier to a particular uniform. For the details, see below.
	hiddenSelections[] = {"Camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
    hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\PoloGend.paa"};
    weapons[] = {hgun_Rook40_F, Throw, Put};               // Which weapons the character has.
    respawnWeapons[] = {hgun_Rook40_F, Throw, Put};        // Which weapons the character respawns with.
    Items[] = {FirstAidKit};                // Which items the character has.
    RespawnItems[] = {FirstAidKit};         // Which items the character respawns with.
    magazines[] = {mag_4(16Rnd_9x21_Mag), Chemlight_green, Chemlight_green};               // What ammunition the character has.
    respawnMagazines[] = {mag_4(16Rnd_9x21_Mag), Chemlight_green, Chemlight_green};        // What ammunition the character respawns with.
    linkedItems[] = {V_Rangemaster_belt, TFD_CasquetteGend_Mobile, ItemMap, ItemCompass, ItemWatch, ItemRadio};               // Which items the character has.
    respawnLinkedItems[] = {V_Rangemaster_belt, TFD_CasquetteGend_Mobile, ItemMap, ItemCompass, ItemWatch, ItemRadio};        // Which items the character respawns with.
};

class TFD_Pompier_polo: B_RangeMaster_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
{
    author = "Heartbroken";         // The name of the author of the asset, which is displayed in the editor.
	displayName = "Pompier (Polo)";
	side = 3;
	faction = "CIV_F";
    scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
    scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
    scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
    uniformClass = "TFD_PoloSP";                          // This links this soldier to a particular uniform. For the details, see below.
	hiddenSelections[] = {"Camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
    hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\PoloSP.paa"};
    weapons[] = {Throw, Put};               // Which weapons the character has.
    respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
    Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};                // Which items the character has.
    RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};         // Which items the character respawns with.
    magazines[] = {Chemlight_green, Chemlight_green};               // What ammunition the character has.
    respawnMagazines[] = {Chemlight_green, Chemlight_green};        // What ammunition the character respawns with.
    linkedItems[] = {TFD_CasquetteSP, ItemMap, ItemCompass, ItemWatch, ItemRadio};               // Which items the character has.
    respawnLinkedItems[] = {TFD_CasquetteSP, ItemMap, ItemCompass, ItemWatch, ItemRadio};        // Which items the character respawns with.
};

class TFD_PompierAir_polo: B_RangeMaster_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
{
    author = "Heartbroken";         // The name of the author of the asset, which is displayed in the editor.
	displayName = "Pompier de l'Air (Polo)";
	side = 1;
	faction = "TFD_AA";
    scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
    scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
    scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
    uniformClass = "TFD_PoloSP_air";                          // This links this soldier to a particular uniform. For the details, see below.
	hiddenSelections[] = {"Camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
    hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\PoloSP_air.paa"};
    weapons[] = {Throw, Put};               // Which weapons the character has.
    respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
    Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};                // Which items the character has.
    RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};         // Which items the character respawns with.
    magazines[] = {Chemlight_green, Chemlight_green};               // What ammunition the character has.
    respawnMagazines[] = {Chemlight_green, Chemlight_green};        // What ammunition the character respawns with.
    linkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio};               // Which items the character has.
    respawnLinkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio};        // Which items the character respawns with.
};

class TFD_Vigile_polo: B_RangeMaster_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
{
    author = "Heartbroken";         // The name of the author of the asset, which is displayed in the editor.
	displayName = "Vigile (Polo)";
	side = 3;
	faction = "CIV_F";
    scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
    scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
    scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
    uniformClass = "TFD_PoloSecurite";                          // This links this soldier to a particular uniform. For the details, see below.
	hiddenSelections[] = {"Camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
    hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\PoloSecurite.paa"};
    weapons[] = {Throw, Put};               // Which weapons the character has.
    respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
    Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};                // Which items the character has.
    RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};         // Which items the character respawns with.
    magazines[] = {Chemlight_green, Chemlight_green};               // What ammunition the character has.
    respawnMagazines[] = {Chemlight_green, Chemlight_green};        // What ammunition the character respawns with.
    linkedItems[] = {TFD_CasquetteSecurite, ItemMap, ItemCompass, ItemWatch, ItemRadio};               // Which items the character has.
    respawnLinkedItems[] = {TFD_CasquetteSecurite, ItemMap, ItemCompass, ItemWatch, ItemRadio};        // Which items the character respawns with.
};

class TFD_PolicierMun_poloMarine: B_RangeMaster_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
{
    author = "Heartbroken";         // The name of the author of the asset, which is displayed in the editor.
	displayName = "Policier Municipal (Polo Marine)";
	side = 3;
	faction = "CIV_F";
    scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
    scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
    scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
    uniformClass = "TFD_PoloPM_marine";                          // This links this soldier to a particular uniform. For the details, see below.
	hiddenSelections[] = {"Camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
    hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\PoloPM_marine.paa"};
    weapons[] = {Throw, Put};               // Which weapons the character has.
    respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
    Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};                // Which items the character has.
    RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};         // Which items the character respawns with.
    magazines[] = {Chemlight_green, Chemlight_green};               // What ammunition the character has.
    respawnMagazines[] = {Chemlight_green, Chemlight_green};        // What ammunition the character respawns with.
    linkedItems[] = {TFD_CasquettePM, ItemMap, ItemCompass, ItemWatch, ItemRadio};               // Which items the character has.
    respawnLinkedItems[] = {TFD_CasquettePM, ItemMap, ItemCompass, ItemWatch, ItemRadio};        // Which items the character respawns with.
};

class TFD_PolicierMun_poloBlanc: B_RangeMaster_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
{
    author = "Heartbroken";         // The name of the author of the asset, which is displayed in the editor.
	displayName = "Policier Municipal (Polo Blanc)";
	side = 3;
	faction = "CIV_F";
    scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
    scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
    scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
    uniformClass = "TFD_PoloPM_blanc";                          // This links this soldier to a particular uniform. For the details, see below.
	hiddenSelections[] = {"Camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
    hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\PoloPM_blanc.paa"};
    weapons[] = {Throw, Put};               // Which weapons the character has.
    respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
    Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};                // Which items the character has.
    RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};         // Which items the character respawns with.
    magazines[] = {Chemlight_green, Chemlight_green};               // What ammunition the character has.
    respawnMagazines[] = {Chemlight_green, Chemlight_green};        // What ammunition the character respawns with.
    linkedItems[] = {TFD_CasquettePM, ItemMap, ItemCompass, ItemWatch, ItemRadio};               // Which items the character has.
    respawnLinkedItems[] = {TFD_CasquettePM, ItemMap, ItemCompass, ItemWatch, ItemRadio};        // Which items the character respawns with.
};

class TFD_PolicierMun_poloASVP: B_RangeMaster_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
{
    author = "Heartbroken";         // The name of the author of the asset, which is displayed in the editor.
	displayName = "ASVP (Polo)";
	side = 3;
	faction = "CIV_F";
    scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
    scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
    scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
    uniformClass = "TFD_PoloPM_ASVP";                          // This links this soldier to a particular uniform. For the details, see below.
	hiddenSelections[] = {"Camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
    hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\PoloPM_ASVP.paa"};
    weapons[] = {Throw, Put};               // Which weapons the character has.
    respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
    Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};                // Which items the character has.
    RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};         // Which items the character respawns with.
    magazines[] = {Chemlight_green, Chemlight_green};               // What ammunition the character has.
    respawnMagazines[] = {Chemlight_green, Chemlight_green};        // What ammunition the character respawns with.
    linkedItems[] = {TFD_CasquettePM_ASVP, ItemMap, ItemCompass, ItemWatch, ItemRadio};               // Which items the character has.
    respawnLinkedItems[] = {TFD_CasquettePM_ASVP, ItemMap, ItemCompass, ItemWatch, ItemRadio};        // Which items the character respawns with.
};

class TFD_PolicierMun_poloRurale: B_RangeMaster_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
{
    author = "Heartbroken";         // The name of the author of the asset, which is displayed in the editor.
	displayName = "Garde Champetre (Polo)";
	side = 3;
	faction = "CIV_F";
    scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
    scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
    scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
    uniformClass = "TFD_PoloPM_rurale";                          // This links this soldier to a particular uniform. For the details, see below.
	hiddenSelections[] = {"Camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
    hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\PoloPM_rurale.paa"};
    weapons[] = {Throw, Put};               // Which weapons the character has.
    respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
    Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};                // Which items the character has.
    RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};         // Which items the character respawns with.
    magazines[] = {Chemlight_green, Chemlight_green};               // What ammunition the character has.
    respawnMagazines[] = {Chemlight_green, Chemlight_green};        // What ammunition the character respawns with.
    linkedItems[] = {TFD_CasquettePM_rurale, ItemMap, ItemCompass, ItemWatch, ItemRadio};               // Which items the character has.
    respawnLinkedItems[] = {TFD_CasquettePM_rurale, ItemMap, ItemCompass, ItemWatch, ItemRadio};        // Which items the character respawns with.
};

class TFD_SurveillantAdmPen_polo: B_RangeMaster_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
{
    author = "Heartbroken";         // The name of the author of the asset, which is displayed in the editor.
	displayName = "Surveillant (Polo)";
	side = 3;
	faction = "CIV_F";
    scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
    scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
    scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
    uniformClass = "TFD_PoloAdmPen";                          // This links this soldier to a particular uniform. For the details, see below.
	hiddenSelections[] = {"Camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
    hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\PoloAdmPen.paa"};
    weapons[] = {Throw, Put};               // Which weapons the character has.
    respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
    Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};                // Which items the character has.
    RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};         // Which items the character respawns with.
    magazines[] = {Chemlight_green, Chemlight_green};               // What ammunition the character has.
    respawnMagazines[] = {Chemlight_green, Chemlight_green};        // What ammunition the character respawns with.
    linkedItems[] = {TFD_CasquetteAdmPen, ItemMap, ItemCompass, ItemWatch, ItemRadio};               // Which items the character has.
    respawnLinkedItems[] = {TFD_CasquetteAdmPen, ItemMap, ItemCompass, ItemWatch, ItemRadio};        // Which items the character respawns with.
};

class TFD_Formateur_polo: B_RangeMaster_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
{
    author = "Heartbroken";         // The name of the author of the asset, which is displayed in the editor.
	displayName = "Formateur (Polo)";
	side = 3;
	faction = "CIV_F";
    scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
    scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
    scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
    uniformClass = "TFD_PoloFormateur";                          // This links this soldier to a particular uniform. For the details, see below.
	hiddenSelections[] = {"Camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
    hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\PoloFormateur.paa"};
    weapons[] = {Throw, Put};               // Which weapons the character has.
    respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
    Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};                // Which items the character has.
    RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};         // Which items the character respawns with.
    magazines[] = {Chemlight_green, Chemlight_green, Chemlight_red, Chemlight_red};               // What ammunition the character has.
    respawnMagazines[] = {Chemlight_green, Chemlight_green, Chemlight_red, Chemlight_red};        // What ammunition the character respawns with.
    linkedItems[] = {TFD_CasquetteABFormateur, TFD_GHV_Formateur, ItemMap, ItemCompass, ItemWatch, ItemRadio};               // Which items the character has.
    respawnLinkedItems[] = {TFD_CasquetteABFormateur, TFD_GHV_Formateur, ItemMap, ItemCompass, ItemWatch, ItemRadio};        // Which items the character respawns with.
};

class TFD_Benevole_polo: B_RangeMaster_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
{
    author = "Heartbroken";         // The name of the author of the asset, which is displayed in the editor.
	displayName = "Benevole CICR (Polo)";
	side = 3;
	faction = "CIV_F";
    scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
    scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
    scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
    uniformClass = "TFD_PoloBenevole";                          // This links this soldier to a particular uniform. For the details, see below.
	hiddenSelections[] = {"Camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
    hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\PoloCICR.paa"};
    weapons[] = {Throw, Put};               // Which weapons the character has.
    respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
    Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};                // Which items the character has.
    RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};         // Which items the character respawns with.
    magazines[] = {Chemlight_green, Chemlight_green, Chemlight_red, Chemlight_red};               // What ammunition the character has.
    respawnMagazines[] = {Chemlight_green, Chemlight_green, Chemlight_red, Chemlight_red};        // What ammunition the character respawns with.
    linkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio};               // Which items the character has.
    respawnLinkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio};        // Which items the character respawns with.
};

class TFD_Douanier_polo: B_RangeMaster_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
{
    author = "Heartbroken";         // The name of the author of the asset, which is displayed in the editor.
	displayName = "Douanier (Polo)";
	side = 3;
	faction = "CIV_F";
    scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
    scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
    scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
    uniformClass = "TFD_PoloDouane";                          // This links this soldier to a particular uniform. For the details, see below.
	hiddenSelections[] = {"Camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
    hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\PoloDouane.paa"};
    weapons[] = {hgun_Rook40_F, Throw, Put};               // Which weapons the character has.
    respawnWeapons[] = {hgun_Rook40_F, Throw, Put};        // Which weapons the character respawns with.
    Items[] = {FirstAidKit};                // Which items the character has.
    RespawnItems[] = {FirstAidKit};         // Which items the character respawns with.
    magazines[] = {mag_4(16Rnd_9x21_Mag), Chemlight_green, Chemlight_green};               // What ammunition the character has.
    respawnMagazines[] = {mag_4(16Rnd_9x21_Mag), Chemlight_green, Chemlight_green};        // What ammunition the character respawns with.
    linkedItems[] = {V_Rangemaster_belt, TFD_CasquetteDouanes, ItemMap, ItemCompass, ItemWatch, ItemRadio};               // Which items the character has.
    respawnLinkedItems[] = {V_Rangemaster_belt, TFD_CasquetteDouanes, ItemMap, ItemCompass, ItemWatch, ItemRadio};        // Which items the character respawns with.
};

class TFD_SapeurSauveteur_polo: B_RangeMaster_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
{
    author = "Heartbroken";         // The name of the author of the asset, which is displayed in the editor.
	displayName = "Sapeur-Sauveteur (Polo)";
	side = 1;
	faction = "TFD_AT";
    scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
    scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
    scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
    uniformClass = "TFD_PoloUIISC";                          // This links this soldier to a particular uniform. For the details, see below.
	hiddenSelections[] = {"Camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
    hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\PoloUIISC.paa"};
    weapons[] = {Throw, Put};               // Which weapons the character has.
    respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
    Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};                // Which items the character has.
    RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};         // Which items the character respawns with.
    magazines[] = {Chemlight_green, Chemlight_green, Chemlight_red, Chemlight_red};               // What ammunition the character has.
    respawnMagazines[] = {Chemlight_green, Chemlight_green, Chemlight_red, Chemlight_red};        // What ammunition the character respawns with.
    linkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio};               // Which items the character has.
    respawnLinkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio};        // Which items the character respawns with.
};

class TFD_PolicierNat_Polo: B_RangeMaster_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
{
    author = "Heartbroken";         // The name of the author of the asset, which is displayed in the editor.
	displayName = "Policier (Polo)";
	side = 3;
	faction = "CIV_F";
    scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
    scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
    scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
    uniformClass = "TFD_PoloPN";                          // This links this soldier to a particular uniform. For the details, see below.
	hiddenSelections[] = {"Camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
    hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\PoloPN.paa"};
    weapons[] = {hgun_Rook40_F, Throw, Put};               // Which weapons the character has.
    respawnWeapons[] = {hgun_Rook40_F, Throw, Put};        // Which weapons the character respawns with.
    Items[] = {FirstAidKit};                // Which items the character has.
    RespawnItems[] = {FirstAidKit};         // Which items the character respawns with.
    magazines[] = {mag_4(16Rnd_9x21_Mag), Chemlight_green, Chemlight_green};               // What ammunition the character has.
    respawnMagazines[] = {mag_4(16Rnd_9x21_Mag), Chemlight_green, Chemlight_green};        // What ammunition the character respawns with.
    linkedItems[] = {V_Rangemaster_belt, TFD_CasquettePolice, ItemMap, ItemCompass, ItemWatch, ItemRadio};               // Which items the character has.
    respawnLinkedItems[] = {V_Rangemaster_belt, TFD_CasquettePolice, ItemMap, ItemCompass, ItemWatch, ItemRadio};        // Which items the character respawns with.
};

class TFD_BenevoleCRF_polo: B_RangeMaster_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
{
    author = "Heartbroken";         // The name of the author of the asset, which is displayed in the editor.
	displayName = "Benevole CRF (Polo)";
	side = 3;
	faction = "CIV_F";
    scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
    scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
    scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
    uniformClass = "TFD_PoloCRF";                          // This links this soldier to a particular uniform. For the details, see below.
	hiddenSelections[] = {"Camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
    hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\PoloCRF.paa"};
    weapons[] = {Throw, Put};               // Which weapons the character has.
    respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
    Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};                // Which items the character has.
    RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};         // Which items the character respawns with.
    magazines[] = {Chemlight_green, Chemlight_green, Chemlight_red, Chemlight_red};               // What ammunition the character has.
    respawnMagazines[] = {Chemlight_green, Chemlight_green, Chemlight_red, Chemlight_red};        // What ammunition the character respawns with.
    linkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio};               // Which items the character has.
    respawnLinkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio};        // Which items the character respawns with.
};

class TFD_BenevolePC_polo: B_RangeMaster_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
{
    author = "Heartbroken";         // The name of the author of the asset, which is displayed in the editor.
	displayName = "Benevole Protection Civile (Polo)";
	side = 3;
	faction = "CIV_F";
    scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
    scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
    scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
    uniformClass = "TFD_PoloPC";                          // This links this soldier to a particular uniform. For the details, see below.
	hiddenSelections[] = {"Camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
    hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\PoloPC.paa"};
    weapons[] = {Throw, Put};               // Which weapons the character has.
    respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
    Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};                // Which items the character has.
    RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};         // Which items the character respawns with.
    magazines[] = {Chemlight_green, Chemlight_green, Chemlight_red, Chemlight_red};               // What ammunition the character has.
    respawnMagazines[] = {Chemlight_green, Chemlight_green, Chemlight_red, Chemlight_red};        // What ammunition the character respawns with.
    linkedItems[] = {TFD_CasquettePC, ItemMap, ItemCompass, ItemWatch, ItemRadio};               // Which items the character has.
    respawnLinkedItems[] = {TFD_CasquettePC, ItemMap, ItemCompass, ItemWatch, ItemRadio};        // Which items the character respawns with.
};

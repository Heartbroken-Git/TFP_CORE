class TFD_Pistard_AA: C_man_w_worker_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
{
    author = "Heartbroken";         // The name of the author of the asset, which is displayed in the editor.
	displayName = "Pistard";
	side = 1;
	faction = "TFD_AA";
    scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
    scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
    scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
    uniformClass = "TFD_CombiPistard";                          // This links this soldier to a particular uniform. For the details, see below.
	hiddenSelections[] = {"Camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
    hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\Combi_pistardAA.paa"};
    weapons[] = {Throw, Put};               // Which weapons the character has.
    respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
    Items[] = {FirstAidKit};                // Which items the character has.
    RespawnItems[] = {FirstAidKit};         // Which items the character respawns with.
    magazines[] = {Chemlight_green, Chemlight_green, Chemlight_red, Chemlight_red};               // What ammunition the character has.
    respawnMagazines[] = {Chemlight_green, Chemlight_green, Chemlight_red, Chemlight_red};        // What ammunition the character respawns with.
    linkedItems[] = {H_Cap_headphones, ItemMap, ItemCompass, ItemWatch, ItemRadio};               // Which items the character has.
    respawnLinkedItems[] = {H_Cap_headphones, ItemMap, ItemCompass, ItemWatch, ItemRadio};        // Which items the character respawns with.
	class EventHandlers
		{
			init = "(_this select 0) execVM ""\TFD_Units\Script\stopRandom.sqf"""
		};
};

class TFD_Patrouilleur_DIR: C_man_w_worker_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
{
    author = "Heartbroken";         // The name of the author of the asset, which is displayed in the editor.
	displayName = "Patrouilleur";
	side = 3;
	faction = "CIV_F";
    scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
    scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
    scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
    uniformClass = "TFD_CombiDIR";                          // This links this soldier to a particular uniform. For the details, see below.
	hiddenSelections[] = {"Camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
    hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\Combi_patrouilleurDIR.paa"};
    weapons[] = {Throw, Put};               // Which weapons the character has.
    respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
    Items[] = {FirstAidKit};                // Which items the character has.
    RespawnItems[] = {FirstAidKit};         // Which items the character respawns with.
    magazines[] = {Chemlight_green, Chemlight_green, Chemlight_red, Chemlight_red};               // What ammunition the character has.
    respawnMagazines[] = {Chemlight_green, Chemlight_green, Chemlight_red, Chemlight_red};        // What ammunition the character respawns with.
    linkedItems[] = {H_Cap_marshal, ItemMap, ItemCompass, ItemWatch, ItemRadio};               // Which items the character has.
    respawnLinkedItems[] = {H_Cap_marshal, ItemMap, ItemCompass, ItemWatch, ItemRadio};        // Which items the character respawns with.
	class EventHandlers
		{
			init = "(_this select 0) execVM ""\TFD_Units\Script\stopRandom.sqf"""
		};
};

class TFD_Marin_TPB: C_man_w_worker_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
{
    author = "Heartbroken";         // The name of the author of the asset, which is displayed in the editor.
	displayName = "Marin (TPB)";
	side = 1;
	faction = "TFD_MN";
    scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
    scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
    scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
    uniformClass = "TFD_CombiTPB";                          // This links this soldier to a particular uniform. For the details, see below.
	hiddenSelections[] = {"Camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
    hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\Combi_TPB.paa"};
    weapons[] = {Throw, Put};               // Which weapons the character has.
    respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
    Items[] = {FirstAidKit};                // Which items the character has.
    RespawnItems[] = {FirstAidKit};         // Which items the character respawns with.
    magazines[] = {Chemlight_green, Chemlight_green, Chemlight_red, Chemlight_red};               // What ammunition the character has.
    respawnMagazines[] = {Chemlight_green, Chemlight_green, Chemlight_red, Chemlight_red};        // What ammunition the character respawns with.
    linkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio};               // Which items the character has.
    respawnLinkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio};        // Which items the character respawns with.
	class EventHandlers
		{
			init = "(_this select 0) execVM ""\TFD_Units\Script\stopRandom.sqf"""
		};
};

class TFD_Marin_TPBfeu: C_man_w_worker_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
{
    author = "Heartbroken";         // The name of the author of the asset, which is displayed in the editor.
	displayName = "Marin (TPB Feu)";
	side = 1;
	faction = "TFD_MN";
    scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
    scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
    scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
    uniformClass = "TFD_CombiTPBfeu";                          // This links this soldier to a particular uniform. For the details, see below.
	hiddenSelections[] = {"Camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
    hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\Combi_TPBfeu.paa"};
    weapons[] = {Throw, Put};               // Which weapons the character has.
    respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
    Items[] = {FirstAidKit};                // Which items the character has.
    RespawnItems[] = {FirstAidKit};         // Which items the character respawns with.
    magazines[] = {Chemlight_green, Chemlight_green, Chemlight_red, Chemlight_red};               // What ammunition the character has.
    respawnMagazines[] = {Chemlight_green, Chemlight_green, Chemlight_red, Chemlight_red};        // What ammunition the character respawns with.
    linkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio};               // Which items the character has.
    respawnLinkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio};        // Which items the character respawns with.
	class EventHandlers
		{
			init = "(_this select 0) execVM ""\TFD_Units\Script\stopRandom.sqf"""
		};
};

class TFD_Marin_TPBpc: C_man_w_worker_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
{
    author = "Heartbroken";         // The name of the author of the asset, which is displayed in the editor.
    displayName = "Marin (Poste de Combat)";
    side = 1;
    faction = "TFD_MN";
    scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
    scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
    scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
    uniformClass = "TFD_CombiTPB";                          // This links this soldier to a particular uniform. For the details, see below.
    hiddenSelections[] = {"Camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
    hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\Combi_TPB.paa"};
    weapons[] = {Throw, Put};               // Which weapons the character has.
    respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
    Items[] = {FirstAidKit};                // Which items the character has.
    RespawnItems[] = {FirstAidKit};         // Which items the character respawns with.
    magazines[] = {Chemlight_green, Chemlight_green, Chemlight_red, Chemlight_red};               // What ammunition the character has.
    respawnMagazines[] = {Chemlight_green, Chemlight_green, Chemlight_red, Chemlight_red};        // What ammunition the character respawns with.
    linkedItems[] = {H_PASGT_basic_black_F, TFD_GiletS3_CE, ItemMap, ItemCompass, ItemWatch, ItemRadio};               // Which items the character has.
    respawnLinkedItems[] = {H_PASGT_basic_black_F, TFD_GiletS3_CE, ItemMap, ItemCompass, ItemWatch, ItemRadio};        // Which items the character respawns with.
    class EventHandlers
    {
       init = "(_this select 0) execVM ""\TFD_Units\Script\stopRandom.sqf"""
    };
};



class TFD_Pilote_SC: C_man_w_worker_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
{
    author = "Heartbroken";         // The name of the author of the asset, which is displayed in the editor.
    displayName = "Pilote (Securite Civile)";
    side = 3;
    faction = "CIV_F";
    scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
    scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
    scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
    uniformClass = "TFD_CombiPilote_SC";                          // This links this soldier to a particular uniform. For the details, see below.
    hiddenSelections[] = {"Camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
    hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\Combi_piloteSC.paa"};
    weapons[] = {Throw, Put};               // Which weapons the character has.
    respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
    Items[] = {FirstAidKit};                // Which items the character has.
    RespawnItems[] = {FirstAidKit};         // Which items the character respawns with.
    magazines[] = {Chemlight_green, Chemlight_green, Chemlight_red, Chemlight_red};               // What ammunition the character has.
    respawnMagazines[] = {Chemlight_green, Chemlight_green, Chemlight_red, Chemlight_red};        // What ammunition the character respawns with.
    linkedItems[] = {TFD_CasqueHeli_SC, ItemMap, ItemCompass, ItemWatch, ItemRadio};               // Which items the character has.
    respawnLinkedItems[] = {TFD_CasqueHeli_SC, ItemMap, ItemCompass, ItemWatch, ItemRadio};        // Which items the character respawns with.
    class EventHandlers
        {
            init = "(_this select 0) execVM ""\TFD_Units\Script\stopRandom.sqf"""
        };
};
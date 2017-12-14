class TFD_Soldat_Pull: B_G_Soldier_LAT_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
{
    author = "Heartbroken";         // The name of the author of the asset, which is displayed in the editor.
	displayName = "Soldat (Pull)";
	side = 1;
	faction = "TFD_AT";
    scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
    scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
    scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
    uniformClass = "TFD_PullCE_AT";                          // This links this soldier to a particular uniform. For the details, see below.
	hiddenSelections[] = {"camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
    hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\PullCE_AT.paa"};
	backpack = "";
    weapons[] = {Throw, Put};               // Which weapons the character has.
    respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
    Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};                // Which items the character has.
    RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};         // Which items the character respawns with.
    magazines[] = {Chemlight_green, Chemlight_green, Chemlight_red, Chemlight_red};               // What ammunition the character has.
    respawnMagazines[] = {Chemlight_green, Chemlight_green, Chemlight_red, Chemlight_red};        // What ammunition the character respawns with.
    linkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio};               // Which items the character has.
    respawnLinkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio};        // Which items the character respawns with.
	class EventHandlers
		{
			init = "(_this select 0) execVM ""\TFD_Units\Script\stopRandom.sqf"""
		};
};

class TFD_Aviateur_Pull: B_G_Soldier_LAT_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
{
    author = "Heartbroken";         // The name of the author of the asset, which is displayed in the editor.
	displayName = "Aviateur (Pull)";
	side = 1;
	faction = "TFD_AA";
    scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
    scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
    scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
    uniformClass = "TFD_PullMarine_AA";                          // This links this soldier to a particular uniform. For the details, see below.
	hiddenSelections[] = {"camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
    hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\PullMarine_AA.paa"};
	backpack = "";
    weapons[] = {Throw, Put};               // Which weapons the character has.
    respawnWeapons[] = {Throw, Put};        // Which weapons the character respawns with.
    Items[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};                // Which items the character has.
    RespawnItems[] = {FirstAidKit, FirstAidKit, FirstAidKit, FirstAidKit};         // Which items the character respawns with.
    magazines[] = {Chemlight_green, Chemlight_green, Chemlight_red, Chemlight_red};               // What ammunition the character has.
    respawnMagazines[] = {Chemlight_green, Chemlight_green, Chemlight_red, Chemlight_red};        // What ammunition the character respawns with.
    linkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio};               // Which items the character has.
    respawnLinkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio};        // Which items the character respawns with.
	class EventHandlers
		{
			init = "(_this select 0) execVM ""\TFD_Units\Script\stopRandom.sqf"""
		};
};
class TFD_Operateur_GIGN: I_Story_Crew_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
{
    author = "Heartbroken";         // The name of the author of the asset, which is displayed in the editor.
	displayName = "Operateur (GIGN)";
	side = 1;
	faction = "TFD_GN";
    scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
    scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
    scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
    uniformClass = "TFD_CombiInter_marine";                          // This links this soldier to a particular uniform. For the details, see below.
	hiddenSelections[] = {"camo","insignia"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
    hiddenSelectionsTextures[] = {"\TFD_Units\Data\Uniform\CombiTank_marine.paa"};
    weapons[] = {arifle_SPAR_01_blk_F,hgun_Pistol_heavy_02_F, Throw, Put};               // Which weapons the character has.
    respawnWeapons[] = {arifle_SPAR_01_blk_F,hgun_Pistol_heavy_02_F, Throw, Put};        // Which weapons the character respawns with.
    Items[] = {FirstAidKit};                // Which items the character has.
    RespawnItems[] = {FirstAidKit};         // Which items the character respawns with.
    magazines[] = {mag_8(30Rnd_556x45_Stanag), mag_3(6Rnd_45ACP_Cylinder), Chemlight_green, Chemlight_green};               // What ammunition the character has.
    respawnMagazines[] = {mag_8(30Rnd_556x45_Stanag), mag_3(6Rnd_45ACP_Cylinder), Chemlight_green, Chemlight_green};        // What ammunition the character respawns with.
    linkedItems[] = {H_HelmetB_light_black, TFD_GiletModulableSpecial_GIGN, G_Balaclava_TI_blk_F, ItemMap, ItemCompass, ItemWatch, ItemRadio};               // Which items the character has.
    respawnLinkedItems[] = {H_HelmetB_light_black, TFD_GiletModulableSpecial_GIGN, G_Balaclava_TI_blk_F, ItemMap, ItemCompass, ItemWatch, ItemRadio};        // Which items the character respawns with.
	/*class EventHandlers
		{
			init = "(_this select 0) execVM ""\TFD_Units\Script\stopRandom.sqf"""
		};*/
};

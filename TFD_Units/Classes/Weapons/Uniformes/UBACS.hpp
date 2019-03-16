//UBACS
class U_B_survival_uniform;
class TFD_UBACSCE_Palmes : U_B_survival_uniform {
	_generalMacro = "U_B_survival_uniform";
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName="Treillis UBACS de survie (Centre Europe)";
	author = "Heartbroken";
	hiddenSelections[]= {"camo"};
	hiddenSelectionsTextures[]= {"\TFD_Units\Data\Uniform\UBACS_CE.paa"};
	class ItemInfo: UniformItem{
		uniformModel = "-";
		uniformClass = "TFD_Plouf_UBACS";
		containerClass = "Supply40";
		uniformType="Neopren";
		mass = 60;
	};
};
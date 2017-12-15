// WETSUIT
class U_B_Wetsuit;
class TFD_WetsuitHV : U_B_Wetsuit {
	_generalMacro = "U_B_Wetsuit";
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName="Combinaison de plongee (Haute Visibilite)";
	author = "Heartbroken";
	hiddenSelections[]= {"camo"};
	hiddenSelectionsTextures[]= {"\TFD_Units\Data\Uniform\WetsuitHV.paa"};
	class ItemInfo: UniformItem{
		uniformModel = "-";
		uniformClass = TFD_Pompier_PL;
		containerClass = Supply80;
		uniformType = "Neopren";
		mass = 60;
	};
};
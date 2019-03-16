// RECYCLEUR
class V_RebreatherB;
class TFD_RecycleurHV : V_RebreatherB {
	_generalMacro = "V_RebreatherB";
    scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
    displayName="Recycleur (Haute Visibilite)";
	author = "Heartbroken";
	hiddenSelections[]= {"camo"};
	hiddenSelectionsTextures[]= {"\TFD_Units\Data\Vest\RecycleurHV.paa"};
	hiddenUnderwaterSelections[] = {"hide"};
	shownUnderwaterSelections[] = {"unhide","unhide2"};
	hiddenUnderwaterSelectionsTextures[] = {"\TFD_Units\Data\Vest\RecycleurHV.paa","\TFD_Units\Data\Vest\RecycleurHV.paa","\A3\characters_f\data\visors_ca.paa"};
};
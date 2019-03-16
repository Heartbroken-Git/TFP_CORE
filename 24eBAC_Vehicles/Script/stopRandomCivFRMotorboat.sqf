if (isServer) then {
	_this animate ["hidePolice", 1];       //police lights on roof
	_this animate ["HideRescueSigns", 1];  //greek lettering for rescue
    _this animate ["HidePoliceSigns", 1]; 	   //lettering for POLICE
    _this forceFlagTexture "\TFD_Objects\Data\Drapeau_FR.paa";
};

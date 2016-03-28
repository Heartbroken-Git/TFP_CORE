if (isServer) then {
	_this setVariable ["BIS_enableRandomzation",false];
	_this animate ["HidePolice", 1];       //police lights on roof and grill
	_this animate ["HideServices", 1];     //yellow roof lights and bullbar and rear rollcage, tools and bits in rear
	_this animate ["HideBackpacks", 1];    //backpacks hanging on side of vehicle
	_this animate ["HideBumper1", 1];      //flat iron bar style bumper
	_this animate ["HideBumper2", 0];      //round bullbar bumper with winch
	_this animate ["HideConstruction", 1]; //rollcage in rear
	_this animate ["HideDoor1", 0];        //drivers door
	_this animate ["HideDoor2", 0];        //passenger door (also needs the door glass hidden - "HideGlass2")
	_this animate ["HideDoor3", 0];        //rear flap
	_this animate ["HideGlass2", 0];       //passenger door glass
};
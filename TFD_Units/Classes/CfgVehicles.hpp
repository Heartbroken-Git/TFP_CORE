class CfgVehicles {

    #include "Vehicles\Backpacks.hpp"

	/// Magazines macros definition ///

	#define mag_2(a) a, a
	#define mag_3(a) a, a, a
	#define mag_4(a) a, a, a, a
	#define mag_5(a) a, a, a, a, a
	#define mag_6(a) a, a, a, a, a, a
	#define mag_7(a) a, a, a, a, a, a, a
	#define mag_8(a) a, a, a, a, a, a, a, a
	#define mag_9(a) a, a, a, a, a, a, a, a, a
	#define mag_10(a) a, a, a, a, a, a, a, a, a, a
	#define mag_11(a) a, a, a, a, a, a, a, a, a, a, a
	#define mag_12(a) a, a, a, a, a, a, a, a, a, a, a, a

	class B_RangeMaster_F;                     // For inheritance to work, the base class has to be defined.

    #include "Vehicles\Rangemaster.hpp"

	class B_diver_F;

    #include "Vehicles\Diver.hpp"

	class C_man_w_worker_F;                     // For inheritance to work, the base class has to be defined.

    #include "Vehicles\Worker.hpp"

	class C_scientist_F;                     // For inheritance to work, the base class has to be defined.

    #include "Vehicles\Scientist.hpp"

	class B_Helipilot_F;

    #include "Vehicles\Helipilot.hpp"


	class B_G_Soldier_LAT_F;                     // For inheritance to work, the base class has to be defined.

    #include "Vehicles\SoldierLat.hpp"

	class b_soldier_survival_F;

    #include "Vehicles\SoldierSurvival.hpp"

    class B_Soldier_F;

    #include "Vehicles\Soldier.hpp"

    class O_T_Officer_F; // May change to CSAT officer to avoid star impressions

    #include "Vehicles\Officer.hpp"

};

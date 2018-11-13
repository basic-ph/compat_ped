/*
transportAmmo = 0;
transportFuel = 0;
transportRepair = 0;
*/
class CfgVehicles {

    class ASZ_Car_Base;
    class ASZ_LR90_EI: ASZ_Car_Base {
        EGVAR(refuel,fuelCapacity) = 60;
    };
    class ASZ_LR90_M2 : ASZ_LR90_EI {
        EGVAR(refuel,fuelCapacity) = 60;
    };

    class ASZ_VM90_EI: ASZ_LR90_EI {
        EGVAR(refuel,fuelCapacity) = 80;
    };
    class ASZ_VM90_EI_M2: ASZ_VM90_EI {
        EGVAR(refuel,fuelCapacity) = 80;
    };
    class ASZ_VM90_EI_rep: ASZ_VM90_EI {
        transportFuel = 0;
        transportRepair = 0;
        EGVAR(refuel,fuelCapacity) = 80;
        //EGVAR(repair,canRepair) = 1;
    };

    class ASZ_VTML_EI_M2: ASZ_Car_Base {
        EGVAR(refuel,fuelCapacity) = 130;
    };

    class ASZ_Truck_Base;
    class ASZ_ACM904x4_EI: ASZ_Truck_Base {
         EGVAR(refuel,fuelCapacity) = 145;
    };
    class ASZ_ACM904x4_MM: ASZ_ACM904x4_EI {
		EGVAR(refuel,fuelCapacity) = 145;
	};
    class ASZ_ACM904x4_EI_logistic: ASZ_ACM904x4_EI {
        EGVAR(refuel,fuelCapacity) = 145;
    };
    class ASZ_ACM904x4_MM_logistic: ASZ_ACM904x4_EI {
        EGVAR(refuel,fuelCapacity) = 145;
    };
    class ASZ_ACM904x4_EI_fuel: ASZ_ACM904x4_EI {
        transportFuel = 0;
        EGVAR(refuel,fuelCapacity) = 145;
        EGVAR(refuel,fuelCargo) = 2000;
        EGVAR(refuel,hooks)[] = {{0.0,0.0,0.0}};
    };
    class ASZ_ACM904x4_MM_fuel: ASZ_ACM904x4_EI_fuel {
        EGVAR(refuel,fuelCapacity) = 145;
        EGVAR(refuel,fuelCargo) = 2000;
        EGVAR(refuel,hooks)[] = {{0.0,0.0,0.0}};
    };
    class ASZ_ACM904x4_AM_fuel: ASZ_ACM904x4_EI_fuel {
        EGVAR(refuel,fuelCapacity) = 145;
        EGVAR(refuel,fuelCargo) = 2000;
        EGVAR(refuel,hooks)[] = {{0.0,0.0,0.0}};
    };

    class ASZ_ACTL4x4_EI: ASZ_ACM904x4_EI {
        EGVAR(refuel,fuelCapacity) = 300;
    };
    class ASZ_ACTL4x4_MM: ASZ_ACTL4x4_EI {
        EGVAR(refuel,fuelCapacity) = 300;
    };
    class ASZ_ACTL6x6_EI_logistic: ASZ_ACTL4x4_EI {
        EGVAR(refuel,fuelCapacity) = 300;
    };
    class ASZ_ACTL6x6_MM_logistic: ASZ_ACTL6x6_EI_logistic {
        EGVAR(refuel,fuelCapacity) = 300;
    };
    class ASZ_ACTL6x6_EI_fuel: ASZ_ACTL6x6_EI_logistic {
        transportFuel = 0;
        EGVAR(refuel,fuelCapacity) = 300;
        EGVAR(refuel,fuelCargo) = 2000;
        EGVAR(refuel,hooks)[] = {{0.0,0.0,0.0}};
    };
    class ASZ_ACTL6x6_MM_fuel: ASZ_ACTL6x6_EI_fuel {
        EGVAR(refuel,fuelCapacity) = 300;
        EGVAR(refuel,fuelCargo) = 2000;
        EGVAR(refuel,hooks)[] = {{0.0,0.0,0.0}};
    };
    class ASZ_ACTL6x6_EI_repair: ASZ_ACTL6x6_EI_logistic {
        transportRepair = 0;
        EGVAR(refuel,fuelCapacity) = 300;
        //EGVAR(repair,canRepair) = 1;
    };
    class ASZ_ACTL6x6_MM_repair: ASZ_ACTL6x6_EI_repair {
        transportRepair = 0;
        EGVAR(refuel,fuelCapacity) = 300;
        //EGVAR(repair,canRepair) = 1;
    };
};

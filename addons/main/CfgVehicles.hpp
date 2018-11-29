/*
transportAmmo = 0;
transportFuel = 0;
transportRepair = 0;
*/
class CfgVehicles {

    class ASZ_Car_Base;
    class ASZ_LR90_EI: ASZ_Car_Base {
        ace_refuel_fuelCapacity = 60;
    };
    class ASZ_LR90_M2 : ASZ_LR90_EI {
        ace_refuel_fuelCapacity = 60;
    };

    class ASZ_VM90_EI: ASZ_LR90_EI {
        ace_refuel_fuelCapacity = 80;
    };
    class ASZ_VM90_EI_M2: ASZ_VM90_EI {
        ace_refuel_fuelCapacity = 80;
    };
    class ASZ_VM90_EI_rep: ASZ_VM90_EI {
        transportFuel = 0;
        transportRepair = 0;
        ace_refuel_fuelCapacity = 80;
        //ace_repair_canRepair = 1;
    };

    class ASZ_VTML_EI_M2: ASZ_Car_Base {
        ace_refuel_fuelCapacity = 130;
    };

    class ASZ_Truck_Base;
    class ASZ_ACM904x4_EI: ASZ_Truck_Base {
         ace_refuel_fuelCapacity = 145;
    };
    class ASZ_ACM904x4_MM: ASZ_ACM904x4_EI {
		ace_refuel_fuelCapacity = 145;
	};
    class ASZ_ACM904x4_EI_logistic: ASZ_ACM904x4_EI {
        ace_refuel_fuelCapacity = 145;
    };
    class ASZ_ACM904x4_MM_logistic: ASZ_ACM904x4_EI {
        ace_refuel_fuelCapacity = 145;
    };
    class ASZ_ACM904x4_EI_fuel: ASZ_ACM904x4_EI {
        transportFuel = 0;
        ace_refuel_fuelCapacity = 145;
        ace_refuel_fuelCargo = 2000;
    };
    class ASZ_ACM904x4_MM_fuel: ASZ_ACM904x4_EI_fuel {
        ace_refuel_fuelCapacity = 145;
        ace_refuel_fuelCargo = 2000;
    };
    class ASZ_ACM904x4_AM_fuel: ASZ_ACM904x4_EI_fuel {
        ace_refuel_fuelCapacity = 145;
        ace_refuel_fuelCargo = 2000;
    };

    class ASZ_ACTL4x4_EI: ASZ_ACM904x4_EI {
        ace_refuel_fuelCapacity = 300;
    };
    class ASZ_ACTL4x4_MM: ASZ_ACTL4x4_EI {
        ace_refuel_fuelCapacity = 300;
    };
    class ASZ_ACTL6x6_EI_logistic: ASZ_ACTL4x4_EI {
        ace_refuel_fuelCapacity = 300;
    };
    class ASZ_ACTL6x6_MM_logistic: ASZ_ACTL6x6_EI_logistic {
        ace_refuel_fuelCapacity = 300;
    };
    class ASZ_ACTL6x6_EI_fuel: ASZ_ACTL6x6_EI_logistic {
        transportFuel = 0;
        ace_refuel_fuelCapacity = 300;
        ace_refuel_fuelCargo = 2000;
    };
    class ASZ_ACTL6x6_MM_fuel: ASZ_ACTL6x6_EI_fuel {
        ace_refuel_fuelCapacity = 300;
        ace_refuel_fuelCargo = 2000;
    };
    class ASZ_ACTL6x6_EI_repair: ASZ_ACTL6x6_EI_logistic {
        transportRepair = 0;
        ace_refuel_fuelCapacity = 300;
        //ace_repair_canRepair = 1;
    };
    class ASZ_ACTL6x6_MM_repair: ASZ_ACTL6x6_EI_repair {
        transportRepair = 0;
        ace_refuel_fuelCapacity = 300;
        //ace_repair_canRepair = 1;
    };
};

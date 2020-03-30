
class CfgVehicles {
    // Tracked
    // class Tank;
    class ASZ_Tank;
    class ASZ_Ariete: ASZ_Tank {
        ace_refuel_fuelCapacity = 1200; // real value needed
    };
    class ASZ_VCC2_EI: ASZ_Tank {
        ace_refuel_fuelCapacity = 330;
    };
    class ASZ_VCC1_EI: ASZ_VCC2_EI {
        ace_refuel_fuelCapacity = 360;
    };
    class ASZ_VCC1_MM: ASZ_VCC2_EI {
        ace_refuel_fuelCapacity = 360;
    };
    class ADZ_Dardo: ASZ_Tank {
        ace_refuel_fuelCapacity = 350;  // TODO find real value
    };
    class ASZ_AAV_EI: ASZ_Tank {
        ace_refuel_fuelCapacity = 647;
    };
    class ASZ_M548_ammo: ASZ_Tank { // NOT FOUND IN GAME
        ace_refuel_fuelCapacity = 397;
    };

    // Wheel
    class ASZ_Car_Base;
    class ASZ_LR90_EI: ASZ_Car_Base {
        ace_refuel_fuelCapacity = 60;
    };
    // class ASZ_LR90_M2 : ASZ_LR90_EI {
    //     ace_refuel_fuelCapacity = 60;
    // };
    class ASZ_VM90_EI: ASZ_LR90_EI {
        ace_refuel_fuelCapacity = 80;
    };
    // class ASZ_VM90_EI_M2: ASZ_VM90_EI {
    //     ace_refuel_fuelCapacity = 80;
    // };
    class ASZ_VM90_EI_rep: ASZ_VM90_EI {
        transportFuel = 0;
        transportRepair = 0;
        ace_refuel_fuelCapacity = 80;
    };
    class ASZ_VTML_EI_M2: ASZ_Car_Base {
        ace_refuel_fuelCapacity = 130;
    };
    class ASZ_Truck_Base;
    class ASZ_ACTL4x4_EI: ASZ_Truck_Base { // NOT FOUND IN GAME
        ace_refuel_fuelCapacity = 300;
    };
    // class ASZ_ACTL4x4_MM: ASZ_ACTL4x4_EI {
    //     ace_refuel_fuelCapacity = 300;
    // };
    class ASZ_ACTL6x6_EI_logistic: ASZ_ACTL4x4_EI {
        ace_refuel_fuelCapacity = 300;
    };
    // class ASZ_ACTL6x6_MM_logistic: ASZ_ACTL6x6_EI_logistic {
    //     ace_refuel_fuelCapacity = 300;
    // };
    class ASZ_ACTL6x6_EI_fuel: ASZ_ACTL6x6_EI_logistic {
        transportFuel = 0;
        ace_refuel_fuelCapacity = 300;
        ace_refuel_fuelCargo = 2000;
    };
    // class ASZ_ACTL6x6_MM_fuel: ASZ_ACTL6x6_EI_fuel {
    //     ace_refuel_fuelCapacity = 300;
    //     ace_refuel_fuelCargo = 2000;
    // };
    class ASZ_ACTL6x6_EI_repair: ASZ_ACTL6x6_EI_logistic {
        transportRepair = 0;
        ace_refuel_fuelCapacity = 300;
    };
    // class ASZ_ACTL6x6_MM_repair: ASZ_ACTL6x6_EI_repair {
    //     transportRepair = 0;
    //     ace_refuel_fuelCapacity = 300;
    // };

    // Wheel 2
    class ASZ_Wheeled_APC;
    class ASZ_6614_EI;
    class ASZ_PUMA4x4_M2: ASZ_6614_EI {  // future parent: ASZ_Wheeled_APC
        ace_refuel_fuelCapacity = 200;  // TODO find real value
    };
    // class ASZ_PUMA6x6_M2: ASZ_PUMA4x4_M2 {
    //     ace_refuel_fuelCapacity = 200;  // TODO find real value
    // };
    // class ASZ_PUMA6x6_hitrole: ASZ_PUMA4x4_M2 {
    //     ace_refuel_fuelCapacity = 200;  // TODO find real value
    // };
    class ASZ_Centauro_B1: ASZ_Wheeled_APC {
        ace_refuel_fuelCapacity = 520;  // valid also for "ASZ_Freccia" and "ASZ_SuperAV_EI"
    };
};

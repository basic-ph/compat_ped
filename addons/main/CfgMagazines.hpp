
class CfgMagazines {

    class CA_Magazine;
    class 120Rnd_MG3mag: CA_Magazine {
        ace_isbelt = 1;
    };
    class 30Rnd_556x45_Stanag;
    class 200Rnd_M249mag: 30Rnd_556x45_Stanag {
        ace_isbelt = 1;
    };
    class 100Rnd_556x45_M249: 30Rnd_556x45_Stanag {
        ace_isbelt = 1;
    };
    class RPG32_F;
    class ASZ_PZF3_Mag: RPG32_F { // Don't know if these congif are related to mag or weapon
        // EGVAR(overpressure,priority) = 99;
        // EGVAR(overpressure,angle) = 0;
        // EGVAR(overpressure,range) = 0;
        // EGVAR(overpressure,damage) = 0;
    };
};

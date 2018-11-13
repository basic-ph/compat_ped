
class CfgMagazines {

    class RPG32_F;
    class ASZ_PZF3_Mag: RPG32_F {
        EGVAR(overpressure,priority) = 99;
        EGVAR(overpressure,angle) = 0;
        EGVAR(overpressure,range) = 0;
        EGVAR(overpressure,damage) = 0;
    };

    class CA_LauncherMagazine;
    class ASZ_Stinger_Mag: CA_LauncherMagazine {
        EGVAR(overpressure,angle) = 45;
        EGVAR(overpressure,range) = 15;
        EGVAR(overpressure,damage) = 0.3;
    };

    class 30Rnd_556x45_Stanag;
    class 200Rnd_M249mag: 30Rnd_556x45_Stanag {
        ace_isbelt = 1;
    };

    class 100Rnd_556x45_M249: 30Rnd_556x45_Stanag {
        ace_isbelt = 1;
    };
};

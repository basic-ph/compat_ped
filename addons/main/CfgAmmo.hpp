
class CfgAmmo {

    class BulletBase;
    class B_762x51_Tracer_Red;

    class ASZ_B_9x18_Ball: BulletBase {
        ACE_caliber=9.271;
        ACE_bulletLength=15.494;
        ACE_bulletMass=6.00048;
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[]={0.125};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={298, 330, 350};
        ACE_barrelLengths[]={96.52, 127.0, 228.6};
    };
    class ASZ_B_9x19_Ball: BulletBase {
        ACE_caliber=9.017;
        ACE_bulletLength=15.494;
        ACE_bulletMass=8.0352;
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[]={0.165};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={340, 370, 400};
        ACE_barrelLengths[]={101.6, 127.0, 228.6};
    };
    class ASZ_B_9x19_SD: ASZ_B_9x19_Ball { // added for correction purpose
        ACE_caliber=9.017;
        ACE_bulletLength=15.494;
        ACE_bulletMass=8.0352;
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[]={0.165};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={340, 370, 400};
        ACE_barrelLengths[]={101.6, 127.0, 228.6};
    };
    // class ASZ_B_9x19_MP5_Ball: ASZ_B_9x19_Ball
    // class ASZ_B_9x19_MP5_SD: ASZ_B_9x19_SD
    // class ASZ_B_9x19_MAB_Ball: ASZ_B_9x19_Ball
    // class ASZ_B_9x19_PM12_Ball: ASZ_B_9x19_Ball
    // class ASZ_B_9x19_PM12_SD: ASZ_B_9x19_SD

    class ASZ_B_556x45_SD: BulletBase {
        ACE_caliber=5.69;
        ACE_bulletLength=23.012;
        ACE_bulletMass=4.0176;
        ACE_ammoTempMuzzleVelocityShifts[]={-27.20, -26.44, -23.76, -21.00, -17.54, -13.10, -7.95, -1.62, 6.24, 15.48, 27.75};
        ACE_ballisticCoefficients[]={0.151};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={723, 764, 796, 825, 843, 866, 878, 892, 906, 915, 922, 900};
        ACE_barrelLengths[]={210.82, 238.76, 269.24, 299.72, 330.2, 360.68, 391.16, 419.1, 449.58, 480.06, 508.0, 609.6};
    };
    class B_127x99_Ball;
    class ASZ_127x99_Ball: B_127x99_Ball {
        ACE_caliber=12.954;
        ACE_bulletLength=58.674;
        ACE_bulletMass=41.9256;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.670};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={853};
        ACE_barrelLengths[]={736.6};
    };
    class ASZ_B_12Gauge_74Slug: BulletBase {
        //
    };
    class RH_B_762x51_Ball : BulletBase {
        ACE_caliber=7.823;
        ACE_bulletLength=28.956;
        ACE_bulletMass=9.4608;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.2};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={700, 800, 820, 833, 845};
        ACE_barrelLengths[]={254.0, 406.4, 508.0, 609.6, 660.4};
    };
    class ASZ_B_762x51_Ball: B_762x51_Tracer_Red {
        ACE_caliber=7.823;
        ACE_bulletLength=28.956;
        ACE_bulletMass=9.4608;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.2};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={700, 800, 820, 833, 845};
        ACE_barrelLengths[]={254.0, 406.4, 508.0, 609.6, 660.4};
    };

    class Rocketbase;
    class MissileBase;
    class M_Titan_AT;

    class ASZ_M_Spike_AT: M_Titan_AT {
        irLock = 0;
        laserLock = 0;
        airLock = 0;
        author = "PedagneMod Team";

        class ace_missileguidance {
            enabled = 1;

            minDeflection = 0.00005;      // Minium flap deflection for guidance
            maxDeflection = 0.025;       // Maximum flap deflection for guidance
            incDeflection = 0.00005;      // The incrmeent in which deflection adjusts.

            canVanillaLock = 0;

            // Guidance type for munitions
            defaultSeekerType = "Optic";
            seekerTypes[] = { "Optic" };

            defaultSeekerLockMode = "LOBL";
            seekerLockModes[] = { "LOBL" };

            seekerAngle = 180;           // Angle in front of the missile which can be searched
            seekerAccuracy = 1;         // seeker accuracy multiplier

            seekerMinRange = 0;
            seekerMaxRange = 2500;      // Range from the missile which the seeker can visually search

            //seekLastTargetPos = 1;      // seek last target position [if seeker loses LOS of target, continue to last known pos]

            // Attack profile type selection
            defaultAttackProfile = "JAV_TOP";
            attackProfiles[] = { "JAV_TOP", "JAV_DIR" };
        };
    };

    class ASZ_PZF3_HLPAT: Rocketbase {
        //
    };
    class ASZ_M_Stinger_AA: MissileBase {
        //
    };

    // FROM VEHICLE WEAPONS
    /*
    class LaserBombCore
    class M_Sidewinder_AA_ASZ: MissileBase {
    class M_AIM_120_AA_ASZ: MissileBase {
    class M_Maverick_AT_ASZ: MissileBase {
    class B_Gbu12_ASZ: LaserBombCore {
    class M_AGM_114_ASZ: MissileBase
    class M_SPIKE_MR_ASZ: MissileBase
    class M_SPIKE_MR_short_ASZ: MissileBase
    class M_SPIKE_ER_ASZ: MissileBase
    class M_Stinger_ASZ: MissileBase
    class M_AT5_AT: MissileBase
    class B_20x102mm_AP_ASZ: BulletBase
    class R_70mm_HE_ASZ: RocketBase
    class R_70mm_HEG_ASZ: R_70mm_HE_ASZ
    class R_80mm_HE_ASZ: MissileBase
    class B_762x51_Ball_ASZ: B_762x51_Ball // MG3 mounted on vehicles
    class B_127x99_Ball_White_Tracer_ASZ: B_127x99_Ball // M2 mounted
    class B_127x99_Ball_M3P_Red_Tracer_ASZ: B_127x99_Ball_White_Tracer_ASZ // M2 mounted
    class M_FFAR_ASZ: MissileBase
    class B_137x25mm_ASZ: BulletBase // USAGE NOT FOUND
    class M_AS12_ASZ: MissileBase
    class M_MarteMK2a_ASZ: MissileBase
    class Sh_120_SABOT_ASZ: ShellBase
    class Sh_120_HE_ASZ: ShellBase
    class Sh_105_HE_ASZ: ShellBase
    class Sh_105_SABOT_ASZ: Sh_120_SABOT_ASZ
    class G_40mm_HE: GrenadeBase
    class B_25x184mmAA_ASZ: BulletBase
    class B_25x184mm_HE_ASZ: BulletBase
    class B_25x184mm_HEI_ASZ: B_25x184mm_HE_ASZ
    class B_25x184mm_AP_ASZ: BulletBase
    class M_TOW_AT_ASZ: MissileBase
    class M_TOW2_AT_ASZ: M_TOW_AT_ASZ
    class Sh_155mm_AMOS: ShellBase
    class Sh_107_HE_ASZ: Sh_155mm_AMOS
    class Sh_107_ILLUM_ASZ: FlareCore
    class Sh_107_WP_ASZ: SubmunitionBase
    class B_30x173mm_API_ASZ: BulletBase
    class B_30x173mm_HEI_ASZ: BulletBase
    class B_30x173mm_APFSDS_ASZ: BulletBase
    */
};

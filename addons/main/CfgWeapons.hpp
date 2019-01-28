
//ace_hearing_protection = 0.85; ace_hearing_lowerVolume = 0.6;
//ace_hearing_protection = 0.75; ace_hearing_lowerVolume = 0;
class CfgWeapons {

    // Pilots' uniforms
    class Uniform_Base;
    class ASZ_uniform_Pilot_AM: Uniform_Base {
        //ace_gforcecoef = 0.55;
    };
    class ASZ_uniform_Pilot_MM: Uniform_Base {
        //ace_gforcecoef = 0.55;
    };
    class ASZ_uniform_Pilot_CC: Uniform_Base {
        //ace_gforcecoef = 0.55;
    };
    // Pilots' and crew's helmets
    class InventoryItem_Base_F;
	class ItemCore;
    class ASZ_Helm_AirPilot: ItemCore {
        ace_hearing_protection = 0.85;
        ace_hearing_lowerVolume = 0.6;
    };
    class ASZ_Helm_EfaPilot: ItemCore {
        ace_hearing_protection = 0.85;
        ace_hearing_lowerVolume = 0.6;
    };
    class ASZ_Helm_HeliPilot_AM: ItemCore {
        ace_hearing_protection = 0.85;
        ace_hearing_lowerVolume = 0.6;
    };
    class ASZ_Helm_HeliPilot_MM: ItemCore {
        ace_hearing_protection = 0.85;
        ace_hearing_lowerVolume = 0.6;
    };
    class ASZ_Helm_HeliPilot_CC: ItemCore {
        ace_hearing_protection = 0.85;
        ace_hearing_lowerVolume = 0.6;
    };
    class ASZ_Helmet_Crew_Tracked: ItemCore {
        ace_hearing_protection = 0.85;
        ace_hearing_lowerVolume = 0.6;
    };
    class ASZ_Helmet_Crew_Wheel: ItemCore {
        ace_hearing_protection = 0.85;
        ace_hearing_lowerVolume = 0.6;
    };
    // Standard Helmets (ACH)
    class ASZ_VTG_Stingray_ACH_Helmet_base_Vegecam: ItemCore {
        ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
    };
    class ASZ_VTG_Stingray_ACH_Helmet_Vegecam : ItemCore {
        ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
    };
    class ASZ_mich_2000_vegecam : ItemCore { //sons: desert, wood
        ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0
    };
    class ASZ_mich_2000_multiland : ItemCore {
        ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0
    };
    class ASZ_mich_2002_green : ItemCore {
        ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0
    };
    class ASZ_mich_2002_desert : ItemCore {
        ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0
    };

    // Vehicle Weapons
    class CannonCore;
	class autocannon_Base_F;
	class autocannon_35mm;
	class MissileLauncher;
	class RocketPods;
	class MGunCore;
	class HMG_127;
	class LMG_RCWS;
	class HMG_01;
	class HMG_M2;
	class GMG_20mm;
    class MGun: MGunCore;

    // class Sidewinder_Laucher8_ASZ: MissileLauncher
    // class Sidewinder_Laucher4_ASZ: Sidewinder_Laucher8_ASZ
    // class Sidewinder_Laucher2_ASZ: Sidewinder_Laucher8_ASZ
    // class AIM_120_Laucher8_ASZ: MissileLauncher
    // class AIM_120_Laucher4_ASZ: AIM_120_Laucher8_ASZ
    // class AIM_120_Laucher2_ASZ: AIM_120_Laucher8_ASZ
    // class Maverick_Launcher6_ASZ: MissileLauncher
    // class GBU12_Launcher_ASZ: RocketPods
    // class HellFire_LauncherHeli_ASZ: MissileLauncher
    // class SPIKE_Launcher2_ASZ: MissileLauncher
    // class SPIKE_LauncherHeli_ASZ: MissileLauncher
    // class Stinger_Launcher4_ASZ: MissileLauncher
    // class M197_ASZ: CannonCore // Attack helicopter cannon
    // class 70mm_RocketLauncher_ASZ: RocketPods
    // class 80mm_RocketLauncher_ASZ: 70mm_RocketLauncher_ASZ
    // class TwinM134: MGunCore // minigun
    // class FFARLauncher: RocketPods
    // class GAU12: CannonCore
    // class MG3_ASZ: MGun
    // class MG3_ASZ_2: MG3_ASZ
    // class MG3_ASZ_3: MG3_ASZ
    // class MG3_ASZ_4: MG3_ASZ
    // class MG3_ASZ_BC: MG3_ASZ
    // class MG3_ASZ_remote: MG3_ASZ
    // class M240_veh: MGun
    // class Coax_mg762_ASZ: M240_veh
    // class M134: MGunCore
    // class M134_2: M134
    // class AS12_LauncherHeli_ASZ: MissileLauncher
    // class MarteMK2a_LauncherHeli_ASZ: MissileLauncher
    // class 30mm_ATK_Mk44_ASZ: CannonCore
    // class 30mm_HE_ASZ: 30mm_ATK_Mk44_ASZ
    class 105mm_ASZ: CannonCore {
        ace_overpressure_angle = 90; // values taken from ACE3 Overepressure framework config
		ace_overpressure_range = 50;
		ace_overpressure_damage = 0.85;
    };
    // class L7_105_51_ASZ: 105mm_ASZ
    // class OTOBREDA_105_52_ASZ: 105mm_ASZ
    // class 105mm_NoRecoil_ASZ: 105mm_ASZ
    class 155mm_ASZ: CannonCore {
        ace_overpressure_angle = 90; // values taken from ACE3 Overepressure framework config
		ace_overpressure_range = 60;
		ace_overpressure_damage = 1;
    };
    // class L52_155_52_ASZ: 155mm_ASZ
    // class M284_155_39_ASZ: 155mm_ASZ
    class 120mm_ASZ: CannonCore {
        ace_overpressure_angle = 90; // values taken from ACE3 Overepressure framework config
		ace_overpressure_range = 50;
		ace_overpressure_damage = 0.85;
    };
    // class OTOMELARA_120_44_ASZ: 120mm_ASZ
    class M107mm_ASZ: CannonCore {
        ace_overpressure_angle = 90; // values taken from ACE3 Overepressure framework config
		ace_overpressure_range = 50;
		ace_overpressure_damage = 0.85;
    };
    // class M2: HMG_M2
    // class M2_remote: M2
    // class GMG_F: MGun
    // class MK19: GMG_20mm
    // class MK19_Turret: MK19
    // class ASZ_autocannon_Base_F: CannonCore
    // class 25mm_KBA_ASZ: ASZ_autocannon_Base_F
    // class 25mm_KBA_AA_ASZ: autocannon_35mm
    // class TOW_Launcher1_ASZ: MissileLauncher
    // class Lanciarazzi: MissileLauncher

    // Weapons
    // AA
    class Launcher;
    class Launcher_Base_F: Launcher;
    class ASZ_Launch_Stinger: Launcher_Base_F {
        ace_overpressure_angle = 45;
		ace_overpressure_range = 15;
		ace_overpressure_damage = 0.3;
    };
    // AT    
    class launch_O_Titan_F;
    class ASZ_Launch_Spike: launch_O_Titan_F {
        ace_javelin_enabled = 1;
		//modelOptics = "\z\ace\addons\javelin\data\reticle_titan.p3d"; // not sure if is needed
		canLock = 0;
		ace_overpressure_angle = 30;
		ace_overpressure_range = 2;
		ace_overpressure_damage = 0.5;
    };
    class ASZ_SWM_pzfaust3_base: Launcher_Base_F;
    class ASZ_SWM_pzfaust3: ASZ_SWM_pzfaust3_base { // values taken from BWA compat
        ACE_overpressure_angle = 60;
        ACE_overpressure_range = 3.5;
        ACE_overpressure_damage = 0.8;
    };

    // Scopes
    // https://github.com/acemod/ACE3/blob/master/addons/scopes/functions/fnc_getBoreHeight.sqf
	class InventoryOpticsItem_Base_F;
    // class ASZ_Eotech_des: ItemCore
    // class ASZ_Eotech_blk: ItemCore
    // class ASZ_Aimpoint_COMPM4S: ItemCore
    // class ASZ_Aimpoint_PRO_blk: ItemCore
    // class ASZ_Aimpoint_PRO_des: ItemCore
    class ASZ_Acog: ItemCore {
        // ace_scopeHeightAboveRail = 4.0;  // because opticType = 2; (see link above)
        ace_scopeAdjust_vertical[] = {-4, 30};  // Maxmimum vertical adjustment limits
        ace_scopeAdjust_horizontal[] = {-6, 6};  // Maximum horizontal adjustment limits
        ace_scopeAdjust_verticalIncrement = 0.1;  // Vertical increment
        ace_scopeAdjust_horizontalIncrement = 0.1;  // Horizontal increment
    };
    class ASZ_AMS: ItemCore {
        ace_scopeHeightAboveRail = 0.0; // SET THIS!!!
        ace_scopeAdjust_vertical[] = {-4, 30}; 
        ace_scopeAdjust_horizontal[] = {-6, 6}; 
        ace_scopeAdjust_verticalIncrement = 0.1;
        ace_scopeAdjust_horizontalIncrement = 0.1;
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class AMS_optic {
                    discreteDistance[] = {100};
                    discreteDistanceInitIndex = 0;
                };
            };
        };
    };
    class ASZ_Leupold_MK4_CQT: ItemCore {
        // ace_scopeHeightAboveRail = 4.5; // because opticType = 1;
        ace_scopeAdjust_vertical[] = {-4, 30}; 
        ace_scopeAdjust_horizontal[] = {-6, 6}; 
        ace_scopeAdjust_verticalIncrement = 0.1;
        ace_scopeAdjust_horizontalIncrement = 0.1;
    };
    class ASZ_Leupold_MK4_MRT_black: ItemCore {
        // ace_scopeHeightAboveRail = 4.5; // because opticType = 1;
        ace_scopeAdjust_vertical[] = {-4, 30}; 
        ace_scopeAdjust_horizontal[] = {-6, 6}; 
        ace_scopeAdjust_verticalIncrement = 0.1;
        ace_scopeAdjust_horizontalIncrement = 0.1;
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Leupold_LR_optic {
                    discreteDistance[] = {100};
                    discreteDistanceInitIndex = 0;
                };
            };
        };
    };
    class ASZ_Leupold_MK4_MRT_des: ItemCore {
        // ace_scopeHeightAboveRail = 4.5; // because opticType = 1;
        ace_scopeAdjust_vertical[] = {-4, 30}; 
        ace_scopeAdjust_horizontal[] = {-6, 6}; 
        ace_scopeAdjust_verticalIncrement = 0.1;
        ace_scopeAdjust_horizontalIncrement = 0.1;
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Leupold_LR_optic {
                    discreteDistance[] = {100};
                    discreteDistanceInitIndex = 0;
                };
            };
        };
    };
    class ASZ_Leupold_MK4_LRT_blk: ItemCore {
        // ace_scopeHeightAboveRail = 4.0; // because opticType = 2;
        ace_scopeAdjust_vertical[] = {-4, 30}; 
        ace_scopeAdjust_horizontal[] = {-6, 6}; 
        ace_scopeAdjust_verticalIncrement = 0.1;
        ace_scopeAdjust_horizontalIncrement = 0.1;
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Leupold_LR_optic {
                    discreteDistance[] = {100};
                    discreteDistanceInitIndex = 0;
                };
            };
        };
    };
    class ASZ_Leupold_VXR_Patrol: ItemCore {
        // ace_scopeHeightAboveRail = 4.5; // because opticType = 1;
        ace_scopeAdjust_vertical[] = {-4, 30}; 
        ace_scopeAdjust_horizontal[] = {-6, 6}; 
        ace_scopeAdjust_verticalIncrement = 0.1;
        ace_scopeAdjust_horizontalIncrement = 0.1;
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Leupold_LR_optic {
                    discreteDistance[] = {100};
                    discreteDistanceInitIndex = 0;
                };
            };
        };
    };
    class ASZ_Schmidt_Bender_LP: ItemCore { // http://www.schmidtundbender.de/en/products/police-and-military-forces/3-12x50-pm-iilpmtc.html
        // ace_scopeHeightAboveRail = 4.0; // because opticType = 2; RHS >> ACE_ScopeHeightAboveRail = 4.2235;
        ace_scopeAdjust_vertical[] = {0, 22}; 
        ace_scopeAdjust_horizontal[] = {-6, 6}; 
        ace_scopeAdjust_verticalIncrement = 0.1;
        ace_scopeAdjust_horizontalIncrement = 0.1;
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Leupold_LR_optic {
                    discreteDistance[] = {100};
                    discreteDistanceInitIndex = 0;
                };
            };
        };
    };
    class ASZ_Tasco_Pronghorn: ItemCore {
        // ace_scopeHeightAboveRail = 4.0; // because opticType = 2;
        ace_scopeAdjust_vertical[] = {-4, 30}; 
        ace_scopeAdjust_horizontal[] = {-6, 6}; 
        ace_scopeAdjust_verticalIncrement = 0.1;
        ace_scopeAdjust_horizontalIncrement = 0.1;
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Leupold_LR_optic {
                    discreteDistance[] = {100};
                    discreteDistanceInitIndex = 0;
                };
            };
        };
    };
    class ASZ_HWTS: ItemCore { // AN/PAS-13(V)3 Heavy Weapon Thermal Sight (HWTS)
        // ace_scopeHeightAboveRail = 4.0; //  opticType NOT FOUND so ??
        ace_scopeAdjust_vertical[] = {-4, 30}; 
        ace_scopeAdjust_horizontal[] = {-6, 6}; 
        ace_scopeAdjust_verticalIncrement = 0.1;
        ace_scopeAdjust_horizontalIncrement = 0.1;
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Leupold_LR_optic {
                    discreteDistance[] = {100};
                    discreteDistanceInitIndex = 0;
                };
            };
        };
    };

    // class ASZ_Panzerfaust_optic1: ItemCore

    // Silencers
	// class InventoryMuzzleItem_Base_F;
    // class ASZ_M_Pistol_sd: ItemCore
    // class ASZ_Silencer_M9: ASZ_M_Pistol_sd
    // class ASZ_Silencer_556_blk: ItemCore
    // class ASZ_Silencer_556_des: ItemCore
    // class ASZ_Silencer_762_blk: ItemCore
    // class ASZ_Silencer_762_des: ItemCore
    // class ASZ_Silencer_M4A1: ASZ_Silencer_556_blk
    // class ASZ_Silencer_AR7090: ASZ_Silencer_556_blk
    
	// class InventoryFlashLightItem_Base_F;
    // class ASZ_Pointer: ItemCore
    // class ASZ_Pointer_blk: ItemCore
    // class ASZ_Pointer_M4: ItemCore
    // class ASZ_flashlight: ItemCore
    // class ASZ_FlashLight_glock17: ASZ_flashlight

	// class InventoryUnderItem_Base_F;
    // class ASZ_Bipod_ARX_blk: ItemCore
    // class ASZ_Bipod_ARX_des: ItemCore
    // class ASZ_Bipod_SakoTRG42: ItemCore
    // class ASZ_Bipod_M40A3: ItemCore
    // class ASZ_Bipod_M107: ItemCore
    // class ASZ_Bipod_M249: ItemCore
    // class ASZ_Bipod_MG3: ItemCore
    // class ASZ_Bipod_AR7090: ItemCore
    // class ASZ_Bipod_tac50: ItemCore

    // ARX7090
    class Rifle_Base_F;
    class UGL_F;
    class ASZ_AR7090_base: Rifle_Base_F {
        ACE_barrelTwist = 177.8;
        ACE_barrelLength = 450; 
        ACE_twistDirection = 1; // Right handed is 1, Left is -1, none is 0 ,default is 1 
    };
        class ASZ_AR7090: ASZ_AR7090_base
            class ASZ_AR7090_rd: ASZ_AR7090
            class ASZ_AR7090_ag: ASZ_AR7090 // Beretta AR 70/90 Acog
            class ASZ_AR7090_gl: ASZ_AR7090
            class ASZ_AR7090_scoped: ASZ_AR7090 //Beretta AR 70/90 Sharpshooter
                class ASZ_AR7090_scoped_sd: ASZ_AR7090_scoped // Beretta AR 70/90 Sharpshooter SD
        class ASZ_SC90: ASZ_AR7090_base // Beretta SC 70/90
            class ASZ_SC90_rd: ASZ_SC90
            class ASZ_SC90_rd: ASZ_SC90
            class ASZ_SC90_ag: ASZ_SC90
            class ASZ_SC90_gl: ASZ_SC90
            class ASZ_SC90_gl_ag: ASZ_SC90_gl
        class ASZ_SCS90: ASZ_AR7090_base
            class ASZ_SCS90_rd: ASZ_SCS90
                class ASZ_SCS90_rd_sd: ASZ_SCS90_rd
                class ASZ_SCS90_rd_2: ASZ_SCS90_rd
                    class ASZ_SCS90_rd_2_sd: ASZ_SCS90_rd_2
        
};

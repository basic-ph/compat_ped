
//ace_hearing_protection = 0.85; ace_hearing_lowerVolume = 0.6;
//ace_hearing_protection = 0.75; ace_hearing_lowerVolume = 0;
class CfgWeapons {
    // Pilots' uniforms
    class Uniform_Base;
    class ASZ_uniform_Pilot_AM: Uniform_Base {
        ace_gforcecoef = 0.8;
    };
    class ASZ_uniform_Pilot_MM: Uniform_Base {
        ace_gforcecoef = 0.8;
    };
    class ASZ_uniform_Pilot_CC: Uniform_Base {
        ace_gforcecoef = 0.8;
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
    class ASZ_mich_2000_vegecam : ItemCore {
        ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
    };
    class ASZ_mich_2000_multiland : ItemCore {
        ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
    };
    class ASZ_mich_2002_green : ItemCore {
        ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
    };
    class ASZ_mich_2002_desert : ItemCore {
        ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
    };
    // Vehicle Weapons
    class CannonCore;
    class autocannon_Base_F;
    class autocannon_35mm;
    class MissileLauncher;
    class RocketPods;
    class HMG_127;
    class LMG_RCWS;
    class HMG_01;
    class HMG_M2;
    class GMG_20mm;
    class MGun;
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
    class Launcher_Base_F;
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
    class ASZ_SWM_pzfaust3_base;
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
        ace_scopeHeightAboveRail = 4.8;
        ace_scopeAdjust_vertical[] = { 0, 0};  // Maxmimum vertical adjustment limits
        ace_scopeAdjust_horizontal[] = { 0, 0};  // Maximum horizontal adjustment limits
        ace_scopeAdjust_verticalIncrement = 0;  // Vertical increment
        ace_scopeAdjust_horizontalIncrement = 0;  // Horizontal increment
    };
    class ASZ_AMS: ItemCore {
        ace_scopeHeightAboveRail = 3.65;
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
        ace_scopeHeightAboveRail= 4.37; // opticType = 1; --> ace_scopeHeightAboveRail = 4.5;
        ace_scopeAdjust_vertical[] = {-4, 30}; 
        ace_scopeAdjust_horizontal[] = {-6, 6}; 
        ace_scopeAdjust_verticalIncrement = 0.1;
        ace_scopeAdjust_horizontalIncrement = 0.1;
    };
    class ASZ_Leupold_MK4_MRT_black: ItemCore {
        ace_scopeHeightAboveRail= 2.61;
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
        ace_scopeHeightAboveRail= 2.61;
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
        ace_scopeHeightAboveRail= 3.16;
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
        ace_scopeHeightAboveRail = 3.8; // opticType = 1; --> ace_scopeHeightAboveRail = 4.5;
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
        ace_scopeHeightAboveRail = 2.7; // opticType = 2; then: ace_scopeHeightAboveRail = 4.0; // RHS >> ACE_ScopeHeightAboveRail = 4.2235;
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
        ace_scopeHeightAboveRail = 3.1; // opticType = 2; --> ace_scopeHeightAboveRail = 4.0;
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
        ace_scopeHeightAboveRail = 10.23; //  opticType NOT FOUND so ??
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
    //ARX7090
    class Rifle_Base_F;
    class ASZ_AR7090_base: Rifle_Base_F {
        ACE_barrelTwist = 177.8;
        ACE_barrelLength = 450; 
        ACE_twistDirection = 1; // Right handed is 1, Left is -1, none is 0 ,default is 1
        ace_railHeightAboveBore = 6.9;
        ace_railBaseAngle = 0.0;
        ace_ironSightBaseAngle = 0.0;
    };
    // ARX160 (https://www.militarypedia.it/beretta-arx-160-e-varianti/)
    class ASZ_ARX160_base: Rifle_Base_F {
        ACE_barrelTwist = 177.8; // 1:7in twist
        ACE_barrelLength = 406; 
        ACE_twistDirection = 1; // Right handed is 1, Left is -1, none is 0 ,default is 1
        ace_railHeightAboveBore = 4.89;
        ace_railBaseAngle = 0.0;
        ace_ironSightBaseAngle = 0.0; 
    };
    class ASZ_ARX160;
    class ASZ_ARX160_GLS_CC: ASZ_ARX160 { // short
        ACE_barrelLength = 305;
    };
    class ASZ_ARX160_IV_L_CC: ASZ_ARX160 { // Vertical grip - short
        ACE_barrelLength = 305;
    };
    class ASZ_ARX160SF_CC: ASZ_ARX160 { // short
        ACE_barrelLength = 305;
    };       
    class ASZ_ARX160SF_GLS_CC: ASZ_ARX160 { // short
        ACE_barrelLength = 305;
    };
    class ASZ_ARX160SF_IV_L_CC: ASZ_ARX160 { // short
        ACE_barrelLength = 305;
    };
    // ARX200
    class srifle_DMR_03_F;
    class APD_ARX200_base: srifle_DMR_03_F {
        ACE_barrelTwist = 177.8; // 1:7in twist
        ACE_barrelLength = 406; 
        ACE_twistDirection = 1;
        ace_railHeightAboveBore = 4.37;
        ace_railBaseAngle = 0.0;
        ace_ironSightBaseAngle = 0.0;
    };
    // M_GUN (Machine gun)
    class Rifle_Long_Base_F;
    class ASZ_M249_base: Rifle_Long_Base_F {
        ACE_barrelTwist = 177.8;
        ACE_barrelLength = 414.02; // Pedagne value -- online:465mm
        ACE_twistDirection = 1;
        ACE_Overheating_allowSwapBarrel = 1;
        ace_railHeightAboveBore = 4.35; // TODO
        ace_railBaseAngle = 0.0;
        ace_ironSightBaseAngle = 0.0;
    };
    class ASZ_M249mk1_base: Rifle_Long_Base_F {
        ACE_barrelTwist = 177.8;
        ACE_barrelLength = 414.02; // Pedagne value -- online:465mm
        ACE_twistDirection = 1;
        ACE_Overheating_allowSwapBarrel = 1;
        ace_railHeightAboveBore = 4.35;  // TODO
        ace_railBaseAngle = 0.0;
        ace_ironSightBaseAngle = 0.0;
    };
    // M_PISTOLS
    class Pistol_Base_F;
    class ASZ_M92: Pistol_Base_F {
        ACE_barrelTwist = 248.92; // Pedagne
        ACE_barrelLength = 125;
        ACE_twistDirection = 1;
    };
    class ASZ_M84: ASZ_M92 {
        ACE_barrelTwist = 220; // Pedagne
        ACE_barrelLength = 97; // Pedagne
        ACE_twistDirection = 1;
    };
    class ASZ_glock17: Pistol_Base_F {
        ACE_barrelTwist = 248.92; // Pedagne
        ACE_barrelLength = 114;
        ACE_twistDirection = 1;
    };
    // McMillan
    class LRR_base_F;
    class GM6_base_F;
    class ASZ_MCM_tac50_base: GM6_base_F {
        ACE_barrelTwist = 381;
        ACE_barrelLength = 736.6;
        ACE_twistDirection = 1;
        ace_railHeightAboveBore = 3.8;
        ace_railBaseAngle = 0.0;
        ace_ironSightBaseAngle = 0.0;
    };
    // SPECIAL_GUN
    class ASZ_SakoTRG42_base: GM6_base_F {
        ACE_barrelTwist = 355.8; // Pedagne
        ACE_barrelLength = 690;
        ACE_twistDirection = 1;
        ace_railHeightAboveBore = 2.42;
        ace_railBaseAngle = 0.0;
        ace_ironSightBaseAngle = 0.0;
    };
    class ASZ_M40A3_Green_base: LRR_base_F {
        ACE_barrelTwist = 304.8; // different from Pedagne (??)
        ACE_barrelLength = 635; // different from Pedagne (??)
        ACE_twistDirection = 1;
        ace_railHeightAboveBore = 2.5;
        ace_railBaseAngle = 0.0;
        ace_ironSightBaseAngle = 0.0;
    };
    class ASZ_M107_base: LRR_base_F {
        ACE_barrelTwist = 381;
        ACE_barrelLength = 736.6; 
        ACE_twistDirection = 1;
        ace_railHeightAboveBore = 3.23;
        ace_railBaseAngle = 0.0;
        ace_ironSightBaseAngle = 0.0;
    };
    class ASZ_M4A1: Rifle_Base_F {
        ACE_barrelTwist = 177.8;
        ACE_barrelLength = 370; // Pedagne 254 (??)
        ACE_twistDirection = 1;
        ace_railHeightAboveBore = 2.85;
        ace_railBaseAngle = 0.0;
        ace_ironSightBaseAngle = 0.0;
    };
};

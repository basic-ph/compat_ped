
//ace_hearing_protection = 0.85; ace_hearing_lowerVolume = 0.6;
//ace_hearing_protection = 0.75; ace_hearing_lowerVolume = 0;
class CfgWeapons {

    class ItemCore;
    class ASZ_VTG_Stingray_ACH_Helmet_base_Vegecam: ItemCore {
        ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
    };
    class ASZ_VTG_Stingray_ACH_Helmet_Vegecam : ItemCore {
        ace_hearing_protection = 0.75;
        ace_hearing_lowerVolume = 0;
    };
    class ASZ_mich_2000_vegecam : ItemCore { //sons: desert, vegecam, wood
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

    class Launcher;
    class Launcher_Base_F: Launcher;
    class ASZ_Launch_Stinger: Launcher_Base_F {
        ace_overpressure_angle = 45;
		ace_overpressure_range = 15;
		ace_overpressure_damage = 0.3;
    };
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
};

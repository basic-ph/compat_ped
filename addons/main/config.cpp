#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ASZ_PersoneIT_A3", "ASZ_Tracked_A3", "ASZ_Weapons_A3", "ASZ_Wheel_A3", "ASZ_Wheel_2_A3", "ace_javelin", "ace_rearm", "ace_refuel", "ace_repair"};
        author = "ACE-Team";
        authors[] = {"basic-ph"};
        url = "https://github.com/basic-ph/compat_ped";
        VERSION_CONFIG;
    };
};

//#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"

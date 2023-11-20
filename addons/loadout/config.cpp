#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = CSTRING(component);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "arc_tmf_main",
            "tmf_common",
            "tmf_assigngear",
        };
        author = ARC_AUTHOR;
        VERSION_CONFIG;
		is3DENmod = 1;
    };
};

#include "macros.inc"
#include "CfgLoadouts.hpp"

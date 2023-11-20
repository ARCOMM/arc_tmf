#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = CSTRING(component);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "arc_tmf_main",
            "arc_tmf_loadout",
            "tmf_common",
            "tmf_autotest",
        };
        author = ARC_AUTHOR;
        VERSION_CONFIG;
		is3DENmod = 1;
    };
};

#include "\z\arc_tmf\addons\loadout\macros.inc"
#include "CfgEventHandlers.hpp"
#include "TMF_autotest.hpp"

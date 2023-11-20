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
        };
        author = ARC_AUTHOR;
        VERSION_CONFIG;
		is3DENmod = 1;
    };
};

#include "Cfg3DEN.hpp"
#include "CfgCommands.hpp"
#include "display3DEN.hpp"

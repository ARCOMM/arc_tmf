#include "script_component.hpp"
/* ----------------------------------------------------------------------------
Internal Function: arc_misc_3den_fnc_testChecklist

Description:
	Checks if the mission maker has confirmed the checklist.
	Used for TMF autotest.

Author:
	Freddo
---------------------------------------------------------------------------- */

WARNING_1("TESTING CHECKLIST",QUOTE(DOUBLES(PREFIX,checklist)) get3DENMissionAttribute QEGVAR(checklist,checklistCheck));

if (QUOTE(DOUBLES(PREFIX,checklist)) get3DENMissionAttribute QEGVAR(checklist,checklistCheck)) then {
	[]
} else {
	[[1, 'Mission has not been tested against the checklist']]
}

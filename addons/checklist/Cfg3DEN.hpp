#include "\a3\3DEN\UI\macros.inc"

class ctrlHTML;
class ctrlControlsGroupNoHScrollbars;
class ctrlStatic;
class RscActiveText;
class Cfg3DEN {
	class EventHandlers {
		class ADDON {
			onMessage = QUOTE([ARR_2(QQGVAR(onMessage),_this)] call CBA_fnc_localEvent);
		};
	};
	class Attributes {
		class Default;
		class Title: Default {
			class Controls {
				class Title;
			};
		};
		class GVAR(missionChecklistLink): Default {
			class Controls {
				class Title: Title {};
				class Link: RscActiveText {
					idc = 100;
					h = QUOTE(ATTRIBUTE_CONTENT_H * GRID_H);
					w = QUOTE(round(ATTRIBUTE_CONTENT_W / 8) * GRID_W);
					x = QUOTE(ATTRIBUTE_TITLE_W * GRID_W);
					text = "LINK";
					url = "https://docs.google.com/document/d/1vxyQSLEjB23ZDdZGHClXrOxN90SHbu26bEUXjq7fqLE/edit?usp=sharing";
					color[] = {1,1,1,1};
					colorActive[] = {1,1,0,1};
				};
			};
		};
		class GVAR(arcmtCheck): Title {
			attributeLoad = "(_this controlsGroupCtrl 100) ctrlSetText _value";
			class Controls: Controls {
				class Title: Title {};
				class value: ctrlStatic {
					idc = 100;
					h = QUOTE(ATTRIBUTE_CONTENT_H * GRID_H);
					w = QUOTE(round(ATTRIBUTE_CONTENT_W / 3) * GRID_W);
					x = QUOTE(ATTRIBUTE_TITLE_W * GRID_W);
					colorBackground[] = {0,0,0,0};
				};
			};
		};
	};
	class Mission {
		class ADDON {
			displayName = "ARCOMM";
			class AttributeCategories {
				class GVAR(checklist) {
					displayName = "ARCOMM: Mission Testing Checklist";
					collapsed = 0;
					class Attributes {
						class GVAR(missionChecklist) {
							displayName = "Mission Testing Checklist:";

							property = QGVAR(missionChecklist);
							control = QGVAR(missionChecklistLink);
							defaultValue = "nil";
						};
						class GVAR(arcmtCheck) {
							displayName = "ARCMT Version:";

							property = QGVAR(arcmtVersion);
							control = QGVAR(arcmtCheck);
							defaultValue = "'NOT ARCMT'";
						};
						class GVAR(checklistCheck) {
							displayName = "My mission conforms to the checklist";

							property = QGVAR(checklistCheck);
							control = "Checkbox";
							defaultValue = "false";
						};
					};
				};
			};
		};
	};
};

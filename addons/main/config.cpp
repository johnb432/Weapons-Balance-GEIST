#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cba_main",
            "geistl_main",
            "geistl_assets_c_weapons",
            "geistl_assets_t_weapons",
            "geistl_assets_m_weapons"
        };
        author = "johnb43";
        url = "https://github.com/johnb432/Weapons-Balance-GEIST";
        VERSION_CONFIG;
    };
};

class CfgMods {
    class PREFIX {
        name = "Weapons Balance - GEIST";
        author = "johnb43";
        tooltipOwned = "Weapons Balance - GEIST";
        hideName = 0;
        hidePicture = 0;
        actionName = "Github";
        action = "https://github.com/johnb432/Weapons-Balance-GEIST";
        description = "A collection of balancing mods made by johnb43.";
        overview = "A collection of balancing mods made by johnb43.";
        picture = "\z\wb_geist\addons\main\ui\logo_weapons_balance.paa"; // http://getdrawings.com/get-drawing#gun-drawing-in-pencil-27.jpg, http://getdrawings.com/get-drawing#gun-drawing-in-pencil-17.png
        logo = "\z\wb_geist\addons\main\ui\logo_weapons_balance.paa";
        overviewPicture = "\z\wb_geist\addons\main\ui\logo_weapons_balance.paa";
    };
};

#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"

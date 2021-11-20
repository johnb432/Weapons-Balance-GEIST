#include "CfgAmmoDef.hpp"

class CfgMagazines {
    class LIB_35Rnd_762x25;
    class LIB_71Rnd_762x25;
    class GLIB_FIN_20Rnd_9x19mmKP31: LIB_35Rnd_762x25 {
        ammo = "LIB_B_9x19_Ball";
        displayName = "20Rnd 9x19mm KP/-31 Mag";
        _MASS(AMMO9X19,20,RND20MAGSMG);
    };
    class GLIB_FIN_36Rnd_9x19mmKP31: LIB_35Rnd_762x25 {
        ammo = "LIB_B_9x19_Ball";
        displayName = "36Rnd 9x19mm KP/-31 Mag";
        _MASS(AMMO9X19,36,RND36MAGSMG);
    };
    class GLIB_FIN_40Rnd_9x19mmKP31: LIB_71Rnd_762x25 {
        ammo = "LIB_B_9x19_Ball";
        displayName = "40Rnd 9x19mm KP/-31 Drum";
        _MASS(AMMO9X19,40,RND36MAGSMG);
    };
    class GLIB_FIN_50Rnd_9x19mmKP31: LIB_35Rnd_762x25 {
        ammo = "LIB_B_9x19_Ball";
        displayName = "50Rnd 9x19mm KP/-31 Mag";
        _MASS(AMMO9X19,50,RND50MAGSMG);
    };
    class GLIB_FIN_71Rnd_9x19mmKP31: LIB_71Rnd_762x25 {
        ammo = "LIB_B_9x19_Ball";
        displayName = "71Rnd 9x19mm KP/-31 Drum";
        _MASS(AMMO9X19,71,RND71MAGSMG);
    };

    class GLIB_FIN_20Rnd_9x19mmKP44: LIB_35Rnd_762x25 {
        ammo = "LIB_B_9x19_Ball";
        displayName = "20Rnd 9x19mm KP m/44 Mag";
        LIB_ReplaceWeapon = "GLIB_FIN_KP31m";
        _MASS(AMMO9X19,20,RND20MAGSMG);
    };
    class GLIB_FIN_36Rnd_9x19mmKP44: LIB_35Rnd_762x25 {
        ammo = "LIB_B_9x19_Ball";
        displayName = "36Rnd 9x19mm KP m/44 Mag";
        LIB_ReplaceWeapon = "GLIB_FIN_KP31m";
        _MASS(AMMO9X19,36,RND36MAGSMG);
    };
    class GLIB_FIN_50Rnd_9x19mmKP44: LIB_35Rnd_762x25 {
        ammo = "LIB_B_9x19_Ball";
        displayName = "50Rnd 9x19mm KP m/44 Mag";
        LIB_ReplaceWeapon = "GLIB_FIN_KP31m";
        _MASS(AMMO9X19,50,RND50MAGSMG);
    };

    class LIB_5Rnd_762x54;
    class GLIB_FIN_5Rnd_762x54mm: LIB_5Rnd_762x54 {
        displayName = "5Rnd 7.62x54Rmm Ukko-Pekka M/39 Clip";
        _MASS(AMMO762X54R,5,RNDCLIP);
    };
    class GLIB_FRA_5Rnd_75x54mm: LIB_5Rnd_762x54 {
        displayName = "5Rnd 7.5x54mm MAS-36 Clip";
        _MASS(AMMO75X54,5,RNDCLIP);
    };

    class LIB_20Rnd_762x63;
    class GLIB_FIN_25Rnd_762x54mm: LIB_20Rnd_762x63 {
        ammo = "LIB_B_762x54_Ball_NoCartridge";
        displayName = "25Rnd 7.62x54Rmm PK M26 Mag";
        _MASS(AMMO762X54R,25,RND25MAGLMG);
    };
    class GLIB_POL_20Rnd_792x57mm: LIB_20Rnd_762x63 {
        ammo = "LIB_B_792x57_Ball";
        displayName = "20Rnd 7.92x57mm Browning wz.1928 Mag";
        _MASS(AMMO792X57,20,RND20MAGLMG);
    };

    class LIB_7Rnd_45ACP;
    class GLIB_BEL_13Rnd_9x19mm: LIB_7Rnd_45ACP {
        displayName = "13Rnd 9x19mm FN GP35 Mag";
    };
    class GLIB_FRA_8Rnd_765mmLong: LIB_7Rnd_45ACP {
        displayName = "8Rnd 7.65x20mm PA 1935A Mag";
    };

    class LIB_7Rnd_762x38;
    class GLIB_FRA_6Rnd_827mm: LIB_7Rnd_762x38 {
        displayName = "6Rnd 8x27mm M1892 Mag";
    };
    class GLIB_GBR_6Rnd_380British: LIB_7Rnd_762x38 {
        displayName = "6Rnd .380 Enfield No.2 Mk.I Mag";
    };

    class LIB_8Rnd_9x19_P08;
    class GLIB_FIN_8Rnd_9x19mm: LIB_8Rnd_9x19_P08 {
        displayName = "8Rnd 9x19 L-35 Mag";
    };
};

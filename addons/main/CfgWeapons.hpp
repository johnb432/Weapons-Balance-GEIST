class CfgWeapons {
    class LIB_M1918A2_BAR;
    class GLIB_USA_M1918A2_BAR: LIB_M1918A2_BAR {
        displayName = "M1918A2 BAR";
    };
    class GLIB_FIN_M26: GLIB_USA_M1918A2_BAR {
        displayName = "PK M26";
        magazineWell[] = {"CBA_762x54R_PK_M26"};
    };
    class GLIB_POL_WZ28: GLIB_USA_M1918A2_BAR {
        displayName = "Browning wz.1928";
        magazineWell[] = {"CBA_792x57_wz28"};
    };

    class LIB_M9130PU;
    class GLIB_FIN_M39PU: LIB_M9130PU {
        displayName = "Ukko-Pekka M/39PU";
    };

    class LIB_RIFLE;
    class LIB_M9130: LIB_RIFLE {
        class WeaponSlotsInfo;
    };
    class GLIB_ITA_M91: LIB_M9130 {
        ACE_barrelLength = 780;
        ACE_barrelTwist = 270;
        displayName = "Carcano M91";
        magazineWell[] = {};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 86;
        };
    };
    class GLIB_FIN_M39: LIB_M9130 {
        displayName = "Ukko-Pekka M/39";
    };

    class LIB_M38: LIB_M9130 {
        class WeaponSlotsInfo;
    };
    class GLIB_FRA_MAS36: LIB_M38 {
        ACE_barrelLength = 575;
        ACE_barrelTwist = 270;
        displayName = "MAS-36";
        magazineWell[] = {"CBA_75x54mmFrench_MAS36"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 82;
        };
    };
    class GLIB_ITA_M38: LIB_M38 {
        ACE_barrelLength = 562;
        ACE_barrelTwist = 270;
        displayName = "Carcano M38";
        magazineWell[] = {};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 82;
        };
    };

    class LIB_G43;
    class GLIB_GER_G43: LIB_G43 {
        displayName = "G43";
    };

    class LIB_K98;
    class GLIB_GER_K98k_4: LIB_K98 {
        displayName = "Kar98k (Light)";
    };
    class GLIB_GER_K98k_5: LIB_K98 {
        displayName = "Kar98k (Dark)";
    };

    class LIB_PPSh41_m;
    class LIB_PPSh41_d: LIB_PPSh41_m {
        class WeaponSlotsInfo;
    };
    class GLIB_FIN_KP31d: LIB_PPSh41_d {
        baseWeapon = "GLIB_FIN_KP31m";
        ACE_barrelLength = 314;
        ACE_barrelTwist = 250;
        displayName = "Suomi KP/-31";
        magazineWell[] += {"CBA_9x19_KP31_Drum","CBA_9x19_KP31_Stick"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 101.4;
        };
    };
    class GLIB_FIN_KP31m: GLIB_FIN_KP31d {
        displayName = "Suomi KP/-31";
    };

    class LIB_MP40;
    class GLIB_GER_MP40: LIB_MP40 {
        baseWeapon = "GLIB_GER_MP40";
        displayName = "MP 40";
    };

    class LIB_PISTOL;
    class LIB_Colt_M1911: LIB_PISTOL {
        class WeaponSlotsInfo;
    };
    class GLIB_BEL_PISFNGP35: LIB_Colt_M1911 {
        displayName = "FN GP35";
        magazineWell[] = {"CBA_9x19_HiPower"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 22;
        };
    };
    class GLIB_GER_PIS640b: GLIB_BEL_PISFNGP35 {
        displayName = "Pistole 640(b)";
    };

    class GLIB_FRA_PA35A: LIB_Colt_M1911 {
        displayName = "PA 1935A";
        magazineWell[] = {"CBA_765x20mmLongue_PA"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 16.1;
        };
    };
    class GLIB_GER_PIS625f: GLIB_FRA_PA35A {
        displayName = "Pistole 625(f)";
    };

    class LIB_P38;
    class LIB_P08: LIB_P38 {
        class WeaponSlotsInfo;
    };
    class GLIB_FIN_L35: LIB_P08 {
        displayName = "Lahti L-35";
        magazines[] = {"GLIB_FIN_8Rnd_9x19mm"};
        magazineWell[] = {"CBA_9x19_L35"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 22;
        };
    };

    class LIB_M1895: LIB_PISTOL {
        class WeaponSlotsInfo;
    };
    class GLIB_FRA_REV1892: LIB_M1895 {
        displayName = "Modèle 1892 revolver";
        magazineWell[] = {"CBA_8x27_M1892"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 18.8;
        };
    };
    class GLIB_GBR_ENF2MK1: LIB_M1895 {
        displayName = "Enfield No.2 Mk.I";
        magazineWell[] = {"CBA_38_200_Webley"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 17;
        };
    };
    class GLIB_ITA_REV1889: LIB_M1895 {
        displayName = "Revolver 1889";
        magazineWell[] = {};
    };

    class LIB_WaltherPPK;
    class GLIB_ITA_BerettaM1935: LIB_WaltherPPK {
        displayName = "Beretta M1935";
        magazineWell[] = {};
    };
};

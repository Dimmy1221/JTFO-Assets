class CfgPatches
{
    class JTSFO_JSFAW_Assets
    {
        author = "Dimmy";
        units[] =
        {
            "JTSFO_AH6M_C6",
            "JTSFO_AH6M_C7",
            "JTSFO_MH6M_C7",
            "JTSFO_MH6M_C6"
        };
        weapons[] =
        {
            "JTFO_JSFAW_Helmet_Holiday",
            "JTFO_JSFAW_Helmet_Dimmy",
            "JTFO_JSFAW_Helmet_Apathy"
        };
    };
};

class CfgWeapons
{
    class rhsusf_hgu56p_visor;
    class JTFO_JSFAW_Helmet_Holiday : rhsusf_hgu56p_visor
    {
        scope = 2;
        scopeArsenal = 2;
        author = "Holiday & Dimmy";
        displayName = "[JTFO] JSFAW Helmet (Holiday)";
        hiddenSelections[] = {"camo","patches"};
        hiddenSelectionsTextures[] =
        {
            "\JSFAW\Data\Holiday.paa",
            ""
        };
    };

    class JTFO_JSFAW_Helmet_Dimmy : rhsusf_hgu56p_visor
    {
        scope = 2;
        scopeArsenal = 2;
        author = "Holiday & Dimmy";
        displayName = "[JTFO] JSFAW Helmet (Dimmy)";
        hiddenSelections[] = {"camo","patches"};
        hiddenSelectionsTextures[] =
        {
            "\JSFAW\Data\Dimmy.paa",
            ""
        };
    };

    class rhsusf_hgu56p_visor_mask_Empire_black;
    class JTFO_JSFAW_Helmet_Apathy : rhsusf_hgu56p_visor_mask_Empire_black
    {
        scope = 2;
        scopeArsenal = 2;
        author = "Holiday & Dimmy";
        displayName = "[JTFO] JSFAW Helmet (Apathy)";
        hiddenSelections[] = {"camo","patches"};
        hiddenSelectionsTextures[] =
        {
            "\JSFAW\Data\Apathy.paa",
            "\rhsusf\addons\rhsusf_infantry2\gear\head\hgu56\Data\rhs_hgu56_patches_empire_co.paa"
        };
    };
};

class CfgFactionClasses
{
    class JTSFO_NATO
    {
        displayName = "JTSFO Units";
        priority = 2;
        side = 1;
        icon = "";
        flag = "";
    };
};

class CfgEditorSubcategories
{
    class JTSFO_NATO_AIR
    {
        displayName = "JSFAW";
    };
};

class CfgVehicles
{
    class RHS_MELB_AH6M;
    class RHS_MELB_MH6M;

    class JTSFO_AH6M_C6 : RHS_MELB_AH6M
    {
        author = "Dimmy";
        displayName = "AH-6M Little Bird (Chaos 6)";

        scope = 2;
        scopeCurator = 2;

        side = 1;
        faction = "JTSFO_NATO";
        editorSubcategory = "JTSFO_NATO_AIR";

        hiddenSelections[] =
        {
            "camo1",
            "d_SN"
        };
        hiddenSelectionsTextures[] =
        {
            "\JSFAW\Data\Dimmy_AH6.paa",
            "rhsusf\addons\rhsusf_melb\data\decals\SN\blank_ca.paa"
        };
    };

    class JTSFO_AH6M_C7 : RHS_MELB_AH6M
    {
        author = "Dimmy";
        displayName = "AH-6M Little Bird (Chaos 7)";

        scope = 2;
        scopeCurator = 2;

        side = 1;
        faction = "JTSFO_NATO";
        editorSubcategory = "JTSFO_NATO_AIR";

        hiddenSelections[] =
        {
            "camo1",
            "d_SN"
        };
        hiddenSelectionsTextures[] =
        {
            "\JSFAW\Data\Holiday_AH6.paa",
            "rhsusf\addons\rhsusf_melb\data\decals\SN\blank_ca.paa"
        };
    };

    class JTSFO_MH6M_C6 : RHS_MELB_MH6M
    {
        author = "Dimmy";
        displayName = "MH-6M Little Bird (Chaos 6)";

        scope = 2;
        scopeCurator = 2;

        side = 1;
        faction = "JTSFO_NATO";
        editorSubcategory = "JTSFO_NATO_AIR";

        hiddenSelections[] =
        {
            "camo1",
            "d_SN"
        };
        hiddenSelectionsTextures[] =
        {
            "\JSFAW\Data\Dimmy_AH6.paa",
            "rhsusf\addons\rhsusf_melb\data\decals\SN\blank_ca.paa"
        };
    };

    class JTSFO_MH6M_C7 : RHS_MELB_MH6M
    {
        author = "Dimmy";
        displayName = "MH-6M Little Bird (Chaos 7)";

        scope = 2;
        scopeCurator = 2;

        side = 1;
        faction = "JTSFO_NATO";
        editorSubcategory = "JTSFO_NATO_AIR";

        hiddenSelections[] =
        {
            "camo1",
            "d_SN"
        };
        hiddenSelectionsTextures[] =
        {
            "\JSFAW\Data\Holiday_AH6.paa",
            "rhsusf\addons\rhsusf_melb\data\decals\SN\blank_ca.paa"
        };
    };
};
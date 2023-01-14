class CfgPatches
{
    class Wolfpatch_Medical
    {
        name = "Wolfpatch_Medical";
        author = "DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] = {"aceAresenalCatagory"};
        units[] = {};
        weapons[] = {};
    };
};

class CfgFunctions
{
	class Wolfpatch_Medical
	{
		class functions
		{
            file = "Medical\functions";
			class init
            {
                postInit = 1;
            };
		};
	};
};
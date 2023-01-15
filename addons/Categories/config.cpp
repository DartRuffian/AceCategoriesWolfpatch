class CfgPatches
{
    class Wolfpatch
    {
        name = "Wolfpatch";
        author = "DartRuffian";
        requiredVersion = 0.1;
        requiredAddons[] = {"aceAresenalCatagory"};
        units[] = {};
        weapons[] = {};
    };
};

class CfgFunctions
{
	class Wolfpatch
	{
		class functions
		{
            file = "Categories\functions";
			class init
            {
                postInit = 1;
            };
		};
	};
};
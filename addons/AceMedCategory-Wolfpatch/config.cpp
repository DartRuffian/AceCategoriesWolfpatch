class CfgPatches
{
    class aceAresenalCatagory
    {
        name = "aceAresenalCatagoryWolfPatch";
        author = "Dart";
        requiredVersion = 0.1;
        requiredAddons[] = {"aceAresenalCatagory"};
        units[] = {};
        weapons[] = {};
    };
};

class CfgFunctions
{
	class aceAresenalCatagoryWolfPatch
	{
		class functions
		{
            file = "AceMedCategory-Wolfpatch\functions";
			class init
            {
                postInit = 1;
            };
		};
	};
};
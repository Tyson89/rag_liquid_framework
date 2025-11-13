class CfgPatches
{
	class rag_liquid_framework
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgMods
{
	class rag_liquid_framework
	{
		dir="\rag_liquid_framework";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="rag_liquid_framework";
		credits="Tyson";
		author="Tyson";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		defines[]=
		{
			"RAG_LIQUID_FRAMEWORK"
		};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"rag_liquid_framework/scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"rag_liquid_framework/scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"rag_liquid_framework/scripts/5_Mission"};
			};
		};
	};
};
class CfgLiquidDefinitions
{
	class Milk
	{
		type=600;
		displayName="#STR_RAG_MILK";
		flammability=-10;
		liquidFreezeThreshold=0;
		liquidThawThreshold=0;
		liquidBoilingThreshold=150;
		class Nutrition
		{
			fullnessIndex=1;
			energy=40;
			water=40;
			nutritionalIndex=75;
			toxicity=-0.0;
			digestibility=2;
		};
	};
	class Honey
	{
		type=601;
		displayName="#STR_RAG_HONEY";
		flammability=-10;
		liquidFreezeThreshold=0;
		liquidThawThreshold=0;
		liquidBoilingThreshold=150;
		class Nutrition
		{
			fullnessIndex=1;
			energy=70;
			water=50;
			nutritionalIndex=75;
			toxicity=-0.0;
			digestibility=2;
		};
	};
	class HoneyWine
	{
		type=602;
		displayName="#STR_RAG_HONEYWINE";
		flammability=5;
		liquidFreezeThreshold=-8;
		liquidThawThreshold=0;
		liquidBoilingThreshold=150;
		class Nutrition
		{
			fullnessIndex=1;
			energy=70;
			water=50;
			nutritionalIndex=75;
			toxicity=-0.0;
			digestibility=2;
		};
	};
	class RedWine
	{
		type=603;
		displayName="#STR_RAG_REDWINE";
		flammability=5;
		liquidFreezeThreshold=-8;
		liquidThawThreshold=0;
		liquidBoilingThreshold=150;
		class Nutrition
		{
			fullnessIndex=1;
			energy=0;
			water=80;
			nutritionalIndex=75;
			toxicity=-0.0;
			digestibility=2;
		};
	};
	class WhiteWine
	{
		type=604;
		displayName="#STR_RAG_WHITEWINE";
		flammability=5;
		liquidFreezeThreshold=-8;
		liquidThawThreshold=0;
		liquidBoilingThreshold=150;
		class Nutrition
		{
			fullnessIndex=1;
			energy=0;
			water=80;
			nutritionalIndex=75;
			toxicity=-0.0;
			digestibility=2;
		};
	};
	class AVGas
	{
		type=605;
		displayName="#STR_RAG_AVGAS";
		flammability=60;
		liquidFreezeThreshold=-60;
		liquidThawThreshold=0;
		liquidBoilingThreshold=999;
		class Nutrition
		{
			fullnessIndex=1;
			energy=5;
			water=0;
			nutritionalIndex=75;
			toxicity=-0.0;
			digestibility=2;
			agents=16;
		};
	};
	class Whiskey
	{
		type=606;
		displayName="#STR_RAG_WHISKEY";
		flammability=30;
		liquidFreezeThreshold=-30;
		liquidThawThreshold=0;
		liquidBoilingThreshold=150;
		class Nutrition
		{
			fullnessIndex=1;
			energy=0;
			water=80;
			nutritionalIndex=75;
			toxicity=-0.0;
			digestibility=2;
		};
	};
	class Espresso
	{
		type=607;
		displayName="#STR_RAG_ESPRESSO";
		flammability=-10;
		liquidFreezeThreshold=0;
		liquidThawThreshold=0;
		liquidBoilingThreshold=150;
		class Nutrition
		{
			fullnessIndex=1;
			energy=5;
			water=30;
			nutritionalIndex=75;
			toxicity=-0.0;
			digestibility=2;
		};
	};
	class Coffee
	{
		type=608;
		displayName="#STR_RAG_COFFEE";
		flammability=-10;
		liquidFreezeThreshold=0;
		liquidThawThreshold=0;
		liquidBoilingThreshold=150;
		class Nutrition
		{
			fullnessIndex=1;
			energy=5;
			water=50;
			nutritionalIndex=75;
			toxicity=-0.0;
			digestibility=2;
		};
	};
	class Tea
	{
		type=609;
		displayName="#STR_RAG_TEA";
		flammability=-10;
		liquidFreezeThreshold=0;
		liquidThawThreshold=0;
		liquidBoilingThreshold=150;
		class Nutrition
		{
			fullnessIndex=1;
			energy=0;
			water=100;
			nutritionalIndex=75;
			toxicity=-0.0;
			digestibility=2;
		};
	};
	class MotorOil
	{
		type=610;
		displayName="#STR_RAG_MOTOROIL";
		flammability=50;
		liquidFreezeThreshold=-50;
		liquidThawThreshold=0;
		liquidBoilingThreshold=999;
		class Nutrition
		{
			fullnessIndex=1;
			energy=-10;
			water=0;
			nutritionalIndex=75;
			toxicity=1;
			digestibility=2;
			agents=16;
		};
	};
	class EnergyDrink
	{
		type=611;
		displayName="#STR_RAG_ENERGYDRINK";
		flammability=-10;
		liquidFreezeThreshold=0;
		liquidThawThreshold=0;
		liquidBoilingThreshold=150;
		class Nutrition
		{
			fullnessIndex=1;
			energy=5;
			water=80;
			nutritionalIndex=75;
			toxicity=-0.0099999998;
			digestibility=2;
		};
	};
	class Virus
	{
		type=612;
		displayName="#STR_RAG_VIRUS";
		flammability=-10;
		liquidFreezeThreshold=-50;
		liquidThawThreshold=0;
		liquidBoilingThreshold=999;
		class Nutrition
		{
			fullnessIndex=1;
			energy=-100;
			water=-100;
			toxicity=1;
			digestibility=2;
			agents=16;
		};
	};
	class Poison
	{
		type=613;
		displayName="#STR_RAG_POISON";
		flammability=-10;
		liquidFreezeThreshold=-50;
		liquidThawThreshold=0;
		liquidBoilingThreshold=999;
		class Nutrition
		{
			fullnessIndex=1;
			energy=-100;
			water=-100;
			toxicity=1;
			digestibility=2;
			agents=16;
		};
	};
	class MilkCoffee
	{
		type=614;
		displayName="#STR_RAG_MILKCOFFEE";
		flammability=-10;
		liquidFreezeThreshold=0;
		liquidThawThreshold=0;
		liquidBoilingThreshold=150;
		class Nutrition
		{
			fullnessIndex=1;
			energy=20;
			water=50;
			nutritionalIndex=75;
			toxicity=-0.0;
			digestibility=2;
		};
	};
	class Antivenom
	{
		type=615;
		displayName="#STR_RAG_ANTIVENOM";
		flammability=-10;
		liquidFreezeThreshold=-50;
		liquidThawThreshold=0;
		liquidBoilingThreshold=999;
		class Nutrition
		{
			fullnessIndex=1;
			energy=5;
			water=30;
			nutritionalIndex=75;
			toxicity=0.1;
			digestibility=2;
		};
	};
	class Coolant
	{
		type=616;
		displayName="#STR_RAG_COOLANT";
		flammability=-10;
		liquidFreezeThreshold=-50;
		liquidThawThreshold=0;
		liquidBoilingThreshold=999;
		class Nutrition
		{
			fullnessIndex=1;
			energy=-10;
			water=0;
			nutritionalIndex=75;
			toxicity=1;
			digestibility=2;
			agents=16;
		};
	};
	class BrakeFluid
	{
		type=617;
		displayName="#STR_RAG_BRAKEFLUID";
		flammability=30;
		liquidFreezeThreshold=-50;
		liquidThawThreshold=0;
		liquidBoilingThreshold=999;
		class Nutrition
		{
			fullnessIndex=1;
			energy=-10;
			water=0;
			nutritionalIndex=75;
			toxicity=1;
			digestibility=2;
			agents=16;
		};
	};
	class HydraulicFluid
	{
		type=618;
		displayName="#STR_RAG_HYDRAULICFLUID";
		flammability=30;
		liquidFreezeThreshold=-50;
		liquidThawThreshold=0;
		liquidBoilingThreshold=999;
		class Nutrition
		{
			fullnessIndex=1;
			energy=-10;
			water=0;
			nutritionalIndex=75;
			toxicity=1;
			digestibility=2;
			agents=16;
		};
	};
	class CookingOil
	{
		type=619;
		displayName="#STR_RAG_COOKINGOIL";
		flammability=10;
		liquidFreezeThreshold=-20;
		liquidThawThreshold=0;
		liquidBoilingThreshold=150;
		class Nutrition
		{
			fullnessIndex=1;
			energy=-10;
			water=0;
			nutritionalIndex=75;
			toxicity=1;
			digestibility=2;
			agents=16;
		};
	};
	class Vinegar
	{
		type=620;
		displayName="#STR_RAG_VINEGAR";
		flammability=-10;
		liquidFreezeThreshold=-15;
		liquidThawThreshold=0;
		liquidBoilingThreshold=150;
		class Nutrition
		{
			fullnessIndex=1;
			energy=-10;
			water=-10;
			nutritionalIndex=75;
			toxicity=0;
			digestibility=2;
			agents=16;
		};
	};
	class AppleJuice
	{
		type=621;
		displayName="#STR_RAG_APPLEJUICE";
		flammability=0;
		liquidFreezeThreshold=0;
		liquidThawThreshold=0;
		liquidBoilingThreshold=100;
		class Nutrition
		{
			fullnessIndex=1;
			energy=10;
			water=80;
			nutritionalIndex=75;
			toxicity=-0.0;
			digestibility=2;
		};
	};
	class OrangeJuice
	{
		type=622;
		displayName="#STR_RAG_ORANGEJUICE";
		flammability=0;
		liquidFreezeThreshold=0;
		liquidThawThreshold=0;
		liquidBoilingThreshold=100;
		class Nutrition
		{
			fullnessIndex=1;
			energy=10;
			water=80;
			nutritionalIndex=75;
			toxicity=-0.0;
			digestibility=2;
		};
	};
	
	
	// Vanilla Overrides
	class Blood_0Positive
	{
		type=1;
		displayName="$STR_cfgLiquidDefinitions_Blood_0Positive0";
		flammability=50;
		liquidFreezeThreshold=0;
		liquidThawThreshold=0;
		liquidBoilingThreshold=100;
		class Nutrition
		{
			fullnessIndex=1;
			energy=5;
			water=30;
			nutritionalIndex=55;
			toxicity=0.1;
			digestibility=2;
		};
	};
	class Blood_0Negative
	{
		type=2;
		displayName="$STR_cfgLiquidDefinitions_Blood_0Negative0";
		flammability=50;
		liquidFreezeThreshold=0;
		liquidThawThreshold=0;
		liquidBoilingThreshold=100;
		class Nutrition
		{
			fullnessIndex=1;
			energy=5;
			water=30;
			nutritionalIndex=55;
			toxicity=0.1;
			digestibility=2;
		};
	};
	class Blood_APositive
	{
		type=4;
		displayName="$STR_cfgLiquidDefinitions_Blood_APositive0";
		flammability=50;
		liquidFreezeThreshold=0;
		liquidThawThreshold=0;
		liquidBoilingThreshold=100;
		class Nutrition
		{
			fullnessIndex=1;
			energy=5;
			water=30;
			nutritionalIndex=55;
			toxicity=0.1;
			digestibility=2;
		};
	};
	class Blood_ANegative
	{
		type=8;
		displayName="$STR_cfgLiquidDefinitions_Blood_ANegative0";
		flammability=50;
		liquidFreezeThreshold=0;
		liquidThawThreshold=0;
		liquidBoilingThreshold=100;
		class Nutrition
		{
			fullnessIndex=1;
			energy=5;
			water=30;
			nutritionalIndex=55;
			toxicity=0.1;
			digestibility=2;
		};
	};
	class Blood_BPositive
	{
		type=16;
		displayName="$STR_cfgLiquidDefinitions_Blood_BPositive0";
		flammability=50;
		liquidFreezeThreshold=0;
		liquidThawThreshold=0;
		liquidBoilingThreshold=100;
		class Nutrition
		{
			fullnessIndex=1;
			energy=5;
			water=30;
			nutritionalIndex=55;
			toxicity=0.1;
			digestibility=2;
		};
	};
	class Blood_BNegative
	{
		type=32;
		displayName="$STR_cfgLiquidDefinitions_Blood_BNegative0";
		flammability=50;
		liquidFreezeThreshold=0;
		liquidThawThreshold=0;
		liquidBoilingThreshold=100;
		class Nutrition
		{
			fullnessIndex=1;
			energy=5;
			water=30;
			nutritionalIndex=55;
			toxicity=0.1;
			digestibility=2;
		};
	};
	class Blood_ABPositive
	{
		type=64;
		displayName="$STR_cfgLiquidDefinitions_Blood_ABPositive0";
		flammability=50;
		liquidFreezeThreshold=0;
		liquidThawThreshold=0;
		liquidBoilingThreshold=100;
		class Nutrition
		{
			fullnessIndex=1;
			energy=5;
			water=30;
			nutritionalIndex=55;
			toxicity=0.1;
			digestibility=2;
		};
	};
	class Blood_ABNegative
	{
		type=128;
		displayName="$STR_cfgLiquidDefinitions_Blood_ABNegative0";
		flammability=50;
		liquidFreezeThreshold=0;
		liquidThawThreshold=0;
		liquidBoilingThreshold=100;
		class Nutrition
		{
			fullnessIndex=1;
			energy=5;
			water=30;
			nutritionalIndex=55;
			toxicity=0.1;
			digestibility=2;
		};
	};
	class Saline
	{
		type=256;
		displayName="$STR_cfgLiquidDefinitions_Saline0";
		flammability=-10;
		liquidBoilingThreshold=999;
		class Nutrition
		{
			fullnessIndex=1;
			energy=0;
			water=0;
			nutritionalIndex=75;
			toxicity=0.1;
			digestibility=2;
		};
	};
	class Vodka
	{
		type=2048;
		displayName="$STR_cfgLiquidDefinitions_Vodka0";
		flammability=10;
		liquidFreezeThreshold=-30;
		liquidThawThreshold=0;
		liquidBoilingThreshold=999;
		class Nutrition
		{
			fullnessIndex=1;
			energy=231;
			water=15;
			nutritionalIndex=75;
			toxicity=0.050000001;
			digestibility=2;
		};
	};
	class Beer
	{
		type=4096;
		displayName="$STR_cfgLiquidDefinitions_Beer0";
		flammability=0;
		liquidFreezeThreshold=-5;
		liquidThawThreshold=0;
		liquidBoilingThreshold=999;
		class Nutrition
		{
			fullnessIndex=1;
			energy=43;
			water=100;
			nutritionalIndex=75;
			toxicity=0.0;
			digestibility=2;
		};
	};
	class Gasoline
	{
		type=8192;
		displayName="$STR_cfgLiquidDefinitions_Gasoline0";
		flammability=50;
		liquidFreezeThreshold=-60;
		liquidThawThreshold=0;
		liquidBoilingThreshold=999;
		class Nutrition
		{
			fullnessIndex=1;
			energy=5;
			water=0;
			nutritionalIndex=75;
			toxicity=-0.0;
			digestibility=2;
			agents=16;
		};
	};
	class Diesel
	{
		type=16384;
		displayName="$STR_cfgLiquidDefinitions_Diesel0";
		flammability=50;
		liquidFreezeThreshold=-60;
		liquidThawThreshold=0;
		liquidBoilingThreshold=999;
		class Nutrition
		{
			fullnessIndex=1;
			energy=-10;
			water=0;
			nutritionalIndex=75;
			toxicity=1;
			digestibility=2;
			agents=16;
		};
	};
	class Disinfectant
	{
		type=32768;
		displayName="$STR_cfgLiquidDefinitions_Disinfectant0";
		flammability=10;
		liquidFreezeThreshold=-30;
		liquidThawThreshold=0;
		liquidBoilingThreshold=999;
		class Nutrition
		{
			fullnessIndex=1;
			energy=-10;
			water=1;
			nutritionalIndex=55;
			toxicity=0.30000001;
			digestibility=2;
			agents=16;
		};
	};
};
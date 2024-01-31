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
		dir="\rag\rag_stuff\rag_liquid_framework";
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
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"rag/rag_stuff/rag_liquid_framework/scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"rag/rag_stuff/rag_liquid_framework/scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"rag/rag_stuff/rag_liquid_framework/scripts/5_Mission"};
			};
		};
	};
};
class cfgLiquidDefinitions
{
	class Blood_0Positive
	{
		type=1;
		displayName="$STR_cfgLiquidDefinitions_Blood_0Positive0";
		flammability=50;
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
	class Water
	{
		type=512;
		displayName="$STR_cfgLiquidDefinitions_Water0";
		flammability=-10;
		class Nutrition
		{
			fullnessIndex=1;
			energy=0;
			water=100;
			nutritionalIndex=75;
			toxicity=-0.0099999998;
			digestibility=2;
		};
	};
	class RiverWater
	{
		type=1024;
		displayName="$STR_cfgLiquidDefinitions_RiverWater0";
		flammability=-10;
		class Nutrition
		{
			fullnessIndex=1;
			energy=0;
			water=100;
			nutritionalIndex=75;
			toxicity=-0.0099999998;
			digestibility=2;
		};
	};
	class Vodka
	{
		type=2048;
		displayName="$STR_cfgLiquidDefinitions_Vodka0";
		flammability=10;
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
		class Nutrition
		{
			fullnessIndex=1;
			energy=43;
			water=100;
			nutritionalIndex=75;
			toxicity=0.0099999998;
			digestibility=2;
		};
	};
	class Gasoline
	{
		type=8192;
		displayName="$STR_cfgLiquidDefinitions_Gasoline0";
		flammability=50;
		class Nutrition
		{
			fullnessIndex=1;
			energy=5;
			water=0;
			nutritionalIndex=75;
			toxicity=1;
			digestibility=2;
			agents=16;
		};
	};
	class Diesel
	{
		type=16384;
		displayName="$STR_cfgLiquidDefinitions_Diesel0";
		flammability=50;
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
	class MilkLiquid
	{
		type=65536;
		displayName="Milk";
		flammability=-10;
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
	class HoneyLiquid
	{
		type=131072;
		displayName="Honey";
		flammability=-10;
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
	class HoneyWineLiquid
	{
		type=262144;
		displayName="HoneyWine";
		flammability=5;
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
	class WineLiquid
	{
		type=524288;
		displayName="Wine";
		flammability=5;
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
	class AVGasLiquid
	{
		type=1048576;
		displayName="AVGas Aviation Fuel";
		flammability=60;
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
	class WhiskeyLiquid
	{
		type=2097152;
		displayName="Whiskey";
		flammability=30;
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
	class EspressoLiquid
	{
		type=4194304;
		displayName="Espresso";
		flammability=-10;
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
	class CoffeeLiquid
	{
		type=8388608;
		displayName="Coffee";
		flammability=-10;
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
	class TeaLiquid
	{
		type=16777216;
		displayName="Tea";
		flammability=-10;
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
	class EngineOilLiquid
	{
		type=33554432;
		displayName="Engine Oil";
		flammability=50;
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
		type=67108864;
		displayName="Energy Drink";
		flammability=-10;
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
		type=134217728;
		displayName="Virus";
		flammability=-10;
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
	class PoisonLiquid
	{
		type=268435456;
		displayName="Poison";
		flammability=-10;
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
	class MilkCoffeeLiquid
	{
		type=536870912;
		displayName="Milk Coffee";
		flammability=-10;
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
	class AntivenomLiquid
	{
		type=1073741824;
		displayName="Antivenom";
		flammability=-10;
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
};
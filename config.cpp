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
	class MilkLiquid
	{
		type=600;
		displayName="Milk";
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
	class HoneyLiquid
	{
		type=601;
		displayName="Honey";
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
	class HoneyWineLiquid
	{
		type=602;
		displayName="HoneyWine";
		flammability=5;
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
	class RedWineLiquid
	{
		type=603;
		displayName="Red Wine";
		flammability=5;
		liquidFreezeThreshold=0;
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
	class WhiteWineLiquid
	{
		type=604;
		displayName="White Wine";
		flammability=5;
		liquidFreezeThreshold=0;
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
	class AVGasLiquid
	{
		type=605;
		displayName="AVGas Aviation Fuel";
		flammability=60;
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
	class WhiskeyLiquid
	{
		type=606;
		displayName="Whiskey";
		flammability=30;
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
	class EspressoLiquid
	{
		type=607;
		displayName="Espresso";
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
	class CoffeeLiquid
	{
		type=608;
		displayName="Coffee";
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
	class TeaLiquid
	{
		type=609;
		displayName="Tea";
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
	class MotorOilLiquid
	{
		type=610;
		displayName="Motor Oil";
		flammability=50;
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
		displayName="Energy Drink";
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
		displayName="Virus";
		flammability=-10;
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
	class PoisonLiquid
	{
		type=613;
		displayName="Poison";
		flammability=-10;
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
	class MilkCoffeeLiquid
	{
		type=614;
		displayName="Milk Coffee";
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
	class AntivenomLiquid
	{
		type=615;
		displayName="Antivenom";
		flammability=-10;
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
	class CoolantLiquid
	{
		type=616;
		displayName="Coolant";
		flammability=-10;
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
	class BrakeFluidLiquid
	{
		type=617;
		displayName="BrakeFluid";
		flammability=30;
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
	class HydraulicFluidLiquid
	{
		type=618;
		displayName="HydraulicFluid";
		flammability=30;
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
	class CookingOilLiquid
	{
		type=619;
		displayName="CookingOil";
		flammability=10;
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
	class VinegarLiquid
	{
		type=620;
		displayName="Vinegar";
		flammability=-10;
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
};
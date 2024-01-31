modded class InspectMenuNew
{
	override static void UpdateItemInfoLiquidType(Widget root_widget, EntityAI item)
	{
		if ( item.IsInherited( ZombieBase ) || item.IsInherited( Car ) ) return;
		
		ItemBase item_base = ItemBase.Cast( item );
		
		if ( item_base && item_base.GetQuantity() > 0 && item_base.IsBloodContainer() )
		{
			BloodContainerBase blood_container = BloodContainerBase.Cast( item_base );
			
			if ( blood_container.GetBloodTypeVisible() )
			{
				string type;
				bool positive;
				string blood_type_name = BloodTypes.GetBloodTypeName(blood_container.GetLiquidType(), type, positive);
				WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "#inv_inspect_blood: " + blood_type_name, Colors.COLOR_LIQUID);
			}
			else
			{
				WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "#inv_inspect_blood", Colors.COLOR_LIQUID);
			}
		}
		else if ( item_base && item_base.GetQuantity() > 0 && item_base.IsLiquidContainer() )
		{
			int liquid_type = item_base.GetLiquidType();
			
			switch(liquid_type)
			{
				case LIQUID_WATER:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "#inv_inspect_water", Colors.COLOR_LIQUID);
					break;
				}
					
				case LIQUID_RIVERWATER:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "#inv_inspect_river_water", Colors.COLOR_LIQUID);
					break;
				}
					
				case LIQUID_VODKA:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "#inv_inspect_vodka", Colors.GRAY);
					break;
				}
				
				case LIQUID_BEER:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "#inv_inspect_beer", Colors.YELLOW);
					break;
				}
				
				case LIQUID_GASOLINE:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "#inv_inspect_gasoline", Colors.COLOR_GASOLINE);
					break;
				}
				
				case LIQUID_DIESEL:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "#inv_inspect_diesel", Colors.COLOR_GASOLINE);
					break;
				}
				
				case LIQUID_DISINFECTANT:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "#inv_inspect_disinfectant", Colors.GRAY);
					break;
				}
	
				case LIQUID_SALINE:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "#inv_inspect_saline", Colors.COLOR_LIQUID);
					break;
				}
				
				case LIQUID_MILK:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "MILK", Colors.MILKLIQUID);
					break;
				}
				
				case LIQUID_HONEY:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "HONEY", Colors.HONEYLIQUID);
					break;
				}
				
				case LIQUID_HONEYWINE:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "HONEYWINE", Colors.HONEYWINELIQUID);
					break;
				}
				
				case LIQUID_WINE:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "WINE", Colors.WINELIQUID);
					break;
				}
				
				case LIQUID_RAGAVGAS:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "AVIATION FUEL", Colors.AVGASLIQUID);
					break;
				}
				
				case LIQUID_WHISKEY:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "WHISKEY", Colors.WHISKEYLIQUID);
					break;
				}
				
				case LIQUID_ESPRESSO:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "ESPRESSO", Colors.ESPRESSOLIQUID);
					break;
				}
				
				case LIQUID_COFFEE:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "COFFEE", Colors.COFFEELIQUID);
					break;
				}
				
				case LIQUID_TEA:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "TEA", Colors.TEALIQUID);
					break;
				}
				
				case LIQUID_ENGINEOIL:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "ENGINEOIL", Colors.ENGINEOILLIQUID);
					break;
				}
				
				case LIQUID_ENERGYDRINK:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "ENERGYDRINK", Colors.ENERGYDRINKLIQUID);
					break;
				}
				
				case LIQUID_VIRUS:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "VIRUS", Colors.VIRUSLIQUID);
					break;
				}
				
				case LIQUID_POISON:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "POISON", Colors.POISONLIQUID);
					break;
				}
				
				case LIQUID_MILKCOFFEE:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "MILKCOFFEE", Colors.MILKCOFFEELIQUID);
					break;
				}
				
				case LIQUID_ANTIVENOM:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "ANTIVENOM", Colors.ANTIVENOMLIQUID);
					break;
				}
				
				default:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "ERROR", Colors.COLOR_LIQUID);
					break;
				}
			}
		}
		else
		{
			WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "");
		}
	}
};
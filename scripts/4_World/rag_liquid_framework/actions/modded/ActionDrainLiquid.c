modded class ActionDrainLiquid
{
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	
		ItemBase target_item = ItemBase.Cast(target.GetObject());
		
		if ( target_item && item )
		{
			if ( !RaG_Custom_Liquids.IsLiquidPowerOfTwo(target_item.GetLiquidType()) || !RaG_Custom_Liquids.IsLiquidPowerOfTwo(item.GetLiquidType()) )
			{
				//Print("[RaG_Liquid_Framework] ActionDrainLiquid:: ActionCondition:: Liquid is NOT power of 2 - use custom action");
				return false;
			}
			
			return super.ActionCondition(player, target, item);
		}
		return false;
	}
};
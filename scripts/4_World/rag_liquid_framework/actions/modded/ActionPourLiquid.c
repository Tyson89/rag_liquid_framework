modded class ActionPourLiquid
{
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	
		ItemBase target_item = ItemBase.Cast(target.GetObject());
		
		if ( target_item && item )
		{
			if ( !RaG_Custom_Liquids.IsLiquidPowerOfTwoOrEmpty(target_item.GetLiquidType()) || !RaG_Custom_Liquids.IsLiquidPowerOfTwoOrEmpty(item.GetLiquidType()) )
			{
				return false;
			}
			
			return super.ActionCondition(player, target, item);
		}
		return false;
	}
};
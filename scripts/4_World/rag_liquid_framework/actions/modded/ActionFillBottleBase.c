modded class ActionFillBottleBase
{
	override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
	{
		CCTWaterSurfaceEx waterCheck = CCTWaterSurfaceEx.Cast(m_ConditionTarget);
		
		if ( waterCheck )
		{
			//int liquidType = waterCheck.GetSurfaceLiquidType(target);
			int liquidType = GetLiquidType(player, target, item);
			
			if (item.GetQuantity() > item.GetQuantityMin())
				liquidType = Liquid.TranslateLiquidType(liquidType);
			
			return liquidType != LIQUID_NONE && Liquid.CanFillContainer(item,liquidType);
		}
		
		return super.ActionCondition(player, target, item);
	}
};
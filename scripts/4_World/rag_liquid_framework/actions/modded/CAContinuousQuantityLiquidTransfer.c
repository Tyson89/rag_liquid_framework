modded class CAContinuousQuantityLiquidTransfer
{
	override void CalcAndSetQuantity(ActionData action_data)
	{
		ItemBase target_item = ItemBase.Cast(action_data.m_Target.GetObject());
		
		if ( !RaG_Custom_Liquids.IsLiquidPowerOfTwo(target_item.GetLiquidType()) )
		{
			//Print("[RaG_Liquid_Framework] CAContinuousQuantityLiquidTransfer:: CalcAndSetQuantity:: Liquid is NOT power of 2");
			m_SpentQuantity_total += m_SpentQuantity;
			
			if (g_Game.IsServer())
			{
				if (m_SpentUnits)
				{
					m_SpentUnits.param1 = m_SpentQuantity;
					SetACData(m_SpentUnits);
				}
				
				//could move following stuff to action itself, if needed
				if (m_TendencyDrain)
				{
					RaG_Custom_Liquids.Transfer(target_item, action_data.m_MainItem, m_SpentQuantity);
				}
				else
				{
					RaG_Custom_Liquids.Transfer(action_data.m_MainItem, target_item, m_SpentQuantity);
				}
			}
			m_SpentQuantity = 0;
		}
		
		else
		{
			//Print("[RaG_Liquid_Framework] CAContinuousQuantityLiquidTransfer:: CalcAndSetQuantity:: Liquid is power of 2 - return super");
			super.CalcAndSetQuantity(action_data);
		}
	}
};
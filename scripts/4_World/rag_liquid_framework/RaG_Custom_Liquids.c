class RaG_Custom_Liquids
{
	static bool IsLiquidPowerOfTwo(int type)
	{
	    // zero is invalid, and only pure powers of two pass
	    return type > 0 && (type & (type - 1)) == 0;
	}
	static bool IsLiquidPowerOfTwoOrEmpty(int type)
	{
	    // zero is invalid, and only pure powers of two pass
	    return type >= 0 && (type & (type - 1)) == 0;
	}
	
	static bool CanTransfer(ItemBase source_ent, ItemBase target_ent)
	{
		if (!source_ent || !target_ent)
		{
			//Print("[RaG_Liquid_Framework] CanTransfer:: no source or no target");
			return false;
		}
		
		Barrel_ColorBase barrelTarget = Barrel_ColorBase.Cast(target_ent);
		Barrel_ColorBase barrelSource = Barrel_ColorBase.Cast(source_ent);
		if ((barrelTarget && !barrelTarget.IsOpen()) || (barrelSource && !barrelSource.IsOpen()))
		{
			//Print("[RaG_Liquid_Framework] CanTransfer:: barrelTarget or barrelSource is not open");
			return false;
		}
		
		if (source_ent.GetIsFrozen())
		{
			//Print("[RaG_Liquid_Framework] CanTransfer:: source_ent liquid is frozen");
			return false;
		}
		
		float source_quantity = source_ent.GetQuantity();
		if (source_quantity <= 0)
		{
			//Print("[RaG_Liquid_Framework] CanTransfer:: source_quantity <= 0");
			//Debug.Log("source has no quantity", "LiquidTransfer");
			return false;//if there is nothing to transfer
		}
		
		int source_liquid_type 	= source_ent.GetLiquidType();
		if (source_liquid_type < 1) 
		{
			//Print("[RaG_Liquid_Framework] CanTransfer:: source_liquid_type < 1");
			//Debug.Log("source has some quantity, but does not have a valid liquidType set, liquidType = "+ToString(source_liquid_type), "LiquidTransfer");
			return false;//if source is not a container
		}
		
		if (!CanFillContainer(target_ent,source_liquid_type))
		{
			//Print("[RaG_Liquid_Framework] CanTransfer:: CanFillContainer is false");
			return false;
		}
		
		return true;
	}
	
	static bool CanFillContainer(ItemBase container, int liquid_type, bool ignore_fullness_check = false)
	{
		if (!container) 
			return false;
		
		bool isContainerFull = container.IsFullQuantity();
		if (isContainerFull && !ignore_fullness_check)
		{
			//Print("[RaG_Liquid_Framework] CanFillContainer:: container is full");
			return false;
			
		}
		
		int containerMask = container.GetLiquidContainerMask();
		if (containerMask == 0)
		{
			//Print("[RaG_Liquid_Framework] CanFillContainer:: target is not a liquid container");
			return false;//if the target liquidContainerType is set to 0
		}
		
		if ((liquid_type & containerMask) == 0)
		{
			//Print("[RaG_Liquid_Framework] CanFillContainer:: target liquidContainerType does not support this liquid type");
			return false;
		}
		
		float containerQuantity = container.GetQuantity();
		
		int containerLiquidType = container.GetLiquidType();
		
		//Print("[RaG_Liquid_Framework] CanFillContainer:: containerLiquidType=" + containerLiquidType);
		//Print("[RaG_Liquid_Framework] CanFillContainer:: liquid_type=" + liquid_type);
		
		if (containerQuantity > 0 && containerLiquidType != liquid_type) 
		{
			//Print("[RaG_Liquid_Framework] CanFillContainer:: target is not empty AND is of different liquid type than liquid_type added in LiquidTransfer");
			return false;
		}
		return true;
	}
	
	static void Transfer(ItemBase source_ent, ItemBase target_ent, float quantity = -1)
	{
		if (!RaG_Custom_Liquids.CanTransfer(source_ent, target_ent))
			return;
		
		float source_quantity 	= source_ent.GetQuantity();
		float target_quantity 	= target_ent.GetQuantity();
		float targetCfgWeight 	= target_ent.m_ConfigWeight;
		int source_liquid_type 	= source_ent.GetLiquidType();
		
		float available_capacity = target_ent.GetQuantityMax() - target_quantity;
		float quantity_to_transfer;
		//transfers all
		if (quantity == -1)
		{
			quantity_to_transfer = Math.Clamp(source_quantity,0,available_capacity);
		}
		//transfers exact ammount
		else
		{
			quantity_to_transfer = Math.Clamp(Math.Min(source_quantity,quantity),0,available_capacity);
		}
		
		PluginTransmissionAgents m_mta = PluginTransmissionAgents.Cast(GetPlugin(PluginTransmissionAgents));
		m_mta.TransmitAgents(source_ent, target_ent, AGT_TRANSFER_COPY);
		
		source_ent.AddQuantity(-quantity_to_transfer);
		
		float retultTemp = (source_ent.GetTemperature() * quantity_to_transfer + target_ent.GetTemperature() * (targetCfgWeight + target_quantity)) / (targetCfgWeight + target_quantity + quantity_to_transfer);
		target_ent.SetTemperature(retultTemp);
		
		Liquid.AffectContainerOnTransfer(target_ent,source_liquid_type,quantity_to_transfer,source_ent.GetTemperature());
		
		RaG_Custom_Liquids.FillContainer(target_ent,source_liquid_type,quantity_to_transfer);
	}
	
	static void FillContainer(ItemBase container, int liquid_type, float amount)
	{
		if (!CanFillContainer(container,liquid_type))
		{
			return;
		}
		//filling
		container.SetLiquidType(liquid_type);
		container.AddQuantity(amount);
	}
};
class TransferCustomLiquidActionReciveData : ActionReciveData
{
	bool m_TendencyRecived;
}

class TransferCustomLiquidActionData : ActionData
{
	bool m_Tendency;
};

class ActionTransferCustomLiquidCB : ActionContinuousBaseCB
{
	private const float TIME_TO_REPEAT = 0.25;
	
	override void CreateActionComponent()
	{
		if (TransferCustomLiquidActionData.Cast(m_ActionData))
			m_ActionData.m_ActionComponent = new CAContinuousQuantityLiquidTransfer(UAQuantityConsumed.DRAIN_LIQUID, TIME_TO_REPEAT, TransferCustomLiquidActionData.Cast(m_ActionData).m_Tendency);
		else
			m_ActionData.m_ActionComponent = new CAContinuousQuantityLiquidTransfer(UAQuantityConsumed.DRAIN_LIQUID, TIME_TO_REPEAT);
	}
};

class ActionTransferCustomLiquids: ActionContinuousBase
{
	void ActionTransferCustomLiquids()
	{
		m_CallbackClass = ActionTransferCustomLiquidCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_EMPTY_VESSEL;
		m_CommandUIDProne = DayZPlayerConstants.CMD_ACTIONFB_EMPTY_VESSEL;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_LOW;
	}
	
	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNonRuined(UAMaxDistances.DEFAULT);
	}
	
	override bool HasProneException()
	{
		return true;
	}
	
	override string GetText()
	{
		PlayerBase player = PlayerBase.Cast( g_Game.GetPlayer() );
		if ( player.GetLiquidTendencyDrain() )
			return "#drain_liquid";
		else
			return "#pour_liquid";
	}
	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	
		ItemBase target_item = ItemBase.Cast(target.GetObject());
		
		if ( target_item && item )
		{
			if ( RaG_Custom_Liquids.IsLiquidPowerOfTwo(target_item.GetLiquidType()) || RaG_Custom_Liquids.IsLiquidPowerOfTwo(item.GetLiquidType()) )
			{
				//Print("[RaG_Liquid_Framework] ActionTransferCustomLiquids:: ActionCondition:: Liquid is power of 2 - use Vanilla action");
				return false;	// only touch custom liquids
			}
			
			bool can_drain = RaG_Custom_Liquids.CanTransfer(target_item,item);
			bool can_pour = RaG_Custom_Liquids.CanTransfer(item,target_item);
			
			//Print("[RaG_Liquid_Framework] ActionTransferCustomLiquids:: ActionCondition:: can_drain= " + can_drain);
			//Print("[RaG_Liquid_Framework] ActionTransferCustomLiquids:: ActionCondition:: can_pour= " + can_pour);
			
			if (can_drain && can_pour)
			{
				return true;
			}
			else if (!can_pour && can_drain)
			{
				if ( (!g_Game.IsDedicatedServer()) && !player.GetLiquidTendencyDrain() )
				{
					player.SetLiquidTendencyDrain(true);
					return false;
				}
				else
				{
					return true;
				}
			}
			else if (!can_drain && can_pour)
			{
				if ( (!g_Game.IsDedicatedServer()) && player.GetLiquidTendencyDrain() )
				{
					player.SetLiquidTendencyDrain(false);
					return false;
				}
				else
				{
					return true;
				}
			}
		}
		return false;
	}
	
	override void OnStartClient( ActionData action_data )
	{
		TransferCustomLiquidActionData.Cast(action_data).m_Tendency = action_data.m_Player.GetLiquidTendencyDrain();
	}
	
	override void OnStartServer( ActionData action_data )
	{
		super.OnStartServer(action_data);
		
		if (!g_Game.IsMultiplayer())
			TransferCustomLiquidActionData.Cast(action_data).m_Tendency = action_data.m_Player.GetLiquidTendencyDrain();
	}
	
	override ActionData CreateActionData()
	{
		TransferCustomLiquidActionData action_data = new TransferCustomLiquidActionData;
		return action_data;
	}
	
	override void WriteToContext(ParamsWriteContext ctx, ActionData action_data)
	{
		super.WriteToContext(ctx, action_data);
		
		ctx.Write(action_data.m_Player.GetLiquidTendencyDrain());
	}
	
	override bool ReadFromContext(ParamsReadContext ctx, out ActionReciveData action_recive_data )
	{
		if(!action_recive_data)
		{
			action_recive_data = new TransferCustomLiquidActionReciveData;
		}
		TransferCustomLiquidActionReciveData recive_data_transfer = TransferCustomLiquidActionReciveData.Cast(action_recive_data);
		
		super.ReadFromContext(ctx, action_recive_data);
		
		bool tendency_drain;
		if ( !ctx.Read(tendency_drain) )
			return false;
		recive_data_transfer.m_TendencyRecived = tendency_drain;
		return true;
	}
	
	override void HandleReciveData(ActionReciveData action_recive_data, ActionData action_data)
	{
		super.HandleReciveData(action_recive_data, action_data);
		
		TransferCustomLiquidActionReciveData recive_data_transfer = TransferCustomLiquidActionReciveData.Cast(action_recive_data);
		TransferCustomLiquidActionData.Cast(action_data).m_Tendency = recive_data_transfer.m_TendencyRecived;
	}
	
	override void OnStartAnimationLoop( ActionData action_data )
	{
		if ( !g_Game.IsMultiplayer() || g_Game.IsServer() )
		{
			Bottle_Base vessel_in_hands = Bottle_Base.Cast( action_data.m_Target.GetObject() );
			Param1<bool> play = new Param1<bool>( true );
			if (TransferCustomLiquidActionData.Cast(action_data))
			{
				if (TransferCustomLiquidActionData.Cast(action_data).m_Tendency == true)
					g_Game.RPCSingleParam( vessel_in_hands, SoundTypeBottle.EMPTYING, play, true );
				else if (!TransferCustomLiquidActionData.Cast(action_data).m_Tendency == false)
					g_Game.RPCSingleParam( vessel_in_hands, SoundTypeBottle.POURING, play, true );
			}
		}
	}
	
	override void OnEndAnimationLoop( ActionData action_data )
	{
		if ( !g_Game.IsMultiplayer() || g_Game.IsServer() )
		{
			Bottle_Base target_vessel = Bottle_Base.Cast( action_data.m_Target.GetObject());
			Param1<bool> play = new Param1<bool>( false );
			if (TransferCustomLiquidActionData.Cast(action_data).m_Tendency)
				g_Game.RPCSingleParam( target_vessel, SoundTypeBottle.EMPTYING, play, true );
			else
				g_Game.RPCSingleParam( target_vessel, SoundTypeBottle.POURING, play, true );
		}
	}
};
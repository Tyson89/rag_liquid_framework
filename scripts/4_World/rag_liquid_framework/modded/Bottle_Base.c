modded class Bottle_Base
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionTransferCustomLiquids);
	}
};
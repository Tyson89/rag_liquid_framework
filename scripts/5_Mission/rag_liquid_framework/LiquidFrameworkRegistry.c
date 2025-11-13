class LF_LiquidDetailsBase
{
    string GetName(ItemBase item)
    {
        return "";
    }
	
    int GetColor(ItemBase item)
    {
        return 0;
    }
};

class LF_SimpleLiquidDetails : LF_LiquidDetailsBase
{
    string m_name;
    int m_color;

    void LF_SimpleLiquidDetails(string name, int color)
    {
        m_name = name;
        m_color = color;
    }

    override string GetName(ItemBase item)
    {
        return m_name;
    }

    override int GetColor(ItemBase item)
    {
        return m_color;
    }
};

class LF_LiquidFrameworkRegistry
{
    ref map<int, ref LF_LiquidDetailsBase> m_liquids;
	
	protected static ref LF_LiquidFrameworkRegistry m_LiquidFrameworkRegistry;
	
	static LF_LiquidFrameworkRegistry GetLiquidFrameworkRegistry()
	{
	    if ( !m_LiquidFrameworkRegistry )
	    {
	        m_LiquidFrameworkRegistry = new LF_LiquidFrameworkRegistry();
	    }
	
	    return m_LiquidFrameworkRegistry;
	};

    void LF_LiquidFrameworkRegistry()
    {
		m_liquids = new map<int, ref LF_LiquidDetailsBase>;
		
        // Vanilla liquids
        RegisterLiquid(LIQUID_WATER, "#inv_inspect_water", RaG_LF_Colors.WATER);
        RegisterLiquid(LIQUID_RIVERWATER, "#inv_inspect_river_water", RaG_LF_Colors.RIVER_WATER);
        RegisterLiquid(LIQUID_VODKA, "#inv_inspect_vodka", RaG_LF_Colors.VODKA);
        RegisterLiquid(LIQUID_BEER, "#inv_inspect_beer", RaG_LF_Colors.BEER_AMBER);
        RegisterLiquid(LIQUID_GASOLINE, "#inv_inspect_gasoline", RaG_LF_Colors.GASOLINE);
        RegisterLiquid(LIQUID_DIESEL, "#inv_inspect_diesel", RaG_LF_Colors.DIESEL);
        RegisterLiquid(LIQUID_DISINFECTANT, "#inv_inspect_disinfectant", RaG_LF_Colors.DISINFECTANT);
        RegisterLiquid(LIQUID_SALINE, "#inv_inspect_saline", RaG_LF_Colors.SALINE);
        RegisterLiquid(LIQUID_SOLUTION, "#inv_inspect_solution", RaG_LF_Colors.SOLUTION);
		
		RegisterLiquid(LIQUID_SNOW, "SNOW", RaG_LF_Colors.SNOW);
		RegisterLiquid(LIQUID_SALTWATER, "#inv_inspect_water", RaG_LF_Colors.SALT_WATER);
		RegisterLiquid(LIQUID_FRESHWATER, "#inv_inspect_water", RaG_LF_Colors.WATER);
		RegisterLiquid(LIQUID_STILLWATER, "#inv_inspect_water", RaG_LF_Colors.WATER);
		RegisterLiquid(LIQUID_HOTWATER, "#inv_inspect_water", RaG_LF_Colors.HOT_WATER);
		RegisterLiquid(LIQUID_CLEANWATER, "#inv_inspect_water", RaG_LF_Colors.WATER);

        // Liquid framework introduced
        RegisterLiquid(RaG_LF_Liquids.LIQUID_MILK, "#STR_RAG_MILK", RaG_LF_Colors.MILK);
        RegisterLiquid(RaG_LF_Liquids.LIQUID_HONEY, "#STR_RAG_HONEY", RaG_LF_Colors.HONEY);
        RegisterLiquid(RaG_LF_Liquids.LIQUID_HONEYWINE, "#STR_RAG_HONEYWINE", RaG_LF_Colors.HONEYWINE);
        RegisterLiquid(RaG_LF_Liquids.LIQUID_WINE_RED, "#STR_RAG_REDWINE", RaG_LF_Colors.WINE_RED);
        RegisterLiquid(RaG_LF_Liquids.LIQUID_WINE_WHITE, "#STR_RAG_WHITEWINE", RaG_LF_Colors.WINE_WHITE);
        RegisterLiquid(RaG_LF_Liquids.LIQUID_AVGAS, "#STR_RAG_AVGAS", RaG_LF_Colors.AVGAS);
        RegisterLiquid(RaG_LF_Liquids.LIQUID_WHISKEY, "#STR_RAG_WHISKEY", RaG_LF_Colors.WHISKEY);
        RegisterLiquid(RaG_LF_Liquids.LIQUID_ESPRESSO, "#STR_RAG_ESPRESSO", RaG_LF_Colors.ESPRESSO);
        RegisterLiquid(RaG_LF_Liquids.LIQUID_COFFEE, "#STR_RAG_COFFEE", RaG_LF_Colors.COFFEE);
        RegisterLiquid(RaG_LF_Liquids.LIQUID_TEA, "#STR_RAG_TEA", RaG_LF_Colors.TEA);
        RegisterLiquid(RaG_LF_Liquids.LIQUID_MOTOROIL, "#STR_RAG_MOTOROIL", RaG_LF_Colors.MOTOR_OIL);
        RegisterLiquid(RaG_LF_Liquids.LIQUID_ENERGYDRINK, "#STR_RAG_ENERGYDRINK", RaG_LF_Colors.ENERGYDRINK);
        RegisterLiquid(RaG_LF_Liquids.LIQUID_VIRUS, "#STR_RAG_VIRUS", RaG_LF_Colors.VIRUS);
        RegisterLiquid(RaG_LF_Liquids.LIQUID_POISON, "#STR_RAG_POISON", RaG_LF_Colors.POISON);
        RegisterLiquid(RaG_LF_Liquids.LIQUID_MILKCOFFEE, "#STR_RAG_MILKCOFFEE", RaG_LF_Colors.MILKCOFFEE);
        RegisterLiquid(RaG_LF_Liquids.LIQUID_ANTIVENOM, "#STR_RAG_ANTIVENOM", RaG_LF_Colors.ANTIVENOM);
        RegisterLiquid(RaG_LF_Liquids.LIQUID_COOLANT, "#STR_RAG_COOLANT", RaG_LF_Colors.COOLANT_GREEN);
        RegisterLiquid(RaG_LF_Liquids.LIQUID_BRAKE_FLUID, "#STR_RAG_BRAKEFLUID", RaG_LF_Colors.BRAKE_FLUID);
        RegisterLiquid(RaG_LF_Liquids.LIQUID_HYDRAULIC_FLUID, "#STR_RAG_HYDRAULICFLUID", RaG_LF_Colors.HYDRAULIC_FLUID);
        RegisterLiquid(RaG_LF_Liquids.LIQUID_COOKING_OIL, "#STR_RAG_COOKINGOIL", RaG_LF_Colors.COOKING_OIL);
        RegisterLiquid(RaG_LF_Liquids.LIQUID_VINEGAR, "#STR_RAG_VINEGAR", RaG_LF_Colors.VINEGAR);
        RegisterLiquid(RaG_LF_Liquids.LIQUID_APPLE_JUICE, "#STR_RAG_APPLEJUICE", RaG_LF_Colors.APPLE_JUICE);
        RegisterLiquid(RaG_LF_Liquids.LIQUID_ORANGE_JUICE, "#STR_RAG_ORANGEJUICE", RaG_LF_Colors.ORANGE_JUICE);
		
		RegisterCustomLiquids();
    }
	
	void RegisterCustomLiquids()
	{
		// register custom liquids here. Don't forget to call super!
	}

    // Other custom liquids can be registered.
    void RegisterLiquid(int liquidType, string name, int color, bool override_existing = false)
    {
        auto existing = m_liquids.Get(liquidType);
		
        if ( existing && !override_existing )
        {
            return;
        }

        m_liquids.Set(liquidType, new LF_SimpleLiquidDetails(name, color));
    }

    // Other custom liquids can be registered.
    void RegisterLiquid(int liquidType, LF_LiquidDetailsBase liquidDetails, bool override_existing = false)
    {
        auto existing = m_liquids.Get(liquidType);
		
        if ( existing && !override_existing )
        {
            return;
        }

        m_liquids.Set(liquidType, liquidDetails);
    }

    LF_LiquidDetailsBase GetLiquid(int liquidType)
    {
        return m_liquids.Get(liquidType);
    }
};
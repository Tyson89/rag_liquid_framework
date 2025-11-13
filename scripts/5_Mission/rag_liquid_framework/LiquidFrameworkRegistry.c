class LiquidDetailsBase
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

class SimpleLiquidDetails : LiquidDetailsBase
{
    string m_name;
    int m_color;

    void SimpleLiquidDetails(string name, int color)
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

class LiquidFrameworkRegistry
{
    ref map<int, ref LiquidDetailsBase> m_liquids;

    void LiquidFrameworkRegistry()
    {
		m_liquids = new map<int, ref LiquidDetailsBase>;
		
        // Vanilla liquids
        RegisterLiquid(LIQUID_WATER, "#inv_inspect_water", RaG_Colors.WATER);
        RegisterLiquid(LIQUID_RIVERWATER, "#inv_inspect_river_water", RaG_Colors.RIVER_WATER);
        RegisterLiquid(LIQUID_VODKA, "#inv_inspect_vodka", RaG_Colors.VODKA);
        RegisterLiquid(LIQUID_BEER, "#inv_inspect_beer", RaG_Colors.BEER_AMBER);
        RegisterLiquid(LIQUID_GASOLINE, "#inv_inspect_gasoline", RaG_Colors.GASOLINE);
        RegisterLiquid(LIQUID_DIESEL, "#inv_inspect_diesel", RaG_Colors.DIESEL);
        RegisterLiquid(LIQUID_DISINFECTANT, "#inv_inspect_disinfectant", RaG_Colors.DISINFECTANT);
        RegisterLiquid(LIQUID_SALINE, "#inv_inspect_saline", RaG_Colors.SALINE);
        RegisterLiquid(LIQUID_SOLUTION, "#inv_inspect_solution", RaG_Colors.SOLUTION);
		
		RegisterLiquid(LIQUID_SNOW, "SNOW", RaG_Colors.SNOW);
		RegisterLiquid(LIQUID_SALTWATER, "#inv_inspect_water", RaG_Colors.SALT_WATER);
		RegisterLiquid(LIQUID_FRESHWATER, "#inv_inspect_water", RaG_Colors.WATER);
		RegisterLiquid(LIQUID_STILLWATER, "#inv_inspect_water", RaG_Colors.WATER);
		RegisterLiquid(LIQUID_HOTWATER, "#inv_inspect_water", RaG_Colors.HOT_WATER);
		RegisterLiquid(LIQUID_CLEANWATER, "#inv_inspect_water", RaG_Colors.WATER);

        // Liquid framework introduced
        RegisterLiquid(RaG_Liquids.LIQUID_MILK, "MILK", RaG_Colors.MILK);
        RegisterLiquid(RaG_Liquids.LIQUID_HONEY, "HONEY", RaG_Colors.HONEY);
        RegisterLiquid(RaG_Liquids.LIQUID_HONEYWINE, "HONEYWINE", RaG_Colors.HONEYWINE);
        RegisterLiquid(RaG_Liquids.LIQUID_WINE, "RED WINE", RaG_Colors.WINE_RED);
        RegisterLiquid(RaG_Liquids.LIQUID_RAGAVGAS, "AVIATION FUEL", RaG_Colors.AVGAS);
        RegisterLiquid(RaG_Liquids.LIQUID_WHISKEY, "WHISKEY", RaG_Colors.WHISKEY);
        RegisterLiquid(RaG_Liquids.LIQUID_ESPRESSO, "SPRESSO", RaG_Colors.ESPRESSO);
        RegisterLiquid(RaG_Liquids.LIQUID_COFFEE, "COFFEE", RaG_Colors.COFFEE);
        RegisterLiquid(RaG_Liquids.LIQUID_TEA, "TEA", RaG_Colors.TEA);
        RegisterLiquid(RaG_Liquids.LIQUID_ENGINEOIL, "MOTOR OIL", RaG_Colors.MOTOR_OIL);
        RegisterLiquid(RaG_Liquids.LIQUID_ENERGYDRINK, "ENERGYDRINK", RaG_Colors.ENERGYDRINK);
        RegisterLiquid(RaG_Liquids.LIQUID_VIRUS, "VIRUS", RaG_Colors.VIRUS);
        RegisterLiquid(RaG_Liquids.LIQUID_POISON, "POISON", RaG_Colors.POISON);
        RegisterLiquid(RaG_Liquids.LIQUID_MILKCOFFEE, "MILKCOFFEE", RaG_Colors.MILKCOFFEE);
        RegisterLiquid(RaG_Liquids.LIQUID_ANTIVENOM, "ANTIVENOM", RaG_Colors.ANTIVENOM);
		
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

        m_liquids.Set(liquidType, new SimpleLiquidDetails(name, color));
    }

    // Other custom liquids can be registered.
    void RegisterLiquid(int liquidType, LiquidDetailsBase liquidDetails, bool override_existing = false)
    {
        auto existing = m_liquids.Get(liquidType);
		
        if ( existing && !override_existing )
        {
            return;
        }

        m_liquids.Set(liquidType, liquidDetails);
    }

    LiquidDetailsBase GetLiquid(int liquidType)
    {
        return m_liquids.Get(liquidType);
    }
};

static ref LiquidFrameworkRegistry g_LiquidFrameworkRegistry;
static ref LiquidFrameworkRegistry GetLiquidFrameworkRegistry()
{
    if ( !g_LiquidFrameworkRegistry )
    {
        g_LiquidFrameworkRegistry = new LiquidFrameworkRegistry();
    }

    return g_LiquidFrameworkRegistry;
};
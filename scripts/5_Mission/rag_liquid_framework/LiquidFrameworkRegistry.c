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
        m_liquids = new ref map<int, ref LiquidDetailsBase>;
		
        // Vanilla liquids
        RegisterLiquid(LIQUID_WATER, "#inv_inspect_water", Colors.COLOR_LIQUID);
        RegisterLiquid(LIQUID_RIVERWATER, "#inv_inspect_river_water", Colors.COLOR_LIQUID);
        RegisterLiquid(LIQUID_VODKA, "#inv_inspect_vodka", Colors.GRAY);
        RegisterLiquid(LIQUID_BEER, "#inv_inspect_beer", Colors.YELLOW);
        RegisterLiquid(LIQUID_GASOLINE, "#inv_inspect_gasoline", Colors.COLOR_GASOLINE);
        RegisterLiquid(LIQUID_DIESEL, "#inv_inspect_diesel", Colors.COLOR_GASOLINE);
        RegisterLiquid(LIQUID_DISINFECTANT, "#inv_inspect_disinfectant", Colors.GRAY);
        RegisterLiquid(LIQUID_SALINE, "#inv_inspect_saline", Colors.COLOR_LIQUID);

        // Liquid framework introduced
        RegisterLiquid(LIQUID_MILK, "MILK", Colors.MILKLIQUID);
        RegisterLiquid(LIQUID_HONEY, "HONEY", Colors.HONEYLIQUID);
        RegisterLiquid(LIQUID_HONEYWINE, "HONEYWINE", Colors.HONEYWINELIQUID);
        RegisterLiquid(LIQUID_WINE, "WINE", Colors.WINELIQUID);
        RegisterLiquid(LIQUID_RAGAVGAS, "AVIATION FUEL", Colors.AVGASLIQUID);
        RegisterLiquid(LIQUID_WHISKEY, "WHISKEY", Colors.WHISKEYLIQUID);
        RegisterLiquid(LIQUID_ESPRESSO, "SPRESSO", Colors.ESPRESSOLIQUID);
        RegisterLiquid(LIQUID_COFFEE, "COFFEE", Colors.COFFEELIQUID);
        RegisterLiquid(LIQUID_TEA, "TEA", Colors.TEALIQUID);
        RegisterLiquid(LIQUID_ENGINEOIL, "ENGINEOIL", Colors.ENGINEOILLIQUID);
        RegisterLiquid(LIQUID_ENERGYDRINK, "ENERGYDRINK", Colors.ENERGYDRINKLIQUID);
        RegisterLiquid(LIQUID_VIRUS, "VIRUS", Colors.VIRUSLIQUID);
        RegisterLiquid(LIQUID_POISON, "POISON", Colors.POISONLIQUID);
        RegisterLiquid(LIQUID_MILKCOFFEE, "MILKCOFFEE", Colors.MILKCOFFEELIQUID);
        RegisterLiquid(LIQUID_ANTIVENOM, "ANTIVENOM", Colors.ANTIVENOMLIQUID);
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
        g_LiquidFrameworkRegistry = new ref LiquidFrameworkRegistry();
    }

    return g_LiquidFrameworkRegistry;
};
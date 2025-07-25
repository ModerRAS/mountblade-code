// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.DefaultItems
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem
{
  public class DefaultItems
  {
    private const float TradeGoodWeight = 10f;
    private const float HalfWeight = 5f;
    private const float IngotWeight = 0.5f;
    private const float TrashWeight = 1f;
    private const int IngotValue = 20;
    private const int TrashValue = 1;
    private ItemObject _itemGrain;
    private ItemObject _itemMeat;
    private ItemObject _itemHides;
    private ItemObject _itemTools;
    private ItemObject _itemIronOre;
    private ItemObject _itemHardwood;
    private ItemObject _itemCharcoal;
    private ItemObject _itemIronIngot1;
    private ItemObject _itemIronIngot2;
    private ItemObject _itemIronIngot3;
    private ItemObject _itemIronIngot4;
    private ItemObject _itemIronIngot5;
    private ItemObject _itemIronIngot6;
    private ItemObject _itemTrash;

    private static DefaultItems Instance => Campaign.Current.DefaultItems;

    public static ItemObject Grain => DefaultItems.Instance._itemGrain;

    public static ItemObject Meat => DefaultItems.Instance._itemMeat;

    public static ItemObject Hides => DefaultItems.Instance._itemHides;

    public static ItemObject Tools => DefaultItems.Instance._itemTools;

    public static ItemObject IronOre => DefaultItems.Instance._itemIronOre;

    public static ItemObject HardWood => DefaultItems.Instance._itemHardwood;

    public static ItemObject Charcoal => DefaultItems.Instance._itemCharcoal;

    public static ItemObject IronIngot1 => DefaultItems.Instance._itemIronIngot1;

    public static ItemObject IronIngot2 => DefaultItems.Instance._itemIronIngot2;

    public static ItemObject IronIngot3 => DefaultItems.Instance._itemIronIngot3;

    public static ItemObject IronIngot4 => DefaultItems.Instance._itemIronIngot4;

    public static ItemObject IronIngot5 => DefaultItems.Instance._itemIronIngot5;

    public static ItemObject IronIngot6 => DefaultItems.Instance._itemIronIngot6;

    public static ItemObject Trash => DefaultItems.Instance._itemTrash;

    public DefaultItems() => this.RegisterAll();

    private void RegisterAll()
    {
      this._itemGrain = this.Create("grain");
      this._itemMeat = this.Create("meat");
      this._itemHides = this.Create("hides");
      this._itemTools = this.Create("tools");
      this._itemIronOre = this.Create("iron");
      this._itemHardwood = this.Create("hardwood");
      this._itemCharcoal = this.Create("charcoal");
      this._itemIronIngot1 = this.Create("ironIngot1");
      this._itemIronIngot2 = this.Create("ironIngot2");
      this._itemIronIngot3 = this.Create("ironIngot3");
      this._itemIronIngot4 = this.Create("ironIngot4");
      this._itemIronIngot5 = this.Create("ironIngot5");
      this._itemIronIngot6 = this.Create("ironIngot6");
      this._itemTrash = this.Create("trash");
      this.InitializeAll();
    }

    private ItemObject Create(string stringId)
    {
      return Game.Current.ObjectManager.RegisterPresumedObject<ItemObject>(new ItemObject(stringId));
    }

    private void InitializeAll()
    {
      ItemObject.InitializeTradeGood(this._itemGrain, new TextObject("{=Itv3fgJm}Grain{@Plural}loads of grain{\\@}"), "merchandise_grain", DefaultItemCategories.Grain, 10, 10f, ItemObject.ItemTypeEnum.Goods, true);
      ItemObject.InitializeTradeGood(this._itemMeat, new TextObject("{=LmwhFv5p}Meat{@Plural}loads of meat{\\@}"), "merchandise_meat", DefaultItemCategories.Meat, 30, 10f, ItemObject.ItemTypeEnum.Goods, true);
      ItemObject.InitializeTradeGood(this._itemHides, new TextObject("{=4kvKQuXM}Hides{@Plural}loads of hide{\\@}"), "merchandise_hides_b", DefaultItemCategories.Hides, 50, 10f, ItemObject.ItemTypeEnum.Goods);
      ItemObject.InitializeTradeGood(this._itemTools, new TextObject("{=n3cjEB0X}Tools{@Plural}loads of tools{\\@}"), "bd_pickaxe_b", DefaultItemCategories.Tools, 200, 10f, ItemObject.ItemTypeEnum.Goods);
      ItemObject.InitializeTradeGood(this._itemIronOre, new TextObject("{=Kw6BkhIf}Iron Ore{@Plural}loads of iron ore{\\@}"), "iron_ore", DefaultItemCategories.Iron, 50, 10f, ItemObject.ItemTypeEnum.Goods);
      ItemObject.InitializeTradeGood(this._itemHardwood, new TextObject("{=ExjMoUiT}Hardwood{@Plural}hardwood logs{\\@}"), "hardwood", DefaultItemCategories.Wood, 25, 10f, ItemObject.ItemTypeEnum.Goods);
      ItemObject.InitializeTradeGood(this._itemCharcoal, new TextObject("{=iQadPYNe}Charcoal{@Plural}loads of charcoal{\\@}"), "charcoal", DefaultItemCategories.Wood, 50, 5f, ItemObject.ItemTypeEnum.Goods);
      ItemObject.InitializeTradeGood(this._itemIronIngot1, new TextObject("{=gOpodlt1}Crude Iron{@Plural}loads of crude iron{\\@}"), "crude_iron", DefaultItemCategories.Iron, 20, 0.5f, ItemObject.ItemTypeEnum.Goods);
      ItemObject.InitializeTradeGood(this._itemIronIngot2, new TextObject("{=7HvtT8bm}Wrought Iron{@Plural}loads of wrought iron{\\@}"), "wrought_iron", DefaultItemCategories.Iron, 30, 0.5f, ItemObject.ItemTypeEnum.Goods);
      ItemObject.InitializeTradeGood(this._itemIronIngot3, new TextObject("{=XHmmbnbB}Iron{@Plural}loads of iron{\\@}"), "iron_a", DefaultItemCategories.Iron, 60, 0.5f, ItemObject.ItemTypeEnum.Goods);
      ItemObject.InitializeTradeGood(this._itemIronIngot4, new TextObject("{=UfuLKuaI}Steel{@Plural}loads of steel{\\@}"), "steel", DefaultItemCategories.Iron, 100, 0.5f, ItemObject.ItemTypeEnum.Goods);
      ItemObject.InitializeTradeGood(this._itemIronIngot5, new TextObject("{=azjMBa86}Fine Steel{@Plural}loads of fine steel{\\@}"), "fine_steel", DefaultItemCategories.Iron, 160, 0.5f, ItemObject.ItemTypeEnum.Goods);
      ItemObject.InitializeTradeGood(this._itemIronIngot6, new TextObject("{=vLVAfcta}Thamaskene Steel{@Plural}loads of thamaskene steel{\\@}"), "thamaskene_steel", DefaultItemCategories.Iron, 260, 0.5f, ItemObject.ItemTypeEnum.Goods);
      ItemObject.InitializeTradeGood(this._itemTrash, new TextObject("{=ZvZN6UkU}Trash Item"), "iron_ore", DefaultItemCategories.Unassigned, 1, 1f, ItemObject.ItemTypeEnum.Goods);
    }
  }
}

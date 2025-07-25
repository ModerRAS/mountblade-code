// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Settlements.DefaultVillageTypes
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.Settlements
{
  public class DefaultVillageTypes
  {
    private static DefaultVillageTypes Instance => Campaign.Current.DefaultVillageTypes;

    public IList<ItemObject> ConsumableRawItems { get; private set; }

    public static VillageType EuropeHorseRanch
    {
      get => DefaultVillageTypes.Instance.VillageTypeEuropeHorseRanch;
    }

    public static VillageType BattanianHorseRanch
    {
      get => DefaultVillageTypes.Instance.VillageTypeBattanianHorseRanch;
    }

    public static VillageType SturgianHorseRanch
    {
      get => DefaultVillageTypes.Instance.VillageTypeSturgianHorseRanch;
    }

    public static VillageType VlandianHorseRanch
    {
      get => DefaultVillageTypes.Instance.VillageTypeVlandianHorseRanch;
    }

    public static VillageType SteppeHorseRanch
    {
      get => DefaultVillageTypes.Instance.VillageTypeSteppeHorseRanch;
    }

    public static VillageType DesertHorseRanch
    {
      get => DefaultVillageTypes.Instance.VillageTypeDesertHorseRanch;
    }

    public static VillageType WheatFarm => DefaultVillageTypes.Instance.VillageTypeWheatFarm;

    public static VillageType Lumberjack => DefaultVillageTypes.Instance.VillageTypeLumberjack;

    public static VillageType ClayMine => DefaultVillageTypes.Instance.VillageTypeClayMine;

    public static VillageType SaltMine => DefaultVillageTypes.Instance.VillageTypeSaltMine;

    public static VillageType IronMine => DefaultVillageTypes.Instance.VillageTypeIronMine;

    public static VillageType Fisherman => DefaultVillageTypes.Instance.VillageTypeFisherman;

    public static VillageType CattleRange => DefaultVillageTypes.Instance.VillageTypeCattleRange;

    public static VillageType SheepFarm => DefaultVillageTypes.Instance.VillageTypeSheepFarm;

    public static VillageType HogFarm => DefaultVillageTypes.Instance.VillageTypeHogFarm;

    public static VillageType VineYard => DefaultVillageTypes.Instance.VillageTypeVineYard;

    public static VillageType FlaxPlant => DefaultVillageTypes.Instance.VillageTypeFlaxPlant;

    public static VillageType DateFarm => DefaultVillageTypes.Instance.VillageTypeDateFarm;

    public static VillageType OliveTrees => DefaultVillageTypes.Instance.VillageTypeOliveTrees;

    public static VillageType SilkPlant => DefaultVillageTypes.Instance.VillageTypeSilkPlant;

    public static VillageType SilverMine => DefaultVillageTypes.Instance.VillageTypeSilverMine;

    internal VillageType VillageTypeEuropeHorseRanch { get; private set; }

    internal VillageType VillageTypeBattanianHorseRanch { get; private set; }

    internal VillageType VillageTypeSturgianHorseRanch { get; private set; }

    internal VillageType VillageTypeVlandianHorseRanch { get; private set; }

    internal VillageType VillageTypeSteppeHorseRanch { get; private set; }

    internal VillageType VillageTypeDesertHorseRanch { get; private set; }

    internal VillageType VillageTypeWheatFarm { get; private set; }

    internal VillageType VillageTypeLumberjack { get; private set; }

    internal VillageType VillageTypeClayMine { get; private set; }

    internal VillageType VillageTypeSaltMine { get; private set; }

    internal VillageType VillageTypeIronMine { get; private set; }

    internal VillageType VillageTypeFisherman { get; private set; }

    internal VillageType VillageTypeCattleRange { get; private set; }

    internal VillageType VillageTypeSheepFarm { get; private set; }

    internal VillageType VillageTypeHogFarm { get; private set; }

    internal VillageType VillageTypeTrapper { get; private set; }

    internal VillageType VillageTypeVineYard { get; private set; }

    internal VillageType VillageTypeFlaxPlant { get; private set; }

    internal VillageType VillageTypeDateFarm { get; private set; }

    internal VillageType VillageTypeOliveTrees { get; private set; }

    internal VillageType VillageTypeSilkPlant { get; private set; }

    internal VillageType VillageTypeSilverMine { get; private set; }

    public DefaultVillageTypes()
    {
      this.ConsumableRawItems = (IList<ItemObject>) new List<ItemObject>();
      this.RegisterAll();
      this.AddProductions();
    }

    private void RegisterAll()
    {
      this.VillageTypeWheatFarm = this.Create("wheat_farm");
      this.VillageTypeEuropeHorseRanch = this.Create("europe_horse_ranch");
      this.VillageTypeSteppeHorseRanch = this.Create("steppe_horse_ranch");
      this.VillageTypeDesertHorseRanch = this.Create("desert_horse_ranch");
      this.VillageTypeBattanianHorseRanch = this.Create("battanian_horse_ranch");
      this.VillageTypeSturgianHorseRanch = this.Create("sturgian_horse_ranch");
      this.VillageTypeVlandianHorseRanch = this.Create("vlandian_horse_ranch");
      this.VillageTypeLumberjack = this.Create("lumberjack");
      this.VillageTypeClayMine = this.Create("clay_mine");
      this.VillageTypeSaltMine = this.Create("salt_mine");
      this.VillageTypeIronMine = this.Create("iron_mine");
      this.VillageTypeFisherman = this.Create("fisherman");
      this.VillageTypeCattleRange = this.Create("cattle_farm");
      this.VillageTypeSheepFarm = this.Create("sheep_farm");
      this.VillageTypeHogFarm = this.Create("swine_farm");
      this.VillageTypeVineYard = this.Create("vineyard");
      this.VillageTypeFlaxPlant = this.Create("flax_plant");
      this.VillageTypeDateFarm = this.Create("date_farm");
      this.VillageTypeOliveTrees = this.Create("olive_trees");
      this.VillageTypeSilkPlant = this.Create("silk_plant");
      this.VillageTypeSilverMine = this.Create("silver_mine");
      this.VillageTypeTrapper = this.Create("trapper");
      this.InitializeAll();
    }

    private VillageType Create(string stringId)
    {
      return Game.Current.ObjectManager.RegisterPresumedObject<VillageType>(new VillageType(stringId));
    }

    private void InitializeAll()
    {
      this.VillageTypeWheatFarm.Initialize(new TextObject("{=BPPG2XF7}Wheat Farm"), "wheat_farm", "wheat_farm_ucon", "wheat_farm_burned", new (ItemObject, float)[1]
      {
        (DefaultItems.Grain, 50f)
      });
      this.VillageTypeEuropeHorseRanch.Initialize(new TextObject("{=eEh752CZ}Horse Farm"), "europe_horse_ranch", "ranch_ucon", "europe_horse_ranch_burned", new (ItemObject, float)[1]
      {
        (DefaultItems.Grain, 3f)
      });
      this.VillageTypeSteppeHorseRanch.Initialize(new TextObject("{=eEh752CZ}Horse Farm"), "steppe_horse_ranch", "ranch_ucon", "steppe_horse_ranch_burned", new (ItemObject, float)[1]
      {
        (DefaultItems.Grain, 3f)
      });
      this.VillageTypeDesertHorseRanch.Initialize(new TextObject("{=eEh752CZ}Horse Farm"), "desert_horse_ranch", "ranch_ucon", "desert_horse_ranch_burned", new (ItemObject, float)[1]
      {
        (DefaultItems.Grain, 3f)
      });
      this.VillageTypeBattanianHorseRanch.Initialize(new TextObject("{=eEh752CZ}Horse Farm"), "battanian_horse_ranch", "ranch_ucon", "desert_horse_ranch_burned", new (ItemObject, float)[1]
      {
        (DefaultItems.Grain, 3f)
      });
      this.VillageTypeSturgianHorseRanch.Initialize(new TextObject("{=eEh752CZ}Horse Farm"), "sturgian_horse_ranch", "ranch_ucon", "desert_horse_ranch_burned", new (ItemObject, float)[1]
      {
        (DefaultItems.Grain, 3f)
      });
      this.VillageTypeVlandianHorseRanch.Initialize(new TextObject("{=eEh752CZ}Horse Farm"), "vlandian_horse_ranch", "ranch_ucon", "desert_horse_ranch_burned", new (ItemObject, float)[1]
      {
        (DefaultItems.Grain, 3f)
      });
      this.VillageTypeLumberjack.Initialize(new TextObject("{=YYl1W2jU}Forester"), "lumberjack", "lumberjack_ucon", "lumberjack_burned", new (ItemObject, float)[1]
      {
        (DefaultItems.Grain, 3f)
      });
      this.VillageTypeClayMine.Initialize(new TextObject("{=myuzMhOn}Clay Pits"), "clay_mine", "clay_mine_ucon", "clay_mine_burned", new (ItemObject, float)[1]
      {
        (DefaultItems.Grain, 3f)
      });
      this.VillageTypeSaltMine.Initialize(new TextObject("{=3aOIY6wl}Salt Mine"), "salt_mine", "salt_mine_ucon", "salt_mine_burned", new (ItemObject, float)[1]
      {
        (DefaultItems.Grain, 3f)
      });
      this.VillageTypeIronMine.Initialize(new TextObject("{=rHcVKSbA}Iron Mine"), "iron_mine", "iron_mine_ucon", "iron_mine_burned", new (ItemObject, float)[1]
      {
        (DefaultItems.Grain, 3f)
      });
      this.VillageTypeFisherman.Initialize(new TextObject("{=XpREJNHD}Fishers"), "fisherman", "fisherman_ucon", "fisherman_burned", new (ItemObject, float)[1]
      {
        (DefaultItems.Grain, 3f)
      });
      this.VillageTypeCattleRange.Initialize(new TextObject("{=bW3csuSZ}Cattle Farms"), "cattle_farm", "ranch_ucon", "cattle_farm_burned", new (ItemObject, float)[1]
      {
        (DefaultItems.Grain, 3f)
      });
      this.VillageTypeSheepFarm.Initialize(new TextObject("{=QbKbGu2h}Sheep Farms"), "sheep_farm", "ranch_ucon", "sheep_farm_burned", new (ItemObject, float)[1]
      {
        (DefaultItems.Grain, 3f)
      });
      this.VillageTypeHogFarm.Initialize(new TextObject("{=vqSHB7mJ}Swine Farm"), "swine_farm", "swine_farm_ucon", "swine_farm_burned", new (ItemObject, float)[1]
      {
        (DefaultItems.Grain, 3f)
      });
      this.VillageTypeVineYard.Initialize(new TextObject("{=ZtxWTS9V}Vineyard"), "vineyard", "vineyard_ucon", "vineyard_burned", new (ItemObject, float)[1]
      {
        (DefaultItems.Grain, 3f)
      });
      this.VillageTypeFlaxPlant.Initialize(new TextObject("{=Z8ntYx0Y}Flax Field"), "flax_plant", "flax_plant_ucon", "flax_plant_burned", new (ItemObject, float)[1]
      {
        (DefaultItems.Grain, 3f)
      });
      this.VillageTypeDateFarm.Initialize(new TextObject("{=2NR2E663}Palm Orchard"), "date_farm", "date_farm_ucon", "date_farm_burned", new (ItemObject, float)[1]
      {
        (DefaultItems.Grain, 3f)
      });
      this.VillageTypeOliveTrees.Initialize(new TextObject("{=ewrkbwI9}Olive Trees"), "date_farm", "date_farm_ucon", "date_farm_burned", new (ItemObject, float)[1]
      {
        (DefaultItems.Grain, 3f)
      });
      this.VillageTypeSilkPlant.Initialize(new TextObject("{=wTyq7LaM}Silkworm Farm"), "silk_plant", "silk_plant_ucon", "silk_plant_burned", new (ItemObject, float)[1]
      {
        (DefaultItems.Grain, 3f)
      });
      this.VillageTypeSilverMine.Initialize(new TextObject("{=aJLQz9iZ}Silver Mine"), "silver_mine", "silver_mine_ucon", "silver_mine_burned", new (ItemObject, float)[1]
      {
        (DefaultItems.Grain, 3f)
      });
      this.VillageTypeTrapper.Initialize(new TextObject("{=RREyouKr}Trapper"), "trapper", "trapper_ucon", "trapper_burned", new (ItemObject, float)[1]
      {
        (DefaultItems.Grain, 3f)
      });
    }

    private void AddProductions()
    {
      this.AddProductions(this.VillageTypeWheatFarm, new (string, float)[3]
      {
        ("cow", 0.2f),
        ("sheep", 0.4f),
        ("hog", 0.8f)
      });
      this.AddProductions(this.VillageTypeEuropeHorseRanch, new (string, float)[9]
      {
        ("empire_horse", 2.1f),
        ("t2_empire_horse", 0.5f),
        ("t3_empire_horse", 0.07f),
        ("sumpter_horse", 0.5f),
        ("mule", 0.5f),
        ("saddle_horse", 0.5f),
        ("old_horse", 0.5f),
        ("hunter", 0.2f),
        ("charger", 0.2f)
      });
      this.AddProductions(this.VillageTypeSturgianHorseRanch, new (string, float)[9]
      {
        ("sturgia_horse", 2.5f),
        ("t2_sturgia_horse", 0.7f),
        ("t3_sturgia_horse", 0.1f),
        ("sumpter_horse", 0.5f),
        ("mule", 0.5f),
        ("saddle_horse", 0.5f),
        ("old_horse", 0.5f),
        ("hunter", 0.2f),
        ("charger", 0.2f)
      });
      this.AddProductions(this.VillageTypeVlandianHorseRanch, new (string, float)[9]
      {
        ("vlandia_horse", 2.1f),
        ("t2_vlandia_horse", 0.4f),
        ("t3_vlandia_horse", 0.08f),
        ("sumpter_horse", 0.5f),
        ("mule", 0.5f),
        ("saddle_horse", 0.5f),
        ("old_horse", 0.5f),
        ("hunter", 0.2f),
        ("charger", 0.2f)
      });
      this.AddProductions(this.VillageTypeBattanianHorseRanch, new (string, float)[9]
      {
        ("battania_horse", 2.3f),
        ("t2_battania_horse", 0.7f),
        ("t3_battania_horse", 0.09f),
        ("sumpter_horse", 0.5f),
        ("mule", 0.5f),
        ("saddle_horse", 0.5f),
        ("old_horse", 0.5f),
        ("hunter", 0.2f),
        ("charger", 0.2f)
      });
      this.AddProductions(this.VillageTypeSteppeHorseRanch, new (string, float)[5]
      {
        ("khuzait_horse", 1.8f),
        ("t2_khuzait_horse", 0.4f),
        ("t3_khuzait_horse", 0.05f),
        ("sumpter_horse", 0.5f),
        ("mule", 0.5f)
      });
      this.AddProductions(this.VillageTypeDesertHorseRanch, new (string, float)[8]
      {
        ("aserai_horse", 1.7f),
        ("t2_aserai_horse", 0.3f),
        ("t3_aserai_horse", 0.05f),
        ("camel", 0.3f),
        ("war_camel", 0.08f),
        ("pack_camel", 0.3f),
        ("sumpter_horse", 0.4f),
        ("mule", 0.5f)
      });
      this.AddProductions(this.VillageTypeCattleRange, new (string, float)[3]
      {
        ("cow", 2f),
        ("butter", 4f),
        ("cheese", 4f)
      });
      this.AddProductions(this.VillageTypeSheepFarm, new (string, float)[4]
      {
        ("sheep", 4f),
        ("wool", 6f),
        ("butter", 2f),
        ("cheese", 2f)
      });
      this.AddProductions(this.VillageTypeHogFarm, new (string, float)[3]
      {
        ("hog", 8f),
        ("butter", 2f),
        ("cheese", 2f)
      });
      this.AddProductions(this.VillageTypeLumberjack, new (string, float)[1]
      {
        ("hardwood", 18f)
      });
      this.AddProductions(this.VillageTypeClayMine, new (string, float)[1]
      {
        ("clay", 10f)
      });
      this.AddProductions(this.VillageTypeSaltMine, new (string, float)[1]
      {
        ("salt", 15f)
      });
      this.AddProductions(this.VillageTypeIronMine, new (string, float)[1]
      {
        ("iron", 10f)
      });
      this.AddProductions(this.VillageTypeFisherman, new (string, float)[1]
      {
        ("fish", 28f)
      });
      this.AddProductions(this.VillageTypeVineYard, new (string, float)[1]
      {
        ("grape", 11f)
      });
      this.AddProductions(this.VillageTypeFlaxPlant, new (string, float)[1]
      {
        ("flax", 18f)
      });
      this.AddProductions(this.VillageTypeDateFarm, new (string, float)[1]
      {
        ("date_fruit", 8f)
      });
      this.AddProductions(this.VillageTypeOliveTrees, new (string, float)[1]
      {
        ("olives", 12f)
      });
      this.AddProductions(this.VillageTypeSilkPlant, new (string, float)[1]
      {
        ("cotton", 8f)
      });
      this.AddProductions(this.VillageTypeSilverMine, new (string, float)[1]
      {
        ("silver", 3f)
      });
      this.AddProductions(this.VillageTypeTrapper, new (string, float)[1]
      {
        ("fur", 1.4f)
      });
      this.ConsumableRawItems.Add(Game.Current.ObjectManager.GetObject<ItemObject>("grain"));
      this.ConsumableRawItems.Add(Game.Current.ObjectManager.GetObject<ItemObject>("cheese"));
      this.ConsumableRawItems.Add(Game.Current.ObjectManager.GetObject<ItemObject>("butter"));
    }

    private void AddProductions(VillageType villageType, (string, float)[] productions)
    {
      villageType.AddProductions(((IEnumerable<(string, float)>) productions).Select<(string, float), (ItemObject, float)>((Func<(string, float), (ItemObject, float)>) (p => (Game.Current.ObjectManager.GetObject<ItemObject>(p.Item1), p.Item2))));
    }
  }
}

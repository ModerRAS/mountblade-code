// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.TradeCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class TradeCampaignBehavior : CampaignBehaviorBase
  {
    private Dictionary<ItemCategory, float> _numberOfTotalItemsAtGameWorld;
    public const float MaximumTaxRatioForVillages = 1f;
    public const float MaximumTaxRatioForTowns = 0.5f;

    public void OnNewGameCreated(CampaignGameStarter campaignGameStarter)
    {
      this.InitializeMarkets();
    }

    public override void RegisterEvents()
    {
      CampaignEvents.DailyTickTownEvent.AddNonSerializedListener((object) this, new Action<Town>(this.DailyTickTown));
      CampaignEvents.OnNewGameCreatedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnNewGameCreated));
      CampaignEvents.OnNewGameCreatedPartialFollowUpEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter, int>(this.OnNewGameCreatedPartialFollowUp));
      CampaignEvents.OnSessionLaunchedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnSessionLaunched));
    }

    private void OnNewGameCreatedPartialFollowUp(CampaignGameStarter campaignGameStarter, int i)
    {
      if (i == 2)
        this.InitializeTrade();
      if (i % 10 != 0)
        return;
      foreach (Settlement settlement in (List<Settlement>) Settlement.All)
      {
        if (settlement.IsTown)
          this.UpdateMarketStores(settlement.Town);
      }
    }

    private void OnSessionLaunched(CampaignGameStarter campaignGameStarter)
    {
      foreach (Town allTown in (List<Town>) Town.AllTowns)
        this.UpdateMarketStores(allTown);
    }

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<Dictionary<ItemCategory, float>>("_numberOfTotalItemsAtGameWorld", ref this._numberOfTotalItemsAtGameWorld);
    }

    private void InitializeTrade()
    {
      this._numberOfTotalItemsAtGameWorld = new Dictionary<ItemCategory, float>();
      Campaign.Current.Settlements.Where<Settlement>((Func<Settlement, bool>) (settlement => settlement.IsTown)).ToList<Settlement>();
      foreach (Hero allAliveHero in (List<Hero>) Hero.AllAliveHeroes)
      {
        if (allAliveHero.CharacterObject.Occupation == Occupation.Lord && allAliveHero.Clan != Clan.PlayerClan)
        {
          int amount = allAliveHero.Clan?.Leader != allAliveHero ? 10000 : 50000 + 10000 * allAliveHero.Clan.Tier + (allAliveHero == allAliveHero.MapFaction.Leader ? 50000 : 0);
          GiveGoldAction.ApplyBetweenCharacters((Hero) null, allAliveHero, amount);
        }
      }
    }

    public void DailyTickTown(Town town) => this.UpdateMarketStores(town);

    private void UpdateMarketStores(Town town) => town.MarketData.UpdateStores();

    private void InitializeMarkets()
    {
      foreach (Town allTown in (List<Town>) Town.AllTowns)
      {
        foreach (ItemCategory itemCategory in (List<ItemCategory>) ItemCategories.All)
        {
          if (itemCategory.IsValid)
          {
            allTown.MarketData.AddDemand(itemCategory, 3f);
            allTown.MarketData.AddSupply(itemCategory, 2f);
          }
        }
      }
    }

    public enum TradeGoodType
    {
      Grain,
      Wood,
      Meat,
      Wool,
      Cheese,
      Iron,
      Salt,
      Spice,
      Raw_Silk,
      Fish,
      Flax,
      Grape,
      Hides,
      Clay,
      Date_Fruit,
      Bread,
      Beer,
      Wine,
      Tools,
      Pottery,
      Cloth,
      Linen,
      Leather,
      Velvet,
      Saddle_Horse,
      Steppe_Horse,
      Hunter,
      Desert_Horse,
      Charger,
      War_Horse,
      Steppe_Charger,
      Desert_War_Horse,
      Unknown,
      NumberOfTradeItems,
    }
  }
}

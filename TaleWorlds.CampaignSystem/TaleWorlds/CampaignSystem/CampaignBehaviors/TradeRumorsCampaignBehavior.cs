// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.TradeRumorsCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Workshops;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class TradeRumorsCampaignBehavior : 
    CampaignBehaviorBase,
    ITradeRumorCampaignBehavior,
    ICampaignBehavior
  {
    private List<TradeRumor> _tradeRumors = new List<TradeRumor>();
    private Dictionary<Settlement, CampaignTime> _enteredSettlements = new Dictionary<Settlement, CampaignTime>();

    public IEnumerable<TradeRumor> TradeRumors
    {
      get
      {
        foreach (TradeRumor tradeRumor in this._tradeRumors)
        {
          if (!tradeRumor.IsExpired())
            yield return tradeRumor;
        }
      }
    }

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<Dictionary<Settlement, CampaignTime>>("_enteredSettlements", ref this._enteredSettlements);
      dataStore.SyncData<List<TradeRumor>>("_tradeRumors", ref this._tradeRumors);
    }

    public override void RegisterEvents()
    {
      CampaignEvents.SettlementEntered.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement, Hero>(this.OnSettlementEntered));
      CampaignEvents.DailyTickEvent.AddNonSerializedListener((object) this, new Action(this.DailyTick));
      CampaignEvents.OnNewGameCreatedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnNewGameCreated));
      CampaignEvents.OnTradeRumorIsTakenEvent.AddNonSerializedListener((object) this, new Action<List<TradeRumor>, Settlement>(this.OnTradeRumorIsTaken));
    }

    public void OnTradeRumorIsTaken(List<TradeRumor> newRumors, Settlement sourceSettlement = null)
    {
      this.AddTradeRumors(newRumors, sourceSettlement);
    }

    public void AddTradeRumors(List<TradeRumor> newRumors, Settlement sourceSettlement = null)
    {
      bool flag = true;
      foreach (TradeRumor newRumor in newRumors)
      {
        foreach (TradeRumor tradeRumor in this.TradeRumors)
        {
          if (tradeRumor.Settlement == newRumor.Settlement && tradeRumor.ItemCategory == newRumor.ItemCategory)
            flag = false;
        }
        if (flag)
          this._tradeRumors.Add(newRumor);
      }
    }

    private void OnNewGameCreated(CampaignGameStarter starter)
    {
    }

    public void DailyTick()
    {
      this.AddDailyTradeRumors(1);
      this.DeleteExpiredRumors();
      this.DeleteExpiredEnteredSettlements();
    }

    private void DeleteExpiredEnteredSettlements()
    {
      List<Settlement> settlementList = new List<Settlement>();
      foreach (KeyValuePair<Settlement, CampaignTime> enteredSettlement in this._enteredSettlements)
      {
        if (CampaignTime.Now - enteredSettlement.Value >= CampaignTime.Days(1f))
          settlementList.Add(enteredSettlement.Key);
      }
      foreach (Settlement key in settlementList)
        this._enteredSettlements.Remove(key);
    }

    public void OnSettlementEntered(MobileParty mobileParty, Settlement settlement, Hero hero)
    {
      if ((mobileParty == null ? 0 : (mobileParty.IsMainParty ? 1 : (!mobileParty.IsCaravan || mobileParty.Party.Owner == null || mobileParty.Party.Owner.Clan != Clan.PlayerClan ? 0 : (Hero.MainHero.GetPerkValue(DefaultPerks.Trade.TravelingRumors) ? 1 : 0)))) == 0 || !settlement.IsTown || settlement.Town?.MarketData == null || this._enteredSettlements.ContainsKey(settlement) && (!this._enteredSettlements.ContainsKey(settlement) || !(CampaignTime.Now - this._enteredSettlements[settlement] >= CampaignTime.Days(1f))))
        return;
      List<TradeRumor> tradeRumorList = new List<TradeRumor>();
      foreach (TradeRumor tradeRumor in this._tradeRumors.Where<TradeRumor>((Func<TradeRumor, bool>) (x => x.Settlement == settlement)))
        tradeRumorList.Add(tradeRumor);
      foreach (TradeRumor tradeRumor in tradeRumorList)
        this._tradeRumors.Remove(tradeRumor);
      List<TradeRumor> newRumors = new List<TradeRumor>();
      foreach (ItemObject allTradeGood in Items.AllTradeGoods)
        newRumors.Add(new TradeRumor(settlement, allTradeGood, settlement.Town.GetItemPrice(allTradeGood, (MobileParty) null, false), settlement.Town.GetItemPrice(allTradeGood, (MobileParty) null, true), 10));
      this.AddTradeRumors(newRumors, settlement);
      if (!this._enteredSettlements.ContainsKey(settlement))
        this._enteredSettlements.Add(settlement, CampaignTime.Now);
      else
        this._enteredSettlements[settlement] = CampaignTime.Now;
    }

    public void DeleteExpiredRumors()
    {
      List<TradeRumor> tradeRumorList = new List<TradeRumor>();
      foreach (TradeRumor tradeRumor in this._tradeRumors.Where<TradeRumor>((Func<TradeRumor, bool>) (x => x.IsExpired())))
        tradeRumorList.Add(tradeRumor);
      foreach (TradeRumor tradeRumor in tradeRumorList)
        this._tradeRumors.Remove(tradeRumor);
    }

    public void AddDailyTradeRumors(int numberOfTradeRumors)
    {
      int maxValue = 0;
      foreach (ItemObject itemObject in (List<ItemObject>) Items.All)
      {
        if (itemObject.Type == ItemObject.ItemTypeEnum.Goods || itemObject.Type == ItemObject.ItemTypeEnum.Horse)
          ++maxValue;
      }
      int count = Campaign.Current.AllTowns.Count;
      List<TradeRumor> newRumors = new List<TradeRumor>();
      for (int index = 0; index < numberOfTradeRumors; ++index)
      {
        int num1 = MBRandom.RandomInt(count);
        int num2 = MBRandom.RandomInt(maxValue);
        foreach (Town allTown in (List<Town>) Campaign.Current.AllTowns)
        {
          --num1;
          if (num1 < 0)
          {
            using (List<ItemObject>.Enumerator enumerator = Items.All.GetEnumerator())
            {
              while (enumerator.MoveNext())
              {
                ItemObject current = enumerator.Current;
                if (current.Type == ItemObject.ItemTypeEnum.Goods || current.Type == ItemObject.ItemTypeEnum.Horse)
                {
                  --num2;
                  if (num2 < 0)
                  {
                    newRumors.Add(new TradeRumor(allTown.Settlement, current, allTown.GetItemPrice(current, (MobileParty) null, false), allTown.GetItemPrice(current, (MobileParty) null, true), 10 + MBRandom.RandomInt(10)));
                    break;
                  }
                }
              }
              break;
            }
          }
        }
        if (Hero.MainHero.GetPerkValue(DefaultPerks.Trade.Tollgates))
        {
          foreach (Workshop ownedWorkshop in (List<Workshop>) Hero.MainHero.OwnedWorkshops)
          {
            foreach (ItemObject allTradeGood in Items.AllTradeGoods)
              newRumors.Add(new TradeRumor(ownedWorkshop.Settlement, allTradeGood, ownedWorkshop.Settlement.Town.GetItemPrice(allTradeGood, (MobileParty) null, false), ownedWorkshop.Settlement.Town.GetItemPrice(allTradeGood, (MobileParty) null, true), 10));
          }
        }
      }
      this.AddTradeRumors(newRumors);
    }
  }
}

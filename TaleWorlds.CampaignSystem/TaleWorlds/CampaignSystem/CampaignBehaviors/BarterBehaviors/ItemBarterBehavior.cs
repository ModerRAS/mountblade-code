// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.BarterBehaviors.ItemBarterBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.BarterSystem;
using TaleWorlds.CampaignSystem.BarterSystem.Barterables;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors.BarterBehaviors
{
  public class ItemBarterBehavior : CampaignBehaviorBase
  {
    private const int ItemValueThreshold = 100;
    private ItemBarterBehavior.SettlementDistanceCache _distanceCache = new ItemBarterBehavior.SettlementDistanceCache();

    public override void RegisterEvents()
    {
      CampaignEvents.BarterablesRequested.AddNonSerializedListener((object) this, new Action<BarterData>(this.CheckForBarters));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    public void CheckForBarters(BarterData args)
    {
      List<Settlement> closestSettlements = this._distanceCache.GetClosestSettlements(args.OffererHero == null ? (args.OffererParty == null ? args.OtherHero.GetPosition().AsVec2 : args.OffererParty.MobileParty.GetPosition().AsVec2) : args.OffererHero.GetPosition().AsVec2);
      if (args.OffererParty == null || args.OtherParty == null)
        return;
      for (int index = 0; index < args.OffererParty.ItemRoster.Count; ++index)
      {
        ItemRosterElement elementCopyAtIndex = args.OffererParty.ItemRoster.GetElementCopyAtIndex(index);
        if (elementCopyAtIndex.Amount > 0 && elementCopyAtIndex.EquipmentElement.GetBaseValue() > 100)
        {
          int nearbySettlements = this.CalculateAverageItemValueInNearbySettlements(elementCopyAtIndex.EquipmentElement, args.OffererParty, closestSettlements);
          Barterable barterable = (Barterable) new ItemBarterable(args.OffererHero, args.OtherHero, args.OffererParty, args.OtherParty, elementCopyAtIndex, nearbySettlements);
          args.AddBarterable<ItemBarterGroup>(barterable);
        }
      }
      for (int index = 0; index < args.OtherParty.ItemRoster.Count; ++index)
      {
        ItemRosterElement elementCopyAtIndex = args.OtherParty.ItemRoster.GetElementCopyAtIndex(index);
        if (elementCopyAtIndex.Amount > 0 && elementCopyAtIndex.EquipmentElement.GetBaseValue() > 100)
        {
          int nearbySettlements = this.CalculateAverageItemValueInNearbySettlements(elementCopyAtIndex.EquipmentElement, args.OtherParty, closestSettlements);
          Barterable barterable = (Barterable) new ItemBarterable(args.OtherHero, args.OffererHero, args.OtherParty, args.OffererParty, elementCopyAtIndex, nearbySettlements);
          args.AddBarterable<ItemBarterGroup>(barterable);
        }
      }
    }

    private int CalculateAverageItemValueInNearbySettlements(
      EquipmentElement itemRosterElement,
      PartyBase involvedParty,
      List<Settlement> nearbySettlements)
    {
      int nearbySettlements1 = 0;
      if (!nearbySettlements.IsEmpty<Settlement>())
      {
        foreach (Settlement nearbySettlement in nearbySettlements)
          nearbySettlements1 += nearbySettlement.Town.GetItemPrice(itemRosterElement, involvedParty.MobileParty, true);
        nearbySettlements1 /= nearbySettlements.Count;
      }
      return nearbySettlements1;
    }

    private class SettlementDistanceCache
    {
      private Vec2 _latestHeroPosition;
      private List<ItemBarterBehavior.SettlementDistanceCache.SettlementDistancePair> _sortedSettlements;
      private List<Settlement> _closestSettlements;

      public SettlementDistanceCache()
      {
        this._latestHeroPosition = new Vec2(-1f, -1f);
        this._sortedSettlements = new List<ItemBarterBehavior.SettlementDistanceCache.SettlementDistancePair>(64);
        this._closestSettlements = new List<Settlement>(3);
      }

      public List<Settlement> GetClosestSettlements(Vec2 position)
      {
        if (!position.NearlyEquals(this._latestHeroPosition))
        {
          this._latestHeroPosition = position;
          MBReadOnlyList<Settlement> all = Settlement.All;
          int count = all.Count;
          for (int index = 0; index < count; ++index)
          {
            Settlement settlement = all[index];
            if (settlement.IsTown)
              this._sortedSettlements.Add(new ItemBarterBehavior.SettlementDistanceCache.SettlementDistancePair(position.DistanceSquared(settlement.GatePosition), settlement));
          }
          this._sortedSettlements.Sort();
          this._closestSettlements.Clear();
          this._closestSettlements.Add(this._sortedSettlements[0].Settlement);
          this._closestSettlements.Add(this._sortedSettlements[1].Settlement);
          this._closestSettlements.Add(this._sortedSettlements[2].Settlement);
          this._sortedSettlements.Clear();
        }
        return this._closestSettlements;
      }

      private struct SettlementDistancePair : 
        IComparable<ItemBarterBehavior.SettlementDistanceCache.SettlementDistancePair>
      {
        private float _distance;
        public Settlement Settlement;

        public SettlementDistancePair(float distance, Settlement settlement)
        {
          this._distance = distance;
          this.Settlement = settlement;
        }

        public int CompareTo(
          ItemBarterBehavior.SettlementDistanceCache.SettlementDistancePair other)
        {
          if ((double) this._distance == (double) other._distance)
            return 0;
          return (double) this._distance > (double) other._distance ? 1 : -1;
        }
      }
    }
  }
}

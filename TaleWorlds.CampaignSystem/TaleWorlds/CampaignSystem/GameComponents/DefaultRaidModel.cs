// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultRaidModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultRaidModel : RaidModel
  {
    private MBReadOnlyList<(ItemObject, float)> _commonLootItems;

    private MBReadOnlyList<(ItemObject, float)> CommonLootItemSpawnChances
    {
      get
      {
        if (this._commonLootItems == null)
        {
          List<(ItemObject, float)> collection = new List<(ItemObject, float)>()
          {
            (DefaultItems.Hides, 1f),
            (DefaultItems.HardWood, 1f),
            (DefaultItems.Tools, 1f),
            (DefaultItems.Grain, 1f),
            (Campaign.Current.ObjectManager.GetObject<ItemObject>("linen"), 1f),
            (Campaign.Current.ObjectManager.GetObject<ItemObject>("sheep"), 1f),
            (Campaign.Current.ObjectManager.GetObject<ItemObject>("mule"), 1f),
            (Campaign.Current.ObjectManager.GetObject<ItemObject>("pottery"), 1f)
          };
          for (int index = collection.Count - 1; index >= 0; --index)
          {
            ItemObject itemObject = collection[index].Item1;
            float num = (float) (100.0 / ((double) itemObject.Value + 1.0));
            collection[index] = (itemObject, num);
          }
          this._commonLootItems = new MBReadOnlyList<(ItemObject, float)>((IEnumerable<(ItemObject, float)>) collection);
        }
        return this._commonLootItems;
      }
    }

    public override float CalculateHitDamage(MapEventSide attackerSide, float settlementHitPoints)
    {
      float num1 = (float) (((double) MathF.Sqrt((float) attackerSide.TroopCount) + 5.0) / 900.0 * CampaignTime.DeltaTime.ToHours);
      float num2 = 0.0f;
      foreach (MapEventParty party in (List<MapEventParty>) attackerSide.Parties)
      {
        if (party.Party.MobileParty?.LeaderHero != null && party.Party.MobileParty.LeaderHero.GetPerkValue(DefaultPerks.Roguery.NoRestForTheWicked))
          num2 += DefaultPerks.Roguery.NoRestForTheWicked.SecondaryBonus;
      }
      return num1 + num1 * num2;
    }

    public override MBReadOnlyList<(ItemObject, float)> GetCommonLootItemScores()
    {
      return this.CommonLootItemSpawnChances;
    }

    public override int GoldRewardForEachLostHearth => 4;
  }
}

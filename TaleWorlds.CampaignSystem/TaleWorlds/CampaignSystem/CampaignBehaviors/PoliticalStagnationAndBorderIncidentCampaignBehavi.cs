// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.PoliticalStagnationAndBorderIncidentCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Map;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class PoliticalStagnationAndBorderIncidentCampaignBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.DailyTickEvent.AddNonSerializedListener((object) this, new Action(this.DailyTick));
      CampaignEvents.HourlyTickSettlementEvent.AddNonSerializedListener((object) this, new Action<Settlement>(this.HourlyTickSettlement));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    public void HourlyTickSettlement(Settlement settlement)
    {
      if (!settlement.IsFortification && !settlement.IsVillage)
        return;
      LocatableSearchData<MobileParty> data = MobileParty.StartFindingLocatablesAroundPosition(settlement.Position2D, 10f);
      for (MobileParty nextLocatable = MobileParty.FindNextLocatable(ref data); nextLocatable != null; nextLocatable = MobileParty.FindNextLocatable(ref data))
      {
        if (!nextLocatable.IsGarrison && !nextLocatable.IsMilitia && (double) nextLocatable.Aggressiveness > 0.0)
        {
          if (nextLocatable.MapFaction == settlement.MapFaction && (nextLocatable.IsCaravan || nextLocatable.IsVillager) && nextLocatable.Ai.IsAlerted)
            settlement.NumberOfEnemiesSpottedAround += 0.2f;
          if (nextLocatable.CurrentSettlement == null && FactionManager.IsAtWarAgainstFaction(nextLocatable.MapFaction, settlement.MapFaction))
          {
            float num1 = nextLocatable.Party.TotalStrength;
            if (nextLocatable == MobileParty.MainParty)
              num1 = num1 * 2f + 50f;
            float num2 = MathF.Min(1f, num1 / 500f * MathF.Min(1f, nextLocatable.Aggressiveness));
            if (!nextLocatable.IsLordParty)
              num2 *= 0.5f;
            if (nextLocatable.MapEvent != null && nextLocatable.MapEvent.IsFieldBattle)
              num2 = 3f * num2;
            settlement.NumberOfEnemiesSpottedAround += num2;
          }
          else if (nextLocatable.MapFaction == settlement.MapFaction)
          {
            float num = MathF.Min(1f, nextLocatable.Party.TotalStrength / 500f * MathF.Min(1f, nextLocatable.Aggressiveness));
            settlement.NumberOfAlliesSpottedAround += num;
          }
        }
      }
      settlement.NumberOfEnemiesSpottedAround *= 0.95f;
      settlement.NumberOfAlliesSpottedAround *= 0.8f;
    }

    public void DailyTick()
    {
      foreach (Kingdom kingdom in (List<Kingdom>) Kingdom.All)
        PoliticalStagnationAndBorderIncidentCampaignBehavior.UpdatePoliticallyStagnation(kingdom);
    }

    private static void UpdatePoliticallyStagnation(Kingdom kingdom)
    {
      float num1 = (float) (1.0 + (double) MathF.Min(60, kingdom.Fiefs.Count) * 0.20000000298023224);
      float num2 = (float) (2.0 + (double) MathF.Min(60, kingdom.Fiefs.Count) * 0.60000002384185791);
      int num3 = 1;
      foreach (Kingdom faction2 in (List<Kingdom>) Kingdom.All)
      {
        if (FactionManager.IsAtWarAgainstFaction((IFaction) kingdom, (IFaction) faction2))
        {
          if ((double) faction2.Fiefs.Count >= (double) num2)
          {
            num3 = -2;
            break;
          }
          if ((double) faction2.Fiefs.Count >= (double) num1)
            num3 = -1;
        }
      }
      kingdom.PoliticalStagnation += num3;
      if (kingdom.PoliticalStagnation < 0)
      {
        kingdom.PoliticalStagnation = 0;
      }
      else
      {
        if (kingdom.PoliticalStagnation <= 300)
          return;
        kingdom.PoliticalStagnation = 300;
      }
    }

    private void BorderIncidents()
    {
    }
  }
}

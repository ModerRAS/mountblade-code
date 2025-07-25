// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.VillageHealCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class VillageHealCampaignBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.DailyTickSettlementEvent.AddNonSerializedListener((object) this, new Action<Settlement>(this.DailyTickSettlement));
    }

    private void DailyTickSettlement(Settlement settlement)
    {
      if (!settlement.IsVillage && !settlement.IsTown || (double) settlement.SettlementHitPoints >= 1.0 || settlement.Party.MapEvent != null || settlement.Party.SiegeEvent != null)
        return;
      ExplainedNumber explainedNumber = new ExplainedNumber(0.06f + (float) ((7000.0 - (double) MathF.Min(7000f, MathF.Max(1000f, settlement.MapFaction.TotalStrength))) / 100000.0));
      if (settlement.IsVillage && settlement.Village.TradeBound != null && PerkHelper.GetPerkValueForTown(DefaultPerks.Medicine.CleanInfrastructure, settlement.Village.TradeBound.Town))
        explainedNumber.AddFactor(DefaultPerks.Medicine.CleanInfrastructure.SecondaryBonus, DefaultPerks.Medicine.CleanInfrastructure.Name);
      if (settlement.OwnerClan.Leader.GetPerkValue(DefaultPerks.Roguery.InBestLight))
        explainedNumber.AddFactor(DefaultPerks.Roguery.InBestLight.SecondaryBonus, DefaultPerks.Roguery.InBestLight.Name);
      IncreaseSettlementHealthAction.Apply(settlement, explainedNumber.ResultNumber);
    }

    public override void SyncData(IDataStore dataStore)
    {
    }
  }
}

// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.SettlementVariablesBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class SettlementVariablesBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.HourlyTickSettlementEvent.AddNonSerializedListener((object) this, new Action<Settlement>(this.HourlyTickSettlement));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private void HourlyTickSettlement(Settlement settlement)
    {
      if (!settlement.IsVillage && !settlement.IsFortification && !settlement.IsHideout || settlement.LastAttackerParty == null || (double) settlement.LastThreatTime.ElapsedHoursUntilNow <= 24.0)
        return;
      settlement.LastAttackerParty = (MobileParty) null;
    }
  }
}

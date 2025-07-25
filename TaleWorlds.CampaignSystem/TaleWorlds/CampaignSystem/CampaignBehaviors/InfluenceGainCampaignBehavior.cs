// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.InfluenceGainCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class InfluenceGainCampaignBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.OnPrisonerDonatedToSettlementEvent.AddNonSerializedListener((object) this, new Action<MobileParty, FlattenedTroopRoster, Settlement>(this.OnPrisonerDonatedToSettlement));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private void OnPrisonerDonatedToSettlement(
      MobileParty donatingParty,
      FlattenedTroopRoster donatedPrisoners,
      Settlement donatedSettlement)
    {
      if (donatedSettlement.OwnerClan == Clan.PlayerClan && donatingParty.ActualClan == Clan.PlayerClan)
        return;
      float num = 0.0f;
      foreach (FlattenedTroopRosterElement donatedPrisoner in donatedPrisoners)
        num += Campaign.Current.Models.PrisonerDonationModel.CalculateInfluenceGainAfterPrisonerDonation(donatingParty.Party, donatedPrisoner.Troop, donatedSettlement);
      GainKingdomInfluenceAction.ApplyForDonatePrisoners(donatingParty, num);
    }
  }
}

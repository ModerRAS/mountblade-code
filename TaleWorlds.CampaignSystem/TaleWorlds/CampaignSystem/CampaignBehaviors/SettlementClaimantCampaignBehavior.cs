// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.SettlementClaimantCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Election;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class SettlementClaimantCampaignBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.OnSettlementOwnerChangedEvent.AddNonSerializedListener((object) this, new Action<Settlement, bool, Hero, Hero, Hero, ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail>(this.OnSettlementOwnerChanged));
      CampaignEvents.DailyTickSettlementEvent.AddNonSerializedListener((object) this, new Action<Settlement>(this.DailyTickSettlement));
    }

    private void DailyTickSettlement(Settlement settlement)
    {
      if (settlement.Town == null || !settlement.Town.IsOwnerUnassigned || settlement.OwnerClan == null || settlement.OwnerClan.Kingdom == null)
        return;
      Kingdom kingdom = settlement.OwnerClan.Kingdom;
      if (kingdom.UnresolvedDecisions.FirstOrDefault<KingdomDecision>((Func<KingdomDecision, bool>) (x => x is SettlementClaimantDecision)) != null)
        return;
      kingdom.AddDecision((KingdomDecision) new SettlementClaimantDecision(kingdom.RulingClan, settlement, (Hero) null, (Clan) null), true);
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    public void OnSettlementOwnerChanged(
      Settlement settlement,
      bool openToClaim,
      Hero newOwner,
      Hero oldOwner,
      Hero capturerHero,
      ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail detail)
    {
      if (settlement.IsVillage && settlement.Party.MapEvent != null && !FactionManager.IsAtWarAgainstFaction(settlement.Party.MapEvent.AttackerSide.LeaderParty.MapFaction, newOwner.MapFaction))
        settlement.Party.MapEvent.FinalizeEvent();
      if (detail == ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail.BySiege)
      {
        int num = 0;
        if (newOwner != null)
        {
          foreach (Settlement settlement1 in (List<Settlement>) newOwner.MapFaction.Settlements)
          {
            if (settlement1.CanBeClaimed > num)
              num = settlement1.CanBeClaimed;
          }
        }
        settlement.CanBeClaimed = num + 2;
      }
      if (openToClaim && newOwner.MapFaction.IsKingdomFaction && (newOwner.MapFaction as Kingdom).Clans.Count > 1 && settlement.Town != null)
        settlement.Town.IsOwnerUnassigned = true;
      foreach (Kingdom kingdom in (List<Kingdom>) Kingdom.All)
      {
        foreach (KingdomDecision kingdomDecision in kingdom.UnresolvedDecisions.ToList<KingdomDecision>())
        {
          if (kingdomDecision is SettlementClaimantDecision claimantDecision)
          {
            if (claimantDecision.Settlement == settlement)
              kingdom.RemoveDecision(kingdomDecision);
          }
          else if (kingdomDecision is SettlementClaimantPreliminaryDecision preliminaryDecision && preliminaryDecision.Settlement == settlement && preliminaryDecision.Settlement == settlement)
            kingdom.RemoveDecision(kingdomDecision);
        }
      }
      if (oldOwner.Clan != Clan.PlayerClan || newOwner != null && newOwner.Clan == Clan.PlayerClan)
        return;
      foreach (ItemRosterElement itemRosterElement in settlement.Stash)
        settlement.ItemRoster.AddToCounts(itemRosterElement.EquipmentElement.Item, itemRosterElement.Amount);
      settlement.Stash.Clear();
    }
  }
}

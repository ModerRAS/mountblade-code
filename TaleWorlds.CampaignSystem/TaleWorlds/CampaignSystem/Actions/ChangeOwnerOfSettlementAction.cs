// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.ChangeOwnerOfSettlementAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Party.PartyComponents;
using TaleWorlds.CampaignSystem.Settlements;

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class ChangeOwnerOfSettlementAction
  {
    private static void ApplyInternal(
      Settlement settlement,
      Hero newOwner,
      Hero capturerHero,
      ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail detail)
    {
      Hero leader = settlement.OwnerClan?.Leader;
      if (settlement.IsFortification)
        settlement.Town.OwnerClan = newOwner.Clan;
      if (settlement.IsFortification)
      {
        if (settlement.Town.GarrisonParty == null)
          settlement.AddGarrisonParty();
        ChangeGovernorAction.RemoveGovernorOfIfExists(settlement.Town);
      }
      settlement.Party.SetVisualAsDirty();
      foreach (Village boundVillage in (List<Village>) settlement.BoundVillages)
      {
        boundVillage.Settlement.Party.SetVisualAsDirty();
        if (boundVillage.VillagerPartyComponent != null && newOwner != null)
        {
          foreach (MobileParty mobileParty in (List<MobileParty>) MobileParty.All)
          {
            if (mobileParty.MapEvent == null && mobileParty != MobileParty.MainParty && mobileParty.ShortTermTargetParty == boundVillage.VillagerPartyComponent.MobileParty && !mobileParty.MapFaction.IsAtWarWith(newOwner.MapFaction))
              mobileParty.Ai.SetMoveModeHold();
          }
        }
      }
      bool openToClaim = (detail == ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail.BySiege || detail == ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail.ByRevolt || detail == ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail.ByClanDestruction || detail == ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail.ByLeaveFaction) && settlement.IsFortification;
      if (newOwner != null)
      {
        IFaction mapFaction = newOwner.MapFaction;
        if (settlement.Party.MapEvent != null && !settlement.Party.MapEvent.AttackerSide.LeaderParty.MapFaction.IsAtWarWith(mapFaction) && settlement.Party.MapEvent.Winner == null)
        {
          settlement.Party.MapEvent.DiplomaticallyFinished = true;
          foreach (PartyComponent warPartyComponent in (List<WarPartyComponent>) settlement.MapFaction.WarPartyComponents)
          {
            MobileParty mobileParty = warPartyComponent.MobileParty;
            if (mobileParty.DefaultBehavior == AiBehavior.DefendSettlement && mobileParty.TargetSettlement == settlement && mobileParty.CurrentSettlement == null)
              mobileParty.Ai.SetMoveModeHold();
          }
          settlement.Party.MapEvent.Update();
        }
        foreach (Clan nonBanditFaction in Clan.NonBanditFactions)
        {
          if (mapFaction == null || nonBanditFaction.Kingdom == null && !nonBanditFaction.IsAtWarWith(mapFaction) || nonBanditFaction.Kingdom != null && !nonBanditFaction.Kingdom.IsAtWarWith(mapFaction))
          {
            foreach (PartyComponent warPartyComponent in (List<WarPartyComponent>) nonBanditFaction.WarPartyComponents)
            {
              MobileParty mobileParty = warPartyComponent.MobileParty;
              if (mobileParty.BesiegedSettlement != settlement && (mobileParty.DefaultBehavior == AiBehavior.RaidSettlement || mobileParty.DefaultBehavior == AiBehavior.BesiegeSettlement || mobileParty.DefaultBehavior == AiBehavior.AssaultSettlement) && mobileParty.TargetSettlement == settlement)
              {
                mobileParty.Army?.FinishArmyObjective();
                mobileParty.Ai.SetMoveModeHold();
              }
            }
          }
        }
      }
      CampaignEventDispatcher.Instance.OnSettlementOwnerChanged(settlement, openToClaim, newOwner, leader, capturerHero, detail);
    }

    public static void ApplyByDefault(Hero hero, Settlement settlement)
    {
      ChangeOwnerOfSettlementAction.ApplyInternal(settlement, hero, (Hero) null, ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail.Default);
    }

    public static void ApplyByKingDecision(Hero hero, Settlement settlement)
    {
      ChangeOwnerOfSettlementAction.ApplyInternal(settlement, hero, (Hero) null, ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail.ByKingDecision);
      if (settlement.Town == null)
        return;
      settlement.Town.IsOwnerUnassigned = false;
    }

    public static void ApplyBySiege(Hero newOwner, Hero capturerHero, Settlement settlement)
    {
      if (settlement.Town != null)
        settlement.Town.LastCapturedBy = capturerHero.Clan;
      ChangeOwnerOfSettlementAction.ApplyInternal(settlement, newOwner, capturerHero, ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail.BySiege);
    }

    public static void ApplyByLeaveFaction(Hero hero, Settlement settlement)
    {
      ChangeOwnerOfSettlementAction.ApplyInternal(settlement, hero, (Hero) null, ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail.ByLeaveFaction);
    }

    public static void ApplyByBarter(Hero hero, Settlement settlement)
    {
      ChangeOwnerOfSettlementAction.ApplyInternal(settlement, hero, (Hero) null, ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail.ByBarter);
    }

    public static void ApplyByRebellion(Hero hero, Settlement settlement)
    {
      ChangeOwnerOfSettlementAction.ApplyInternal(settlement, hero, hero, ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail.ByRebellion);
    }

    public static void ApplyByDestroyClan(Settlement settlement, Hero newOwner)
    {
      ChangeOwnerOfSettlementAction.ApplyInternal(settlement, newOwner, (Hero) null, ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail.ByClanDestruction);
    }

    public static void ApplyByGift(Settlement settlement, Hero newOwner)
    {
      ChangeOwnerOfSettlementAction.ApplyInternal(settlement, newOwner, (Hero) null, ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail.ByGift);
    }

    public enum ChangeOwnerOfSettlementDetail
    {
      Default,
      BySiege,
      ByBarter,
      ByRevolt,
      ByLeaveFaction,
      ByKingDecision,
      ByGift,
      ByRebellion,
      ByClanDestruction,
    }
  }
}

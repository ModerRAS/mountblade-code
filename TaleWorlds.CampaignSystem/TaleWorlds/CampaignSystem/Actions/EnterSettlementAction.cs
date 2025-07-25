// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.EnterSettlementAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class EnterSettlementAction
  {
    private static void ApplyInternal(
      Hero hero,
      MobileParty mobileParty,
      Settlement settlement,
      EnterSettlementAction.EnterSettlementDetail detail,
      object subject = null,
      bool isPlayerInvolved = false)
    {
      if (mobileParty != null && mobileParty.IsDisbanding && mobileParty.TargetSettlement == settlement)
      {
        DestroyPartyAction.ApplyForDisbanding(mobileParty, settlement);
      }
      else
      {
        CampaignEventDispatcher.Instance.OnSettlementEntered(mobileParty, settlement, hero);
        CampaignEventDispatcher.Instance.OnAfterSettlementEntered(mobileParty, settlement, hero);
        if (detail == EnterSettlementAction.EnterSettlementDetail.Prisoner)
        {
          if (hero != null)
            CampaignEventDispatcher.Instance.OnPrisonersChangeInSettlement(settlement, (FlattenedTroopRoster) null, hero, false);
          if (mobileParty != null)
            CampaignEventDispatcher.Instance.OnPrisonersChangeInSettlement(settlement, mobileParty.PrisonRoster.ToFlattenedRoster(), (Hero) null, false);
        }
        Hero hero1 = mobileParty != null ? mobileParty.LeaderHero : hero;
        if (hero1 != null)
        {
          float currentTime = Campaign.CurrentTime;
          if (hero1.Clan == settlement.OwnerClan && hero1.Clan.Leader == hero1)
            settlement.LastVisitTimeOfOwner = currentTime;
        }
        if (mobileParty == MobileParty.MainParty && MobileParty.MainParty.Army != null && MobileParty.MainParty.Army.LeaderParty == MobileParty.MainParty)
        {
          foreach (MobileParty attachedParty in (List<MobileParty>) MobileParty.MainParty.Army.LeaderParty.AttachedParties)
            EnterSettlementAction.ApplyForParty(attachedParty, settlement);
        }
        if (hero != null && mobileParty == null && hero.PartyBelongedTo == null && hero.PartyBelongedToAsPrisoner == null && hero.Clan == Clan.PlayerClan && hero.GovernorOf == null)
          CampaignEventDispatcher.Instance.OnHeroGetsBusy(hero, HeroGetsBusyReasons.BecomeEmissary);
      }
      if (hero != Hero.MainHero && mobileParty != MobileParty.MainParty)
        return;
      Debug.Print(string.Format("Player has entered {0}: {1}", (object) settlement.StringId, (object) settlement));
    }

    public static void ApplyForParty(MobileParty mobileParty, Settlement settlement)
    {
      if (mobileParty != null && mobileParty.Army != null && mobileParty.Army.LeaderParty != null && mobileParty.Army.LeaderParty != mobileParty && mobileParty.Army.LeaderParty.CurrentSettlement == settlement && mobileParty.AttachedTo == null)
        mobileParty.Army.AddPartyToMergedParties(mobileParty);
      mobileParty.CurrentSettlement = settlement;
      settlement.SettlementComponent.OnPartyEntered(mobileParty);
      EnterSettlementAction.ApplyInternal(mobileParty.LeaderHero, mobileParty, settlement, EnterSettlementAction.EnterSettlementDetail.WarParty);
    }

    public static void ApplyForPartyEntersAlley(
      MobileParty party,
      Settlement settlement,
      Alley alley,
      bool isPlayerInvolved = false)
    {
      EnterSettlementAction.ApplyInternal((Hero) null, party, settlement, EnterSettlementAction.EnterSettlementDetail.PartyEntersAlley, (object) alley, isPlayerInvolved);
    }

    public static void ApplyForCharacterOnly(Hero hero, Settlement settlement)
    {
      hero.StayingInSettlement = settlement;
      EnterSettlementAction.ApplyInternal(hero, (MobileParty) null, settlement, EnterSettlementAction.EnterSettlementDetail.Character);
    }

    public static void ApplyForPrisoner(Hero hero, Settlement settlement)
    {
      hero.ChangeState(Hero.CharacterStates.Prisoner);
      EnterSettlementAction.ApplyInternal(hero, (MobileParty) null, settlement, EnterSettlementAction.EnterSettlementDetail.Prisoner);
    }

    private enum EnterSettlementDetail
    {
      WarParty,
      PartyEntersAlley,
      Character,
      Prisoner,
    }
  }
}

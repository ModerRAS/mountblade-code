// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.TeleportHeroAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class TeleportHeroAction
  {
    private static void ApplyInternal(
      Hero hero,
      Settlement targetSettlement,
      MobileParty targetParty,
      TeleportHeroAction.TeleportationDetail detail)
    {
      CampaignEventDispatcher.Instance.OnHeroTeleportationRequested(hero, targetSettlement, targetParty, detail);
      switch (detail)
      {
        case TeleportHeroAction.TeleportationDetail.ImmediateTeleportToSettlement:
          if (targetSettlement == null)
            break;
          if (hero.IsTraveling)
            hero.ChangeState(Hero.CharacterStates.Active);
          if (hero.CurrentSettlement != null)
            LeaveSettlementAction.ApplyForCharacterOnly(hero);
          if (hero.PartyBelongedTo != null)
          {
            if (!hero.PartyBelongedTo.IsActive || hero.PartyBelongedTo.IsCurrentlyEngagingParty || hero.PartyBelongedTo.MapEvent != null)
              break;
            hero.PartyBelongedTo.MemberRoster.RemoveTroop(hero.CharacterObject);
          }
          EnterSettlementAction.ApplyForCharacterOnly(hero, targetSettlement);
          break;
        case TeleportHeroAction.TeleportationDetail.ImmediateTeleportToParty:
          if (hero.IsTraveling)
            hero.ChangeState(Hero.CharacterStates.Active);
          targetParty.MemberRoster.AddToCounts(hero.CharacterObject, 1);
          break;
        case TeleportHeroAction.TeleportationDetail.ImmediateTeleportToPartyAsPartyLeader:
          if (hero.IsTraveling)
            hero.ChangeState(Hero.CharacterStates.Active);
          targetParty.MemberRoster.AddToCounts(hero.CharacterObject, 1);
          targetParty.ChangePartyLeader(hero);
          targetParty.PartyComponent.ClearCachedName();
          targetParty.SetCustomName((TextObject) null);
          targetParty.Party.SetVisualAsDirty();
          if (targetParty.IsDisbanding)
            DisbandPartyAction.CancelDisband(targetParty);
          if (!targetParty.Ai.DoNotMakeNewDecisions)
            break;
          targetParty.Ai.SetDoNotMakeNewDecisions(false);
          break;
        case TeleportHeroAction.TeleportationDetail.DelayedTeleportToSettlement:
        case TeleportHeroAction.TeleportationDetail.DelayedTeleportToParty:
        case TeleportHeroAction.TeleportationDetail.DelayedTeleportToSettlementAsGovernor:
        case TeleportHeroAction.TeleportationDetail.DelayedTeleportToPartyAsPartyLeader:
          if (detail == TeleportHeroAction.TeleportationDetail.DelayedTeleportToSettlement && hero.CurrentSettlement == targetSettlement)
          {
            TeleportHeroAction.ApplyImmediateTeleportToSettlement(hero, targetSettlement);
            break;
          }
          if (hero.GovernorOf != null)
            ChangeGovernorAction.RemoveGovernorOf(hero);
          if (hero.CurrentSettlement != null && hero.CurrentSettlement != targetSettlement)
            LeaveSettlementAction.ApplyForCharacterOnly(hero);
          if (hero.PartyBelongedTo != null)
          {
            if (!hero.PartyBelongedTo.IsActive || hero.PartyBelongedTo.IsCurrentlyEngagingParty && hero.PartyBelongedTo.MapEvent != null)
              break;
            hero.PartyBelongedTo.MemberRoster.RemoveTroop(hero.CharacterObject);
          }
          if (detail == TeleportHeroAction.TeleportationDetail.DelayedTeleportToPartyAsPartyLeader)
          {
            TextObject name = new TextObject("{=ithcVNfA}{CLAN_NAME}{.o} Party");
            name.SetTextVariable("CLAN_NAME", targetParty.ActualClan != null ? targetParty.ActualClan.Name : CampaignData.NeutralFactionName);
            targetParty.SetCustomName(name);
          }
          hero.ChangeState(Hero.CharacterStates.Traveling);
          break;
      }
    }

    public static void ApplyImmediateTeleportToSettlement(
      Hero heroToBeMoved,
      Settlement targetSettlement)
    {
      TeleportHeroAction.ApplyInternal(heroToBeMoved, targetSettlement, (MobileParty) null, TeleportHeroAction.TeleportationDetail.ImmediateTeleportToSettlement);
    }

    public static void ApplyImmediateTeleportToParty(Hero heroToBeMoved, MobileParty party)
    {
      TeleportHeroAction.ApplyInternal(heroToBeMoved, (Settlement) null, party, TeleportHeroAction.TeleportationDetail.ImmediateTeleportToParty);
    }

    public static void ApplyImmediateTeleportToPartyAsPartyLeader(
      Hero heroToBeMoved,
      MobileParty party)
    {
      TeleportHeroAction.ApplyInternal(heroToBeMoved, (Settlement) null, party, TeleportHeroAction.TeleportationDetail.ImmediateTeleportToPartyAsPartyLeader);
    }

    public static void ApplyDelayedTeleportToSettlement(
      Hero heroToBeMoved,
      Settlement targetSettlement)
    {
      TeleportHeroAction.ApplyInternal(heroToBeMoved, targetSettlement, (MobileParty) null, TeleportHeroAction.TeleportationDetail.DelayedTeleportToSettlement);
    }

    public static void ApplyDelayedTeleportToParty(Hero heroToBeMoved, MobileParty party)
    {
      TeleportHeroAction.ApplyInternal(heroToBeMoved, (Settlement) null, party, TeleportHeroAction.TeleportationDetail.DelayedTeleportToParty);
    }

    public static void ApplyDelayedTeleportToSettlementAsGovernor(
      Hero heroToBeMoved,
      Settlement targetSettlement)
    {
      TeleportHeroAction.ApplyInternal(heroToBeMoved, targetSettlement, (MobileParty) null, TeleportHeroAction.TeleportationDetail.DelayedTeleportToSettlementAsGovernor);
    }

    public static void ApplyDelayedTeleportToPartyAsPartyLeader(
      Hero heroToBeMoved,
      MobileParty party)
    {
      TeleportHeroAction.ApplyInternal(heroToBeMoved, (Settlement) null, party, TeleportHeroAction.TeleportationDetail.DelayedTeleportToPartyAsPartyLeader);
    }

    public enum TeleportationDetail
    {
      ImmediateTeleportToSettlement,
      ImmediateTeleportToParty,
      ImmediateTeleportToPartyAsPartyLeader,
      DelayedTeleportToSettlement,
      DelayedTeleportToParty,
      DelayedTeleportToSettlementAsGovernor,
      DelayedTeleportToPartyAsPartyLeader,
    }
  }
}

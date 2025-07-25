// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.ChangeKingdomAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Party.PartyComponents;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Siege;

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class ChangeKingdomAction
  {
    public const float PotentialSettlementsPerNobleEffect = 0.2f;
    public const float NewGainedFiefsValueForKingdomConstant = 0.1f;
    public const float LordsUnitStrengthValue = 20f;
    public const float MercenaryUnitStrengthValue = 5f;
    public const float MinimumNeededGoldForRecruitingMercenaries = 20000f;

    private static void ApplyInternal(
      Clan clan,
      Kingdom newKingdom,
      ChangeKingdomAction.ChangeKingdomActionDetail detail,
      int awardMultiplier = 0,
      bool byRebellion = false,
      bool showNotification = true)
    {
      Kingdom kingdom = clan.Kingdom;
      SiegeEvent playerSiegeEvent = PlayerSiege.PlayerSiegeEvent;
      MapEvent mapEvent = MobileParty.MainParty.MapEvent;
      PlayerEncounter current1 = PlayerEncounter.Current;
      clan.DebtToKingdom = 0;
      if (detail == ChangeKingdomAction.ChangeKingdomActionDetail.JoinKingdom || detail == ChangeKingdomAction.ChangeKingdomActionDetail.JoinAsMercenary || detail == ChangeKingdomAction.ChangeKingdomActionDetail.JoinKingdomByDefection)
        FactionHelper.AdjustFactionStancesForClanJoiningKingdom(clan, newKingdom);
      if (detail == ChangeKingdomAction.ChangeKingdomActionDetail.JoinKingdom || detail == ChangeKingdomAction.ChangeKingdomActionDetail.CreateKingdom || detail == ChangeKingdomAction.ChangeKingdomActionDetail.JoinKingdomByDefection)
      {
        if (clan.IsUnderMercenaryService)
          clan.EndMercenaryService(false);
        if (kingdom != null)
          clan.ClanLeaveKingdom(!byRebellion);
        clan.Kingdom = newKingdom;
        if (newKingdom != null && detail == ChangeKingdomAction.ChangeKingdomActionDetail.CreateKingdom)
          ChangeRulingClanAction.Apply(newKingdom, clan);
      }
      else if (detail == ChangeKingdomAction.ChangeKingdomActionDetail.JoinAsMercenary)
      {
        if (clan.IsUnderMercenaryService)
          clan.EndMercenaryService(true);
        clan.MercenaryAwardMultiplier = awardMultiplier;
        clan.Kingdom = newKingdom;
        clan.StartMercenaryService();
        if (clan == Clan.PlayerClan)
          Campaign.Current.KingdomManager.PlayerMercenaryServiceNextRenewDay = Campaign.CurrentTime + 720f;
      }
      else if (detail == ChangeKingdomAction.ChangeKingdomActionDetail.LeaveWithRebellion || detail == ChangeKingdomAction.ChangeKingdomActionDetail.LeaveKingdom || detail == ChangeKingdomAction.ChangeKingdomActionDetail.LeaveAsMercenary || detail == ChangeKingdomAction.ChangeKingdomActionDetail.LeaveByClanDestruction || detail == ChangeKingdomAction.ChangeKingdomActionDetail.LeaveByKingdomDestruction)
      {
        clan.Kingdom = (Kingdom) null;
        if (clan.IsUnderMercenaryService)
          clan.EndMercenaryService(true);
        switch (detail)
        {
          case ChangeKingdomAction.ChangeKingdomActionDetail.LeaveKingdom:
            if (clan == Clan.PlayerClan && !clan.IsEliminated)
            {
              foreach (Clan clan1 in (List<Clan>) kingdom.Clans)
                ChangeRelationAction.ApplyRelationChangeBetweenHeroes(clan.Leader, clan1.Leader, -20);
            }
            using (List<Settlement>.Enumerator enumerator = new List<Settlement>((IEnumerable<Settlement>) clan.Settlements).GetEnumerator())
            {
              while (enumerator.MoveNext())
              {
                Settlement current2 = enumerator.Current;
                ChangeOwnerOfSettlementAction.ApplyByLeaveFaction(kingdom.Leader, current2);
                foreach (Hero hero in new List<Hero>((IEnumerable<Hero>) current2.HeroesWithoutParty))
                {
                  if (hero.CurrentSettlement != null && hero.Clan == clan)
                  {
                    if (hero.PartyBelongedTo != null)
                    {
                      LeaveSettlementAction.ApplyForParty(hero.PartyBelongedTo);
                      EnterSettlementAction.ApplyForParty(hero.PartyBelongedTo, clan.Leader.HomeSettlement);
                    }
                    else
                    {
                      LeaveSettlementAction.ApplyForCharacterOnly(hero);
                      EnterSettlementAction.ApplyForCharacterOnly(hero, clan.Leader.HomeSettlement);
                    }
                  }
                }
              }
              break;
            }
          case ChangeKingdomAction.ChangeKingdomActionDetail.LeaveWithRebellion:
            if (clan == Clan.PlayerClan)
            {
              foreach (Clan clan2 in (List<Clan>) kingdom.Clans)
                ChangeRelationAction.ApplyRelationChangeBetweenHeroes(clan.Leader, clan2.Leader, -40);
              DeclareWarAction.ApplyByRebellion((IFaction) kingdom, (IFaction) clan);
              break;
            }
            break;
          case ChangeKingdomAction.ChangeKingdomActionDetail.LeaveByKingdomDestruction:
            using (IEnumerator<StanceLink> enumerator = kingdom.Stances.GetEnumerator())
            {
              while (enumerator.MoveNext())
              {
                StanceLink current3 = enumerator.Current;
                if (current3.IsAtWar && !current3.IsAtConstantWar)
                {
                  IFaction faction = current3.Faction1 == kingdom ? current3.Faction2 : current3.Faction1;
                  if (faction != clan && !clan.GetStanceWith(faction).IsAtWar)
                    DeclareWarAction.ApplyByDefault((IFaction) clan, faction);
                }
              }
              break;
            }
        }
      }
      if (detail == ChangeKingdomAction.ChangeKingdomActionDetail.LeaveAsMercenary || detail == ChangeKingdomAction.ChangeKingdomActionDetail.LeaveKingdom || detail == ChangeKingdomAction.ChangeKingdomActionDetail.LeaveWithRebellion)
      {
        foreach (StanceLink stanceLink in new List<StanceLink>(clan.Stances))
        {
          if (stanceLink.IsAtWar && !stanceLink.IsAtConstantWar)
          {
            IFaction faction = stanceLink.Faction1 == clan ? stanceLink.Faction2 : stanceLink.Faction1;
            if ((detail != ChangeKingdomAction.ChangeKingdomActionDetail.LeaveWithRebellion || clan != Clan.PlayerClan ? 0 : (faction == kingdom ? 1 : 0)) == 0)
            {
              MakePeaceAction.Apply((IFaction) clan, faction);
              FactionHelper.FinishAllRelatedHostileActionsOfFactionToFaction((IFaction) clan, faction);
              FactionHelper.FinishAllRelatedHostileActionsOfFactionToFaction(faction, (IFaction) clan);
            }
          }
        }
        ChangeKingdomAction.CheckIfPartyIconIsDirty(clan, kingdom);
      }
      foreach (WarPartyComponent warPartyComponent in (List<WarPartyComponent>) clan.WarPartyComponents)
      {
        if (warPartyComponent.MobileParty.MapEvent == null)
          warPartyComponent.MobileParty.Ai.SetMoveModeHold();
      }
      CampaignEventDispatcher.Instance.OnClanChangedKingdom(clan, kingdom, newKingdom, detail, showNotification);
    }

    public static void ApplyByJoinToKingdom(Clan clan, Kingdom newKingdom, bool showNotification = true)
    {
      ChangeKingdomAction.ApplyInternal(clan, newKingdom, ChangeKingdomAction.ChangeKingdomActionDetail.JoinKingdom, showNotification: showNotification);
    }

    public static void ApplyByJoinToKingdomByDefection(
      Clan clan,
      Kingdom newKingdom,
      bool showNotification = true)
    {
      ChangeKingdomAction.ApplyInternal(clan, newKingdom, ChangeKingdomAction.ChangeKingdomActionDetail.JoinKingdomByDefection, showNotification: showNotification);
    }

    public static void ApplyByCreateKingdom(Clan clan, Kingdom newKingdom, bool showNotification = true)
    {
      ChangeKingdomAction.ApplyInternal(clan, newKingdom, ChangeKingdomAction.ChangeKingdomActionDetail.CreateKingdom, showNotification: showNotification);
    }

    public static void ApplyByLeaveByKingdomDestruction(Clan clan, bool showNotification = true)
    {
      ChangeKingdomAction.ApplyInternal(clan, (Kingdom) null, ChangeKingdomAction.ChangeKingdomActionDetail.LeaveByKingdomDestruction, showNotification: showNotification);
    }

    public static void ApplyByLeaveKingdom(Clan clan, bool showNotification = true)
    {
      ChangeKingdomAction.ApplyInternal(clan, (Kingdom) null, ChangeKingdomAction.ChangeKingdomActionDetail.LeaveKingdom, showNotification: showNotification);
    }

    public static void ApplyByLeaveWithRebellionAgainstKingdom(Clan clan, bool showNotification = true)
    {
      ChangeKingdomAction.ApplyInternal(clan, (Kingdom) null, ChangeKingdomAction.ChangeKingdomActionDetail.LeaveWithRebellion, showNotification: showNotification);
    }

    public static void ApplyByJoinFactionAsMercenary(
      Clan clan,
      Kingdom newKingdom,
      int awardMultiplier = 50,
      bool showNotification = true)
    {
      ChangeKingdomAction.ApplyInternal(clan, newKingdom, ChangeKingdomAction.ChangeKingdomActionDetail.JoinAsMercenary, awardMultiplier, showNotification: showNotification);
    }

    public static void ApplyByLeaveKingdomAsMercenary(Clan mercenaryClan, bool showNotification = true)
    {
      ChangeKingdomAction.ApplyInternal(mercenaryClan, (Kingdom) null, ChangeKingdomAction.ChangeKingdomActionDetail.LeaveAsMercenary, showNotification: showNotification);
    }

    public static void ApplyByLeaveKingdomByClanDestruction(Clan clan, bool showNotification = true)
    {
      ChangeKingdomAction.ApplyInternal(clan, (Kingdom) null, ChangeKingdomAction.ChangeKingdomActionDetail.LeaveByClanDestruction, showNotification: showNotification);
    }

    private static void CheckIfPartyIconIsDirty(Clan clan, Kingdom oldKingdom)
    {
      IFaction faction2_1 = clan.Kingdom != null ? (IFaction) clan.Kingdom : (IFaction) clan;
      IFaction faction2_2 = (IFaction) oldKingdom ?? (IFaction) clan;
      foreach (MobileParty mobileParty in (List<MobileParty>) MobileParty.All)
      {
        if (mobileParty.IsVisible && (mobileParty.Party.Owner != null && mobileParty.Party.Owner.Clan == clan || clan == Clan.PlayerClan && (!FactionManager.IsAtWarAgainstFaction(mobileParty.MapFaction, faction2_1) && FactionManager.IsAtWarAgainstFaction(mobileParty.MapFaction, faction2_2) || FactionManager.IsAtWarAgainstFaction(mobileParty.MapFaction, faction2_1) && !FactionManager.IsAtWarAgainstFaction(mobileParty.MapFaction, faction2_2))))
          mobileParty.Party.SetVisualAsDirty();
      }
      foreach (Settlement settlement in (List<Settlement>) clan.Settlements)
        settlement.Party.SetVisualAsDirty();
    }

    public enum ChangeKingdomActionDetail
    {
      JoinAsMercenary,
      JoinKingdom,
      JoinKingdomByDefection,
      LeaveKingdom,
      LeaveWithRebellion,
      LeaveAsMercenary,
      LeaveByClanDestruction,
      CreateKingdom,
      LeaveByKingdomDestruction,
    }
  }
}

// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.KillCharacterAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Election;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class KillCharacterAction
  {
    private static void ApplyInternal(
      Hero victim,
      Hero killer,
      KillCharacterAction.KillCharacterActionDetail actionDetail,
      bool showNotification,
      bool isForced = false)
    {
      if (!victim.CanDie(actionDetail) && !isForced)
        return;
      if (!victim.IsAlive)
      {
        Debug.FailedAssert("Victim: " + (object) victim.Name + " is already dead!", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\Actions\\KillCharacterAction.cs", nameof (ApplyInternal), 40);
      }
      else
      {
        if (victim.IsNotable && victim.Issue?.IssueQuest != null)
          Debug.FailedAssert("Trying to kill a notable that has quest!", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\Actions\\KillCharacterAction.cs", nameof (ApplyInternal), 47);
        if ((victim.PartyBelongedTo?.MapEvent != null || victim.PartyBelongedTo?.SiegeEvent != null) && victim.DeathMark == KillCharacterAction.KillCharacterActionDetail.None)
        {
          victim.AddDeathMark(killer, actionDetail);
        }
        else
        {
          CampaignEventDispatcher.Instance.OnBeforeHeroKilled(victim, killer, actionDetail, showNotification);
          if (victim.IsHumanPlayerCharacter && !isForced)
          {
            CampaignEventDispatcher.Instance.OnBeforeMainCharacterDied(victim, killer, actionDetail, showNotification);
          }
          else
          {
            victim.AddDeathMark(killer, actionDetail);
            victim.EncyclopediaText = KillCharacterAction.CreateObituary(victim, actionDetail);
            if (victim.Clan != null && (victim.Clan.Leader == victim || victim == Hero.MainHero))
            {
              if (!victim.Clan.IsEliminated && victim != Hero.MainHero && victim.Clan.Heroes.Any<Hero>((Func<Hero, bool>) (x => !x.IsChild && x != victim && x.IsAlive && x.IsLord)))
                ChangeClanLeaderAction.ApplyWithoutSelectedNewLeader(victim.Clan);
              if (victim.Clan.Kingdom != null && victim.Clan.Kingdom.RulingClan == victim.Clan)
              {
                List<Clan> list = victim.Clan.Kingdom.Clans.Where<Clan>((Func<Clan, bool>) (t => !t.IsEliminated && t.Leader != victim && !t.IsUnderMercenaryService)).ToList<Clan>();
                if (list.IsEmpty<Clan>())
                {
                  if (!victim.Clan.Kingdom.IsEliminated)
                    DestroyKingdomAction.ApplyByKingdomLeaderDeath(victim.Clan.Kingdom);
                }
                else if (!victim.Clan.Kingdom.IsEliminated)
                {
                  if (list.Count > 1)
                  {
                    Clan clanToExclude = victim.Clan.Leader == victim || victim.Clan.Leader == null ? victim.Clan : (Clan) null;
                    victim.Clan.Kingdom.AddDecision((KingdomDecision) new KingSelectionKingdomDecision(victim.Clan, clanToExclude), true);
                    if (clanToExclude != null)
                    {
                      Clan elementWithPredicate = victim.Clan.Kingdom.Clans.GetRandomElementWithPredicate<Clan>((Func<Clan, bool>) (t => t != clanToExclude && Campaign.Current.Models.DiplomacyModel.IsClanEligibleToBecomeRuler(t)));
                      ChangeRulingClanAction.Apply(victim.Clan.Kingdom, elementWithPredicate);
                    }
                  }
                  else
                    ChangeRulingClanAction.Apply(victim.Clan.Kingdom, list[0]);
                }
              }
            }
            if (victim.PartyBelongedTo != null && (victim.PartyBelongedTo.LeaderHero == victim || victim == Hero.MainHero))
            {
              MobileParty partyBelongedTo = victim.PartyBelongedTo;
              if (victim.PartyBelongedTo.Army != null)
              {
                if (victim.PartyBelongedTo.Army.LeaderParty == victim.PartyBelongedTo)
                  DisbandArmyAction.ApplyByArmyLeaderIsDead(victim.PartyBelongedTo.Army);
                else
                  victim.PartyBelongedTo.Army = (Army) null;
              }
              if (partyBelongedTo != MobileParty.MainParty)
              {
                partyBelongedTo.Ai.SetMoveModeHold();
                if (victim.Clan != null && victim.Clan.IsRebelClan)
                  DestroyPartyAction.Apply((PartyBase) null, partyBelongedTo);
              }
            }
            KillCharacterAction.MakeDead(victim);
            if (victim.GovernorOf != null)
              ChangeGovernorAction.RemoveGovernorOf(victim);
            if (actionDetail == KillCharacterAction.KillCharacterActionDetail.Executed && killer == Hero.MainHero && victim.Clan != null)
            {
              if (victim.GetTraitLevel(DefaultTraits.Honor) >= 0)
                TraitLevelingHelper.OnLordExecuted();
              foreach (Clan clan in (List<Clan>) Clan.All)
              {
                if (!clan.IsEliminated && !clan.IsBanditFaction && clan != Clan.PlayerClan)
                {
                  bool showQuickNotification;
                  int forExecutingHero = Campaign.Current.Models.ExecutionRelationModel.GetRelationChangeForExecutingHero(victim, clan.Leader, out showQuickNotification);
                  if (forExecutingHero != 0)
                    ChangeRelationAction.ApplyPlayerRelation(clan.Leader, forExecutingHero, showQuickNotification);
                }
              }
            }
            if (victim.Clan != null && !victim.Clan.IsEliminated && !victim.Clan.IsBanditFaction && victim.Clan != Clan.PlayerClan)
            {
              if (victim.Clan.Leader == victim)
                DestroyClanAction.ApplyByClanLeaderDeath(victim.Clan);
              else if (victim.Clan.Leader == null)
                DestroyClanAction.Apply(victim.Clan);
            }
            CampaignEventDispatcher.Instance.OnHeroKilled(victim, killer, actionDetail, showNotification);
            if (victim.Spouse != null)
              victim.Spouse = (Hero) null;
            if (victim.CompanionOf != null)
              RemoveCompanionAction.ApplyByDeath(victim.CompanionOf, victim);
            if (victim.CurrentSettlement == null)
              return;
            if (victim.CurrentSettlement == Settlement.CurrentSettlement)
              LocationComplex.Current?.RemoveCharacterIfExists(victim);
            if (victim.StayingInSettlement == null)
              return;
            victim.StayingInSettlement = (Settlement) null;
          }
        }
      }
    }

    public static void ApplyByOldAge(Hero victim, bool showNotification = true)
    {
      KillCharacterAction.ApplyInternal(victim, (Hero) null, KillCharacterAction.KillCharacterActionDetail.DiedOfOldAge, showNotification);
    }

    public static void ApplyByWounds(Hero victim, bool showNotification = true)
    {
      KillCharacterAction.ApplyInternal(victim, (Hero) null, KillCharacterAction.KillCharacterActionDetail.WoundedInBattle, showNotification);
    }

    public static void ApplyByBattle(Hero victim, Hero killer, bool showNotification = true)
    {
      KillCharacterAction.ApplyInternal(victim, killer, KillCharacterAction.KillCharacterActionDetail.DiedInBattle, showNotification);
    }

    public static void ApplyByMurder(Hero victim, Hero killer = null, bool showNotification = true)
    {
      KillCharacterAction.ApplyInternal(victim, killer, KillCharacterAction.KillCharacterActionDetail.Murdered, showNotification);
    }

    public static void ApplyInLabor(Hero lostMother, bool showNotification = true)
    {
      KillCharacterAction.ApplyInternal(lostMother, (Hero) null, KillCharacterAction.KillCharacterActionDetail.DiedInLabor, showNotification);
    }

    public static void ApplyByExecution(
      Hero victim,
      Hero executer,
      bool showNotification = true,
      bool isForced = false)
    {
      KillCharacterAction.ApplyInternal(victim, executer, KillCharacterAction.KillCharacterActionDetail.Executed, showNotification, isForced);
    }

    public static void ApplyByRemove(Hero victim, bool showNotification = false, bool isForced = true)
    {
      KillCharacterAction.ApplyInternal(victim, (Hero) null, KillCharacterAction.KillCharacterActionDetail.Lost, showNotification, isForced);
    }

    public static void ApplyByDeathMark(Hero victim, bool showNotification = false)
    {
      KillCharacterAction.ApplyInternal(victim, victim.DeathMarkKillerHero, victim.DeathMark, showNotification);
    }

    public static void ApplyByDeathMarkForced(Hero victim, bool showNotification = false)
    {
      KillCharacterAction.ApplyInternal(victim, victim.DeathMarkKillerHero, victim.DeathMark, showNotification, true);
    }

    public static void ApplyByPlayerIllness()
    {
      KillCharacterAction.ApplyInternal(Hero.MainHero, (Hero) null, KillCharacterAction.KillCharacterActionDetail.DiedOfOldAge, true, true);
    }

    private static void MakeDead(Hero victim, bool disbandVictimParty = true)
    {
      victim.ChangeState(Hero.CharacterStates.Dead);
      victim.DeathDay = CampaignTime.Now;
      if (!victim.IsHumanPlayerCharacter)
        victim.OnDeath();
      if (victim.PartyBelongedToAsPrisoner != null)
        EndCaptivityAction.ApplyByDeath(victim);
      if (victim.PartyBelongedTo != null)
      {
        MobileParty partyBelongedTo = victim.PartyBelongedTo;
        if (partyBelongedTo.LeaderHero == victim)
        {
          bool flag = false;
          if (!partyBelongedTo.IsMainParty)
          {
            foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) partyBelongedTo.MemberRoster.GetTroopRoster())
            {
              if (troopRosterElement.Character.IsHero && troopRosterElement.Character != victim.CharacterObject)
              {
                partyBelongedTo.ChangePartyLeader(troopRosterElement.Character.HeroObject);
                flag = true;
                break;
              }
            }
          }
          if (!flag)
          {
            if (!partyBelongedTo.IsMainParty)
              partyBelongedTo.RemovePartyLeader();
            if (partyBelongedTo.IsActive & disbandVictimParty)
            {
              if (partyBelongedTo.Party.Owner?.CompanionOf == Clan.PlayerClan)
                partyBelongedTo.Party.SetCustomOwner(Hero.MainHero);
              partyBelongedTo.MemberRoster.RemoveTroop(victim.CharacterObject);
              DisbandPartyAction.StartDisband(partyBelongedTo);
            }
          }
        }
        if (victim.PartyBelongedTo != null)
          partyBelongedTo.MemberRoster.RemoveTroop(victim.CharacterObject);
        if (!partyBelongedTo.IsActive || partyBelongedTo.MemberRoster.TotalManCount != 0)
          return;
        DestroyPartyAction.Apply((PartyBase) null, partyBelongedTo);
      }
      else
      {
        if (!victim.IsHumanPlayerCharacter || MobileParty.MainParty.IsActive)
          return;
        DestroyPartyAction.Apply((PartyBase) null, MobileParty.MainParty);
      }
    }

    private static Clan SelectHeirClanForKingdom(Kingdom kingdom, bool exceptRulingClan)
    {
      Clan rulingClan = kingdom.RulingClan;
      Clan clan1 = (Clan) null;
      float num = 0.0f;
      foreach (Clan clan2 in kingdom.Clans.Where<Clan>((Func<Clan, bool>) (t => t.Heroes.Any<Hero>((Func<Hero, bool>) (h => h.IsAlive)) && !t.IsMinorFaction && t != rulingClan)))
      {
        float clanStrength = Campaign.Current.Models.DiplomacyModel.GetClanStrength(clan2);
        if ((double) num <= (double) clanStrength)
        {
          num = clanStrength;
          clan1 = clan2;
        }
      }
      return clan1;
    }

    private static TextObject CreateObituary(
      Hero hero,
      KillCharacterAction.KillCharacterActionDetail detail)
    {
      TextObject parent;
      if (hero.IsLord)
      {
        if (hero.Clan != null && hero.Clan.IsMinorFaction)
        {
          parent = new TextObject("{=L7qd6qfv}{CHARACTER.FIRSTNAME} was a member of the {CHARACTER.FACTION}. {FURTHER_DETAILS}.");
        }
        else
        {
          parent = new TextObject("{=mfYzCeGR}{CHARACTER.NAME} was {TITLE} of the {CHARACTER_FACTION_SHORT}. {FURTHER_DETAILS}.");
          parent.SetTextVariable("CHARACTER_FACTION_SHORT", hero.MapFaction.InformalName);
          parent.SetTextVariable("TITLE", HeroHelper.GetTitleInIndefiniteCase(hero));
        }
      }
      else if (hero.HomeSettlement != null)
      {
        parent = new TextObject("{=YNXK352h}{CHARACTER.NAME} was a prominent {.%}{PROFESSION}{.%} from {HOMETOWN}. {FURTHER_DETAILS}.");
        parent.SetTextVariable("PROFESSION", HeroHelper.GetCharacterTypeName(hero));
        parent.SetTextVariable("HOMETOWN", hero.HomeSettlement.Name);
      }
      else
        parent = new TextObject("{=!}{FURTHER_DETAILS}.");
      StringHelpers.SetCharacterProperties("CHARACTER", hero.CharacterObject, parent, true);
      TextObject empty = TextObject.Empty;
      TextObject textObject;
      switch (detail)
      {
        case KillCharacterAction.KillCharacterActionDetail.Murdered:
          textObject = new TextObject("{=TUDAvcTR}{?CHARACTER.GENDER}She{?}He{\\?} was assassinated in {YEAR} at the age of {CHARACTER.AGE}. {?CHARACTER.GENDER}She{?}He{\\?} was reputed to be {REPUTATION}");
          break;
        case KillCharacterAction.KillCharacterActionDetail.DiedInLabor:
          textObject = new TextObject("{=7Vw6iYNI}{?CHARACTER.GENDER}She{?}He{\\?} died in childbirth in {YEAR} at the age of {CHARACTER.AGE}. {?CHARACTER.GENDER}She{?}He{\\?} was reputed to be {REPUTATION}");
          break;
        case KillCharacterAction.KillCharacterActionDetail.DiedInBattle:
          textObject = new TextObject("{=6pCABUme}{?CHARACTER.GENDER}She{?}He{\\?} died in battle in {YEAR} at the age of {CHARACTER.AGE}. {?CHARACTER.GENDER}She{?}He{\\?} was reputed to be {REPUTATION}");
          break;
        case KillCharacterAction.KillCharacterActionDetail.WoundedInBattle:
          textObject = new TextObject("{=LsBCQtVX}{?CHARACTER.GENDER}She{?}He{\\?} died of war-wounds in {YEAR} at the age of {CHARACTER.AGE}. {?CHARACTER.GENDER}She{?}He{\\?} was reputed to be {REPUTATION}");
          break;
        case KillCharacterAction.KillCharacterActionDetail.Executed:
          textObject = new TextObject("{=9Tq3IAiz}{?CHARACTER.GENDER}She{?}He{\\?} was executed in {YEAR} at the age of {CHARACTER.AGE}. {?CHARACTER.GENDER}She{?}He{\\?} was reputed to be {REPUTATION}");
          break;
        case KillCharacterAction.KillCharacterActionDetail.Lost:
          textObject = new TextObject("{=SausWqM5}{?CHARACTER.GENDER}She{?}He{\\?} disappeared in {YEAR} at the age of {CHARACTER.AGE}. {?CHARACTER.GENDER}She{?}He{\\?} was reputed to be {REPUTATION}");
          break;
        default:
          textObject = new TextObject("{=HU5n5KTW}{?CHARACTER.GENDER}She{?}He{\\?} died of natural causes in {YEAR} at the age of {CHARACTER.AGE}. {?CHARACTER.GENDER}She{?}He{\\?} was reputed to be {REPUTATION}");
          break;
      }
      StringHelpers.SetCharacterProperties("CHARACTER", hero.CharacterObject, textObject, true);
      textObject.SetTextVariable("REPUTATION", CharacterHelper.GetReputationDescription(hero.CharacterObject));
      textObject.SetTextVariable("YEAR", CampaignTime.Now.GetYear.ToString());
      parent.SetTextVariable("FURTHER_DETAILS", textObject);
      return parent;
    }

    public enum KillCharacterActionDetail
    {
      None,
      Murdered,
      DiedInLabor,
      DiedOfOldAge,
      DiedInBattle,
      WoundedInBattle,
      Executed,
      Lost,
    }
  }
}

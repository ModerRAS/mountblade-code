// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.HeroSpawnCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class HeroSpawnCampaignBehavior : CampaignBehaviorBase
  {
    public const float DefaultHealingPercentage = 0.015f;
    private const float MinimumScoreForSafeSettlement = 10f;
    private const float CompanionMoveGoodEnoughScore = 1000f;

    public override void RegisterEvents()
    {
      CampaignEvents.OnNewGameCreatedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnNewGameCreated));
      CampaignEvents.OnNewGameCreatedPartialFollowUpEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter, int>(this.OnNewGameCreatedPartialFollowUp));
      CampaignEvents.OnNewGameCreatedPartialFollowUpEndEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnNewGameCreatedPartialFollowUpEnd));
      CampaignEvents.OnGovernorChangedEvent.AddNonSerializedListener((object) this, new Action<Town, Hero, Hero>(this.OnGovernorChanged));
      CampaignEvents.DailyTickClanEvent.AddNonSerializedListener((object) this, new Action<Clan>(this.OnNonBanditClanDailyTick));
      CampaignEvents.HeroComesOfAgeEvent.AddNonSerializedListener((object) this, new Action<Hero>(this.OnHeroComesOfAge));
      CampaignEvents.DailyTickHeroEvent.AddNonSerializedListener((object) this, new Action<Hero>(this.OnHeroDailyTick));
      CampaignEvents.CompanionRemoved.AddNonSerializedListener((object) this, new Action<Hero, RemoveCompanionAction.RemoveCompanionDetail>(this.OnCompanionRemoved));
    }

    private void OnNewGameCreatedPartialFollowUp(CampaignGameStarter starter, int i)
    {
      if (i == 0)
      {
        int heroComesOfAge = Campaign.Current.Models.AgeModel.HeroComesOfAge;
        foreach (Clan clan in (List<Clan>) Clan.All)
        {
          foreach (Hero hero in (List<Hero>) clan.Heroes)
          {
            if ((double) hero.Age >= (double) heroComesOfAge && hero.IsAlive && !hero.IsDisabled)
              hero.ChangeState(Hero.CharacterStates.Active);
          }
        }
      }
      int num1 = Clan.NonBanditFactions.Count<Clan>();
      int num2 = num1 / 100 + (num1 % 100 > i ? 1 : 0);
      int num3 = num1 / 100;
      for (int index = 0; index < i; ++index)
        num3 += num1 % 100 > index ? 1 : 0;
      for (int index = 0; index < num2; ++index)
        this.OnNonBanditClanDailyTick(Clan.NonBanditFactions.ElementAt<Clan>(num3 + index));
    }

    private void OnNewGameCreated(CampaignGameStarter starter)
    {
      foreach (Clan nonBanditFaction in Clan.NonBanditFactions)
      {
        if (!nonBanditFaction.IsEliminated && nonBanditFaction.IsMinorFaction && nonBanditFaction != Clan.PlayerClan)
        {
          HeroSpawnCampaignBehavior.SpawnMinorFactionHeroes(nonBanditFaction, true);
          HeroSpawnCampaignBehavior.CheckAndAssignClanLeader(nonBanditFaction);
          nonBanditFaction.UpdateHomeSettlement((Settlement) null);
        }
      }
    }

    private void OnNewGameCreatedPartialFollowUpEnd(CampaignGameStarter starter)
    {
      foreach (Hero allAliveHero in (List<Hero>) Hero.AllAliveHeroes)
      {
        if (allAliveHero.IsActive)
          this.OnHeroDailyTick(allAliveHero);
      }
    }

    private void OnHeroComesOfAge(Hero hero)
    {
      if (hero.IsDisabled || hero.HeroState == Hero.CharacterStates.Active || hero.IsTraveling)
        return;
      hero.ChangeState(Hero.CharacterStates.Active);
      TeleportHeroAction.ApplyImmediateTeleportToSettlement(hero, hero.HomeSettlement);
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private void OnCompanionRemoved(
      Hero companion,
      RemoveCompanionAction.RemoveCompanionDetail detail)
    {
      if (companion.IsFugitive || companion.IsDead || detail == RemoveCompanionAction.RemoveCompanionDetail.ByTurningToLord || detail == RemoveCompanionAction.RemoveCompanionDetail.Death || companion.DeathMark != KillCharacterAction.KillCharacterActionDetail.None)
        return;
      Settlement targetSettlement = this.FindASuitableSettlementToTeleportForHero(companion) ?? SettlementHelper.FindRandomSettlement((Func<Settlement, bool>) (x => x.IsTown));
      TeleportHeroAction.ApplyImmediateTeleportToSettlement(companion, targetSettlement);
    }

    private void OnHeroDailyTick(Hero hero)
    {
      Settlement targetSettlement = (Settlement) null;
      if (hero.IsFugitive || hero.IsReleased)
      {
        if (!hero.IsSpecial && (hero.IsPlayerCompanion || (double) MBRandom.RandomFloat < 0.30000001192092896 || hero.CurrentSettlement != null && hero.CurrentSettlement.MapFaction.IsAtWarWith(hero.MapFaction)))
          targetSettlement = this.FindASuitableSettlementToTeleportForHero(hero);
      }
      else if (hero.IsActive)
      {
        if (hero.CurrentSettlement == null && hero.PartyBelongedTo == null && !hero.IsSpecial && hero.GovernorOf == null)
        {
          if (MobileParty.MainParty.MemberRoster.Contains(hero.CharacterObject))
          {
            MobileParty.MainParty.MemberRoster.RemoveTroop(hero.CharacterObject);
            MobileParty.MainParty.MemberRoster.AddToCounts(hero.CharacterObject, 1);
          }
          else
            targetSettlement = this.FindASuitableSettlementToTeleportForHero(hero);
        }
        else if (this.CanHeroMoveToAnotherSettlement(hero))
          targetSettlement = this.FindASuitableSettlementToTeleportForHero(hero, 10f);
      }
      if (targetSettlement == null)
        return;
      TeleportHeroAction.ApplyImmediateTeleportToSettlement(hero, targetSettlement);
      if (hero.IsActive)
        return;
      hero.ChangeState(Hero.CharacterStates.Active);
    }

    private void OnNonBanditClanDailyTick(Clan clan)
    {
      if (clan.IsEliminated || clan == Clan.PlayerClan)
        return;
      if (clan.IsMinorFaction)
        HeroSpawnCampaignBehavior.SpawnMinorFactionHeroes(clan, false);
      this.ConsiderSpawningLordParties(clan);
    }

    private bool CanHeroMoveToAnotherSettlement(Hero hero)
    {
      return hero.Clan != Clan.PlayerClan && !hero.IsTemplate && hero.IsAlive && !hero.IsNotable && !hero.IsHumanPlayerCharacter && !hero.IsPartyLeader && !hero.IsPrisoner && hero.HeroState != Hero.CharacterStates.Disabled && hero.GovernorOf == null && hero.PartyBelongedTo == null && !hero.IsWanderer && hero.PartyBelongedToAsPrisoner == null && hero.CharacterObject.Occupation != Occupation.Special && (double) hero.Age >= (double) Campaign.Current.Models.AgeModel.HeroComesOfAge && (hero.CurrentSettlement?.Town == null || !hero.CurrentSettlement.Town.HasTournament && !hero.CurrentSettlement.IsUnderSiege) && hero.CanMoveToSettlement();
    }

    private Settlement FindASuitableSettlementToTeleportForHero(Hero hero, float minimumScore = 0.0f)
    {
      Settlement toTeleportForHero;
      if (hero.IsNotable)
      {
        toTeleportForHero = hero.BornSettlement;
      }
      else
      {
        List<Settlement> list = hero.MapFaction.Settlements.Where<Settlement>((Func<Settlement, bool>) (x => x.IsTown)).ToList<Settlement>();
        if (list.Count > 0)
        {
          List<(Settlement, float)> weightList = new List<(Settlement, float)>();
          foreach (Settlement settlement in list)
          {
            float moveScoreForHero = this.GetMoveScoreForHero(hero, settlement.Town);
            weightList.Add((settlement, (double) moveScoreForHero >= (double) minimumScore ? moveScoreForHero : 0.0f));
          }
          toTeleportForHero = MBRandom.ChooseWeighted<Settlement>((IReadOnlyList<(Settlement, float)>) weightList);
        }
        else
        {
          List<Settlement> settlementList1 = new List<Settlement>();
          List<Settlement> settlementList2 = new List<Settlement>();
          foreach (Town allTown in (List<Town>) Town.AllTowns)
          {
            if (allTown.MapFaction.IsAtWarWith(hero.MapFaction))
              settlementList2.Add(allTown.Settlement);
            else if (allTown.MapFaction != hero.MapFaction)
              settlementList1.Add(allTown.Settlement);
          }
          List<(Settlement, float)> weightList1 = new List<(Settlement, float)>();
          foreach (Settlement settlement in settlementList1)
          {
            float moveScoreForHero = this.GetMoveScoreForHero(hero, settlement.Town);
            weightList1.Add((settlement, (double) moveScoreForHero >= (double) minimumScore ? moveScoreForHero : 0.0f));
          }
          toTeleportForHero = MBRandom.ChooseWeighted<Settlement>((IReadOnlyList<(Settlement, float)>) weightList1);
          if (toTeleportForHero == null)
          {
            List<(Settlement, float)> weightList2 = new List<(Settlement, float)>();
            foreach (Settlement settlement in settlementList2)
            {
              float moveScoreForHero = this.GetMoveScoreForHero(hero, settlement.Town);
              weightList2.Add((settlement, (double) moveScoreForHero >= (double) minimumScore ? moveScoreForHero : 0.0f));
            }
            toTeleportForHero = MBRandom.ChooseWeighted<Settlement>((IReadOnlyList<(Settlement, float)>) weightList2);
          }
        }
      }
      return toTeleportForHero;
    }

    private float GetHeroPartyCommandScore(Hero hero)
    {
      return (float) (3.0 * (double) hero.GetSkillValue(DefaultSkills.Tactics) + 2.0 * (double) hero.GetSkillValue(DefaultSkills.Leadership) + (double) hero.GetSkillValue(DefaultSkills.Scouting) + (double) hero.GetSkillValue(DefaultSkills.Steward) + (double) hero.GetSkillValue(DefaultSkills.OneHanded) + (double) hero.GetSkillValue(DefaultSkills.TwoHanded) + (double) hero.GetSkillValue(DefaultSkills.Polearm) + (double) hero.GetSkillValue(DefaultSkills.Riding) + (hero.Clan.Leader == hero ? 1000.0 : 0.0) + (hero.GovernorOf == null ? 500.0 : 0.0));
    }

    private float GetMoveScoreForHero(Hero hero, Town fief)
    {
      Clan clan = hero.Clan;
      float moveScoreForHero = 1E-06f;
      if (!fief.IsUnderSiege && !fief.MapFaction.IsAtWarWith(hero.MapFaction))
      {
        moveScoreForHero = FactionManager.IsAlliedWithFaction(fief.MapFaction, hero.MapFaction) ? 0.01f : 1E-05f;
        if (fief.MapFaction == hero.MapFaction)
        {
          moveScoreForHero += 10f;
          if (fief.IsTown)
            moveScoreForHero += 100f;
          if (fief.OwnerClan == clan)
            moveScoreForHero += fief.IsTown ? 500f : 100f;
          if (fief.HasTournament)
            moveScoreForHero += 400f;
        }
        foreach (Hero hero1 in (List<Hero>) fief.Settlement.HeroesWithoutParty)
        {
          if (clan != null && hero1.Clan == clan)
            moveScoreForHero += fief.IsTown ? 100f : 10f;
        }
        if (fief.Settlement.IsStarving)
          moveScoreForHero *= 0.1f;
        if (hero.CurrentSettlement == fief.Settlement)
          moveScoreForHero *= 3f;
      }
      return moveScoreForHero;
    }

    private void ConsiderSpawningLordParties(Clan clan)
    {
      int partyLimitForTier = Campaign.Current.Models.ClanTierModel.GetPartyLimitForTier(clan, clan.Tier);
      int count = clan.WarPartyComponents.Count;
      if (count >= partyLimitForTier)
        return;
      int num = partyLimitForTier - count;
      for (int index = 0; index < num; ++index)
      {
        Hero availableCommander = this.GetBestAvailableCommander(clan);
        if (availableCommander == null)
          break;
        float scoreToCreateParty = this.CalculateScoreToCreateParty(clan);
        if ((double) this.GetHeroPartyCommandScore(availableCommander) + (double) scoreToCreateParty > 100.0)
        {
          MobileParty heroParty = this.SpawnLordParty(availableCommander);
          if (heroParty != null)
            this.GiveInitialItemsToParty(heroParty);
        }
      }
    }

    private float CalculateScoreToCreateParty(Clan clan)
    {
      return (float) ((double) (clan.Fiefs.Count * 100 - clan.WarPartyComponents.Count * 100) + (double) clan.Gold * 0.0099999997764825821 + (clan.IsMinorFaction ? 200.0 : 0.0) + (clan.WarPartyComponents.Count > 0 ? 0.0 : 200.0));
    }

    private Hero GetBestAvailableCommander(Clan clan)
    {
      Hero availableCommander = (Hero) null;
      float num = 0.0f;
      foreach (Hero hero in (List<Hero>) clan.Heroes)
      {
        if (hero.IsActive && hero.IsAlive && hero.PartyBelongedTo == null && hero.PartyBelongedToAsPrisoner == null && hero.CanLeadParty() && (double) hero.Age > (double) Campaign.Current.Models.AgeModel.HeroComesOfAge && hero.CharacterObject.Occupation == Occupation.Lord)
        {
          float partyCommandScore = this.GetHeroPartyCommandScore(hero);
          if ((double) partyCommandScore > (double) num)
          {
            num = partyCommandScore;
            availableCommander = hero;
          }
        }
      }
      if (availableCommander != null || clan == Clan.PlayerClan)
        return availableCommander;
      foreach (Hero hero in (List<Hero>) clan.Heroes)
      {
        if (hero.IsActive && hero.IsAlive && hero.PartyBelongedTo == null && hero.PartyBelongedToAsPrisoner == null && (double) hero.Age > (double) Campaign.Current.Models.AgeModel.HeroComesOfAge && hero.CharacterObject.Occupation == Occupation.Lord)
        {
          float partyCommandScore = this.GetHeroPartyCommandScore(hero);
          if ((double) partyCommandScore > (double) num)
          {
            num = partyCommandScore;
            availableCommander = hero;
          }
        }
      }
      return availableCommander;
    }

    private MobileParty SpawnLordParty(Hero hero)
    {
      if (hero.GovernorOf != null)
        ChangeGovernorAction.RemoveGovernorOf(hero);
      Settlement spawnSettlement = SettlementHelper.GetBestSettlementToSpawnAround(hero);
      MobileParty mobileParty;
      if (spawnSettlement != null && spawnSettlement.MapFaction == hero.MapFaction)
        mobileParty = MobilePartyHelper.SpawnLordParty(hero, spawnSettlement);
      else if (hero.MapFaction.InitialPosition.IsValid)
      {
        mobileParty = MobilePartyHelper.SpawnLordParty(hero, hero.MapFaction.InitialPosition, 30f);
      }
      else
      {
        foreach (Settlement settlement in (List<Settlement>) Settlement.All)
        {
          if (settlement.Culture == hero.Culture)
          {
            spawnSettlement = settlement;
            break;
          }
        }
        mobileParty = spawnSettlement == null ? MobilePartyHelper.SpawnLordParty(hero, Settlement.All.GetRandomElement<Settlement>()) : MobilePartyHelper.SpawnLordParty(hero, spawnSettlement);
      }
      return mobileParty;
    }

    private void GiveInitialItemsToParty(MobileParty heroParty)
    {
      float num1 = (float) ((254.0 + (double) Campaign.AverageDistanceBetweenTwoFortifications * 4.5399999618530273) / 2.0);
      foreach (Settlement settlement in (List<Settlement>) Campaign.Current.Settlements)
      {
        if (settlement.IsVillage)
        {
          float num2 = heroParty.Position2D.Distance(settlement.Position2D);
          if ((double) num2 < (double) num1)
          {
            foreach ((ItemObject itemObject, float num3) in (List<(ItemObject, float)>) settlement.Village.VillageType.Productions)
            {
              double num4 = itemObject.ItemType != ItemObject.ItemTypeEnum.Horse || !itemObject.HorseComponent.IsRideable || itemObject.HorseComponent.IsPackAnimal ? (itemObject.IsFood ? 0.10000000149011612 : 0.0) : 7.0;
              float num5 = (float) (((double) heroParty.MemberRoster.TotalManCount + 2.0) / 200.0);
              float num6 = (float) (1.0 - (double) num2 / (double) num1);
              double num7 = (double) num3;
              int number = MBRandom.RoundRandomized((float) (num4 * num7) * num6 * num5);
              if (number > 0)
                heroParty.ItemRoster.AddToCounts(itemObject, number);
            }
          }
        }
      }
    }

    private static void CheckAndAssignClanLeader(Clan clan)
    {
      if (clan.Leader != null && !clan.Leader.IsDead)
        return;
      Hero leader = clan.Lords.FirstOrDefaultQ<Hero>((Func<Hero, bool>) (x => x.IsAlive));
      if (leader != null)
        clan.SetLeader(leader);
      else
        Debug.FailedAssert("Cant find a lord to assign as leader to minor faction.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\CampaignBehaviors\\HeroSpawnCampaignBehavior.cs", nameof (CheckAndAssignClanLeader), 598);
    }

    private static Hero CreateMinorFactionHeroFromTemplate(CharacterObject template, Clan faction)
    {
      Hero specialHero = HeroCreator.CreateSpecialHero(template, faction: faction, age: Campaign.Current.GameStarted ? 19 : -1);
      specialHero.ChangeState(Campaign.Current.GameStarted ? Hero.CharacterStates.Active : Hero.CharacterStates.NotSpawned);
      specialHero.IsMinorFactionHero = true;
      return specialHero;
    }

    private static void SpawnMinorFactionHeroes(Clan clan, bool firstTime)
    {
      int num = Campaign.Current.Models.MinorFactionsModel.MinorFactionHeroLimit - clan.Lords.Count<Hero>((Func<Hero, bool>) (x => x.IsAlive));
      if (num <= 0)
        return;
      if (firstTime)
      {
        for (int index = 0; index < clan.MinorFactionCharacterTemplates.Count && num > 0; ++index)
        {
          HeroSpawnCampaignBehavior.CreateMinorFactionHeroFromTemplate(clan.MinorFactionCharacterTemplates[index], clan);
          --num;
        }
      }
      if (num <= 0)
        return;
      if (clan.MinorFactionCharacterTemplates == null || clan.MinorFactionCharacterTemplates.IsEmpty<CharacterObject>())
      {
        Debug.FailedAssert(string.Format("{0} templates are empty!", (object) clan.Name), "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\CampaignBehaviors\\HeroSpawnCampaignBehavior.cs", nameof (SpawnMinorFactionHeroes), 631);
      }
      else
      {
        for (int index = 0; index < num; ++index)
        {
          if ((double) MBRandom.RandomFloat < (double) Campaign.Current.Models.MinorFactionsModel.DailyMinorFactionHeroSpawnChance)
            HeroSpawnCampaignBehavior.CreateMinorFactionHeroFromTemplate(clan.MinorFactionCharacterTemplates.GetRandomElementInefficiently<CharacterObject>(), clan);
        }
      }
    }

    public void OnGovernorChanged(Town fortification, Hero oldGovernor, Hero newGovernor)
    {
      if (oldGovernor != null && oldGovernor.Clan != null)
      {
        foreach (Hero hero in (List<Hero>) oldGovernor.Clan.Heroes)
          hero.UpdateHomeSettlement();
      }
      if (newGovernor == null || newGovernor.Clan == null || oldGovernor != null && newGovernor.Clan == oldGovernor.Clan)
        return;
      foreach (Hero hero in (List<Hero>) newGovernor.Clan.Heroes)
        hero.UpdateHomeSettlement();
    }
  }
}

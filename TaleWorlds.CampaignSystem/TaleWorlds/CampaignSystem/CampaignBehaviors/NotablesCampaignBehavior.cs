// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.NotablesCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Party.PartyComponents;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Workshops;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class NotablesCampaignBehavior : CampaignBehaviorBase
  {
    private const int GoldLimitForNotablesToStartGainingPower = 10000;
    private const int GoldLimitForNotablesToStartLosingPower = 5000;
    private const int GoldNeededToGainOnePower = 500;
    private const int CaravanGoldLowLimit = 5000;
    private const int RemoveNotableCharacterAfterDays = 7;
    private Dictionary<Settlement, int> _settlementPassedDaysForWeeklyTick;

    public NotablesCampaignBehavior()
    {
      this._settlementPassedDaysForWeeklyTick = new Dictionary<Settlement, int>();
    }

    public override void RegisterEvents()
    {
      CampaignEvents.OnNewGameCreatedPartialFollowUpEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter, int>(this.OnNewGameCreatedPartialFollowUp));
      CampaignEvents.OnNewGameCreatedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnNewGameCreated));
      CampaignEvents.HeroKilledEvent.AddNonSerializedListener((object) this, new Action<Hero, Hero, KillCharacterAction.KillCharacterActionDetail, bool>(this.OnHeroKilled));
      CampaignEvents.OnGameLoadedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnGameLoaded));
      CampaignEvents.WeeklyTickEvent.AddNonSerializedListener((object) this, new Action(this.WeeklyTick));
      CampaignEvents.DailyTickHeroEvent.AddNonSerializedListener((object) this, new Action<Hero>(this.DailyTickHero));
      CampaignEvents.DailyTickSettlementEvent.AddNonSerializedListener((object) this, new Action<Settlement>(this.DailyTickSettlement));
    }

    private void WeeklyTick()
    {
      foreach (Hero hero in Hero.DeadOrDisabledHeroes.ToList<Hero>())
      {
        if (hero.IsDead && hero.IsNotable && (double) hero.DeathDay.ElapsedDaysUntilNow >= 7.0)
          Campaign.Current.CampaignObjectManager.UnregisterDeadHero(hero);
      }
    }

    private void OnGameLoaded(CampaignGameStarter campaignGameStarter) => this.WeeklyTick();

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<Dictionary<Settlement, int>>("_settlementPassedDaysForWeeklyTick", ref this._settlementPassedDaysForWeeklyTick);
    }

    public void OnNewGameCreated(CampaignGameStarter campaignGameStarter)
    {
      this.SpawnNotablesAtGameStart();
    }

    private void DetermineRelation(
      Hero hero1,
      Hero hero2,
      float randomValue,
      float chanceOfConflict)
    {
      float num = 0.3f;
      if ((double) randomValue < (double) num)
      {
        int relationChange = (int) (((double) num - (double) randomValue) * ((double) num - (double) randomValue) / ((double) num * (double) num) * 100.0);
        if (relationChange <= 0)
          return;
        ChangeRelationAction.ApplyRelationChangeBetweenHeroes(hero1, hero2, relationChange);
      }
      else
      {
        if ((double) randomValue <= 1.0 - (double) chanceOfConflict)
          return;
        int relationChange = -(int) (((double) randomValue - (1.0 - (double) chanceOfConflict)) * ((double) randomValue - (1.0 - (double) chanceOfConflict)) / ((double) chanceOfConflict * (double) chanceOfConflict) * 100.0);
        if (relationChange >= 0)
          return;
        ChangeRelationAction.ApplyRelationChangeBetweenHeroes(hero1, hero2, relationChange);
      }
    }

    public void SetInitialRelationsBetweenNotablesAndLords()
    {
      foreach (Settlement settlement1 in (List<Settlement>) Settlement.All)
      {
        for (int index1 = 0; index1 < settlement1.Notables.Count; ++index1)
        {
          Hero notable1 = settlement1.Notables[index1];
          foreach (Hero lord in (List<Hero>) settlement1.MapFaction.Lords)
          {
            if (lord != notable1 && lord == lord.Clan.Leader && lord.MapFaction == settlement1.MapFaction)
            {
              float chanceOfConflict = (float) ((double) HeroHelper.NPCPersonalityClashWithNPC(notable1, lord) * 0.0099999997764825821 * 2.5);
              float randomFloat = MBRandom.RandomFloat;
              float num1 = Campaign.MapDiagonal;
              foreach (Settlement settlement2 in (List<Settlement>) lord.Clan.Settlements)
              {
                float num2 = settlement1 == settlement2 ? 0.0f : settlement2.Position2D.Distance(settlement1.Position2D);
                if ((double) num2 < (double) num1)
                  num1 = num2;
              }
              float num3 = (double) num1 < 100.0 ? (float) (1.0 - (double) num1 / 100.0) : 0.0f;
              float num4 = (float) ((double) num3 * (double) MBRandom.RandomFloat + (1.0 - (double) num3));
              if ((double) MBRandom.RandomFloat < 0.20000000298023224)
                num4 = (float) (1.0 / (0.5 + 0.5 * (double) num4));
              float randomValue = randomFloat * num4;
              if ((double) randomValue > 1.0)
                randomValue = 1f;
              this.DetermineRelation(notable1, lord, randomValue, chanceOfConflict);
            }
            for (int index2 = index1 + 1; index2 < settlement1.Notables.Count; ++index2)
            {
              Hero notable2 = settlement1.Notables[index2];
              float chanceOfConflict = (float) ((double) HeroHelper.NPCPersonalityClashWithNPC(notable1, notable2) * 0.0099999997764825821 * 2.5);
              float randomValue = MBRandom.RandomFloat;
              if (notable1.CharacterObject.Occupation == notable2.CharacterObject.Occupation)
                randomValue = (float) (1.0 - 0.25 * (double) MBRandom.RandomFloat);
              this.DetermineRelation(notable1, notable2, randomValue, chanceOfConflict);
            }
          }
        }
      }
    }

    public void OnNewGameCreatedPartialFollowUp(CampaignGameStarter starter, int i)
    {
      if (i != 1)
        return;
      this.SetInitialRelationsBetweenNotablesAndLords();
      int num = 50;
      for (int index = 0; index < num; ++index)
      {
        foreach (Hero allAliveHero in (List<Hero>) Hero.AllAliveHeroes)
        {
          if (allAliveHero.IsNotable)
            this.UpdateNotableSupport(allAliveHero);
        }
      }
    }

    private void DailyTickSettlement(Settlement settlement)
    {
      if (this._settlementPassedDaysForWeeklyTick.ContainsKey(settlement))
      {
        this._settlementPassedDaysForWeeklyTick[settlement]++;
        if (this._settlementPassedDaysForWeeklyTick[settlement] != 7)
          return;
        SettlementHelper.SpawnNotablesIfNeeded(settlement);
        this._settlementPassedDaysForWeeklyTick[settlement] = 0;
      }
      else
        this._settlementPassedDaysForWeeklyTick.Add(settlement, 0);
    }

    private void UpdateNotableRelations(Hero notable)
    {
      foreach (Clan clan in (List<Clan>) Clan.All)
      {
        if (clan != Clan.PlayerClan && clan.Leader != null && !clan.IsEliminated)
        {
          int relation = notable.GetRelation(clan.Leader);
          if (relation > 0)
          {
            if ((double) MBRandom.RandomFloat < (double) ((float) relation / 1000f))
              ChangeRelationAction.ApplyRelationChangeBetweenHeroes(notable, clan.Leader, -20);
          }
          else if (relation < 0 && (double) MBRandom.RandomFloat < (double) ((float) -relation / 1000f))
            ChangeRelationAction.ApplyRelationChangeBetweenHeroes(notable, clan.Leader, 20);
        }
      }
    }

    private void UpdateNotableSupport(Hero notable)
    {
      if (notable.SupporterOf == null)
      {
        foreach (Clan nonBanditFaction in Clan.NonBanditFactions)
        {
          if (nonBanditFaction.Leader != null)
          {
            int relation = notable.GetRelation(nonBanditFaction.Leader);
            if (relation > 50 && (double) MBRandom.RandomFloat < (double) ((float) (relation - 50) / 2000f))
              notable.SupporterOf = nonBanditFaction;
          }
        }
      }
      else
      {
        int relation = notable.GetRelation(notable.SupporterOf.Leader);
        if (relation < 0)
        {
          notable.SupporterOf = (Clan) null;
        }
        else
        {
          if (relation >= 50 || (double) MBRandom.RandomFloat >= (double) ((float) (50 - relation) / 500f))
            return;
          notable.SupporterOf = (Clan) null;
        }
      }
    }

    private void BalanceGoldAndPowerOfNotable(Hero notable)
    {
      if (notable.Gold > 10500)
      {
        int num = (notable.Gold - 10000) / 500;
        GiveGoldAction.ApplyBetweenCharacters(notable, (Hero) null, num * 500, true);
        notable.AddPower((float) num);
      }
      else
      {
        if (notable.Gold >= 4500 || (double) notable.Power <= 0.0)
          return;
        int num = (5000 - notable.Gold) / 500;
        GiveGoldAction.ApplyBetweenCharacters((Hero) null, notable, num * 500, true);
        notable.AddPower((float) -num);
      }
    }

    private void DailyTickHero(Hero hero)
    {
      if (!hero.IsNotable || hero.CurrentSettlement == null)
        return;
      if ((double) MBRandom.RandomFloat < 0.0099999997764825821)
        this.UpdateNotableRelations(hero);
      this.UpdateNotableSupport(hero);
      this.BalanceGoldAndPowerOfNotable(hero);
      this.ManageCaravanExpensesOfNotable(hero);
      this.CheckAndMakeNotableDisappear(hero);
    }

    private void CheckAndMakeNotableDisappear(Hero notable)
    {
      if (!notable.OwnedWorkshops.IsEmpty<Workshop>() || !notable.OwnedCaravans.IsEmpty<CaravanPartyComponent>() || !notable.OwnedAlleys.IsEmpty<Alley>() || !notable.CanDie(KillCharacterAction.KillCharacterActionDetail.Lost) || !notable.CanHaveQuestsOrIssues() || (double) notable.Power >= (double) Campaign.Current.Models.NotablePowerModel.NotableDisappearPowerLimit || (double) MBRandom.RandomFloat >= (double) this.GetNotableDisappearProbability(notable))
        return;
      KillCharacterAction.ApplyByRemove(notable);
      notable.Issue?.CompleteIssueWithAiLord(notable.CurrentSettlement.OwnerClan.Leader);
    }

    private void ManageCaravanExpensesOfNotable(Hero notable)
    {
      for (int index = notable.OwnedCaravans.Count - 1; index >= 0; --index)
      {
        CaravanPartyComponent ownedCaravan = notable.OwnedCaravans[index];
        int totalWage = ownedCaravan.MobileParty.TotalWage;
        if (ownedCaravan.MobileParty.PartyTradeGold >= totalWage)
        {
          ownedCaravan.MobileParty.PartyTradeGold -= totalWage;
        }
        else
        {
          int num = MathF.Min(totalWage, notable.Gold);
          notable.Gold -= num;
        }
        if (ownedCaravan.MobileParty.PartyTradeGold < 5000)
        {
          int num = MathF.Min(5000 - ownedCaravan.MobileParty.PartyTradeGold, notable.Gold);
          ownedCaravan.MobileParty.PartyTradeGold += num;
          notable.Gold -= num;
        }
      }
    }

    private float GetNotableDisappearProbability(Hero hero)
    {
      return (float) (((double) Campaign.Current.Models.NotablePowerModel.NotableDisappearPowerLimit - (double) hero.Power) / (double) Campaign.Current.Models.NotablePowerModel.NotableDisappearPowerLimit * 0.019999999552965164);
    }

    private void OnHeroKilled(
      Hero victim,
      Hero killer,
      KillCharacterAction.KillCharacterActionDetail detail,
      bool showNotification)
    {
      if (!victim.IsNotable)
        return;
      if ((double) victim.Power >= (double) Campaign.Current.Models.NotablePowerModel.NotableDisappearPowerLimit)
      {
        Hero relativeNotableHero = HeroCreator.CreateRelativeNotableHero(victim);
        if (victim.CurrentSettlement != null)
          this.ChangeDeadNotable(victim, relativeNotableHero, victim.CurrentSettlement);
        foreach (PartyComponent partyComponent in victim.OwnedCaravans.ToList<CaravanPartyComponent>())
          CaravanPartyComponent.TransferCaravanOwnership(partyComponent.MobileParty, relativeNotableHero, relativeNotableHero.CurrentSettlement);
      }
      else
      {
        foreach (PartyComponent partyComponent in victim.OwnedCaravans.ToList<CaravanPartyComponent>())
          DestroyPartyAction.Apply((PartyBase) null, partyComponent.MobileParty);
      }
    }

    private void ChangeDeadNotable(Hero deadNotable, Hero newNotable, Settlement notableSettlement)
    {
      EnterSettlementAction.ApplyForCharacterOnly(newNotable, notableSettlement);
      foreach (Hero allAliveHero in (List<Hero>) Hero.AllAliveHeroes)
      {
        if (newNotable != allAliveHero)
        {
          int relation = deadNotable.GetRelation(allAliveHero);
          if (Math.Abs(relation) >= 20 || relation != 0 && allAliveHero.CurrentSettlement == notableSettlement)
            newNotable.SetPersonalRelation(allAliveHero, relation);
        }
      }
      if (deadNotable.Issue == null)
        return;
      Campaign.Current.IssueManager.ChangeIssueOwner(deadNotable.Issue, newNotable);
    }

    private void SpawnNotablesAtGameStart()
    {
      foreach (Settlement settlement in (List<Settlement>) Settlement.All)
      {
        if (settlement.IsTown)
        {
          int countForSettlement1 = Campaign.Current.Models.NotableSpawnModel.GetTargetNotableCountForSettlement(settlement, Occupation.Artisan);
          for (int index = 0; index < countForSettlement1; ++index)
            HeroCreator.CreateHeroAtOccupation(Occupation.Artisan, settlement);
          int countForSettlement2 = Campaign.Current.Models.NotableSpawnModel.GetTargetNotableCountForSettlement(settlement, Occupation.Merchant);
          for (int index = 0; index < countForSettlement2; ++index)
            HeroCreator.CreateHeroAtOccupation(Occupation.Merchant, settlement);
          int countForSettlement3 = Campaign.Current.Models.NotableSpawnModel.GetTargetNotableCountForSettlement(settlement, Occupation.GangLeader);
          for (int index = 0; index < countForSettlement3; ++index)
            HeroCreator.CreateHeroAtOccupation(Occupation.GangLeader, settlement);
        }
        else if (settlement.IsVillage)
        {
          int countForSettlement4 = Campaign.Current.Models.NotableSpawnModel.GetTargetNotableCountForSettlement(settlement, Occupation.RuralNotable);
          for (int index = 0; index < countForSettlement4; ++index)
            HeroCreator.CreateHeroAtOccupation(Occupation.RuralNotable, settlement);
          int countForSettlement5 = Campaign.Current.Models.NotableSpawnModel.GetTargetNotableCountForSettlement(settlement, Occupation.Headman);
          for (int index = 0; index < countForSettlement5; ++index)
            HeroCreator.CreateHeroAtOccupation(Occupation.Headman, settlement);
        }
      }
    }
  }
}

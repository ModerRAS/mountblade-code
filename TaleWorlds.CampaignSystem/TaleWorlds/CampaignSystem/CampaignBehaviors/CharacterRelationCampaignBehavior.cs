// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.CharacterRelationCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class CharacterRelationCampaignBehavior : CampaignBehaviorBase
  {
    private const int RelationPenaltyFactor = 6;
    private const int RelationIncreaseBetweenHeroesAfterMarriage = 30;

    public override void RegisterEvents()
    {
      CampaignEvents.OnSettlementOwnerChangedEvent.AddNonSerializedListener((object) this, new Action<Settlement, bool, Hero, Hero, Hero, ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail>(this.OnSettlementOwnerChanged));
      CampaignEvents.DailyTickEvent.AddNonSerializedListener((object) this, new Action(this.DailyTick));
      CampaignEvents.OnNewGameCreatedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.UpdateFriendshipAndEnemies));
      CampaignEvents.RaidCompletedEvent.AddNonSerializedListener((object) this, new Action<BattleSideEnum, RaidEventComponent>(this.OnRaidCompleted));
      CampaignEvents.DailyTickPartyEvent.AddNonSerializedListener((object) this, new Action<MobileParty>(this.DailyTickParty));
      CampaignEvents.MapEventEnded.AddNonSerializedListener((object) this, new Action<MapEvent>(this.MapEventEnded));
      CampaignEvents.OnPrisonerDonatedToSettlementEvent.AddNonSerializedListener((object) this, new Action<MobileParty, FlattenedTroopRoster, Settlement>(this.OnPrisonerDonatedToSettlement));
      CampaignEvents.HeroRelationChanged.AddNonSerializedListener((object) this, new Action<Hero, Hero, int, bool, ChangeRelationAction.ChangeRelationDetail, Hero, Hero>(this.OnHeroRelationChanged));
      CampaignEvents.HeroesMarried.AddNonSerializedListener((object) this, new Action<Hero, Hero, bool>(CharacterRelationCampaignBehavior.OnHeroesMarried));
      CampaignEvents.OnHeroUnregisteredEvent.AddNonSerializedListener((object) this, new Action<Hero>(this.OnHeroUnregistered));
    }

    private void OnHeroUnregistered(Hero hero)
    {
      Campaign.Current.CharacterRelationManager.RemoveHero(hero);
    }

    private void OnHeroRelationChanged(
      Hero effectiveHero,
      Hero effectiveHeroGainedRelationWith,
      int relationChange,
      bool showNotification,
      ChangeRelationAction.ChangeRelationDetail detail,
      Hero originalHero,
      Hero originalGainedRelationWith)
    {
      if (relationChange <= 0)
        return;
      SkillLevelingManager.OnGainRelation(originalHero, effectiveHeroGainedRelationWith, (float) relationChange, detail);
    }

    private void MapEventEnded(MapEvent mapEvent)
    {
      if (mapEvent.EventType != MapEvent.BattleTypes.FieldBattle && mapEvent.EventType != MapEvent.BattleTypes.Siege && mapEvent.EventType != MapEvent.BattleTypes.SiegeOutside || !mapEvent.HasWinner)
        return;
      MapEventSide winnerSide = mapEvent.Winner;
      MapEventSide otherSide = winnerSide.OtherSide;
      bool flag = false;
      foreach (MapEventParty party in (List<MapEventParty>) otherSide.Parties)
      {
        if (party.Party.IsMobile && party.Party.MobileParty.IsLordParty)
        {
          flag = true;
          break;
        }
      }
      if (!flag)
        return;
      Hero leaderHero1 = winnerSide.LeaderParty.LeaderHero;
      if ((leaderHero1 != null ? (leaderHero1.GetPerkValue(DefaultPerks.Charm.Oratory) ? 1 : 0) : 0) != 0)
      {
        Hero elementWithPredicate = Hero.AllAliveHeroes.GetRandomElementWithPredicate<Hero>((Func<Hero, bool>) (x => x.IsActive && x.IsNotable && x.CurrentSettlement?.MapFaction == winnerSide.LeaderParty.MapFaction));
        if (elementWithPredicate != null)
          ChangeRelationAction.ApplyRelationChangeBetweenHeroes(winnerSide.LeaderParty.LeaderHero, elementWithPredicate, (int) DefaultPerks.Charm.Oratory.SecondaryBonus);
      }
      Hero leaderHero2 = winnerSide.LeaderParty.LeaderHero;
      if ((leaderHero2 != null ? (leaderHero2.GetPerkValue(DefaultPerks.Charm.Warlord) ? 1 : 0) : 0) == 0)
        return;
      Hero elementWithPredicate1 = winnerSide.LeaderParty.MapFaction.Lords.GetRandomElementWithPredicate<Hero>((Func<Hero, bool>) (x => x.IsAlive && x != winnerSide.LeaderParty.LeaderHero));
      if (elementWithPredicate1 == null)
        return;
      ChangeRelationAction.ApplyRelationChangeBetweenHeroes(winnerSide.LeaderParty.LeaderHero, elementWithPredicate1, (int) DefaultPerks.Charm.Warlord.SecondaryBonus);
    }

    private void OnPrisonerDonatedToSettlement(
      MobileParty donatingParty,
      FlattenedTroopRoster donatedPrisoners,
      Settlement donatedSettlement)
    {
      if (!donatingParty.IsMainParty)
        return;
      foreach (FlattenedTroopRosterElement donatedPrisoner in donatedPrisoners)
      {
        if (donatedPrisoner.Troop.IsHero)
        {
          float heroPrisonerDonate = Campaign.Current.Models.PrisonerDonationModel.CalculateRelationGainAfterHeroPrisonerDonate(donatingParty.Party, donatedPrisoner.Troop.HeroObject, donatedSettlement);
          if ((double) heroPrisonerDonate != 0.0)
            ChangeRelationAction.ApplyRelationChangeBetweenHeroes(Hero.MainHero, donatedSettlement.OwnerClan.Leader, (int) heroPrisonerDonate);
        }
      }
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private void UpdateFriendshipAndEnemies(CampaignGameStarter campaignGameStarter)
    {
      List<Hero> heroList = new List<Hero>(Campaign.Current.AliveHeroes.Count + Campaign.Current.DeadOrDisabledHeroes.Count);
      foreach (Hero aliveHero in (List<Hero>) Campaign.Current.AliveHeroes)
      {
        if (aliveHero.IsLord && aliveHero != Hero.MainHero && aliveHero.MapFaction != null && aliveHero.MapFaction?.Leader != Hero.MainHero)
          heroList.Add(aliveHero);
      }
      foreach (Hero deadOrDisabledHero in (List<Hero>) Campaign.Current.DeadOrDisabledHeroes)
      {
        if (deadOrDisabledHero.IsLord && deadOrDisabledHero != Hero.MainHero && deadOrDisabledHero.MapFaction != null && deadOrDisabledHero.MapFaction?.Leader != Hero.MainHero)
          heroList.Add(deadOrDisabledHero);
      }
      for (int index1 = 0; index1 < heroList.Count; ++index1)
      {
        Hero hero1 = heroList[index1];
        for (int index2 = index1 + 1; index2 < heroList.Count; ++index2)
        {
          Hero hero2 = heroList[index2];
          float x = (float) (1.0 / (2.0 + 5.0 * ((double) Campaign.Current.Models.MapDistanceModel.GetDistance(hero1.MapFaction.FactionMidSettlement, hero2.MapFaction.FactionMidSettlement) / (double) Campaign.MaximumDistanceBetweenTwoSettlements)));
          if (hero1 == hero1.MapFaction.Leader || hero2 == hero2.MapFaction.Leader)
            x = MathF.Sqrt(x);
          if ((double) MBRandom.RandomFloat < (double) x)
          {
            float num1 = MBRandom.RandomFloat + (float) HeroHelper.NPCPersonalityClashWithNPC(hero1, hero2) * 0.01f * MBRandom.RandomFloat - 0.04f;
            float randomValue;
            if (hero1.MapFaction == hero2.MapFaction)
            {
              float num2 = (float) (1.0 - (double) MBRandom.RandomFloat * (double) MBRandom.RandomFloat);
              randomValue = num1 * num2;
              if (hero1 == hero1.MapFaction.Leader || hero2 == hero2.MapFaction.Leader)
              {
                float num3 = (float) (1.0 - (double) MBRandom.RandomFloat * (double) MBRandom.RandomFloat);
                randomValue *= num3;
              }
            }
            else
            {
              float num4 = (float) (1.0 + (double) MBRandom.RandomFloat * (double) MBRandom.RandomFloat * (double) MBRandom.RandomFloat);
              randomValue = num1 * num4;
            }
            this.DetermineRelation(hero1, hero2, randomValue);
          }
        }
      }
    }

    private void DetermineRelation(Hero hero1, Hero hero2, float randomValue)
    {
      float num1 = 0.3f;
      float num2 = 0.3f;
      if ((double) randomValue < (double) num1)
      {
        int num3 = (int) (((double) num1 - (double) randomValue) * ((double) num1 - (double) randomValue) / ((double) num1 * (double) num1) * 100.0);
        if (num3 <= 0)
          return;
        hero1.SetPersonalRelation(hero2, num3);
      }
      else
      {
        if ((double) randomValue <= 1.0 - (double) num2)
          return;
        int num4 = -(int) (((double) randomValue - (1.0 - (double) num2)) * ((double) randomValue - (1.0 - (double) num2)) / ((double) num2 * (double) num2) * 100.0);
        if (num4 >= 0)
          return;
        hero1.SetPersonalRelation(hero2, num4);
      }
    }

    private void DailyTickParty(MobileParty mobileParty)
    {
      if (mobileParty.LeaderHero == null)
        return;
      Settlement currentSettlement = mobileParty.CurrentSettlement;
      if ((currentSettlement != null ? (currentSettlement.IsTown ? 1 : 0) : 0) != 0 && mobileParty.CurrentSettlement.SiegeEvent == null)
      {
        if (mobileParty.LeaderHero.GetPerkValue(DefaultPerks.Medicine.BestMedicine))
        {
          Hero elementWithPredicate = mobileParty.CurrentSettlement.Notables.GetRandomElementWithPredicate<Hero>((Func<Hero, bool>) (x => (double) x.Age >= 40.0 && x.IsAlive));
          if (elementWithPredicate != null)
            ChangeRelationAction.ApplyRelationChangeBetweenHeroes(mobileParty.LeaderHero, elementWithPredicate, (int) DefaultPerks.Medicine.BestMedicine.SecondaryBonus);
        }
        if (mobileParty.LeaderHero.GetPerkValue(DefaultPerks.Medicine.GoodLogdings))
        {
          Hero randomElement = TownHelpers.GetHeroesInSettlement(mobileParty.CurrentSettlement, (Predicate<Hero>) (x => (double) x.Age >= 40.0 && x != mobileParty.LeaderHero && x.IsLord)).GetRandomElement<Hero>();
          if (randomElement != null)
            ChangeRelationAction.ApplyRelationChangeBetweenHeroes(mobileParty.LeaderHero, randomElement, (int) DefaultPerks.Medicine.GoodLogdings.SecondaryBonus);
        }
      }
      if (mobileParty.Army == null || !mobileParty.LeaderHero.GetPerkValue(DefaultPerks.Charm.Parade) || (double) MBRandom.RandomFloat >= (double) DefaultPerks.Charm.Parade.SecondaryBonus)
        return;
      MobileParty elementWithPredicate1 = mobileParty.Army.Parties.GetRandomElementWithPredicate<MobileParty>((Func<MobileParty, bool>) (x => x.MemberRoster.GetTroopRoster().AnyQ<TroopRosterElement>((Func<TroopRosterElement, bool>) (y => y.Character.IsHero && y.Character.Occupation == Occupation.Lord && y.Character.HeroObject != mobileParty.LeaderHero))));
      if (elementWithPredicate1 == null)
        return;
      Hero heroObject = elementWithPredicate1.MemberRoster.GetTroopRoster().GetRandomElementWithPredicate<TroopRosterElement>((Func<TroopRosterElement, bool>) (x => x.Character.IsHero && x.Character.Occupation == Occupation.Lord && x.Character.HeroObject != mobileParty.LeaderHero)).Character?.HeroObject;
      if (heroObject == null)
        return;
      ChangeRelationAction.ApplyRelationChangeBetweenHeroes(mobileParty.LeaderHero, heroObject, 1);
    }

    private void DailyTick()
    {
      if (Settlement.CurrentSettlement != null && Hero.MainHero.GetPerkValue(DefaultPerks.Charm.ForgivableGrievances) && (double) MBRandom.RandomFloat < (double) DefaultPerks.Charm.ForgivableGrievances.SecondaryBonus)
      {
        MBList<Hero> e = new MBList<Hero>();
        foreach (Hero hero in SettlementHelper.GetAllHeroesOfSettlement(Settlement.CurrentSettlement, true))
        {
          if (!hero.IsHumanPlayerCharacter && (double) hero.GetRelationWithPlayer() < 0.0)
            e.Add(hero);
        }
        if (e.Count > 0)
          ChangeRelationAction.ApplyPlayerRelation(e.GetRandomElement<Hero>(), 1);
      }
      SettlementLoyaltyModel settlementLoyaltyModel = Campaign.Current.Models.SettlementLoyaltyModel;
      SettlementSecurityModel settlementSecurityModel = Campaign.Current.Models.SettlementSecurityModel;
      bool flag1 = false;
      bool flag2 = false;
      float num = 0.05f;
      foreach (Settlement settlement in (List<Settlement>) Settlement.All)
      {
        if (settlement.IsTown)
        {
          if ((double) settlement.Town.Security >= (double) settlementSecurityModel.ThresholdForNotableRelationBonus)
          {
            foreach (Hero notable in (List<Hero>) settlement.Notables)
            {
              if ((notable.IsArtisan || notable.IsMerchant) && (double) MBRandom.RandomFloat < (double) num)
              {
                ChangeRelationAction.ApplyRelationChangeBetweenHeroes(settlement.OwnerClan.Leader, notable, settlementSecurityModel.DailyNotableRelationBonus, false);
                flag2 = flag2 || settlement.OwnerClan.Leader.IsHumanPlayerCharacter;
              }
            }
          }
          else if ((double) settlement.Town.Security < (double) settlementSecurityModel.ThresholdForNotableRelationPenalty)
          {
            foreach (Hero notable in (List<Hero>) settlement.Notables)
            {
              if ((notable.IsArtisan || notable.IsMerchant) && (double) MBRandom.RandomFloat < (double) num)
              {
                notable.AddPower((float) settlementSecurityModel.DailyNotablePowerPenalty);
                ChangeRelationAction.ApplyRelationChangeBetweenHeroes(settlement.OwnerClan.Leader, notable, settlementSecurityModel.DailyNotableRelationPenalty, false);
              }
            }
            foreach (Hero notable in (List<Hero>) settlement.Notables)
            {
              if (notable.IsGangLeader && (double) MBRandom.RandomFloat < (double) num)
                notable.AddPower((float) settlementSecurityModel.DailyNotablePowerBonus);
            }
          }
        }
        else if (settlement.IsVillage && (double) settlement.Village.Bound.Town.Loyalty >= (double) settlementLoyaltyModel.ThresholdForNotableRelationBonus)
        {
          foreach (Hero notable in (List<Hero>) settlement.Notables)
          {
            if ((notable.IsHeadman || notable.IsRuralNotable) && (double) MBRandom.RandomFloat < (double) num)
            {
              ChangeRelationAction.ApplyRelationChangeBetweenHeroes(settlement.OwnerClan.Leader, notable, settlementLoyaltyModel.DailyNotableRelationBonus, false);
              flag1 = flag1 || settlement.OwnerClan.Leader.IsHumanPlayerCharacter;
            }
          }
        }
      }
      if (flag2)
        InformationManager.DisplayMessage(new InformationMessage(new TextObject("{=ME5hmllb}Your relation with notables in some of your settlements increased due to high security").ToString()));
      if (!flag1)
        return;
      InformationManager.DisplayMessage(new InformationMessage(new TextObject("{=0h5BrVdA}Your relation with notables in some of your settlements increased due to high loyalty").ToString()));
    }

    public void OnSettlementOwnerChanged(
      Settlement settlement,
      bool openToClaim,
      Hero newOwner,
      Hero oldOwner,
      Hero capturerHero,
      ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail detail)
    {
      if (detail != ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail.BySiege && detail != ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail.ByBarter && detail != ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail.ByRevolt || oldOwner == null || oldOwner.MapFaction == null || oldOwner.MapFaction.Leader == oldOwner || !oldOwner.IsAlive || oldOwner.MapFaction.Leader == Hero.MainHero)
        return;
      int num = (int) ((1.0 + (double) MathF.Max(1f, MathF.Sqrt(settlement.GetValue() / 100000f))) * (newOwner.MapFaction != oldOwner.MapFaction ? 1.0 : 0.5));
      ChangeRelationAction.ApplyRelationChangeBetweenHeroes(oldOwner, oldOwner.MapFaction.Leader, -num, false);
      if (capturerHero != null && capturerHero.Clan != capturerHero.MapFaction.Leader.Clan)
        ChangeRelationAction.ApplyRelationChangeBetweenHeroes(capturerHero, capturerHero.MapFaction.Leader, num / 2, false);
      if (oldOwner.Clan == null || settlement == null)
        return;
      ChangeClanInfluenceAction.Apply(oldOwner.Clan, settlement.IsTown ? -50f : -25f);
    }

    private void OnRaidCompleted(BattleSideEnum winnerSide, RaidEventComponent raidEvent)
    {
      MapEvent mapEvent = raidEvent.MapEvent;
      PartyBase leaderParty1 = mapEvent.AttackerSide.LeaderParty;
      Hero leaderHero = leaderParty1?.LeaderHero;
      PartyBase leaderParty2 = mapEvent.DefenderSide.LeaderParty;
      if (leaderParty1 == null || leaderParty1.MapFaction == mapEvent.MapEventSettlement.MapFaction || winnerSide != BattleSideEnum.Attacker || leaderHero == null || leaderParty2 == null || !leaderParty2.IsSettlement || !leaderParty2.Settlement.IsVillage || leaderParty2.Settlement.OwnerClan == Clan.PlayerClan)
        return;
      int relationChange1 = -MathF.Ceiling(6f * raidEvent.RaidDamage);
      int relationChange2 = -MathF.Ceiling((float) (6.0 * (double) raidEvent.RaidDamage * 0.5));
      if (relationChange1 < 0)
        ChangeRelationAction.ApplyRelationChangeBetweenHeroes(leaderHero, leaderParty2.Settlement.OwnerClan.Leader, relationChange1);
      if (relationChange2 >= 0)
        return;
      foreach (Hero notable in (List<Hero>) leaderParty2.Settlement.Notables)
        ChangeRelationAction.ApplyRelationChangeBetweenHeroes(leaderHero, notable, relationChange2);
    }

    private static void OnHeroesMarried(Hero firstHero, Hero secondHero, bool showNotification)
    {
      ChangeRelationAction.ApplyRelationChangeBetweenHeroes(firstHero, secondHero, 30, false);
    }
  }
}

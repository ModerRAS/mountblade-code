// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CharacterDevelopment.DefaultSkillLevelingManager
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Conversation.Persuasion;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.CharacterDevelopment
{
  public class DefaultSkillLevelingManager : ISkillLevelingManager
  {
    private const float TacticsXpCoefficient = 0.02f;

    public void OnCombatHit(
      CharacterObject affectorCharacter,
      CharacterObject affectedCharacter,
      CharacterObject captain,
      Hero commander,
      float speedBonusFromMovement,
      float shotDifficulty,
      WeaponComponentData affectorWeapon,
      float hitPointRatio,
      CombatXpModel.MissionTypeEnum missionType,
      bool isAffectorMounted,
      bool isTeamKill,
      bool isAffectorUnderCommand,
      float damageAmount,
      bool isFatal,
      bool isSiegeEngineHit,
      bool isHorseCharge)
    {
      if (isTeamKill)
        return;
      float f = 1f;
      if (affectorCharacter.IsHero)
      {
        Hero heroObject = affectorCharacter.HeroObject;
        int xpAmount;
        Campaign.Current.Models.CombatXpModel.GetXpFromHit(heroObject.CharacterObject, captain, affectedCharacter, heroObject.PartyBelongedTo?.Party, (int) damageAmount, isFatal, missionType, out xpAmount);
        f = (float) xpAmount;
        SkillObject skill;
        if (affectorWeapon != null)
        {
          skill = Campaign.Current.Models.CombatXpModel.GetSkillForWeapon(affectorWeapon, isSiegeEngineHit);
          float num = skill == DefaultSkills.Bow ? 0.5f : 1f;
          if ((double) shotDifficulty > 0.0)
            f += (float) MathF.Floor(f * num * Campaign.Current.Models.CombatXpModel.GetXpMultiplierFromShotDifficulty(shotDifficulty));
        }
        else
          skill = isHorseCharge ? DefaultSkills.Riding : DefaultSkills.Athletics;
        heroObject.AddSkillXp(skill, (float) MBRandom.RoundRandomized(f));
        if (!isSiegeEngineHit && !isHorseCharge)
        {
          float num1 = shotDifficulty * 0.15f;
          if (isAffectorMounted)
          {
            float num2 = 0.5f;
            if ((double) num1 > 0.0)
              num2 += num1;
            if ((double) speedBonusFromMovement > 0.0)
              num2 *= 1f + speedBonusFromMovement;
            if ((double) num2 > 0.0)
              DefaultSkillLevelingManager.OnGainingRidingExperience(heroObject, (float) MBRandom.RoundRandomized(num2 * f), heroObject.CharacterObject.Equipment.Horse.Item);
          }
          else
          {
            float num3 = 1f;
            if ((double) num1 > 0.0)
              num3 += num1;
            if ((double) speedBonusFromMovement > 0.0)
              num3 += 1.5f * speedBonusFromMovement;
            if ((double) num3 > 0.0)
              heroObject.AddSkillXp(DefaultSkills.Athletics, (float) MBRandom.RoundRandomized(num3 * f));
          }
        }
      }
      if (commander == null || commander == affectorCharacter.HeroObject || commander.PartyBelongedTo == null)
        return;
      this.OnTacticsUsed(commander.PartyBelongedTo, (float) MathF.Ceiling(0.02f * f));
    }

    public void OnSiegeEngineDestroyed(MobileParty party, SiegeEngineType destroyedSiegeEngine)
    {
      if (party?.EffectiveEngineer == null)
        return;
      float skillXp = (float) destroyedSiegeEngine.ManDayCost * 20f;
      DefaultSkillLevelingManager.OnPartySkillExercised(party, DefaultSkills.Engineering, skillXp, SkillEffect.PerkRole.Engineer);
    }

    public void OnSimulationCombatKill(
      CharacterObject affectorCharacter,
      CharacterObject affectedCharacter,
      PartyBase affectorParty,
      PartyBase commanderParty)
    {
      int xpReward = Campaign.Current.Models.PartyTrainingModel.GetXpReward(affectedCharacter);
      if (affectorCharacter.IsHero)
      {
        ItemObject defaultWeapon = CharacterHelper.GetDefaultWeapon(affectorCharacter);
        Hero heroObject = affectorCharacter.HeroObject;
        if (defaultWeapon != null)
        {
          SkillObject skillForWeapon = Campaign.Current.Models.CombatXpModel.GetSkillForWeapon(defaultWeapon.GetWeaponWithUsageIndex(0), false);
          heroObject.AddSkillXp(skillForWeapon, (float) xpReward);
        }
        if (affectorCharacter.IsMounted)
        {
          float f = (float) xpReward * 0.3f;
          DefaultSkillLevelingManager.OnGainingRidingExperience(heroObject, (float) MBRandom.RoundRandomized(f), heroObject.CharacterObject.Equipment.Horse.Item);
        }
        else
        {
          float f = (float) xpReward * 0.3f;
          heroObject.AddSkillXp(DefaultSkills.Athletics, (float) MBRandom.RoundRandomized(f));
        }
      }
      if (commanderParty == null || !commanderParty.IsMobile || commanderParty.LeaderHero == null || commanderParty.LeaderHero == affectedCharacter.HeroObject)
        return;
      this.OnTacticsUsed(commanderParty.MobileParty, (float) MathF.Ceiling(0.02f * (float) xpReward));
    }

    public void OnTradeProfitMade(PartyBase party, int tradeProfit)
    {
      if (tradeProfit <= 0)
        return;
      float skillXp = (float) tradeProfit * 0.5f;
      DefaultSkillLevelingManager.OnPartySkillExercised(party.MobileParty, DefaultSkills.Trade, skillXp);
    }

    public void OnTradeProfitMade(Hero hero, int tradeProfit)
    {
      if (tradeProfit <= 0)
        return;
      float skillXp = (float) tradeProfit * 0.5f;
      DefaultSkillLevelingManager.OnPersonalSkillExercised(hero, DefaultSkills.Trade, skillXp, hero == Hero.MainHero);
    }

    public void OnSettlementProjectFinished(Settlement settlement)
    {
      DefaultSkillLevelingManager.OnSettlementSkillExercised(settlement, DefaultSkills.Steward, 1000f);
    }

    public void OnSettlementGoverned(Hero governor, Settlement settlement)
    {
      float prosperityChange = settlement.Town.ProsperityChange;
      if ((double) prosperityChange <= 0.0)
        return;
      float skillXp = prosperityChange * 30f;
      DefaultSkillLevelingManager.OnPersonalSkillExercised(governor, DefaultSkills.Steward, skillXp);
    }

    public void OnInfluenceSpent(Hero hero, float amountSpent)
    {
      if (hero.PartyBelongedTo == null)
        return;
      float skillXp = 10f * amountSpent;
      DefaultSkillLevelingManager.OnPartySkillExercised(hero.PartyBelongedTo, DefaultSkills.Steward, skillXp);
    }

    public void OnGainRelation(
      Hero hero,
      Hero gainedRelationWith,
      float relationChange,
      ChangeRelationAction.ChangeRelationDetail detail = ChangeRelationAction.ChangeRelationDetail.Default)
    {
      if (hero.PartyBelongedTo == null && detail != ChangeRelationAction.ChangeRelationDetail.Emissary || (double) relationChange <= 0.0)
        return;
      int fromRelationGain = Campaign.Current.Models.DiplomacyModel.GetCharmExperienceFromRelationGain(gainedRelationWith, relationChange, detail);
      if (hero.PartyBelongedTo != null)
        DefaultSkillLevelingManager.OnPartySkillExercised(hero.PartyBelongedTo, DefaultSkills.Charm, (float) fromRelationGain);
      else
        DefaultSkillLevelingManager.OnPersonalSkillExercised(hero, DefaultSkills.Charm, (float) fromRelationGain);
    }

    public void OnTroopRecruited(Hero hero, int amount, int tier)
    {
      if (amount <= 0)
        return;
      int skillXp = amount * tier * 2;
      DefaultSkillLevelingManager.OnPersonalSkillExercised(hero, DefaultSkills.Leadership, (float) skillXp);
    }

    public void OnBribeGiven(int amount)
    {
      if (amount <= 0)
        return;
      DefaultSkillLevelingManager.OnPartySkillExercised(MobileParty.MainParty, DefaultSkills.Roguery, (float) amount * 0.1f);
    }

    public void OnBanditsRecruited(MobileParty mobileParty, CharacterObject bandit, int count)
    {
      if (count <= 0)
        return;
      DefaultSkillLevelingManager.OnPersonalSkillExercised(mobileParty.LeaderHero, DefaultSkills.Roguery, (float) (count * 2 * bandit.Tier));
    }

    public void OnMainHeroReleasedFromCaptivity(float captivityTime)
    {
      DefaultSkillLevelingManager.OnPersonalSkillExercised(Hero.MainHero, DefaultSkills.Roguery, captivityTime * 0.5f);
    }

    public void OnMainHeroTortured()
    {
      DefaultSkillLevelingManager.OnPersonalSkillExercised(Hero.MainHero, DefaultSkills.Roguery, MBRandom.RandomFloatRanged(50f, 100f));
    }

    public void OnMainHeroDisguised(bool isNotCaught)
    {
      DefaultSkillLevelingManager.OnPartySkillExercised(MobileParty.MainParty, DefaultSkills.Roguery, isNotCaught ? MBRandom.RandomFloatRanged(10f, 25f) : MBRandom.RandomFloatRanged(1f, 10f));
    }

    public void OnRaid(MobileParty attackerParty, ItemRoster lootedItems)
    {
      if (attackerParty.LeaderHero == null)
        return;
      float skillXp = (float) lootedItems.TradeGoodsTotalValue * 0.5f;
      DefaultSkillLevelingManager.OnPersonalSkillExercised(attackerParty.LeaderHero, DefaultSkills.Roguery, skillXp);
    }

    public void OnLoot(
      MobileParty attackerParty,
      MobileParty forcedParty,
      ItemRoster lootedItems,
      bool attacked)
    {
      if (attackerParty.LeaderHero == null)
        return;
      float num = 0.0f;
      if (forcedParty.IsVillager)
        num = attacked ? 0.75f : 0.5f;
      else if (forcedParty.IsCaravan)
        num = attacked ? 0.15f : 0.1f;
      float skillXp = (float) lootedItems.TradeGoodsTotalValue * num;
      DefaultSkillLevelingManager.OnPersonalSkillExercised(attackerParty.LeaderHero, DefaultSkills.Roguery, skillXp);
    }

    public void OnPrisonerSell(MobileParty mobileParty, in TroopRoster prisonerRoster)
    {
      int num = 0;
      for (int index = 0; index < prisonerRoster.Count; ++index)
        num += prisonerRoster.data[index].Character.Tier * prisonerRoster.data[index].Number;
      int skillXp = num * 2;
      DefaultSkillLevelingManager.OnPartySkillExercised(mobileParty, DefaultSkills.Roguery, (float) skillXp);
    }

    public void OnSurgeryApplied(MobileParty party, bool surgerySuccess, int troopTier)
    {
      float skillXp = surgerySuccess ? (float) (10 * troopTier) : (float) (5 * troopTier);
      DefaultSkillLevelingManager.OnPartySkillExercised(party, DefaultSkills.Medicine, skillXp, SkillEffect.PerkRole.Surgeon);
    }

    public void OnTacticsUsed(MobileParty party, float xp)
    {
      if ((double) xp <= 0.0)
        return;
      DefaultSkillLevelingManager.OnPartySkillExercised(party, DefaultSkills.Tactics, xp);
    }

    public void OnHideoutSpotted(MobileParty party, PartyBase spottedParty)
    {
      DefaultSkillLevelingManager.OnPartySkillExercised(party, DefaultSkills.Scouting, 100f, SkillEffect.PerkRole.Scout);
    }

    public void OnTrackDetected(Track track)
    {
      DefaultSkillLevelingManager.OnPartySkillExercised(MobileParty.MainParty, DefaultSkills.Scouting, Campaign.Current.Models.MapTrackModel.GetSkillFromTrackDetected(track), SkillEffect.PerkRole.Scout);
    }

    public void OnTravelOnFoot(Hero hero, float speed)
    {
      hero.AddSkillXp(DefaultSkills.Athletics, (float) (MBRandom.RoundRandomized(0.2f * speed) + 1));
    }

    public void OnTravelOnHorse(Hero hero, float speed)
    {
      ItemObject horse = hero.CharacterObject.Equipment.Horse.Item;
      DefaultSkillLevelingManager.OnGainingRidingExperience(hero, (float) MBRandom.RoundRandomized(0.3f * speed), horse);
    }

    public void OnHeroHealedWhileWaiting(Hero hero, int healingAmount)
    {
      if (hero.PartyBelongedTo == null || hero.PartyBelongedTo.EffectiveSurgeon == null)
        return;
      float fromHealingTroop = (float) Campaign.Current.Models.PartyHealingModel.GetSkillXpFromHealingTroop(hero.PartyBelongedTo.Party);
      float num = hero.PartyBelongedTo.CurrentSettlement == null || hero.PartyBelongedTo.CurrentSettlement.IsCastle ? 0.1f : 0.2f;
      float skillXp = fromHealingTroop * (float) ((double) healingAmount * (double) num * (1.0 + (double) hero.PartyBelongedTo.EffectiveSurgeon.Level * 0.10000000149011612));
      DefaultSkillLevelingManager.OnPartySkillExercised(hero.PartyBelongedTo, DefaultSkills.Medicine, skillXp, SkillEffect.PerkRole.Surgeon);
    }

    public void OnRegularTroopHealedWhileWaiting(
      MobileParty mobileParty,
      int healedTroopCount,
      float averageTier)
    {
      float skillXp = (float) (Campaign.Current.Models.PartyHealingModel.GetSkillXpFromHealingTroop(mobileParty.Party) * healedTroopCount) * averageTier * (mobileParty.CurrentSettlement == null || mobileParty.CurrentSettlement.IsCastle ? 1f : 2f);
      DefaultSkillLevelingManager.OnPartySkillExercised(mobileParty, DefaultSkills.Medicine, skillXp, SkillEffect.PerkRole.Surgeon);
    }

    public void OnLeadingArmy(MobileParty mobileParty)
    {
      float skillXp = mobileParty.GetTotalStrengthWithFollowers() * 0.0004f * mobileParty.Army.Morale;
      DefaultSkillLevelingManager.OnPartySkillExercised(mobileParty, DefaultSkills.Leadership, skillXp);
    }

    public void OnSieging(MobileParty mobileParty)
    {
      int totalManCount = mobileParty.MemberRoster.TotalManCount;
      if (mobileParty.Army != null && mobileParty.Army.LeaderParty == mobileParty)
      {
        foreach (MobileParty party in (List<MobileParty>) mobileParty.Army.Parties)
        {
          if (party != mobileParty)
            totalManCount += party.MemberRoster.TotalManCount;
        }
      }
      float skillXp = 0.25f * MathF.Sqrt((float) totalManCount);
      DefaultSkillLevelingManager.OnPartySkillExercised(mobileParty, DefaultSkills.Engineering, skillXp, SkillEffect.PerkRole.Engineer);
    }

    public void OnSiegeEngineBuilt(MobileParty mobileParty, SiegeEngineType siegeEngine)
    {
      float skillXp = (float) (30.0 + 2.0 * (double) siegeEngine.Difficulty);
      DefaultSkillLevelingManager.OnPartySkillExercised(mobileParty, DefaultSkills.Engineering, skillXp, SkillEffect.PerkRole.Engineer);
    }

    public void OnUpgradeTroops(
      PartyBase party,
      CharacterObject troop,
      CharacterObject upgrade,
      int numberOfTroops)
    {
      Hero hero = party.LeaderHero ?? party.Owner;
      if (hero == null)
        return;
      SkillObject skill = DefaultSkills.Leadership;
      float num = 0.025f;
      if (troop.Occupation == Occupation.Bandit)
      {
        skill = DefaultSkills.Roguery;
        num = 0.05f;
      }
      float xpAmount = (float) Campaign.Current.Models.PartyTroopUpgradeModel.GetXpCostForUpgrade(party, troop, upgrade) * num * (float) numberOfTroops;
      hero.AddSkillXp(skill, xpAmount);
    }

    public void OnPersuasionSucceeded(
      Hero targetHero,
      SkillObject skill,
      PersuasionDifficulty difficulty,
      int argumentDifficultyBonusCoefficient)
    {
      float xpFromPersuasion = (float) Campaign.Current.Models.PersuasionModel.GetSkillXpFromPersuasion(difficulty, argumentDifficultyBonusCoefficient);
      if ((double) xpFromPersuasion <= 0.0)
        return;
      targetHero.AddSkillXp(skill, xpFromPersuasion);
    }

    public void OnPrisonBreakEnd(Hero prisonerHero, bool isSucceeded)
    {
      float rewardOnPrisonBreak = Campaign.Current.Models.PrisonBreakModel.GetRogueryRewardOnPrisonBreak(prisonerHero, isSucceeded);
      if ((double) rewardOnPrisonBreak <= 0.0)
        return;
      Hero.MainHero.AddSkillXp(DefaultSkills.Roguery, rewardOnPrisonBreak);
    }

    public void OnWallBreached(MobileParty party)
    {
      if (party?.EffectiveEngineer == null)
        return;
      DefaultSkillLevelingManager.OnPartySkillExercised(party, DefaultSkills.Engineering, 250f, SkillEffect.PerkRole.Engineer);
    }

    public void OnForceVolunteers(MobileParty attackerParty, PartyBase forcedParty)
    {
      if (attackerParty.LeaderHero == null)
        return;
      int skillXp = MathF.Ceiling(forcedParty.Settlement.Village.Hearth / 10f);
      DefaultSkillLevelingManager.OnPersonalSkillExercised(attackerParty.LeaderHero, DefaultSkills.Roguery, (float) skillXp);
    }

    public void OnForceSupplies(MobileParty attackerParty, ItemRoster lootedItems, bool attacked)
    {
      if (attackerParty.LeaderHero == null)
        return;
      float num = attacked ? 0.75f : 0.5f;
      float skillXp = (float) lootedItems.TradeGoodsTotalValue * num;
      DefaultSkillLevelingManager.OnPersonalSkillExercised(attackerParty.LeaderHero, DefaultSkills.Roguery, skillXp);
    }

    public void OnAIPartiesTravel(Hero hero, bool isCaravanParty, TerrainType currentTerrainType)
    {
      int num = currentTerrainType == TerrainType.Forest ? MBRandom.RoundRandomized(5f) : MBRandom.RoundRandomized(3f);
      hero.AddSkillXp(DefaultSkills.Scouting, isCaravanParty ? (float) num / 2f : (float) num);
    }

    public void OnTraverseTerrain(MobileParty mobileParty, TerrainType currentTerrainType)
    {
      float skillXp = 0.0f;
      float speed = mobileParty.Speed;
      if ((double) speed > 1.0)
      {
        bool flag = currentTerrainType == TerrainType.Desert || currentTerrainType == TerrainType.Dune || currentTerrainType == TerrainType.Forest || currentTerrainType == TerrainType.Snow;
        skillXp = (float) ((double) speed * (1.0 + (double) MathF.Pow((float) mobileParty.MemberRoster.TotalManCount, 0.66f)) * (flag ? 0.25 : 0.15000000596046448));
      }
      if (mobileParty.IsCaravan)
        skillXp *= 0.5f;
      if ((double) skillXp < 5.0)
        return;
      DefaultSkillLevelingManager.OnPartySkillExercised(mobileParty, DefaultSkills.Scouting, skillXp, SkillEffect.PerkRole.Scout);
    }

    public void OnBattleEnd(PartyBase party, FlattenedTroopRoster flattenedTroopRoster)
    {
      Hero hero = party.LeaderHero ?? party.Owner;
      if (hero == null || !hero.IsAlive)
        return;
      Dictionary<SkillObject, float> dictionary = new Dictionary<SkillObject, float>();
      foreach (FlattenedTroopRosterElement troopRosterElement in flattenedTroopRoster)
      {
        CharacterObject troop = troopRosterElement.Troop;
        bool flag = MobilePartyHelper.CanTroopGainXp(party, troop, out int _);
        if (!troopRosterElement.IsKilled && troopRosterElement.XpGained > 0 && !flag)
        {
          float num1 = troop.Occupation == Occupation.Bandit ? 0.05f : 0.025f;
          float num2 = (float) troopRosterElement.XpGained * num1;
          SkillObject key = troop.Occupation == Occupation.Bandit ? DefaultSkills.Roguery : DefaultSkills.Leadership;
          float num3;
          dictionary[key] = !dictionary.TryGetValue(key, out num3) ? num2 : num3 + num2;
        }
      }
      foreach (SkillObject key in dictionary.Keys)
      {
        if ((double) dictionary[key] > 0.0)
          hero.AddSkillXp(key, dictionary[key]);
      }
    }

    public void OnFoodConsumed(MobileParty mobileParty, bool wasStarving)
    {
      if (wasStarving || mobileParty.ItemRoster.FoodVariety <= 3 || mobileParty.EffectiveQuartermaster == null)
        return;
      float skillXp = (float) (MathF.Round((float) (-(double) mobileParty.BaseFoodChange * 100.0)) * (mobileParty.ItemRoster.FoodVariety - 2) / 3);
      DefaultSkillLevelingManager.OnPartySkillExercised(mobileParty, DefaultSkills.Steward, skillXp, SkillEffect.PerkRole.Quartermaster);
    }

    public void OnAlleyCleared(Alley alley)
    {
      Hero.MainHero.AddSkillXp(DefaultSkills.Roguery, Campaign.Current.Models.AlleyModel.GetInitialXpGainForMainHero());
    }

    public void OnDailyAlleyTick(Alley alley, Hero alleyLeader)
    {
      Hero.MainHero.AddSkillXp(DefaultSkills.Roguery, Campaign.Current.Models.AlleyModel.GetDailyXpGainForMainHero());
      if (alleyLeader == null || alleyLeader.IsDead)
        return;
      alleyLeader.AddSkillXp(DefaultSkills.Roguery, Campaign.Current.Models.AlleyModel.GetDailyXpGainForAssignedClanMember(alleyLeader));
    }

    public void OnBoardGameWonAgainstLord(
      Hero lord,
      BoardGameHelper.AIDifficulty difficulty,
      bool extraXpGain)
    {
      switch (difficulty)
      {
        case BoardGameHelper.AIDifficulty.Easy:
          Hero.MainHero.AddSkillXp(DefaultSkills.Steward, 20f);
          break;
        case BoardGameHelper.AIDifficulty.Normal:
          Hero.MainHero.AddSkillXp(DefaultSkills.Steward, 50f);
          break;
        case BoardGameHelper.AIDifficulty.Hard:
          Hero.MainHero.AddSkillXp(DefaultSkills.Steward, 100f);
          break;
      }
      if (!extraXpGain)
        return;
      lord.AddSkillXp(DefaultSkills.Steward, 100f);
    }

    public void OnWarehouseProduction(EquipmentElement production)
    {
      Hero.MainHero.AddSkillXp(DefaultSkills.Trade, Campaign.Current.Models.WorkshopModel.GetTradeXpPerWarehouseProduction(production));
    }

    private static void OnPersonalSkillExercised(
      Hero hero,
      SkillObject skill,
      float skillXp,
      bool shouldNotify = true)
    {
      hero?.HeroDeveloper.AddSkillXp(skill, skillXp, shouldNotify: shouldNotify);
    }

    private static void OnSettlementSkillExercised(
      Settlement settlement,
      SkillObject skill,
      float skillXp)
    {
      (settlement.Town?.Governor ?? (settlement.OwnerClan.Leader.CurrentSettlement == settlement ? settlement.OwnerClan.Leader : (Hero) null))?.AddSkillXp(skill, skillXp);
    }

    private static void OnGainingRidingExperience(Hero hero, float baseXpAmount, ItemObject horse)
    {
      if (horse == null)
        return;
      float num = (float) (1.0 + (double) horse.Difficulty * 0.019999999552965164);
      hero.AddSkillXp(DefaultSkills.Riding, baseXpAmount * num);
    }

    private static void OnPartySkillExercised(
      MobileParty party,
      SkillObject skill,
      float skillXp,
      SkillEffect.PerkRole perkRole = SkillEffect.PerkRole.PartyLeader)
    {
      party.GetEffectiveRoleHolder(perkRole)?.AddSkillXp(skill, skillXp);
    }

    void ISkillLevelingManager.OnPrisonerSell(
      MobileParty mobileParty,
      in TroopRoster prisonerRoster)
    {
      this.OnPrisonerSell(mobileParty, in prisonerRoster);
    }
  }
}

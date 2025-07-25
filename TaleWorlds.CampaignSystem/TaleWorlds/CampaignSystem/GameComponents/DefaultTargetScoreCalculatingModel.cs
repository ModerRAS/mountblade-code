// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultTargetScoreCalculatingModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Map;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Party.PartyComponents;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultTargetScoreCalculatingModel : TargetScoreCalculatingModel
  {
    private const float SiegeBaseValueFactor = 0.8f;
    private const float RaidBaseValueFactor = 0.28f;
    private const float DefenceBaseValueFactor = 1.28f;
    private const float DefenceVillageBaseValueFactor = 1.28f;
    private const float DefenceFollowEnemyBaseValueFactor = 0.8f;
    private const float MeaningfulCohesionThresholdForArmy = 40f;

    public override float TravelingToAssignmentFactor => 1.33f;

    public override float BesiegingFactor => 1.67f;

    public override float AssaultingTownFactor => 2f;

    public override float RaidingFactor => 1.67f;

    public override float DefendingFactor => 1.67f;

    private float ReasonableDistanceForBesiegingTown
    {
      get
      {
        return (float) (((double) sbyte.MaxValue + 2.2699999809265137 * (double) Campaign.AverageDistanceBetweenTwoFortifications) / 2.0);
      }
    }

    private float ReasonableDistanceForBesiegingCastle
    {
      get
      {
        return (float) ((106.0 + 1.8899999856948853 * (double) Campaign.AverageDistanceBetweenTwoFortifications) / 2.0);
      }
    }

    private float ReasonableDistanceForRaiding
    {
      get
      {
        return (float) ((106.0 + 1.8899999856948853 * (double) Campaign.AverageDistanceBetweenTwoFortifications) / 2.0);
      }
    }

    private float ReasonableDistanceForDefendingTownOrCastle
    {
      get
      {
        return (float) ((160.0 + 2.8399999141693115 * (double) Campaign.AverageDistanceBetweenTwoFortifications) / 2.0);
      }
    }

    private float ReasonableDistanceForDefendingVillage
    {
      get
      {
        return (float) ((80.0 + 1.4199999570846558 * (double) Campaign.AverageDistanceBetweenTwoFortifications) / 2.0);
      }
    }

    private float DistanceOfMobilePartyDivider
    {
      get
      {
        return (float) ((254.0 + 4.5399999618530273 * (double) Campaign.AverageDistanceBetweenTwoFortifications) / 2.0);
      }
    }

    private float RaidDistanceLimit
    {
      get
      {
        return (float) ((318.0 + 5.679999828338623 * (double) Campaign.AverageDistanceBetweenTwoFortifications) / 2.0);
      }
    }

    private float GiveUpDistanceLimit
    {
      get
      {
        return (float) (((double) sbyte.MaxValue + 2.2699999809265137 * (double) Campaign.AverageDistanceBetweenTwoFortifications) / 2.0);
      }
    }

    public override float CurrentObjectiveValue(MobileParty mobileParty)
    {
      float strengthWithFollowers = mobileParty.GetTotalStrengthWithFollowers(false);
      float num = 0.0f;
      if (mobileParty.TargetSettlement == null)
        return 0.0f;
      if (mobileParty.DefaultBehavior != AiBehavior.BesiegeSettlement && mobileParty.DefaultBehavior != AiBehavior.RaidSettlement && mobileParty.DefaultBehavior != AiBehavior.DefendSettlement)
        return num;
      int count = mobileParty.TargetSettlement.MapFaction.Settlements.Count;
      float totalStrength = mobileParty.TargetSettlement.MapFaction.TotalStrength;
      float targetScoreForFaction = this.GetTargetScoreForFaction(mobileParty.TargetSettlement, mobileParty.DefaultBehavior == AiBehavior.BesiegeSettlement ? Army.ArmyTypes.Besieger : (mobileParty.DefaultBehavior == AiBehavior.RaidSettlement ? Army.ArmyTypes.Raider : Army.ArmyTypes.Defender), mobileParty, strengthWithFollowers, count, totalStrength);
      switch (mobileParty.DefaultBehavior)
      {
        case AiBehavior.RaidSettlement:
          targetScoreForFaction *= mobileParty.Party.MapEvent == null || mobileParty.MapEvent.MapEventSettlement != mobileParty.TargetSettlement ? this.TravelingToAssignmentFactor : this.RaidingFactor;
          break;
        case AiBehavior.BesiegeSettlement:
          targetScoreForFaction *= mobileParty.Party.MapEvent != null || mobileParty.TargetSettlement.SiegeEvent == null || !mobileParty.TargetSettlement.SiegeEvent.BesiegerCamp.HasInvolvedPartyForEventType(mobileParty.Party, MapEvent.BattleTypes.Siege) ? (mobileParty.Party.MapEvent == null || mobileParty.Party.MapEvent.MapEventSettlement != mobileParty.TargetSettlement ? this.TravelingToAssignmentFactor : this.AssaultingTownFactor) : this.BesiegingFactor;
          break;
        case AiBehavior.DefendSettlement:
          targetScoreForFaction *= mobileParty.Party.MapEvent == null || mobileParty.MapEvent.MapEventSettlement != mobileParty.TargetSettlement ? this.TravelingToAssignmentFactor : this.DefendingFactor;
          break;
      }
      return targetScoreForFaction;
    }

    public override float CalculatePatrollingScoreForSettlement(
      Settlement settlement,
      MobileParty mobileParty)
    {
      bool flag = mobileParty.Army != null && mobileParty.Army.LeaderParty == mobileParty && mobileParty.Army.AIBehavior != Army.AIBehaviorFlags.Gathering && mobileParty.Army.AIBehavior != Army.AIBehaviorFlags.WaitingForArmyMembers;
      if (mobileParty.Army != null && !flag && (double) mobileParty.Army.Cohesion > (double) mobileParty.Army.CohesionThresholdForDispersion)
        return 0.0f;
      float num1 = mobileParty.LeaderHero == null || mobileParty.LeaderHero.Clan == null || mobileParty.LeaderHero.Clan.Fiefs.Count <= 0 ? 0.5f : mobileParty.LeaderHero.RandomFloat(0.2f, 0.4f) + (float) MathF.Min(4, mobileParty.LeaderHero.Clan.Fiefs.Count - 1) * 0.05f + mobileParty.LeaderHero.RandomFloatWithSeed((uint) CampaignTime.Now.ToHours, 0.2f);
      float num2 = (float) (1.0 - (double) num1 + (mobileParty.LeaderHero?.Clan == null || settlement.OwnerClan != mobileParty.LeaderHero.Clan && mobileParty.LeaderHero.Clan.Settlements.Count != 0 ? 0.0 : (double) num1));
      float num3 = (float) (1.0 - ((double) (settlement.Position2D - mobileParty.Position2D).Length + 50.0) / (double) Campaign.MapDiagonal);
      float num4 = mobileParty.IsBandit ? num3 * num3 * num3 * num3 * num3 * num3 : num3 * num3 * num3 * num3;
      float num5 = 1f;
      if (settlement.MapFaction == mobileParty.MapFaction)
      {
        float b = MathF.Max(0.0f, settlement.NumberOfEnemiesSpottedAround - settlement.NumberOfAlliesSpottedAround * 0.25f);
        if ((double) b > 1.0)
        {
          int num6 = 0;
          foreach (PartyComponent warPartyComponent in (List<WarPartyComponent>) mobileParty.MapFaction.WarPartyComponents)
          {
            MobileParty mobileParty1 = warPartyComponent.MobileParty;
            if (mobileParty1 != mobileParty && (mobileParty1.Army == null || mobileParty1.Army != mobileParty.Army) && (mobileParty1.Army == null || mobileParty1.Army.LeaderParty == mobileParty) && mobileParty1.DefaultBehavior == AiBehavior.PatrolAroundPoint && mobileParty1.TargetSettlement == settlement)
              ++num6;
          }
          num5 += MathF.Pow(MathF.Min(10f, b), 0.25f) - (float) num6;
        }
        else
          num5 += b;
      }
      float num7 = mobileParty.Army == null || mobileParty.Army.LeaderParty == mobileParty ? 1f : ((float) mobileParty.Army.CohesionThresholdForDispersion - mobileParty.Army.Cohesion) / (float) mobileParty.Army.CohesionThresholdForDispersion;
      return (float) ((mobileParty.MapFaction.IsMinorFaction ? 1.5 : 1.0) * (double) num5 * (double) num2 * (double) num4 * (double) num7 * 0.36000001430511475);
    }

    public override float GetTargetScoreForFaction(
      Settlement targetSettlement,
      Army.ArmyTypes missionType,
      MobileParty mobileParty,
      float ourStrength,
      int numberOfEnemyFactionSettlements = -1,
      float totalEnemyMobilePartyStrength = -1f)
    {
      float powerScore = 0.0f;
      float distanceScore = 0.0f;
      float settlementImportanceScore = 0.0f;
      return this.GetTargetScoreForFaction(targetSettlement, missionType, mobileParty, ourStrength, out powerScore, out distanceScore, out settlementImportanceScore, numberOfEnemyFactionSettlements, totalEnemyMobilePartyStrength);
    }

    private float GetTargetScoreForFaction(
      Settlement targetSettlement,
      Army.ArmyTypes missionType,
      MobileParty mobileParty,
      float ourStrength,
      out float powerScore,
      out float distanceScore,
      out float settlementImportanceScore,
      int numberOfEnemyFactionSettlements = -1,
      float totalEnemyMobilePartyStrength = -1f)
    {
      IFaction mapFaction = mobileParty.MapFaction;
      if ((missionType == Army.ArmyTypes.Besieger || missionType == Army.ArmyTypes.Raider) && !FactionManager.IsAtWarAgainstFaction(targetSettlement.MapFaction, mapFaction) || missionType == Army.ArmyTypes.Raider && (targetSettlement.Village.VillageState != Village.VillageStates.Normal || targetSettlement.Party.MapEvent != null) && (mobileParty.MapEvent == null || mobileParty.MapEvent.MapEventSettlement != targetSettlement) || missionType == Army.ArmyTypes.Besieger && (targetSettlement.Party.MapEvent != null || targetSettlement.SiegeEvent != null) && (targetSettlement.SiegeEvent == null || targetSettlement.SiegeEvent.BesiegerCamp.LeaderParty.MapFaction != mobileParty.MapFaction) && (mobileParty.MapEvent == null || mobileParty.MapEvent.MapEventSettlement != targetSettlement) || missionType == Army.ArmyTypes.Defender && (targetSettlement.LastAttackerParty == null || !targetSettlement.LastAttackerParty.IsActive || targetSettlement.LastAttackerParty.MapFaction == mobileParty.MapFaction || targetSettlement.MapFaction != mobileParty.MapFaction))
      {
        powerScore = 0.0f;
        distanceScore = 0.0f;
        settlementImportanceScore = 0.0f;
        return 0.0f;
      }
      if (mobileParty.Objective == MobileParty.PartyObjective.Defensive && (missionType == Army.ArmyTypes.Besieger || missionType == Army.ArmyTypes.Raider))
      {
        powerScore = 0.0f;
        distanceScore = 0.0f;
        settlementImportanceScore = 0.0f;
        return 0.0f;
      }
      if (mobileParty.Objective == MobileParty.PartyObjective.Aggressive && (missionType == Army.ArmyTypes.Defender || missionType == Army.ArmyTypes.Patrolling))
      {
        powerScore = 0.0f;
        distanceScore = 0.0f;
        settlementImportanceScore = 0.0f;
        return 0.0f;
      }
      if (missionType == Army.ArmyTypes.Defender)
      {
        MobileParty lastAttackerParty = targetSettlement.LastAttackerParty;
        if (lastAttackerParty == null || !mobileParty.MapFaction.IsAtWarWith(lastAttackerParty.MapFaction))
        {
          powerScore = 0.0f;
          distanceScore = 0.0f;
          settlementImportanceScore = 0.0f;
          return 0.0f;
        }
      }
      if (mobileParty.Army == null && missionType == Army.ArmyTypes.Besieger && (targetSettlement.Party.MapEvent == null || targetSettlement.Party.MapEvent.AttackerSide.LeaderParty == mobileParty.Party ? (targetSettlement.Party.SiegeEvent == null ? 0 : (mobileParty.BesiegedSettlement != targetSettlement ? 1 : 0)) : 1) != 0)
      {
        powerScore = 0.0f;
        distanceScore = 0.0f;
        settlementImportanceScore = 0.0f;
        return 0.0f;
      }
      float distance1 = Campaign.Current.Models.MapDistanceModel.GetDistance(mapFaction.FactionMidSettlement, targetSettlement);
      float distance2 = Campaign.Current.Models.MapDistanceModel.GetDistance(mobileParty, targetSettlement);
      float num1 = Campaign.MapDiagonalSquared;
      float num2 = Campaign.MapDiagonalSquared;
      int x1 = 0;
      int x2 = 0;
      Settlement toSettlement1 = (Settlement) null;
      Settlement toSettlement2 = (Settlement) null;
      foreach (Settlement settlement in (List<Settlement>) mobileParty.MapFaction.Settlements)
      {
        if (settlement.IsTown)
        {
          float num3 = settlement.Position2D.DistanceSquared(targetSettlement.Position2D);
          if ((double) num1 > (double) num3)
          {
            num1 = num3;
            toSettlement1 = settlement;
          }
          if ((double) num2 > (double) num3)
          {
            num2 = num3;
            toSettlement2 = settlement;
          }
          ++x1;
          ++x2;
        }
        else if (settlement.IsCastle)
        {
          float num4 = settlement.Position2D.DistanceSquared(targetSettlement.Position2D);
          if ((double) num2 > (double) num4)
          {
            num2 = num4;
            toSettlement2 = settlement;
          }
          ++x2;
        }
      }
      if (toSettlement2 != null)
        num2 = Campaign.Current.Models.MapDistanceModel.GetDistance(targetSettlement, toSettlement2);
      if (toSettlement1 == toSettlement2)
        num1 = num2;
      else if (toSettlement1 != null)
        num1 = Campaign.Current.Models.MapDistanceModel.GetDistance(targetSettlement, toSettlement1);
      float num5 = 1f;
      float num6 = MathF.Min(2f, MathF.Sqrt((float) x2)) / 2f;
      float num7 = MathF.Min(2f, MathF.Sqrt((float) x1)) / 2f;
      if ((double) num6 > 0.0 && (double) num7 < 1.0)
        num6 += 1f - num7;
      float num8 = num5 + (float) (0.5 * (2.0 - ((double) num6 + (double) num7)));
      double num9;
      switch (missionType)
      {
        case Army.ArmyTypes.Besieger:
          num9 = (double) MathF.Max(0.0f, distance1 - Campaign.AverageDistanceBetweenTwoFortifications) * 0.15000000596046448 + (double) distance2 * 0.15000000596046448 * (double) num8 + (double) num1 * 0.5 * (double) num7 + (double) num2 * 0.20000000298023224 * (double) num6;
          break;
        case Army.ArmyTypes.Raider:
          num9 = (double) MathF.Max(0.0f, distance1 - Campaign.AverageDistanceBetweenTwoFortifications) * 0.15000000596046448 + (double) distance2 * 0.5 * (double) num8 + (double) num1 * 0.20000000298023224 * (double) num7 + (double) num2 * 0.15000000596046448 * (double) num6;
          break;
        default:
          num9 = (double) MathF.Max(0.0f, distance1 - Campaign.AverageDistanceBetweenTwoFortifications) * 0.15000000596046448 + (double) distance2 * 0.5 * (double) num8 + (double) num1 * 0.25 * (double) num7 + (double) num2 * 0.10000000149011612 * (double) num6;
          break;
      }
      float num10 = (float) num9;
      double num11;
      switch (missionType)
      {
        case Army.ArmyTypes.Besieger:
          num11 = targetSettlement.IsTown ? (double) this.ReasonableDistanceForBesiegingTown : (double) this.ReasonableDistanceForBesiegingCastle;
          break;
        case Army.ArmyTypes.Defender:
          num11 = targetSettlement.IsVillage ? (double) this.ReasonableDistanceForDefendingVillage : (double) this.ReasonableDistanceForDefendingTownOrCastle;
          break;
        default:
          num11 = (double) this.ReasonableDistanceForRaiding;
          break;
      }
      float num12 = (float) num11;
      distanceScore = (double) num10 < (double) num12 ? (float) (1.0 + (1.0 - (double) num10 / (double) num12) * 0.5) : (float) ((double) num12 / (double) num10 * ((double) num12 / (double) num10) * (missionType != Army.ArmyTypes.Defender ? (double) num12 / (double) num10 : 1.0));
      if ((double) distanceScore < 0.10000000149011612)
      {
        powerScore = 0.0f;
        distanceScore = 0.0f;
        settlementImportanceScore = 0.0f;
        return 0.0f;
      }
      float num13 = 1f;
      if (mobileParty.Army != null && (double) mobileParty.Army.Cohesion < 40.0)
        num13 *= mobileParty.Army.Cohesion / 40f;
      if ((double) num13 < 0.25)
      {
        powerScore = 0.0f;
        distanceScore = 0.0f;
        settlementImportanceScore = 0.0f;
        return 0.0f;
      }
      if (missionType == Army.ArmyTypes.Defender)
      {
        float b = 0.0f;
        float num14 = 0.0f;
        foreach (PartyComponent warPartyComponent in (List<WarPartyComponent>) mapFaction.WarPartyComponents)
        {
          MobileParty mobileParty1 = warPartyComponent.MobileParty;
          if (mobileParty1 != mobileParty && (mobileParty1.Army == null || mobileParty1.Army != mobileParty.Army) && mobileParty1.AttachedTo == null)
          {
            if (mobileParty1.Army != null)
            {
              Army army = mobileParty1.Army;
              if ((army.AIBehavior == Army.AIBehaviorFlags.Gathering || army.AIBehavior == Army.AIBehaviorFlags.WaitingForArmyMembers) && army.AiBehaviorObject == targetSettlement || army.AIBehavior != Army.AIBehaviorFlags.Gathering && army.AIBehavior != Army.AIBehaviorFlags.WaitingForArmyMembers && army.AiBehaviorObject == targetSettlement || army.LeaderParty.TargetParty != null && (army.LeaderParty.TargetParty == targetSettlement.LastAttackerParty || army.LeaderParty.TargetParty.MapEvent != null && army.LeaderParty.TargetParty.MapEvent == targetSettlement.LastAttackerParty.MapEvent || army.LeaderParty.TargetParty.BesiegedSettlement != null && army.LeaderParty.TargetParty.BesiegedSettlement == targetSettlement.LastAttackerParty.BesiegedSettlement))
                num14 += army.TotalStrength;
            }
            else if (mobileParty1.DefaultBehavior == AiBehavior.DefendSettlement && mobileParty1.TargetSettlement == targetSettlement || mobileParty1.TargetParty != null && (mobileParty1.TargetParty == targetSettlement.LastAttackerParty || mobileParty1.TargetParty.MapEvent != null && mobileParty1.TargetParty.MapEvent == targetSettlement.LastAttackerParty.MapEvent || mobileParty1.TargetParty.BesiegedSettlement != null && mobileParty1.TargetParty.BesiegedSettlement == targetSettlement.LastAttackerParty.BesiegedSettlement))
              num14 += mobileParty1.Party.TotalStrength;
          }
        }
        MobileParty lastAttackerParty = targetSettlement.LastAttackerParty;
        if (targetSettlement.LastAttackerParty.MapEvent != null && targetSettlement.LastAttackerParty.MapEvent.MapEventSettlement == targetSettlement || targetSettlement.LastAttackerParty.BesiegedSettlement == targetSettlement)
        {
          LocatableSearchData<MobileParty> data = MobileParty.StartFindingLocatablesAroundPosition(targetSettlement.GatePosition, 6f);
          for (MobileParty nextLocatable = MobileParty.FindNextLocatable(ref data); nextLocatable != null; nextLocatable = MobileParty.FindNextLocatable(ref data))
          {
            if ((double) nextLocatable.Aggressiveness > 0.0 && nextLocatable.MapFaction == lastAttackerParty.MapFaction)
              b += ((double) nextLocatable.Aggressiveness > 0.5 ? 1f : nextLocatable.Aggressiveness * 2f) * nextLocatable.Party.TotalStrength;
          }
        }
        else
        {
          Army army = lastAttackerParty.Army;
          b = army != null ? army.TotalStrength : lastAttackerParty.Party.TotalStrength;
        }
        float num15 = ourStrength + num14;
        float num16 = MathF.Max(100f, b) * 1.1f;
        float num17 = num16 * 2.5f;
        powerScore = (double) num15 >= (double) num17 ? (float) ((double) num17 / (double) num15 * ((double) num17 / (double) num15)) : MathF.Min(1f, (float) ((double) num15 / (double) num16 * ((double) num15 / (double) num16)));
        if ((double) num15 < (double) num16)
          powerScore *= 0.9f;
        if ((double) ourStrength < (double) b)
          powerScore *= MathF.Pow(ourStrength / b, 0.25f);
      }
      else
      {
        float totalStrength = targetSettlement.Party.TotalStrength;
        float num18 = 0.0f;
        bool flag = Hero.MainHero.CurrentSettlement == targetSettlement;
        foreach (MobileParty party in (List<MobileParty>) targetSettlement.Parties)
        {
          if ((double) party.Aggressiveness > 0.0099999997764825821 || party.IsGarrison || party.IsMilitia)
          {
            float num19 = party == MobileParty.MainParty ? 0.5f : (party.Army == null || party.Army.LeaderParty != MobileParty.MainParty ? 1f : 0.8f);
            float num20 = flag ? 0.8f : 1f;
            totalStrength += num19 * num20 * party.Party.TotalStrength;
            if (!party.IsGarrison && !party.IsMilitia && party.LeaderHero != null)
              num18 += num19 * num20 * party.Party.TotalStrength;
          }
        }
        float num21 = 0.0f;
        float num22 = missionType != Army.ArmyTypes.Besieger || mobileParty.BesiegedSettlement == targetSettlement ? 1f : (targetSettlement.IsTown ? 4f : 3f);
        float num23 = MathF.Min(1f, distance2 / this.DistanceOfMobilePartyDivider);
        float num24 = num22 * (float) (1.0 - 0.60000002384185791 * (1.0 - (double) num23) * (1.0 - (double) num23));
        if ((double) totalStrength < 100.0 && missionType == Army.ArmyTypes.Besieger)
          num24 *= (float) (0.5 + 0.5 * ((double) totalStrength / 100.0));
        if ((mobileParty.MapEvent == null || mobileParty.MapEvent.MapEventSettlement != targetSettlement) && targetSettlement.MapFaction.IsKingdomFaction)
        {
          if (numberOfEnemyFactionSettlements < 0)
            numberOfEnemyFactionSettlements = targetSettlement.MapFaction.Settlements.Count;
          if ((double) totalEnemyMobilePartyStrength < 0.0)
            totalEnemyMobilePartyStrength = targetSettlement.MapFaction.TotalStrength;
          totalEnemyMobilePartyStrength *= 0.5f;
          num21 = MathF.Max(0.0f, (float) (((double) totalEnemyMobilePartyStrength - (double) num18) / ((double) numberOfEnemyFactionSettlements + 10.0))) * num24;
        }
        float num25 = missionType == Army.ArmyTypes.Besieger ? (float) (1.25 + 0.25 * (double) targetSettlement.Town.GetWallLevel()) : 1f;
        if (missionType == Army.ArmyTypes.Besieger && (double) targetSettlement.Town.FoodStocks < 100.0)
          num25 -= (float) (0.5 * ((double) num25 - 1.0) * ((100.0 - (double) targetSettlement.Town.FoodStocks) / 100.0));
        float num26 = missionType != Army.ArmyTypes.Besieger || mobileParty.LeaderHero == null ? 0.0f : mobileParty.LeaderHero.RandomFloat(0.1f) + (float) (((double) MathF.Max(MathF.Min(1.2f, mobileParty.Aggressiveness), 0.8f) - 0.800000011920929) * 0.5);
        float num27 = (float) ((double) totalStrength * ((double) num25 - (double) num26) + (double) num21 + 0.10000000149011612);
        if ((double) ourStrength < (double) num27 * (missionType == Army.ArmyTypes.Besieger ? 1.0 : 0.60000002384185791))
        {
          powerScore = 0.0f;
          settlementImportanceScore = 1f;
          return 0.0f;
        }
        float num28 = 0.0f;
        if (missionType == Army.ArmyTypes.Besieger && (double) distance2 < (double) this.RaidDistanceLimit || missionType == Army.ArmyTypes.Raider && targetSettlement.Party.MapEvent != null)
        {
          LocatableSearchData<MobileParty> data = MobileParty.StartFindingLocatablesAroundPosition(mobileParty.SiegeEvent == null || mobileParty.SiegeEvent.BesiegedSettlement != targetSettlement ? targetSettlement.GatePosition : mobileParty.Position2D, 9f);
          for (MobileParty nextLocatable = MobileParty.FindNextLocatable(ref data); nextLocatable != null; nextLocatable = MobileParty.FindNextLocatable(ref data))
          {
            if (nextLocatable.CurrentSettlement != targetSettlement && (double) nextLocatable.Aggressiveness > 0.0099999997764825821 && nextLocatable.MapFaction == targetSettlement.Party.MapFaction)
            {
              float num29 = nextLocatable == MobileParty.MainParty || nextLocatable.Army != null && nextLocatable.Army.LeaderParty == MobileParty.MainParty ? 0.5f : 1f;
              float num30 = 1f;
              if (mobileParty.MapEvent != null && mobileParty.MapEvent.MapEventSettlement == targetSettlement)
                num30 = (float) (1.0 - (double) nextLocatable.Position2D.Distance(mobileParty.Position2D) / 16.0);
              num28 += num30 * nextLocatable.Party.TotalStrength * num29;
            }
          }
          if ((double) num28 < (double) ourStrength)
            num28 = MathF.Max(0.0f, num28 - ourStrength * 0.33f);
          float num31 = num27 + num28 - num21;
          if (targetSettlement.MapFaction.IsKingdomFaction)
          {
            if (numberOfEnemyFactionSettlements < 0)
              numberOfEnemyFactionSettlements = targetSettlement.MapFaction.Settlements.Count;
            if ((double) totalEnemyMobilePartyStrength < 0.0)
              totalEnemyMobilePartyStrength = targetSettlement.MapFaction.TotalStrength;
            totalEnemyMobilePartyStrength *= 0.5f;
            num21 = MathF.Max(0.0f, (float) (((double) totalEnemyMobilePartyStrength - ((double) num18 + (double) num28)) / ((double) numberOfEnemyFactionSettlements + 10.0))) * num24;
          }
          num27 = num31 + num21;
        }
        float num32 = missionType == Army.ArmyTypes.Raider ? 0.6f : 0.4f;
        float num33 = missionType == Army.ArmyTypes.Raider ? 0.9f : 0.8f;
        float num34 = missionType == Army.ArmyTypes.Raider ? 2.5f : 3f;
        float num35 = ourStrength / num27;
        powerScore = (double) ourStrength > (double) num27 * (double) num34 ? 1f : ((double) num35 > 2.0 ? num33 + (float) ((1.0 - (double) num33) * (((double) num35 - 2.0) / ((double) num34 - 2.0))) : ((double) num35 > 1.0 ? num32 + (float) (((double) num33 - (double) num32) * (((double) num35 - 1.0) / 1.0)) : num32 * 0.9f * num35 * num35));
      }
      powerScore = (double) powerScore > 1.0 ? 1f : powerScore;
      float num36 = missionType == Army.ArmyTypes.Raider ? targetSettlement.GetSettlementValueForEnemyHero(mobileParty.LeaderHero) : targetSettlement.GetSettlementValueForFaction(mapFaction);
      float y = targetSettlement.IsVillage ? 0.5f : 0.33f;
      settlementImportanceScore = MathF.Pow(num36 / 50000f, y);
      float num37 = 1f;
      if (missionType == Army.ArmyTypes.Raider)
      {
        if ((double) targetSettlement.Village.Bound.Town.FoodStocks < 100.0)
          settlementImportanceScore *= (float) (1.0 + 0.30000001192092896 * ((100.0 - (double) targetSettlement.Village.Bound.Town.FoodStocks) / 100.0));
        settlementImportanceScore *= 1.5f;
        num37 += (float) ((mobileParty.Army != null ? 0.5 : 1.0) * (mobileParty.LeaderHero == null || mobileParty.LeaderHero.Clan == null || mobileParty.LeaderHero.Clan.Gold >= 10000 ? 0.0 : (10000.0 - (double) mobileParty.LeaderHero.Clan.Gold) / 20000.0));
      }
      float num38 = missionType == Army.ArmyTypes.Defender ? (targetSettlement.IsVillage ? 1.28f : 1.28f) : (missionType == Army.ArmyTypes.Besieger ? 0.8f : (float) (0.2800000011920929 * (1.0 + (1.0 - (double) targetSettlement.SettlementHitPoints))));
      if (missionType == Army.ArmyTypes.Defender && (targetSettlement.IsFortification && targetSettlement.LastAttackerParty.BesiegedSettlement != targetSettlement || !targetSettlement.IsFortification && targetSettlement.LastAttackerParty.MapEvent == null))
      {
        float num39 = MathF.Min(this.GiveUpDistanceLimit, Campaign.Current.Models.MapDistanceModel.GetDistance(targetSettlement.LastAttackerParty, targetSettlement)) / this.GiveUpDistanceLimit;
        num38 = (float) ((double) num39 * 0.800000011920929 + (1.0 - (double) num39) * (double) num38);
      }
      float num40 = 1f;
      if ((missionType == Army.ArmyTypes.Raider || missionType == Army.ArmyTypes.Besieger) && targetSettlement.OwnerClan != null && mobileParty.LeaderHero != null)
      {
        int relationWithClan = mobileParty.LeaderHero.Clan.GetRelationWithClan(targetSettlement.OwnerClan);
        if (relationWithClan > 0)
          num40 = (float) (1.0 - (missionType == Army.ArmyTypes.Besieger ? 0.40000000596046448 : 0.800000011920929) * ((double) MathF.Sqrt((float) relationWithClan) / 10.0));
        else if (relationWithClan < 0)
          num40 = (float) (1.0 + (missionType == Army.ArmyTypes.Besieger ? 0.10000000149011612 : 0.05000000074505806) * ((double) MathF.Sqrt((float) -relationWithClan) / 10.0));
      }
      float num41 = 1f;
      if (mobileParty.MapFaction != null && mobileParty.MapFaction.IsKingdomFaction && mobileParty.MapFaction.Leader == Hero.MainHero && (missionType != Army.ArmyTypes.Defender || targetSettlement.LastAttackerParty != null && targetSettlement.LastAttackerParty.MapFaction != Hero.MainHero.MapFaction))
      {
        StanceLink stanceLink = missionType != Army.ArmyTypes.Defender ? Hero.MainHero.MapFaction.GetStanceWith(targetSettlement.MapFaction) : Hero.MainHero.MapFaction.GetStanceWith(targetSettlement.LastAttackerParty.MapFaction);
        if (stanceLink != null)
        {
          if (stanceLink.BehaviorPriority == 1)
          {
            switch (missionType)
            {
              case Army.ArmyTypes.Besieger:
              case Army.ArmyTypes.Raider:
                num41 = 0.65f;
                break;
              case Army.ArmyTypes.Defender:
                num41 = 1.1f;
                break;
            }
          }
          else if (stanceLink.BehaviorPriority == 2 && (missionType == Army.ArmyTypes.Besieger || missionType == Army.ArmyTypes.Raider))
            num41 = 1.3f;
        }
      }
      float num42 = 1f;
      if (mobileParty.SiegeEvent != null && mobileParty.SiegeEvent.BesiegedSettlement == targetSettlement)
        num42 = 4f;
      float num43 = 1f;
      if (missionType == Army.ArmyTypes.Raider && mobileParty.MapEvent != null && mobileParty.MapEvent.IsRaid)
        num43 = mobileParty.MapEvent.MapEventSettlement == targetSettlement ? 1.3f : 0.3f;
      float num44 = 1f;
      if (targetSettlement.SiegeEvent != null && targetSettlement.SiegeEvent.BesiegerCamp.LeaderParty.MapFaction == mobileParty.MapFaction)
      {
        float num45 = targetSettlement.SiegeEvent.BesiegerCamp.GetInvolvedPartiesForEventType(MapEvent.BattleTypes.Siege).Sum<PartyBase>((Func<PartyBase, float>) (x => x.TotalStrength)) / targetSettlement.GetInvolvedPartiesForEventType(MapEvent.BattleTypes.Siege).Sum<PartyBase>((Func<PartyBase, float>) (x => x.TotalStrength));
        num44 += Math.Max(0.0f, 3f - num45);
      }
      float num46 = num40 * distanceScore * powerScore * settlementImportanceScore * num37 * num38 * num41 * num13 * num42 * num43 * num44;
      if (mobileParty.Objective == MobileParty.PartyObjective.Defensive && missionType == Army.ArmyTypes.Defender)
        num46 *= 1.2f;
      else if (mobileParty.Objective == MobileParty.PartyObjective.Aggressive && (missionType == Army.ArmyTypes.Besieger || missionType == Army.ArmyTypes.Raider))
        num46 *= 1.2f;
      return (double) num46 < 0.0 ? 0.0f : num46;
    }
  }
}

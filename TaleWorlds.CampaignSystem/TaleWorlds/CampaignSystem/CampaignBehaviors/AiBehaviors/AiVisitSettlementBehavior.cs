// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.AiBehaviors.AiVisitSettlementBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Map;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors.AiBehaviors
{
  public class AiVisitSettlementBehavior : CampaignBehaviorBase
  {
    private const float NumberOfHoursAtDay = 24f;
    private const float IdealTimePeriodForVisitingOwnedSettlement = 360f;
    private const float DefaultMoneyLimitForRecruiting = 2000f;
    private const float MaximumMeaningfulDistance = 250f;
    private const float MaximumFilteredDistance = 350f;
    private const float MeaningfulScoreThreshold = 0.025f;
    private const float GoodEnoughScore = 2.5f;
    private const float BaseVisitScore = 1.6f;
    private const int SearchRadius = 30;
    private IDisbandPartyCampaignBehavior _disbandPartyCampaignBehavior;

    public override void RegisterEvents()
    {
      CampaignEvents.AiHourlyTickEvent.AddNonSerializedListener((object) this, new Action<MobileParty, PartyThinkParams>(this.AiHourlyTick));
      CampaignEvents.OnSessionLaunchedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnSessionLaunched));
    }

    private void OnSessionLaunched(CampaignGameStarter campaignGameStarter)
    {
      this._disbandPartyCampaignBehavior = Campaign.Current.GetCampaignBehavior<IDisbandPartyCampaignBehavior>();
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private void AiHourlyTick(MobileParty mobileParty, PartyThinkParams p)
    {
      if (mobileParty.CurrentSettlement?.SiegeEvent != null)
        return;
      Settlement forAiCalculation = MobilePartyHelper.GetCurrentSettlementOfMobilePartyForAICalculation(mobileParty);
      if (mobileParty.IsBandit)
      {
        this.CalculateVisitHideoutScoresForBanditParty(mobileParty, forAiCalculation, p);
      }
      else
      {
        IFaction mapFaction = mobileParty.MapFaction;
        if (mobileParty.IsMilitia || mobileParty.IsCaravan || mobileParty.IsVillager || !mapFaction.IsMinorFaction && !mapFaction.IsKingdomFaction && (mobileParty.LeaderHero == null || !mobileParty.LeaderHero.IsLord) || mobileParty.Army != null && mobileParty.Army.LeaderParty != mobileParty && (double) mobileParty.Army.Cohesion >= (double) mobileParty.Army.CohesionThresholdForDispersion)
          return;
        Hero leaderHero1 = mobileParty.LeaderHero;
        (float num1, float num2, int x1, int num3) = this.CalculatePartyParameters(mobileParty);
        float num4 = num2 / Math.Min(1f, Math.Max(0.1f, num1));
        float y = (double) num4 >= 1.0 ? 0.33f : (float) (((double) MathF.Max(1f, MathF.Min(2f, num4)) - 0.5) / 1.5);
        float food = mobileParty.Food;
        float num5 = -mobileParty.FoodChange;
        int num6 = leaderHero1 != null ? leaderHero1.Gold : 0;
        if (mobileParty.Army != null && mobileParty == mobileParty.Army.LeaderParty)
        {
          foreach (MobileParty attachedParty in (List<MobileParty>) mobileParty.Army.LeaderParty.AttachedParties)
          {
            food += attachedParty.Food;
            num5 += -attachedParty.FoodChange;
            int num7 = num6;
            Hero leaderHero2 = attachedParty.LeaderHero;
            int gold = leaderHero2 != null ? leaderHero2.Gold : 0;
            num6 = num7 + gold;
          }
        }
        float num8 = 1f;
        if (leaderHero1 != null && mobileParty.IsLordParty)
          num8 = this.CalculateSellItemScore(mobileParty);
        int prisonerSizeLimit = mobileParty.Party.PrisonerSizeLimit;
        if (mobileParty.Army != null)
        {
          foreach (MobileParty attachedParty in (List<MobileParty>) mobileParty.Army.LeaderParty.AttachedParties)
            prisonerSizeLimit += attachedParty.Party.PrisonerSizeLimit;
        }
        SortedList<(float, int), Settlement> visitWithDistances = this.FindSettlementsToVisitWithDistances(mobileParty);
        float partySizeNormalLimit = PartyBaseHelper.FindPartySizeNormalLimit(mobileParty);
        float x2 = Campaign.MapDiagonalSquared;
        if ((double) food - (double) num5 < 0.0)
        {
          foreach (KeyValuePair<(float, int), Settlement> keyValuePair in visitWithDistances)
          {
            float num9 = keyValuePair.Key.Item1;
            Settlement settlement = keyValuePair.Value;
            if ((double) num9 < 250.0 && (double) num9 < (double) x2 && (double) settlement.ItemRoster.TotalFood > (double) num5 * 2.0)
              x2 = num9;
          }
        }
        float num10 = 2000f;
        float num11 = 2000f;
        if (leaderHero1 != null)
        {
          num10 = HeroHelper.StartRecruitingMoneyLimitForClanLeader(leaderHero1);
          num11 = HeroHelper.StartRecruitingMoneyLimit(leaderHero1);
        }
        float a = Campaign.AverageDistanceBetweenTwoFortifications * 0.4f;
        float num12 = (float) ((84.0 + (double) Campaign.AverageDistanceBetweenTwoFortifications * 1.5) * 0.5);
        float num13 = (float) ((424.0 + 7.570000171661377 * (double) Campaign.AverageDistanceBetweenTwoFortifications) * 0.5);
        foreach (KeyValuePair<(float, int), Settlement> keyValuePair in visitWithDistances)
        {
          Settlement settlement = keyValuePair.Value;
          float distance = keyValuePair.Key.Item1;
          float visitingNearbySettlementScore1 = 1.6f;
          if (!mobileParty.IsDisbanding)
          {
            IDisbandPartyCampaignBehavior campaignBehavior = this._disbandPartyCampaignBehavior;
            if ((campaignBehavior != null ? (campaignBehavior.IsPartyWaitingForDisband(mobileParty) ? 1 : 0) : 0) == 0)
            {
              if (leaderHero1 == null)
              {
                this.AddBehaviorTupleWithScore(p, settlement, this.CalculateMergeScoreForLeaderlessParty(mobileParty, settlement, distance));
                goto label_93;
              }
              else
              {
                float b1 = distance;
                if ((double) b1 >= 250.0)
                {
                  this.AddBehaviorTupleWithScore(p, settlement, 0.025f);
                  continue;
                }
                float num14 = b1;
                float num15 = MathF.Max(a, b1);
                float num16 = MathF.Max(0.1f, MathF.Min(1f, num12 / (num12 - a + num15)));
                float num17 = num16;
                if ((double) num1 < 0.60000002384185791)
                  num17 = MathF.Pow(num16, MathF.Pow(0.6f / MathF.Max(0.15f, num1), 0.3f));
                int? totalFood = forAiCalculation?.ItemRoster.TotalFood;
                int num18 = num3 / Campaign.Current.Models.MobilePartyFoodConsumptionModel.NumberOfMenOnMapToEatOneFood * 3;
                bool flag = totalFood.GetValueOrDefault() > num18 & totalFood.HasValue || (double) food > (double) (num3 / Campaign.Current.Models.MobilePartyFoodConsumptionModel.NumberOfMenOnMapToEatOneFood);
                float num19 = (float) x1 / (float) num3;
                float x3 = (float) (1.0 + (num3 > 0 ? (double) num19 * (double) MathF.Max(0.25f, num16 * num16) * (double) MathF.Pow((float) x1, 0.25f) * (mobileParty.Army != null ? 4.0 : 3.0) * (settlement.IsFortification & flag ? 18.0 : 0.0) : 0.0));
                if (mobileParty.MapEvent != null || mobileParty.SiegeEvent != null)
                  x3 = MathF.Sqrt(x3);
                float num20 = 1f;
                if (settlement == forAiCalculation && forAiCalculation.IsFortification || forAiCalculation == null && settlement == mobileParty.TargetSettlement)
                  num20 = 1.2f;
                else if (forAiCalculation == null && settlement == mobileParty.LastVisitedSettlement)
                  num20 = 0.8f;
                float val2 = 0.16f;
                float num21 = Math.Max(0.0f, food) / num5;
                if ((double) num5 > 0.0 && (mobileParty.BesiegedSettlement == null || (double) num21 <= 1.0) && num6 > 100 && (settlement.IsTown || settlement.IsVillage) && (double) num21 < 4.0)
                {
                  int num22 = (int) ((double) num5 * ((double) num21 >= 1.0 || !settlement.IsVillage ? (double) Campaign.Current.Models.PartyFoodBuyingModel.MinimumDaysFoodToLastWhileBuyingFoodFromTown : (double) Campaign.Current.Models.PartyFoodBuyingModel.MinimumDaysFoodToLastWhileBuyingFoodFromVillage)) + 1;
                  float num23 = 3f - Math.Min(3f, Math.Max(0.0f, num21 - 1f));
                  float val1_1 = (float) num22 + (float) (20.0 * (settlement.IsTown ? 2.0 : 1.0) * ((double) num14 > 100.0 ? 1.0 : (double) num14 / 100.0));
                  int val1_2 = (int) ((double) (num6 - 100) / (double) Campaign.Current.Models.PartyFoodBuyingModel.LowCostFoodPriceAverage);
                  val2 += (float) ((double) num23 * (double) num23 * 0.093000002205371857 * ((double) num21 < 2.0 ? 1.0 + 0.5 * (2.0 - (double) num21) : 1.0) * Math.Pow((double) Math.Min(val1_1, (float) Math.Min(val1_2, settlement.ItemRoster.TotalFood)) / (double) val1_1, 0.5));
                }
                float b2 = 0.0f;
                int num24 = 0;
                int num25 = 0;
                if ((double) num1 < 1.0 && mobileParty.CanPayMoreWage())
                {
                  num24 = settlement.NumberOfLordPartiesAt;
                  num25 = settlement.NumberOfLordPartiesTargeting;
                  if (forAiCalculation == settlement)
                  {
                    int num26 = num24;
                    Army army = mobileParty.Army;
                    int num27 = army != null ? army.LeaderPartyAndAttachedPartiesCount : 1;
                    num24 = num26 - num27;
                    if (num24 < 0)
                      num24 = 0;
                  }
                  if (mobileParty.TargetSettlement == settlement || mobileParty.Army != null && mobileParty.Army.LeaderParty.TargetSettlement == settlement)
                  {
                    int num28 = num25;
                    Army army = mobileParty.Army;
                    int num29 = army != null ? army.LeaderPartyAndAttachedPartiesCount : 1;
                    num25 = num28 - num29;
                    if (num25 < 0)
                      num25 = 0;
                  }
                  if (!settlement.IsCastle && !mobileParty.Party.IsStarving && (double) leaderHero1.Gold > (double) num11 && (leaderHero1.Clan.Leader == leaderHero1 || (double) leaderHero1.Clan.Gold > (double) num10) && (double) partySizeNormalLimit > (double) mobileParty.PartySizeRatio)
                  {
                    float num30 = (float) this.ApproximateNumberOfVolunteersCanBeRecruitedFromSettlement(leaderHero1, settlement);
                    b2 = (double) num30 > (double) (int) (((double) partySizeNormalLimit - (double) mobileParty.PartySizeRatio) * 100.0) ? (float) (int) (((double) partySizeNormalLimit - (double) mobileParty.PartySizeRatio) * 100.0) : num30;
                  }
                }
                float x4 = b2 * num16 / MathF.Sqrt((float) (1 + num24 + num25));
                float num31 = (double) x4 < 1.0 ? x4 : (float) Math.Pow((double) x4, (double) y);
                float num32 = Math.Max(Math.Min(1f, val2), Math.Max(mapFaction == settlement.MapFaction ? 0.25f : 0.16f, (float) ((double) num4 * (double) Math.Max(1f, Math.Min(2f, num4)) * (double) num31 * (1.0 - 0.89999997615814209 * (double) num19) * (1.0 - 0.89999997615814209 * (double) num19))));
                if (mobileParty.Army != null)
                  num32 /= (float) mobileParty.Army.LeaderPartyAndAttachedPartiesCount;
                float visitingNearbySettlementScore2 = visitingNearbySettlementScore1 * (num32 * x3 * val2 * num17);
                if ((double) visitingNearbySettlementScore2 >= 2.5)
                {
                  this.AddBehaviorTupleWithScore(p, settlement, visitingNearbySettlementScore2);
                  break;
                }
                float num33 = 1f;
                if ((double) b2 > 0.0)
                  num33 = (float) (1.0 + (mobileParty.DefaultBehavior != AiBehavior.GoToSettlement || settlement == forAiCalculation || (double) num15 >= (double) a ? 0.0 : 0.10000000149011612 * (double) MathF.Min(5f, b2) - 0.10000000149011612 * (double) MathF.Min(5f, b2) * ((double) num15 / (double) a) * ((double) num15 / (double) a)));
                float num34 = settlement.IsCastle ? 1.4f : 1f;
                float visitingNearbySettlementScore3 = visitingNearbySettlementScore2 * ((settlement.IsTown ? num8 : 1f) * num33 * num34);
                if ((double) visitingNearbySettlementScore3 >= 2.5)
                {
                  this.AddBehaviorTupleWithScore(p, settlement, visitingNearbySettlementScore3);
                  break;
                }
                int totalRegulars = mobileParty.PrisonRoster.TotalRegulars;
                if (mobileParty.PrisonRoster.TotalHeroes > 0)
                {
                  foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) mobileParty.PrisonRoster.GetTroopRoster())
                  {
                    if (troopRosterElement.Character.IsHero && troopRosterElement.Character.HeroObject.Clan.IsAtWarWith(settlement.MapFaction))
                      totalRegulars += 6;
                  }
                }
                float num35 = 1f;
                float num36 = 1f;
                if (mobileParty.Army != null)
                {
                  if (mobileParty.Army.LeaderParty != mobileParty)
                    num35 = ((float) mobileParty.Army.CohesionThresholdForDispersion - mobileParty.Army.Cohesion) / (float) mobileParty.Army.CohesionThresholdForDispersion;
                  num36 = MobileParty.MainParty == null || mobileParty.Army != MobileParty.MainParty.Army ? 0.8f : 0.6f;
                  foreach (MobileParty attachedParty in (List<MobileParty>) mobileParty.Army.LeaderParty.AttachedParties)
                  {
                    totalRegulars += attachedParty.PrisonRoster.TotalRegulars;
                    if (attachedParty.PrisonRoster.TotalHeroes > 0)
                    {
                      foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) attachedParty.PrisonRoster.GetTroopRoster())
                      {
                        if (troopRosterElement.Character.IsHero && troopRosterElement.Character.HeroObject.Clan.IsAtWarWith(settlement.MapFaction))
                          totalRegulars += 6;
                      }
                    }
                  }
                }
                float num37 = settlement.IsFortification ? (float) (1.0 + 2.0 * (double) (totalRegulars / prisonerSizeLimit)) : 1f;
                float num38 = 1f;
                if (mobileParty.Ai.NumberOfRecentFleeingFromAParty > 0)
                {
                  Vec2 v = settlement.Position2D - mobileParty.Position2D;
                  double num39 = (double) v.Normalize();
                  num38 = (float) (1.0 - (double) Math.Max(2f - mobileParty.AverageFleeTargetDirection.Distance(v), 0.0f) * 0.25 * ((double) Math.Min((float) mobileParty.Ai.NumberOfRecentFleeingFromAParty, 10f) * 0.20000000298023224));
                }
                float num40 = 1f;
                float num41 = 1f;
                float num42 = 1f;
                float num43 = 1f;
                float num44 = 1f;
                if ((double) val2 <= 0.5)
                {
                  (num40, num41, num42, num43) = this.CalculateBeingSettlementOwnerScores(mobileParty, settlement, forAiCalculation, -1f, num16, num1);
                }
                else
                {
                  float num45 = MathF.Sqrt(x2);
                  num44 = (double) num45 > (double) num13 ? (float) (1.0 + 7.0 * (double) MathF.Min(1f, val2 - 0.5f)) : (float) (1.0 + 7.0 * ((double) num45 / (double) num13) * (double) MathF.Min(1f, val2 - 0.5f));
                }
                visitingNearbySettlementScore1 = visitingNearbySettlementScore3 * (num38 * num44 * num20 * num35 * num37 * num36 * num40 * num42 * num41 * num43);
                goto label_93;
              }
            }
          }
          this.AddBehaviorTupleWithScore(p, settlement, this.CalculateMergeScoreForDisbandingParty(mobileParty, settlement, distance));
label_93:
          if ((double) visitingNearbySettlementScore1 > 0.02500000037252903)
            this.AddBehaviorTupleWithScore(p, settlement, visitingNearbySettlementScore1);
        }
      }
    }

    private int ApproximateNumberOfVolunteersCanBeRecruitedFromSettlement(
      Hero hero,
      Settlement settlement)
    {
      int num1 = 4;
      if (hero.MapFaction != settlement.MapFaction)
        num1 = 2;
      int num2 = 0;
      foreach (Hero notable in (List<Hero>) settlement.Notables)
      {
        if (notable.IsAlive)
        {
          for (int index = 0; index < num1; ++index)
          {
            if (notable.VolunteerTypes[index] != null)
              ++num2;
          }
        }
      }
      return num2;
    }

    private float CalculateSellItemScore(MobileParty mobileParty)
    {
      float num1 = 0.0f;
      float num2 = 0.0f;
      for (int index = 0; index < mobileParty.ItemRoster.Count; ++index)
      {
        ItemRosterElement itemRosterElement = mobileParty.ItemRoster[index];
        EquipmentElement equipmentElement = itemRosterElement.EquipmentElement;
        if (equipmentElement.Item.IsMountable)
        {
          double num3 = (double) num2;
          int amount = itemRosterElement.Amount;
          equipmentElement = itemRosterElement.EquipmentElement;
          int num4 = equipmentElement.Item.Value;
          double num5 = (double) (amount * num4);
          num2 = (float) (num3 + num5);
        }
        else
        {
          equipmentElement = itemRosterElement.EquipmentElement;
          if (!equipmentElement.Item.IsFood)
          {
            double num6 = (double) num1;
            int amount = itemRosterElement.Amount;
            equipmentElement = itemRosterElement.EquipmentElement;
            int num7 = equipmentElement.Item.Value;
            double num8 = (double) (amount * num7);
            num1 = (float) (num6 + num8);
          }
        }
      }
      float x = ((double) num2 > (double) mobileParty.LeaderHero.Gold * 0.10000000149011612 ? MathF.Min(3f, MathF.Pow((float) (((double) num2 + 1000.0) / ((double) mobileParty.LeaderHero.Gold * 0.10000000149011612 + 1000.0)), 0.33f)) : 1f) * (1f + MathF.Min(3f, MathF.Pow(num1 / (float) (((double) mobileParty.MemberRoster.TotalManCount + 5.0) * 100.0), 0.33f)));
      if (mobileParty.Army != null)
        x = MathF.Sqrt(x);
      return x;
    }

    private (float, float, int, int) CalculatePartyParameters(MobileParty mobileParty)
    {
      float num1 = 0.0f;
      int num2 = 0;
      int num3 = 0;
      float num4;
      float num5;
      if (mobileParty.Army != null)
      {
        float num6 = 0.0f;
        foreach (MobileParty party in (List<MobileParty>) mobileParty.Army.Parties)
        {
          float partySizeRatio = party.PartySizeRatio;
          num6 += partySizeRatio;
          num2 += party.MemberRoster.TotalWounded;
          num3 += party.MemberRoster.TotalManCount;
          float partySizeNormalLimit = PartyBaseHelper.FindPartySizeNormalLimit(party);
          num1 += partySizeNormalLimit;
        }
        num4 = num6 / (float) mobileParty.Army.Parties.Count;
        num5 = num1 / (float) mobileParty.Army.Parties.Count;
      }
      else
      {
        num4 = mobileParty.PartySizeRatio;
        num2 += mobileParty.MemberRoster.TotalWounded;
        num3 += mobileParty.MemberRoster.TotalManCount;
        num5 = num1 + PartyBaseHelper.FindPartySizeNormalLimit(mobileParty);
      }
      return (num4, num5, num2, num3);
    }

    private void CalculateVisitHideoutScoresForBanditParty(
      MobileParty mobileParty,
      Settlement currentSettlement,
      PartyThinkParams p)
    {
      if (!mobileParty.MapFaction.Culture.CanHaveSettlement || currentSettlement != null && currentSettlement.IsHideout)
        return;
      int val1 = 0;
      for (int index = 0; index < mobileParty.ItemRoster.Count; ++index)
      {
        ItemRosterElement itemRosterElement = mobileParty.ItemRoster[index];
        val1 += itemRosterElement.Amount * itemRosterElement.EquipmentElement.Item.Value;
      }
      float num1 = (float) (1.0 + 4.0 * (double) Math.Min((float) val1, 1000f) / 1000.0);
      int num2 = 0;
      MBReadOnlyList<Hideout> allHideouts = Campaign.Current.AllHideouts;
      foreach (Hideout hideout in (List<Hideout>) allHideouts)
      {
        if (hideout.Settlement.Culture == mobileParty.Party.Culture && hideout.IsInfested)
          ++num2;
      }
      float num3 = (float) (1.0 + 4.0 * Math.Sqrt((double) (mobileParty.PrisonRoster.TotalManCount / mobileParty.Party.PrisonerSizeLimit)));
      int ahideoutToInfestIt = Campaign.Current.Models.BanditDensityModel.NumberOfMinimumBanditPartiesInAHideoutToInfestIt;
      int partiesInEachHideout = Campaign.Current.Models.BanditDensityModel.NumberOfMaximumBanditPartiesInEachHideout;
      int eachBanditFaction = Campaign.Current.Models.BanditDensityModel.NumberOfMaximumHideoutsAtEachBanditFaction;
      float num4 = (float) ((424.0 + 7.570000171661377 * (double) Campaign.AverageDistanceBetweenTwoFortifications) / 2.0);
      foreach (Hideout hideout in (List<Hideout>) allHideouts)
      {
        Settlement settlement = hideout.Settlement;
        if (settlement.Party.MapEvent == null && settlement.Culture == mobileParty.Party.Culture)
        {
          float num5 = Math.Max(10f, Campaign.Current.Models.MapDistanceModel.GetDistance(mobileParty, settlement));
          float num6 = num4 / (num4 + num5);
          int val2 = 0;
          foreach (MobileParty party in (List<MobileParty>) settlement.Parties)
          {
            if (party.IsBandit && !party.IsBanditBossParty)
              ++val2;
          }
          float num7;
          if (val2 < ahideoutToInfestIt)
          {
            float num8 = (float) (eachBanditFaction - num2) / (float) eachBanditFaction;
            num7 = num2 < eachBanditFaction ? (float) (0.25 + 0.75 * (double) num8) : 0.0f;
          }
          else
            num7 = Math.Max(0.0f, (float) (1.0 * (1.0 - (double) (Math.Min(partiesInEachHideout, val2) - ahideoutToInfestIt) / (double) (partiesInEachHideout - ahideoutToInfestIt))));
          float num9 = mobileParty.DefaultBehavior != AiBehavior.GoToSettlement || mobileParty.TargetSettlement != settlement ? MBRandom.RandomFloat * MBRandom.RandomFloat * MBRandom.RandomFloat * MBRandom.RandomFloat * MBRandom.RandomFloat * MBRandom.RandomFloat * MBRandom.RandomFloat * MBRandom.RandomFloat : 1f;
          float visitingNearbySettlementScore = num6 * num7 * num1 * num9 * num3;
          this.AddBehaviorTupleWithScore(p, hideout.Settlement, visitingNearbySettlementScore);
        }
      }
    }

    private (float, float, float, float) CalculateBeingSettlementOwnerScores(
      MobileParty mobileParty,
      Settlement settlement,
      Settlement currentSettlement,
      float idealGarrisonStrengthPerWalledCenter,
      float distanceScorePure,
      float averagePartySizeRatioToMaximumSize)
    {
      float num1 = 1f;
      float num2 = 1f;
      float num3 = 1f;
      float num4 = 1f;
      Hero leaderHero = mobileParty.LeaderHero;
      IFaction mapFaction = mobileParty.MapFaction;
      if (currentSettlement != settlement && (mobileParty.Army == null || mobileParty.Army.LeaderParty != mobileParty))
      {
        if (settlement.OwnerClan.Leader == leaderHero)
        {
          float currentTime = Campaign.CurrentTime;
          float visitTimeOfOwner = settlement.LastVisitTimeOfOwner;
          float num5 = (float) (((double) currentTime - (double) visitTimeOfOwner > 24.0 ? (double) currentTime - (double) visitTimeOfOwner : (24.0 - ((double) currentTime - (double) visitTimeOfOwner)) * 15.0) / 360.0);
          num1 += num5;
        }
        if ((double) MBRandom.RandomFloat < 0.10000000149011612 && settlement.IsFortification && leaderHero.Clan != Clan.PlayerClan && (settlement.OwnerClan.Leader == leaderHero || settlement.OwnerClan == leaderHero.Clan))
        {
          if ((double) idealGarrisonStrengthPerWalledCenter == -1.0)
            idealGarrisonStrengthPerWalledCenter = FactionHelper.FindIdealGarrisonStrengthPerWalledCenter(mapFaction as Kingdom);
          int takeFromGarrison = Campaign.Current.Models.SettlementGarrisonModel.FindNumberOfTroopsToTakeFromGarrison(mobileParty, settlement, idealGarrisonStrengthPerWalledCenter);
          if (takeFromGarrison > 0)
          {
            num2 = 1f + MathF.Pow((float) takeFromGarrison, 0.67f);
            if (mobileParty.Army != null && mobileParty.Army.LeaderParty == mobileParty)
              num2 = (float) (1.0 + ((double) num2 - 1.0) / (double) MathF.Sqrt((float) mobileParty.Army.Parties.Count));
          }
        }
      }
      if (settlement == leaderHero.HomeSettlement && mobileParty.Army == null)
      {
        float num6 = leaderHero.HomeSettlement.IsCastle ? 1.5f : 1f;
        if (currentSettlement == settlement)
          num3 += (float) (3000.0 * (double) num6 / (250.0 + (double) leaderHero.PassedTimeAtHomeSettlement * (double) leaderHero.PassedTimeAtHomeSettlement));
        else
          num3 += (float) (1000.0 * (double) num6 / (250.0 + (double) leaderHero.PassedTimeAtHomeSettlement * (double) leaderHero.PassedTimeAtHomeSettlement));
      }
      if (settlement != currentSettlement)
      {
        float num7 = 1f;
        if (mobileParty.LastVisitedSettlement == settlement)
          num7 = 0.25f;
        if (settlement.IsFortification && settlement.MapFaction == mapFaction && settlement.OwnerClan != Clan.PlayerClan)
        {
          float num8 = settlement.Town.GarrisonParty != null ? settlement.Town.GarrisonParty.Party.TotalStrength : 0.0f;
          float num9 = FactionHelper.OwnerClanEconomyEffectOnGarrisonSizeConstant(settlement.OwnerClan);
          float num10 = FactionHelper.SettlementProsperityEffectOnGarrisonSizeConstant(settlement.Town);
          float num11 = FactionHelper.SettlementFoodPotentialEffectOnGarrisonSizeConstant(settlement);
          if ((double) idealGarrisonStrengthPerWalledCenter == -1.0)
            idealGarrisonStrengthPerWalledCenter = FactionHelper.FindIdealGarrisonStrengthPerWalledCenter(mapFaction as Kingdom);
          float num12 = idealGarrisonStrengthPerWalledCenter;
          float num13;
          if (settlement.Town.GarrisonParty != null && settlement.Town.GarrisonParty.HasLimitedWage())
          {
            num13 = (float) settlement.Town.GarrisonParty.PaymentLimit / Campaign.Current.AverageWage;
          }
          else
          {
            if (mobileParty.Army != null)
              num12 *= 0.75f;
            num13 = num12 * (num9 * num10 * num11);
          }
          float num14 = num13;
          if ((double) num8 < (double) num14)
          {
            float num15 = settlement.OwnerClan == leaderHero.Clan ? 149f : 99f;
            if (settlement.OwnerClan == Clan.PlayerClan)
              num15 *= 0.5f;
            float num16 = (float) (1.0 - (double) num8 / (double) num14);
            num4 = (float) (1.0 + (double) num15 * (double) distanceScorePure * (double) distanceScorePure * (double) averagePartySizeRatioToMaximumSize * (double) num16 * (double) num16 * (double) num16 * (double) num7);
          }
        }
      }
      return (num1, num2, num3, num4);
    }

    private float CalculateMergeScoreForDisbandingParty(
      MobileParty disbandParty,
      Settlement settlement,
      float distance)
    {
      double num1 = (double) MathF.Pow((float) (3.5 - 0.949999988079071 * ((double) Math.Min(Campaign.MapDiagonal, distance) / (double) Campaign.MapDiagonal)), 3f);
      float num2 = disbandParty.Party.Owner?.Clan == settlement.OwnerClan ? 1f : (disbandParty.Party.Owner?.MapFaction == settlement.MapFaction ? 0.35f : 0.025f);
      float num3 = disbandParty.DefaultBehavior != AiBehavior.GoToSettlement || disbandParty.TargetSettlement != settlement ? 0.3f : 1f;
      float num4 = settlement.IsFortification ? 3f : 1f;
      double num5 = (double) num2;
      float forDisbandingParty = (float) (num1 * num5) * num3 * num4;
      if ((double) forDisbandingParty < 0.02500000037252903)
        forDisbandingParty = 0.035f;
      return forDisbandingParty;
    }

    private float CalculateMergeScoreForLeaderlessParty(
      MobileParty leaderlessParty,
      Settlement settlement,
      float distance)
    {
      if (settlement.IsVillage)
        return -1.6f;
      double num1 = (double) MathF.Pow((float) (3.5 - 0.949999988079071 * ((double) Math.Min(Campaign.MapDiagonal, distance) / (double) Campaign.MapDiagonal)), 3f);
      float num2 = leaderlessParty.ActualClan == settlement.OwnerClan ? 2f : (leaderlessParty.ActualClan?.MapFaction == settlement.MapFaction ? 0.35f : 0.0f);
      float num3 = leaderlessParty.DefaultBehavior != AiBehavior.GoToSettlement || leaderlessParty.TargetSettlement != settlement ? 0.3f : 1f;
      float num4 = settlement.IsFortification ? 3f : 0.5f;
      double num5 = (double) num2;
      return (float) (num1 * num5) * num3 * num4;
    }

    private SortedList<(float, int), Settlement> FindSettlementsToVisitWithDistances(
      MobileParty mobileParty)
    {
      SortedList<(float, int), Settlement> visitWithDistances = new SortedList<(float, int), Settlement>();
      MapDistanceModel mapDistanceModel = Campaign.Current.Models.MapDistanceModel;
      if (mobileParty.LeaderHero != null && mobileParty.LeaderHero.MapFaction.IsKingdomFaction)
      {
        if (mobileParty.Army == null || mobileParty.Army.LeaderParty == mobileParty)
        {
          LocatableSearchData<Settlement> data = Settlement.StartFindingLocatablesAroundPosition(mobileParty.Position2D, 30f);
          for (Settlement nextLocatable = Settlement.FindNextLocatable(ref data); nextLocatable != null; nextLocatable = Settlement.FindNextLocatable(ref data))
          {
            if (!nextLocatable.IsCastle && nextLocatable.MapFaction != mobileParty.MapFaction && this.IsSettlementSuitableForVisitingCondition(mobileParty, nextLocatable))
            {
              float distance = mapDistanceModel.GetDistance(mobileParty, nextLocatable);
              if ((double) distance < 350.0)
                visitWithDistances.Add((distance, nextLocatable.GetHashCode()), nextLocatable);
            }
          }
        }
        foreach (Settlement settlement in (List<Settlement>) mobileParty.MapFaction.Settlements)
        {
          if (this.IsSettlementSuitableForVisitingCondition(mobileParty, settlement))
          {
            float distance = mapDistanceModel.GetDistance(mobileParty, settlement);
            if ((double) distance < 350.0)
              visitWithDistances.Add((distance, settlement.GetHashCode()), settlement);
          }
        }
      }
      else
      {
        LocatableSearchData<Settlement> data = Settlement.StartFindingLocatablesAroundPosition(mobileParty.Position2D, 50f);
        for (Settlement nextLocatable = Settlement.FindNextLocatable(ref data); nextLocatable != null; nextLocatable = Settlement.FindNextLocatable(ref data))
        {
          if (this.IsSettlementSuitableForVisitingCondition(mobileParty, nextLocatable))
          {
            float distance = mapDistanceModel.GetDistance(mobileParty, nextLocatable);
            if ((double) distance < 350.0)
              visitWithDistances.Add((distance, nextLocatable.GetHashCode()), nextLocatable);
          }
        }
      }
      return visitWithDistances;
    }

    private void AddBehaviorTupleWithScore(
      PartyThinkParams p,
      Settlement settlement,
      float visitingNearbySettlementScore)
    {
      AIBehaviorTuple aiBehaviorTuple = new AIBehaviorTuple((IMapPoint) settlement, AiBehavior.GoToSettlement);
      float score;
      if (p.TryGetBehaviorScore(in aiBehaviorTuple, out score))
        p.SetBehaviorScore(in aiBehaviorTuple, score + visitingNearbySettlementScore);
      else
        p.AddBehaviorScore((aiBehaviorTuple, visitingNearbySettlementScore));
    }

    private bool IsSettlementSuitableForVisitingCondition(
      MobileParty mobileParty,
      Settlement settlement)
    {
      if (settlement.Party.MapEvent != null || settlement.Party.SiegeEvent != null || mobileParty.Party.Owner.MapFaction.IsAtWarWith(settlement.MapFaction) && (!mobileParty.Party.Owner.MapFaction.IsMinorFaction || !settlement.IsVillage) || !settlement.IsVillage && !settlement.IsFortification)
        return false;
      return !settlement.IsVillage || settlement.Village.VillageState == Village.VillageStates.Normal;
    }
  }
}

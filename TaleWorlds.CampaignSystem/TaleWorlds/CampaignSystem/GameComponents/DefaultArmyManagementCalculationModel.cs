// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultArmyManagementCalculationModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.CampaignBehaviors;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Party.PartyComponents;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Siege;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultArmyManagementCalculationModel : ArmyManagementCalculationModel
  {
    private const float MobilePartySizeRatioToCallToArmy = 0.6f;
    private const float MinimumNeededFoodInDaysToCallToArmy = 5f;
    private static readonly TextObject _numberOfPartiesText = GameTexts.FindText("str_number_of_parties");
    private static readonly TextObject _numberOfStarvingPartiesText = GameTexts.FindText("str_number_of_starving_parties");
    private static readonly TextObject _numberOfLowMoralePartiesText = GameTexts.FindText("str_number_of_low_morale_parties");
    private static readonly TextObject _numberOfLessMemberPartiesText = GameTexts.FindText("str_number_of_less_member_parties");
    private float _minimumPartySizeScoreNeeded = 0.4f;

    public override int InfluenceValuePerGold => 40;

    public override int AverageCallToArmyCost => 20;

    public override int CohesionThresholdForDispersion => 10;

    public override float DailyBeingAtArmyInfluenceAward(MobileParty armyMemberParty)
    {
      float num = (float) (((double) armyMemberParty.Party.TotalStrength + 20.0) / 200.0);
      if (PartyBaseHelper.HasFeat(armyMemberParty.Party, DefaultCulturalFeats.EmpireArmyInfluenceFeat))
        num += num * DefaultCulturalFeats.EmpireArmyInfluenceFeat.EffectBonus;
      return num;
    }

    public override int CalculatePartyInfluenceCost(MobileParty armyLeaderParty, MobileParty party)
    {
      if (armyLeaderParty.LeaderHero != null && party.LeaderHero != null && armyLeaderParty.LeaderHero.Clan == party.LeaderHero.Clan)
        return 0;
      float relation = (float) armyLeaderParty.LeaderHero.GetRelation(party.LeaderHero);
      float partySizeScore = this.GetPartySizeScore(party);
      float b = (float) MathF.Round(party.Party.TotalStrength);
      float num1 = (double) relation < 0.0 ? (float) (1.0 + (double) MathF.Sqrt(MathF.Abs(MathF.Max(-100f, relation))) / 10.0) : (float) (1.0 - (double) MathF.Sqrt(MathF.Abs(MathF.Min(100f, relation))) / 20.0);
      float num2 = (float) (0.5 + (double) MathF.Min(1000f, b) / 100.0);
      float num3 = (float) (0.5 + 1.0 * (1.0 - ((double) partySizeScore - (double) this._minimumPartySizeScoreNeeded) / (1.0 - (double) this._minimumPartySizeScoreNeeded)));
      float num4 = (float) (1.0 + 1.0 * (double) MathF.Pow(MathF.Min(Campaign.MapDiagonal * 10f, MathF.Max(1f, Campaign.Current.Models.MapDistanceModel.GetDistance(armyLeaderParty, party)) / Campaign.MapDiagonal), 0.67f));
      float num5 = party.LeaderHero != null ? party.LeaderHero.RandomFloat(0.75f, 1.25f) : 1f;
      float num6 = 1f;
      float num7 = 1f;
      float num8 = 1f;
      if (armyLeaderParty.LeaderHero?.Clan.Kingdom != null)
      {
        if (armyLeaderParty.LeaderHero.Clan.Tier >= 5 && armyLeaderParty.LeaderHero.Clan.Kingdom.ActivePolicies.Contains(DefaultPolicies.Marshals))
          num6 -= 0.1f;
        if (armyLeaderParty.LeaderHero.Clan.Kingdom.ActivePolicies.Contains(DefaultPolicies.RoyalCommissions))
        {
          if (armyLeaderParty.LeaderHero == armyLeaderParty.LeaderHero.Clan.Kingdom.Leader)
            num6 -= 0.3f;
          else
            num6 += 0.1f;
        }
        if (party.LeaderHero != null)
        {
          if (armyLeaderParty.LeaderHero.Clan.Kingdom.ActivePolicies.Contains(DefaultPolicies.LordsPrivyCouncil) && party.LeaderHero.Clan.Tier <= 4)
            num6 += 0.2f;
          if (armyLeaderParty.LeaderHero.Clan.Kingdom.ActivePolicies.Contains(DefaultPolicies.Senate) && party.LeaderHero.Clan.Tier <= 2)
            num6 += 0.1f;
        }
        if (armyLeaderParty.LeaderHero.GetPerkValue(DefaultPerks.Leadership.InspiringLeader))
          num7 += DefaultPerks.Leadership.InspiringLeader.PrimaryBonus;
        if (armyLeaderParty.LeaderHero.GetPerkValue(DefaultPerks.Tactics.CallToArms))
          num7 += DefaultPerks.Tactics.CallToArms.SecondaryBonus;
      }
      if (PartyBaseHelper.HasFeat(armyLeaderParty.Party, DefaultCulturalFeats.VlandianArmyInfluenceFeat))
        num8 += DefaultCulturalFeats.VlandianArmyInfluenceFeat.EffectBonus;
      return (int) (0.64999997615814209 * (double) num1 * (double) num2 * (double) num5 * (double) num4 * (double) num3 * (double) num6 * (double) num7 * (double) num8 * (double) this.AverageCallToArmyCost);
    }

    public override List<MobileParty> GetMobilePartiesToCallToArmy(MobileParty leaderParty)
    {
      List<MobileParty> partiesToCallToArmy = new List<MobileParty>();
      bool flag1 = false;
      bool flag2 = false;
      if (leaderParty.LeaderHero != null)
      {
        foreach (Settlement settlement in (List<Settlement>) leaderParty.MapFaction.Settlements)
        {
          if (settlement.IsFortification && settlement.SiegeEvent != null)
          {
            flag1 = true;
            if (settlement.OwnerClan == leaderParty.LeaderHero.Clan)
              flag2 = true;
          }
        }
      }
      float b = (float) ((0.550000011920929 - (double) MathF.Min(2, !leaderParty.MapFaction.IsKingdomFaction || (Kingdom) leaderParty.MapFaction == null ? 0 : ((Kingdom) leaderParty.MapFaction).Armies.Count) * 0.05000000074505806 - (Hero.MainHero.MapFaction == leaderParty.MapFaction ? 0.05000000074505806 : 0.0)) * (1.0 - 0.5 * (double) MathF.Sqrt(MathF.Min(leaderParty.LeaderHero.Clan.Influence, 900f)) * 0.033333335071802139) * (flag2 ? 1.25 : 1.0) * (flag1 ? 1.125 : 1.0)) * leaderParty.LeaderHero.RandomFloat(0.85f, 1f);
      float num1 = MathF.Min(leaderParty.LeaderHero.Clan.Influence, 900f) * MathF.Min(1f, b);
      List<(MobileParty, float)> valueTupleList = new List<(MobileParty, float)>();
      foreach (PartyComponent warPartyComponent in (List<WarPartyComponent>) leaderParty.MapFaction.WarPartyComponents)
      {
        MobileParty mobileParty = warPartyComponent.MobileParty;
        Hero leaderHero = mobileParty.LeaderHero;
        if (mobileParty.IsLordParty && mobileParty.Army == null && mobileParty != leaderParty && leaderHero != null && !mobileParty.IsMainParty && leaderHero != leaderHero.MapFaction.Leader && !mobileParty.Ai.DoNotMakeNewDecisions && mobileParty.CurrentSettlement?.SiegeEvent == null && !mobileParty.IsDisbanding && (double) mobileParty.Food > -((double) mobileParty.FoodChange * 5.0) && (double) mobileParty.PartySizeRatio > 0.60000002384185791 && leaderHero.CanLeadParty() && mobileParty.MapEvent == null && mobileParty.BesiegedSettlement == null)
        {
          IDisbandPartyCampaignBehavior campaignBehavior = Campaign.Current.GetCampaignBehavior<IDisbandPartyCampaignBehavior>();
          if ((campaignBehavior != null ? (!campaignBehavior.IsPartyWaitingForDisband(mobileParty) ? 1 : 0) : 1) != 0)
          {
            bool flag3 = false;
            foreach ((MobileParty, float) valueTuple in valueTupleList)
            {
              if (valueTuple.Item1 == mobileParty)
              {
                flag3 = true;
                break;
              }
            }
            if (!flag3)
            {
              int partyInfluenceCost = Campaign.Current.Models.ArmyManagementCalculationModel.CalculatePartyInfluenceCost(leaderParty, mobileParty);
              double totalStrength = (double) mobileParty.Party.TotalStrength;
              float num2 = (float) (1.0 - (double) mobileParty.Party.MemberRoster.TotalWounded / (double) mobileParty.Party.MemberRoster.TotalManCount);
              double num3 = (double) partyInfluenceCost + 0.10000000149011612;
              float num4 = (float) (totalStrength / num3) * num2;
              valueTupleList.Add((mobileParty, num4));
            }
          }
        }
      }
      int index1;
      do
      {
        float num5 = 0.01f;
        index1 = -1;
        for (int index2 = 0; index2 < valueTupleList.Count; ++index2)
        {
          (MobileParty, float) valueTuple = valueTupleList[index2];
          if ((double) valueTuple.Item2 > (double) num5)
          {
            index1 = index2;
            num5 = valueTuple.Item2;
          }
        }
        if (index1 >= 0)
        {
          MobileParty party = valueTupleList[index1].Item1;
          int partyInfluenceCost = Campaign.Current.Models.ArmyManagementCalculationModel.CalculatePartyInfluenceCost(leaderParty, party);
          valueTupleList[index1] = (party, 0.0f);
          if ((double) num1 > (double) partyInfluenceCost)
          {
            num1 -= (float) partyInfluenceCost;
            partiesToCallToArmy.Add(party);
          }
        }
      }
      while (index1 >= 0);
      return partiesToCallToArmy;
    }

    public override int CalculateTotalInfluenceCost(Army army, float percentage)
    {
      int baseNumber = 0;
      foreach (MobileParty party in army.Parties.Where<MobileParty>((Func<MobileParty, bool>) (p => !p.IsMainParty)))
        baseNumber += this.CalculatePartyInfluenceCost(army.LeaderParty, party);
      ExplainedNumber explainedNumber = new ExplainedNumber((float) baseNumber);
      if (army.LeaderParty.MapFaction.IsKingdomFaction && ((Kingdom) army.LeaderParty.MapFaction).ActivePolicies.Contains(DefaultPolicies.RoyalCommissions))
        explainedNumber.AddFactor(-0.3f);
      if (army.LeaderParty.LeaderHero.GetPerkValue(DefaultPerks.Tactics.Encirclement))
        explainedNumber.AddFactor(DefaultPerks.Tactics.Encirclement.SecondaryBonus);
      return MathF.Ceiling((float) ((double) explainedNumber.ResultNumber * (double) percentage / 100.0));
    }

    public override float GetPartySizeScore(MobileParty party)
    {
      return MathF.Min(1f, party.PartySizeRatio);
    }

    public override ExplainedNumber CalculateDailyCohesionChange(
      Army army,
      bool includeDescriptions = false)
    {
      ExplainedNumber cohesionChange = new ExplainedNumber(-2f, includeDescriptions);
      this.CalculateCohesionChangeInternal(army, ref cohesionChange);
      if (army.LeaderParty.HasPerk(DefaultPerks.Tactics.HordeLeader, true))
        cohesionChange.AddFactor(DefaultPerks.Tactics.HordeLeader.SecondaryBonus, DefaultPerks.Tactics.HordeLeader.Name);
      SiegeEvent siegeEvent = army.LeaderParty.SiegeEvent;
      if (siegeEvent != null && siegeEvent.BesiegerCamp.IsBesiegerSideParty(army.LeaderParty) && army.LeaderParty.HasPerk(DefaultPerks.Engineering.CampBuilding))
        cohesionChange.AddFactor(DefaultPerks.Engineering.CampBuilding.PrimaryBonus, DefaultPerks.Engineering.CampBuilding.Name);
      if (PartyBaseHelper.HasFeat(army.LeaderParty?.Party, DefaultCulturalFeats.SturgianArmyCohesionFeat))
        cohesionChange.AddFactor(DefaultCulturalFeats.SturgianArmyCohesionFeat.EffectBonus, GameTexts.FindText("str_culture"));
      return cohesionChange;
    }

    private void CalculateCohesionChangeInternal(Army army, ref ExplainedNumber cohesionChange)
    {
      int num1 = 0;
      int num2 = 0;
      int num3 = 0;
      int num4 = 0;
      foreach (MobileParty attachedParty in (List<MobileParty>) army.LeaderParty.AttachedParties)
      {
        if (attachedParty.Party.IsStarving)
          ++num1;
        if ((double) attachedParty.Morale <= 25.0)
          ++num2;
        if (attachedParty.Party.NumberOfHealthyMembers <= 10)
          ++num3;
        ++num4;
      }
      cohesionChange.Add((float) -num4, DefaultArmyManagementCalculationModel._numberOfPartiesText);
      cohesionChange.Add((float) -((num1 + 1) / 2), DefaultArmyManagementCalculationModel._numberOfStarvingPartiesText);
      cohesionChange.Add((float) -((num2 + 1) / 2), DefaultArmyManagementCalculationModel._numberOfLowMoralePartiesText);
      cohesionChange.Add((float) -((num3 + 1) / 2), DefaultArmyManagementCalculationModel._numberOfLessMemberPartiesText);
    }

    public override int CalculateNewCohesion(
      Army army,
      PartyBase newParty,
      int calculatedCohesion,
      int sign)
    {
      if (army == null)
        return calculatedCohesion;
      sign = MathF.Sign(sign);
      int num1 = sign == 1 ? army.Parties.Count - 1 : army.Parties.Count;
      int num2 = (calculatedCohesion * num1 + 100 * sign) / (num1 + sign);
      if (num2 > 100)
        return 100;
      return num2 >= 0 ? num2 : 0;
    }

    public override int GetCohesionBoostInfluenceCost(Army army, int percentageToBoost = 100)
    {
      return this.CalculateTotalInfluenceCost(army, (float) percentageToBoost);
    }

    public override int GetCohesionBoostGoldCost(Army army, float percentageToBoost = 100f)
    {
      return this.CalculateTotalInfluenceCost(army, percentageToBoost) * this.InfluenceValuePerGold;
    }

    public override int GetPartyRelation(Hero hero)
    {
      if (hero == null)
        return -101;
      return hero == Hero.MainHero ? 101 : Hero.MainHero.GetRelation(hero);
    }

    public override int GetPartyStrength(PartyBase party) => MathF.Round(party.TotalStrength);

    public override bool CheckPartyEligibility(MobileParty party)
    {
      return party.Army == null && (double) this.GetPartySizeScore(party) > (double) this._minimumPartySizeScoreNeeded && party.MapEvent == null && party.SiegeEvent == null;
    }
  }
}

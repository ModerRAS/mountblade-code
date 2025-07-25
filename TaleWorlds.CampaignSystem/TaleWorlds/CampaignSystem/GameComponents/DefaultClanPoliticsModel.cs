// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultClanPoliticsModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Election;
using TaleWorlds.CampaignSystem.Issues;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Party.PartyComponents;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Buildings;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultClanPoliticsModel : ClanPoliticsModel
  {
    private static readonly TextObject _supporterStr = new TextObject("{=RzFyGnWJ}Supporters");
    private static readonly TextObject _crimeStr = new TextObject("{=MvxW9rmf}Criminal");
    private static readonly TextObject _armyMemberStr = new TextObject("{=XAdBVsXV}Clan members in an army");
    private static readonly TextObject _townProjectStr = new TextObject("{=8Yb3IVvb}Settlement Buildings");
    private static readonly TextObject _courtshipPerkStr = new TextObject("{=zgzDwZKZ}Courtship from clan parties");
    private static readonly TextObject _mercenaryStr = new TextObject("{=qcaaJLhx}Mercenary Contract");
    private static readonly TextObject _kingBonusStr = new TextObject("{=JNS46jsG}King bonus");

    public override ExplainedNumber CalculateInfluenceChange(Clan clan, bool includeDescriptions = false)
    {
      ExplainedNumber influenceChange = new ExplainedNumber(includeDescriptions: includeDescriptions);
      this.CalculateInfluenceChangeInternal(clan, ref influenceChange);
      return influenceChange;
    }

    private void CalculateInfluenceChangeInternal(Clan clan, ref ExplainedNumber influenceChange)
    {
      if (clan.Leader.GetPerkValue(DefaultPerks.Charm.ImmortalCharm))
        influenceChange.Add(DefaultPerks.Charm.ImmortalCharm.PrimaryBonus, DefaultPerks.Charm.ImmortalCharm.Name);
      if (clan.IsUnderMercenaryService)
      {
        int num = MathF.Ceiling(clan.Influence * (1f / Campaign.Current.Models.ClanFinanceModel.RevenueSmoothenFraction()));
        influenceChange.Add((float) -num, DefaultClanPoliticsModel._mercenaryStr);
      }
      float num1 = 0.0f;
      foreach (PartyComponent warPartyComponent in (List<WarPartyComponent>) clan.WarPartyComponents)
      {
        MobileParty mobileParty = warPartyComponent.MobileParty;
        if (mobileParty.Army != null && mobileParty.Army.LeaderParty != mobileParty && mobileParty.LeaderHero != null)
          num1 += Campaign.Current.Models.ArmyManagementCalculationModel.DailyBeingAtArmyInfluenceAward(mobileParty);
      }
      influenceChange.Add(num1, DefaultClanPoliticsModel._armyMemberStr);
      if (clan.MapFaction.Leader == clan.Leader && clan.MapFaction.IsKingdomFaction)
        influenceChange.Add(3f, DefaultClanPoliticsModel._kingBonusStr);
      float num2 = 0.0f;
      foreach (Settlement settlement in (List<Settlement>) clan.Settlements)
      {
        if (settlement.IsTown)
        {
          foreach (Building building in (List<Building>) settlement.Town.Buildings)
            num2 += building.GetBuildingEffectAmount(BuildingEffectEnum.Influence);
        }
      }
      if ((double) num2 > 0.0)
        influenceChange.Add(num2, DefaultClanPoliticsModel._townProjectStr);
      if (clan == Clan.PlayerClan && (double) clan.MapFaction.MainHeroCrimeRating > 0.0)
      {
        int num3 = (int) ((double) clan.MapFaction.MainHeroCrimeRating * -0.5);
        influenceChange.Add((float) num3, DefaultClanPoliticsModel._crimeStr);
      }
      float num4 = 0.0f;
      foreach (Hero supporterNotable in (List<Hero>) clan.SupporterNotables)
      {
        if (supporterNotable.CurrentSettlement != null)
        {
          float influenceBonusToClan = Campaign.Current.Models.NotablePowerModel.GetInfluenceBonusToClan(supporterNotable);
          num4 += influenceBonusToClan;
        }
      }
      if ((double) num4 > 0.0)
        influenceChange.Add(num4, DefaultClanPoliticsModel._supporterStr);
      if (clan.Kingdom != null && !clan.IsUnderMercenaryService)
        this.CalculateInfluenceChangeDueToPolicies(clan, ref influenceChange);
      this.CalculateInfluenceChangeDueToIssues(clan, ref influenceChange);
    }

    private void CalculateInfluenceChangeDueToIssues(Clan clan, ref ExplainedNumber influenceChange)
    {
      Campaign.Current.Models.IssueModel.GetIssueEffectOfClan(DefaultIssueEffects.ClanInfluence, clan, ref influenceChange);
    }

    private void CalculateInfluenceChangeDueToPolicies(
      Clan clan,
      ref ExplainedNumber influenceChange)
    {
      if (clan.Kingdom.ActivePolicies.Contains(DefaultPolicies.FeudalInheritance))
        influenceChange.Add(0.1f * (float) clan.Settlements.Count, DefaultPolicies.FeudalInheritance.Name);
      if (clan.Kingdom.ActivePolicies.Contains(DefaultPolicies.Serfdom))
        influenceChange.Add(0.2f * (float) clan.Settlements.Count<Settlement>((Func<Settlement, bool>) (t => t.IsVillage)), DefaultPolicies.Serfdom.Name);
      if (clan.Kingdom.ActivePolicies.Contains(DefaultPolicies.LordsPrivyCouncil) && clan.Tier >= 5)
        influenceChange.Add(0.5f, DefaultPolicies.LordsPrivyCouncil.Name);
      if (clan.Kingdom.ActivePolicies.Contains(DefaultPolicies.Senate) && clan.Tier >= 3)
        influenceChange.Add(0.5f, DefaultPolicies.Senate.Name);
      if (clan.Kingdom.ActivePolicies.Contains(DefaultPolicies.NobleRetinues) && clan.Tier >= 5)
        influenceChange.Add(-1f, DefaultPolicies.NobleRetinues.Name);
      if (clan.Kingdom.ActivePolicies.Contains(DefaultPolicies.Bailiffs))
      {
        int num = clan.Settlements.Count<Settlement>((Func<Settlement, bool>) (settlement => settlement.IsTown && (double) settlement.Town.Security > 60.0));
        influenceChange.Add((float) num, DefaultPolicies.Bailiffs.Name);
      }
      if (clan.Kingdom.ActivePolicies.Contains(DefaultPolicies.CouncilOfTheCommons))
      {
        float num = 0.0f;
        foreach (Settlement settlement in (List<Settlement>) clan.Settlements)
          num += (float) settlement.Notables.Count * 0.1f;
        influenceChange.Add(num, DefaultPolicies.CouncilOfTheCommons.Name);
      }
      if (clan.Kingdom.ActivePolicies.Contains(DefaultPolicies.TrialByJury))
        influenceChange.Add(-1f, DefaultPolicies.TrialByJury.Name);
      if (clan.Kingdom.ActivePolicies.Contains(DefaultPolicies.Lawspeakers))
      {
        float num = clan.Leader.GetSkillValue(DefaultSkills.Charm) > 100 ? 0.5f : -0.5f;
        influenceChange.Add(num, DefaultPolicies.Lawspeakers.Name);
      }
      if (clan == clan.Kingdom.RulingClan)
      {
        if (clan.Kingdom.ActivePolicies.Contains(DefaultPolicies.SacredMajesty))
          influenceChange.Add(3f, DefaultPolicies.SacredMajesty.Name);
        if (!clan.Kingdom.ActivePolicies.Contains(DefaultPolicies.Marshals))
          return;
        influenceChange.Add(-1f, DefaultPolicies.Marshals.Name);
      }
      else
      {
        if (clan.Kingdom.ActivePolicies.Contains(DefaultPolicies.SacredMajesty))
          influenceChange.Add(-0.5f, DefaultPolicies.SacredMajesty.Name);
        if (!clan.Kingdom.ActivePolicies.Contains(DefaultPolicies.RoyalGuard))
          return;
        influenceChange.Add(-0.2f, DefaultPolicies.RoyalGuard.Name);
      }
    }

    public override float CalculateSupportForPolicyInClan(Clan clan, PolicyObject policy)
    {
      float num1 = 1f;
      float num2 = (float) clan.Leader.GetTraitLevel(DefaultTraits.Authoritarian) * policy.AuthoritarianWeight * num1;
      float num3 = (float) clan.Leader.GetTraitLevel(DefaultTraits.Egalitarian) * policy.EgalitarianWeight * num1;
      float num4 = (float) clan.Leader.GetTraitLevel(DefaultTraits.Oligarchic) * policy.OligarchicWeight * num1;
      float num5;
      float num6;
      float num7;
      if (clan.Tier == 1)
      {
        num5 = policy.EgalitarianWeight;
        num6 = 0.0f;
        num7 = 0.0f;
      }
      else if (clan.Tier == 2)
      {
        num5 = policy.EgalitarianWeight;
        num6 = 0.0f;
        num7 = 0.0f;
      }
      else if (clan.Tier == 3)
      {
        num5 = policy.EgalitarianWeight;
        num6 = 0.0f;
        num7 = 0.0f;
      }
      else if (clan.Tier == 4)
      {
        num5 = 0.0f;
        num6 = policy.OligarchicWeight;
        num7 = 0.0f;
      }
      else if (clan.Tier == 5)
      {
        num5 = 0.0f;
        num6 = policy.OligarchicWeight;
        num7 = 0.0f;
      }
      else
      {
        num5 = 0.0f;
        num6 = policy.OligarchicWeight;
        num7 = 0.0f;
      }
      float num8 = 0.0f;
      if (clan.Kingdom.RulingClan == clan)
      {
        if (clan.Leader.GetTraitLevel(DefaultTraits.Oligarchic) > 0 || clan.Leader.GetTraitLevel(DefaultTraits.Egalitarian) > 0)
          num8 = -0.5f;
        else if (clan.Leader.GetTraitLevel(DefaultTraits.Authoritarian) > 0)
          num8 = 1f;
      }
      return MathF.Clamp((float) (0.0 + ((double) num2 + (double) num3 + (double) num4 + (double) num5 + (double) num6 + (double) num7 + (double) num8)), -2f, 2f);
    }

    public override float CalculateRelationshipChangeWithSponsor(Clan clan, Clan sponsorClan)
    {
      return MathF.Lerp(-2f, 2f, MathF.Clamp((float) clan.Leader.GetRelation(sponsorClan.Leader) / 60f, 0.0f, 1f));
    }

    public override int GetInfluenceRequiredToOverrideKingdomDecision(
      DecisionOutcome popularOption,
      DecisionOutcome overridingOption,
      KingdomDecision decision)
    {
      float totalSupportPoints1 = popularOption.TotalSupportPoints;
      float totalSupportPoints2 = overridingOption.TotalSupportPoints;
      float num1 = 0.0f;
      if (decision.Kingdom.RulingClan == Clan.PlayerClan)
      {
        if ((double) totalSupportPoints1 == (double) totalSupportPoints2 + 1.0)
        {
          ++totalSupportPoints2;
          num1 += (float) decision.GetInfluenceCostOfSupport(Clan.PlayerClan, Supporter.SupportWeights.SlightlyFavor);
        }
        else if ((double) totalSupportPoints1 == (double) totalSupportPoints2 + 2.0)
        {
          totalSupportPoints2 += 2f;
          num1 += (float) decision.GetInfluenceCostOfSupport(Clan.PlayerClan, Supporter.SupportWeights.StronglyFavor);
        }
        else if ((double) totalSupportPoints1 > (double) totalSupportPoints2 + 2.0)
        {
          totalSupportPoints2 += 3f;
          num1 += (float) decision.GetInfluenceCostOfSupport(Clan.PlayerClan, Supporter.SupportWeights.FullyPush);
        }
      }
      if ((double) totalSupportPoints1 > (double) totalSupportPoints2)
      {
        float num2 = (float) (((double) totalSupportPoints1 - (double) totalSupportPoints2) / 3.0 * (double) decision.GetInfluenceCostOfSupport(decision.Kingdom.RulingClan, Supporter.SupportWeights.FullyPush) * 1.3999999761581421);
        if (decision.Kingdom.ActivePolicies.Contains(DefaultPolicies.RoyalPrivilege))
          num2 *= 0.8f;
        if (decision.Kingdom.RulingClan != Clan.PlayerClan)
          num2 *= 0.8f;
        num1 += num2;
      }
      return (int) (float) (5 * (int) ((double) num1 / 5.0));
    }

    public override bool CanHeroBeGovernor(Hero hero)
    {
      return hero.IsActive && !hero.IsChild && !hero.IsHumanPlayerCharacter && !hero.IsPartyLeader && !hero.IsFugitive && !hero.IsReleased && !hero.IsTraveling && !hero.IsPrisoner && hero.CanBeGovernorOrHavePartyRole() && !hero.IsSpecial && !hero.IsTemplate;
    }
  }
}

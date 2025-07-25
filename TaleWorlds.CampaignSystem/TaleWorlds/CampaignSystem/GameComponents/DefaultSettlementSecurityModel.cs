// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultSettlementSecurityModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Issues;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultSettlementSecurityModel : SettlementSecurityModel
  {
    private const float GarrisonHighSecurityGain = 3f;
    private const float GarrisonLowSecurityPenalty = -3f;
    private const float NearbyHideoutPenalty = -2f;
    private const float VillageLootedSecurityEffect = -2f;
    private const float UnderSiegeSecurityEffect = -3f;
    private const float MaxProsperityEffect = -5f;
    private const float PerProsperityEffect = -0.0005f;
    private static readonly TextObject GarrisonText = GameTexts.FindText("str_garrison");
    private static readonly TextObject LootedVillagesText = GameTexts.FindText("str_looted_villages");
    private static readonly TextObject CorruptionText = GameTexts.FindText("str_corruption");
    private static readonly TextObject NearbyHideoutText = GameTexts.FindText("str_nearby_hideout");
    private static readonly TextObject UnderSiegeText = GameTexts.FindText("str_under_siege");
    private static readonly TextObject ProsperityText = GameTexts.FindText("str_prosperity");
    private static readonly TextObject Security = GameTexts.FindText("str_security");
    private static readonly TextObject SecurityDriftText = GameTexts.FindText("str_security_drift");

    public override int MaximumSecurityInSettlement => 100;

    public override int SecurityDriftMedium => 50;

    public override float MapEventSecurityEffectRadius => 50f;

    public override float HideoutClearedSecurityEffectRadius => 100f;

    public override int HideoutClearedSecurityGain => 6;

    public override int ThresholdForTaxCorruption => 50;

    public override int ThresholdForHigherTaxCorruption => 0;

    public override int ThresholdForTaxBoost => 75;

    public override int SettlementTaxBoostPercentage => 5;

    public override int SettlementTaxPenaltyPercentage => 10;

    public override int ThresholdForNotableRelationBonus => 75;

    public override int ThresholdForNotableRelationPenalty => 50;

    public override int DailyNotableRelationBonus => 1;

    public override int DailyNotableRelationPenalty => -1;

    public override int DailyNotablePowerBonus => 1;

    public override int DailyNotablePowerPenalty => -1;

    public override ExplainedNumber CalculateSecurityChange(Town town, bool includeDescriptions = false)
    {
      ExplainedNumber securityChange = new ExplainedNumber(includeDescriptions: includeDescriptions);
      this.CalculateInfestedHideoutEffectsOnSecurity(town, ref securityChange);
      this.CalculateRaidedVillageEffectsOnSecurity(town, ref securityChange);
      this.CalculateUnderSiegeEffectsOnSecurity(town, ref securityChange);
      this.CalculateProsperityEffectOnSecurity(town, ref securityChange);
      this.CalculateGarrisonEffectsOnSecurity(town, ref securityChange);
      this.CalculatePolicyEffectsOnSecurity(town, ref securityChange);
      this.CalculateGovernorEffectsOnSecurity(town, ref securityChange);
      this.CalculateProjectEffectsOnSecurity(town, ref securityChange);
      this.CalculateIssueEffectsOnSecurity(town, ref securityChange);
      this.CalculatePerkEffectsOnSecurity(town, ref securityChange);
      this.CalculateSecurityDrift(town, ref securityChange);
      return securityChange;
    }

    private void CalculateProsperityEffectOnSecurity(Town town, ref ExplainedNumber explainedNumber)
    {
      explainedNumber.Add(MathF.Max(-5f, -0.0005f * town.Prosperity), DefaultSettlementSecurityModel.ProsperityText);
    }

    private void CalculateUnderSiegeEffectsOnSecurity(
      Town town,
      ref ExplainedNumber explainedNumber)
    {
      if (!town.Settlement.IsUnderSiege)
        return;
      explainedNumber.Add(-3f, DefaultSettlementSecurityModel.UnderSiegeText);
    }

    private void CalculateRaidedVillageEffectsOnSecurity(
      Town town,
      ref ExplainedNumber explainedNumber)
    {
      float num = 0.0f;
      foreach (Village boundVillage in (List<Village>) town.Settlement.BoundVillages)
      {
        if (boundVillage.VillageState == Village.VillageStates.Looted)
        {
          num += -2f;
          break;
        }
      }
      explainedNumber.Add(num, DefaultSettlementSecurityModel.LootedVillagesText);
    }

    private void CalculateInfestedHideoutEffectsOnSecurity(
      Town town,
      ref ExplainedNumber explainedNumber)
    {
      double num1 = 40.0;
      float num2 = (float) (num1 * num1);
      int num3 = 0;
      foreach (Hideout hideout in (List<Hideout>) Hideout.All)
      {
        if (hideout.IsInfested && (double) town.Settlement.Position2D.DistanceSquared(hideout.Settlement.Position2D) < (double) num2)
        {
          ++num3;
          break;
        }
      }
      if (num3 <= 0)
        return;
      explainedNumber.Add(-2f, DefaultSettlementSecurityModel.NearbyHideoutText);
    }

    private void CalculateSecurityDrift(Town town, ref ExplainedNumber explainedNumber)
    {
      explainedNumber.Add((float) (-1.0 * ((double) town.Security - (double) this.SecurityDriftMedium) / 15.0), DefaultSettlementSecurityModel.SecurityDriftText);
    }

    private void CalculatePolicyEffectsOnSecurity(Town town, ref ExplainedNumber explainedNumber)
    {
      Kingdom kingdom = town.Settlement.OwnerClan.Kingdom;
      if (kingdom == null)
        return;
      if (kingdom.ActivePolicies.Contains(DefaultPolicies.Bailiffs))
        explainedNumber.Add(1f, DefaultPolicies.Bailiffs.Name);
      if (kingdom.ActivePolicies.Contains(DefaultPolicies.Magistrates))
        explainedNumber.Add(1f, DefaultPolicies.Magistrates.Name);
      if (kingdom.ActivePolicies.Contains(DefaultPolicies.Serfdom) && town.IsTown)
        explainedNumber.Add(1f, DefaultPolicies.Serfdom.Name);
      if (!kingdom.ActivePolicies.Contains(DefaultPolicies.TrialByJury))
        return;
      explainedNumber.Add(-0.2f, DefaultPolicies.TrialByJury.Name);
    }

    private void CalculateGovernorEffectsOnSecurity(Town town, ref ExplainedNumber explainedNumber)
    {
    }

    private void CalculateGarrisonEffectsOnSecurity(Town town, ref ExplainedNumber result)
    {
      if (town.GarrisonParty == null || town.GarrisonParty.MemberRoster.Count == 0 || town.GarrisonParty.MemberRoster.TotalHealthyCount == 0)
        return;
      ExplainedNumber bonuses = new ExplainedNumber(0.01f);
      PerkHelper.AddPerkBonusForTown(DefaultPerks.OneHanded.StandUnited, town, ref bonuses);
      float totalStrength;
      float archerStrength;
      float cavalryStrength;
      this.CalculateStrengthOfGarrisonParty(town.GarrisonParty.Party, out totalStrength, out archerStrength, out cavalryStrength);
      float num1 = totalStrength * bonuses.ResultNumber;
      result.Add(num1, DefaultSettlementSecurityModel.GarrisonText);
      if (PerkHelper.GetPerkValueForTown(DefaultPerks.Leadership.Authority, town))
        result.Add(num1 * DefaultPerks.Leadership.Authority.PrimaryBonus, DefaultPerks.Leadership.Authority.Name);
      if (PerkHelper.GetPerkValueForTown(DefaultPerks.Riding.ReliefForce, town))
      {
        float num2 = cavalryStrength / totalStrength;
        result.Add(num1 * num2 * DefaultPerks.Riding.ReliefForce.SecondaryBonus, DefaultPerks.Riding.ReliefForce.Name);
      }
      float num3 = archerStrength / totalStrength;
      if (PerkHelper.GetPerkValueForTown(DefaultPerks.Bow.MountedArchery, town))
        result.Add(num1 * num3 * DefaultPerks.Bow.MountedArchery.SecondaryBonus, DefaultPerks.Bow.MountedArchery.Name);
      if (PerkHelper.GetPerkValueForTown(DefaultPerks.Bow.RangersSwiftness, town))
        result.Add(num1 * num3 * DefaultPerks.Bow.RangersSwiftness.SecondaryBonus, DefaultPerks.Bow.RangersSwiftness.Name);
      if (!PerkHelper.GetPerkValueForTown(DefaultPerks.Crossbow.RenownMarksmen, town))
        return;
      result.Add(num1 * num3 * DefaultPerks.Crossbow.RenownMarksmen.SecondaryBonus, DefaultPerks.Crossbow.RenownMarksmen.Name);
    }

    private void CalculateStrengthOfGarrisonParty(
      PartyBase party,
      out float totalStrength,
      out float archerStrength,
      out float cavalryStrength)
    {
      totalStrength = 0.0f;
      archerStrength = 0.0f;
      cavalryStrength = 0.0f;
      float leaderModifier = 0.0f;
      MapEvent.PowerCalculationContext context = MapEvent.PowerCalculationContext.Default;
      BattleSideEnum battleSideEnum = BattleSideEnum.Defender;
      if (party.MapEvent != null)
      {
        battleSideEnum = party.Side;
        leaderModifier = Campaign.Current.Models.MilitaryPowerModel.GetLeaderModifierInMapEvent(party.MapEvent, battleSideEnum);
        context = party.MapEvent.SimulationContext;
      }
      for (int index = 0; index < party.MemberRoster.Count; ++index)
      {
        TroopRosterElement elementCopyAtIndex = party.MemberRoster.GetElementCopyAtIndex(index);
        if (elementCopyAtIndex.Character != null)
        {
          float troopPower = Campaign.Current.Models.MilitaryPowerModel.GetTroopPower(elementCopyAtIndex.Character, battleSideEnum, context, leaderModifier);
          float num = (float) (elementCopyAtIndex.Number - elementCopyAtIndex.WoundedNumber) * troopPower;
          if (elementCopyAtIndex.Character.IsMounted)
            cavalryStrength += num;
          if (elementCopyAtIndex.Character.IsRanged)
            archerStrength += num;
          totalStrength += num;
        }
      }
    }

    private void CalculatePerkEffectsOnSecurity(Town town, ref ExplainedNumber result)
    {
      float num = (float) town.Settlement.Parties.Where<MobileParty>((Func<MobileParty, bool>) (x =>
      {
        Clan actualClan = x.ActualClan;
        if ((actualClan != null ? (!actualClan.IsAtWarWith(town.MapFaction) ? 1 : 0) : 0) == 0)
          return false;
        Hero leaderHero = x.LeaderHero;
        return leaderHero != null && leaderHero.GetPerkValue(DefaultPerks.Leadership.Presence);
      })).Count<MobileParty>() * DefaultPerks.Leadership.Presence.PrimaryBonus;
      if ((double) num > 0.0)
        result.Add(num, DefaultPerks.Leadership.Presence.Name);
      if (town.Governor != null && town.Governor.GetPerkValue(DefaultPerks.Roguery.KnowHow))
        PerkHelper.AddPerkBonusForTown(DefaultPerks.Roguery.KnowHow, town, ref result);
      PerkHelper.AddPerkBonusForTown(DefaultPerks.OneHanded.ToBeBlunt, town, ref result);
      PerkHelper.AddPerkBonusForTown(DefaultPerks.Throwing.Focus, town, ref result);
      PerkHelper.AddPerkBonusForTown(DefaultPerks.Polearm.Skewer, town, ref result);
      PerkHelper.AddPerkBonusForTown(DefaultPerks.Tactics.Gensdarmes, town, ref result);
    }

    private void CalculateProjectEffectsOnSecurity(Town town, ref ExplainedNumber explainedNumber)
    {
    }

    private void CalculateIssueEffectsOnSecurity(Town town, ref ExplainedNumber explainedNumber)
    {
      Campaign.Current.Models.IssueModel.GetIssueEffectsOfSettlement(DefaultIssueEffects.SettlementSecurity, town.Settlement, ref explainedNumber);
    }

    public override float GetLootedNearbyPartySecurityEffect(
      Town town,
      float sumOfAttackedPartyStrengths)
    {
      return (float) (-1.0 * (double) sumOfAttackedPartyStrengths * 0.004999999888241291);
    }

    public override float GetNearbyBanditPartyDefeatedSecurityEffect(
      Town town,
      float sumOfAttackedPartyStrengths)
    {
      return sumOfAttackedPartyStrengths * 0.005f;
    }

    public override void CalculateGoldGainDueToHighSecurity(
      Town town,
      ref ExplainedNumber explainedNumber)
    {
      float num = MBMath.Map(town.Security, (float) this.ThresholdForTaxBoost, (float) this.MaximumSecurityInSettlement, 0.0f, (float) this.SettlementTaxBoostPercentage);
      explainedNumber.AddFactor(num * 0.01f, DefaultSettlementSecurityModel.Security);
    }

    public override void CalculateGoldCutDueToLowSecurity(
      Town town,
      ref ExplainedNumber explainedNumber)
    {
      float num = MBMath.Map(town.Security, (float) this.ThresholdForHigherTaxCorruption, (float) this.ThresholdForTaxCorruption, (float) this.SettlementTaxPenaltyPercentage, 0.0f);
      explainedNumber.AddFactor((float) (-1.0 * (double) num * 0.0099999997764825821), DefaultSettlementSecurityModel.CorruptionText);
    }
  }
}

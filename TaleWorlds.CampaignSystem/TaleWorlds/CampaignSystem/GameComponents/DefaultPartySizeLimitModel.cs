// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultPartySizeLimitModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Buildings;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultPartySizeLimitModel : PartySizeLimitModel
  {
    private const int BaseMobilePartySize = 20;
    private const int BaseMobilePartyPrisonerSize = 10;
    private const int BaseSettlementPrisonerSize = 60;
    private const int SettlementPrisonerSizeBonusPerWallLevel = 40;
    private const int BaseGarrisonPartySize = 200;
    private const int TownGarrisonSizeBonus = 200;
    private const int AdditionalPartySizeForCheat = 5000;
    private readonly TextObject _leadershipSkillLevelBonusText = GameTexts.FindText("str_leadership_skill_level_bonus");
    private readonly TextObject _leadershipPerkUltimateLeaderBonusText = GameTexts.FindText("str_leadership_perk_bonus");
    private readonly TextObject _wallLevelBonusText = GameTexts.FindText("str_map_tooltip_wall_level");
    private readonly TextObject _baseSizeText = GameTexts.FindText("str_base_size");
    private readonly TextObject _clanTierText = GameTexts.FindText("str_clan_tier_bonus");
    private readonly TextObject _renownText = GameTexts.FindText("str_renown_bonus");
    private readonly TextObject _clanLeaderText = GameTexts.FindText("str_clan_leader_bonus");
    private readonly TextObject _factionLeaderText = GameTexts.FindText("str_faction_leader_bonus");
    private readonly TextObject _leaderLevelText = GameTexts.FindText("str_leader_level_bonus");
    private readonly TextObject _townBonusText = GameTexts.FindText("str_town_bonus");
    private readonly TextObject _minorFactionText = GameTexts.FindText("str_minor_faction_bonus");
    private readonly TextObject _currentPartySizeBonusText = GameTexts.FindText("str_current_party_size_bonus");
    private readonly TextObject _randomSizeBonusTemporary = new TextObject("{=hynFV8jC}Extra size bonus (Perk-like Effect)");
    private static bool _addAdditionalPartySizeAsCheat;
    private static bool _addAdditionalPrisonerSizeAsCheat;
    private TextObject _quarterMasterText;

    public DefaultPartySizeLimitModel()
    {
      this._quarterMasterText = GameTexts.FindText("str_clan_role", "quartermaster");
    }

    public override ExplainedNumber GetPartyMemberSizeLimit(
      PartyBase party,
      bool includeDescriptions = false)
    {
      ExplainedNumber partyMemberSizeLimit = new ExplainedNumber(includeDescriptions: includeDescriptions);
      if (!party.IsMobile)
        return partyMemberSizeLimit;
      return party.MobileParty.IsGarrison ? this.CalculateGarrisonPartySizeLimit(party.MobileParty, includeDescriptions) : this.CalculateMobilePartyMemberSizeLimit(party.MobileParty, includeDescriptions);
    }

    public override ExplainedNumber GetPartyPrisonerSizeLimit(
      PartyBase party,
      bool includeDescriptions = false)
    {
      return party.IsSettlement ? this.CalculateSettlementPartyPrisonerSizeLimitInternal(party.Settlement, includeDescriptions) : this.CalculateMobilePartyPrisonerSizeLimitInternal(party, includeDescriptions);
    }

    private ExplainedNumber CalculateMobilePartyMemberSizeLimit(
      MobileParty party,
      bool includeDescriptions = false)
    {
      ExplainedNumber result = new ExplainedNumber(20f, includeDescriptions, this._baseSizeText);
      if (party.LeaderHero != null && party.LeaderHero.Clan != null && !party.IsCaravan)
      {
        this.CalculateBaseMemberSize(party.LeaderHero, party.MapFaction, party.ActualClan, ref result);
        result.Add((float) (party.EffectiveQuartermaster.GetSkillValue(DefaultSkills.Steward) / 4), this._quarterMasterText);
        if (DefaultPartySizeLimitModel._addAdditionalPartySizeAsCheat && party.IsMainParty && Game.Current.CheatMode)
          result.Add(5000f, new TextObject("{=!}Additional size from extra party cheat"));
      }
      else if (party.IsCaravan)
      {
        if (party.Party.Owner == Hero.MainHero)
        {
          result.Add(10f, this._randomSizeBonusTemporary);
        }
        else
        {
          Hero owner = party.Party.Owner;
          if ((owner != null ? (owner.IsNotable ? 1 : 0) : 0) != 0)
            result.Add((float) (10 * ((double) party.Party.Owner.Power < 100.0 ? 1 : ((double) party.Party.Owner.Power < 200.0 ? 2 : 3))), this._randomSizeBonusTemporary);
        }
      }
      else if (party.IsVillager)
        result.Add(40f, this._randomSizeBonusTemporary);
      return result;
    }

    private ExplainedNumber CalculateGarrisonPartySizeLimit(
      MobileParty party,
      bool includeDescriptions = false)
    {
      ExplainedNumber garrisonPartySizeLimit = new ExplainedNumber(200f, includeDescriptions, this._baseSizeText);
      this.GetLeadershipSkillLevelEffect(party, DefaultPartySizeLimitModel.LimitType.GarrisonPartySizeLimit, ref garrisonPartySizeLimit);
      garrisonPartySizeLimit.Add((float) this.GetTownBonus(party), this._townBonusText);
      this.AddGarrisonOwnerPerkEffects(party.CurrentSettlement, ref garrisonPartySizeLimit);
      this.AddSettlementProjectBonuses(party.Party, ref garrisonPartySizeLimit);
      return garrisonPartySizeLimit;
    }

    private ExplainedNumber CalculateSettlementPartyPrisonerSizeLimitInternal(
      Settlement settlement,
      bool includeDescriptions = false)
    {
      ExplainedNumber sizeLimitInternal = new ExplainedNumber(60f, includeDescriptions, this._baseSizeText);
      Town town = settlement.Town;
      int wallLevel = town != null ? town.GetWallLevel() : 0;
      if (wallLevel > 0)
        sizeLimitInternal.Add((float) (wallLevel * 40), this._wallLevelBonusText);
      return sizeLimitInternal;
    }

    private ExplainedNumber CalculateMobilePartyPrisonerSizeLimitInternal(
      PartyBase party,
      bool includeDescriptions = false)
    {
      ExplainedNumber result = new ExplainedNumber(10f, includeDescriptions, this._baseSizeText);
      result.Add((float) this.GetCurrentPartySizeEffect(party), this._currentPartySizeBonusText);
      this.AddMobilePartyLeaderPrisonerSizePerkEffects(party, ref result);
      if (DefaultPartySizeLimitModel._addAdditionalPrisonerSizeAsCheat && party.IsMobile && party.MobileParty.IsMainParty && Game.Current.CheatMode)
        result.Add(5000f, new TextObject("{=!}Additional size from extra prisoner cheat"));
      return result;
    }

    private void GetLeadershipSkillLevelEffect(
      MobileParty party,
      DefaultPartySizeLimitModel.LimitType type,
      ref ExplainedNumber partySizeBonus)
    {
      Hero hero = party.IsGarrison ? party?.CurrentSettlement?.OwnerClan?.Leader : party.LeaderHero;
      if (hero == null || type != DefaultPartySizeLimitModel.LimitType.GarrisonPartySizeLimit)
        return;
      SkillHelper.AddSkillBonusForCharacter(DefaultSkills.Leadership, DefaultSkillEffects.LeadershipGarrisonSizeBonus, hero.CharacterObject, ref partySizeBonus);
    }

    private void AddMobilePartyLeaderPrisonerSizePerkEffects(
      PartyBase party,
      ref ExplainedNumber result)
    {
      if (party.LeaderHero == null)
        return;
      if (party.LeaderHero.GetPerkValue(DefaultPerks.TwoHanded.Terror))
        result.Add(DefaultPerks.TwoHanded.Terror.SecondaryBonus, DefaultPerks.TwoHanded.Terror.Name);
      if (party.LeaderHero.GetPerkValue(DefaultPerks.Athletics.Stamina))
        result.Add(DefaultPerks.Athletics.Stamina.SecondaryBonus, DefaultPerks.Athletics.Stamina.Name);
      if (party.LeaderHero.GetPerkValue(DefaultPerks.Roguery.Manhunter))
        result.Add(DefaultPerks.Roguery.Manhunter.SecondaryBonus, DefaultPerks.Roguery.Manhunter.Name);
      if (party.LeaderHero == null || !party.LeaderHero.GetPerkValue(DefaultPerks.Scouting.VantagePoint))
        return;
      result.Add(DefaultPerks.Scouting.VantagePoint.SecondaryBonus, DefaultPerks.Scouting.VantagePoint.Name);
    }

    private void AddGarrisonOwnerPerkEffects(
      Settlement currentSettlement,
      ref ExplainedNumber result)
    {
      if (currentSettlement == null || !currentSettlement.IsTown)
        return;
      PerkHelper.AddPerkBonusForTown(DefaultPerks.OneHanded.CorpsACorps, currentSettlement.Town, ref result);
      PerkHelper.AddPerkBonusForTown(DefaultPerks.Leadership.VeteransRespect, currentSettlement.Town, ref result);
    }

    public override int GetTierPartySizeEffect(int tier) => tier >= 1 ? 15 * tier : 0;

    public override int GetAssumedPartySizeForLordParty(
      Hero leaderHero,
      IFaction partyMapFaction,
      Clan actualClan)
    {
      ExplainedNumber result = new ExplainedNumber(20f, baseText: this._baseSizeText);
      if (leaderHero != null && leaderHero.Clan != null)
      {
        this.CalculateBaseMemberSize(leaderHero, partyMapFaction, actualClan, ref result);
        result.Add((float) (leaderHero.GetSkillValue(DefaultSkills.Steward) / 4), this._quarterMasterText);
      }
      return (int) result.BaseNumber;
    }

    private void AddSettlementProjectBonuses(PartyBase party, ref ExplainedNumber result)
    {
      if (party.Owner == null)
        return;
      Settlement currentSettlement = party.MobileParty.CurrentSettlement;
      if (currentSettlement == null || !currentSettlement.IsTown && !currentSettlement.IsCastle)
        return;
      foreach (Building building in (List<Building>) currentSettlement.Town.Buildings)
      {
        float buildingEffectAmount = building.GetBuildingEffectAmount(BuildingEffectEnum.GarrisonCapacity);
        if ((double) buildingEffectAmount > 0.0)
          result.Add(buildingEffectAmount, building.Name);
      }
    }

    private int GetTownBonus(MobileParty party)
    {
      Settlement currentSettlement = party.CurrentSettlement;
      return currentSettlement != null && currentSettlement.IsFortification && currentSettlement.IsTown ? 200 : 0;
    }

    private int GetCurrentPartySizeEffect(PartyBase party) => party.NumberOfHealthyMembers / 2;

    private void CalculateBaseMemberSize(
      Hero partyLeader,
      IFaction partyMapFaction,
      Clan actualClan,
      ref ExplainedNumber result)
    {
      if (partyMapFaction != null && partyMapFaction.IsKingdomFaction && partyLeader.MapFaction.Leader == partyLeader)
        result.Add(20f, this._factionLeaderText);
      if (partyLeader.GetPerkValue(DefaultPerks.OneHanded.Prestige))
        result.Add(DefaultPerks.OneHanded.Prestige.SecondaryBonus, DefaultPerks.OneHanded.Prestige.Name);
      if (partyLeader.GetPerkValue(DefaultPerks.TwoHanded.Hope))
        result.Add(DefaultPerks.TwoHanded.Hope.SecondaryBonus, DefaultPerks.TwoHanded.Hope.Name);
      if (partyLeader.GetPerkValue(DefaultPerks.Athletics.ImposingStature))
        result.Add(DefaultPerks.Athletics.ImposingStature.SecondaryBonus, DefaultPerks.Athletics.ImposingStature.Name);
      if (partyLeader.GetPerkValue(DefaultPerks.Bow.MerryMen))
        result.Add(DefaultPerks.Bow.MerryMen.PrimaryBonus, DefaultPerks.Bow.MerryMen.Name);
      if (partyLeader.GetPerkValue(DefaultPerks.Tactics.HordeLeader))
        result.Add(DefaultPerks.Tactics.HordeLeader.PrimaryBonus, DefaultPerks.Tactics.HordeLeader.Name);
      if (partyLeader.GetPerkValue(DefaultPerks.Scouting.MountedScouts))
        result.Add(DefaultPerks.Scouting.MountedScouts.SecondaryBonus, DefaultPerks.Scouting.MountedScouts.Name);
      if (partyLeader.GetPerkValue(DefaultPerks.Leadership.Authority))
        result.Add(DefaultPerks.Leadership.Authority.SecondaryBonus, DefaultPerks.Leadership.Authority.Name);
      if (partyLeader.GetPerkValue(DefaultPerks.Leadership.UpliftingSpirit))
        result.Add(DefaultPerks.Leadership.UpliftingSpirit.SecondaryBonus, DefaultPerks.Leadership.UpliftingSpirit.Name);
      if (partyLeader.GetPerkValue(DefaultPerks.Leadership.TalentMagnet))
        result.Add(DefaultPerks.Leadership.TalentMagnet.PrimaryBonus, DefaultPerks.Leadership.TalentMagnet.Name);
      if (partyLeader.GetSkillValue(DefaultSkills.Leadership) > Campaign.Current.Models.CharacterDevelopmentModel.MaxSkillRequiredForEpicPerkBonus && partyLeader.GetPerkValue(DefaultPerks.Leadership.UltimateLeader))
      {
        int num = partyLeader.GetSkillValue(DefaultSkills.Leadership) - Campaign.Current.Models.CharacterDevelopmentModel.MaxSkillRequiredForEpicPerkBonus;
        result.Add((float) num * DefaultPerks.Leadership.UltimateLeader.PrimaryBonus, this._leadershipPerkUltimateLeaderBonusText);
      }
      if (actualClan != null)
      {
        bool? perkValue = actualClan.Leader?.GetPerkValue(DefaultPerks.Leadership.LeaderOfMasses);
        bool flag = true;
        if (perkValue.GetValueOrDefault() == flag & perkValue.HasValue)
        {
          int num1 = 0;
          foreach (Settlement settlement in (List<Settlement>) actualClan.Settlements)
          {
            if (settlement.IsTown)
              ++num1;
          }
          float num2 = (float) num1 * DefaultPerks.Leadership.LeaderOfMasses.PrimaryBonus;
          if ((double) num2 > 0.0)
            result.Add(num2, DefaultPerks.Leadership.LeaderOfMasses.Name);
        }
      }
      if (partyLeader.Clan.Leader == partyLeader)
      {
        if (partyLeader.Clan.Tier >= 5 && partyMapFaction.IsKingdomFaction && ((Kingdom) partyMapFaction).ActivePolicies.Contains(DefaultPolicies.NobleRetinues))
          result.Add(40f, DefaultPolicies.NobleRetinues.Name);
        if (partyMapFaction.IsKingdomFaction && partyMapFaction.Leader == partyLeader && ((Kingdom) partyMapFaction).ActivePolicies.Contains(DefaultPolicies.RoyalGuard))
          result.Add(60f, DefaultPolicies.RoyalGuard.Name);
        if (partyLeader.Clan.Tier <= 0)
          return;
        result.Add((float) (partyLeader.Clan.Tier * 25), this._clanTierText);
      }
      else
      {
        if (partyLeader.Clan.Tier <= 0)
          return;
        result.Add((float) (partyLeader.Clan.Tier * 15), this._clanTierText);
      }
    }

    private enum LimitType
    {
      MobilePartySizeLimit,
      GarrisonPartySizeLimit,
      PrisonerSizeLimit,
    }
  }
}

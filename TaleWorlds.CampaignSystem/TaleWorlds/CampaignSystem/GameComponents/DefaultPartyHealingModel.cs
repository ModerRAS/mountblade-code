// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultPartyHealingModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultPartyHealingModel : PartyHealingModel
  {
    private const int StarvingEffectHeroes = -19;
    private const int FortificationEffectForHeroes = 8;
    private const int FortificationEffectForRegulars = 10;
    private const int BaseDailyHealingForHeroes = 11;
    private const int BaseDailyHealingForTroops = 5;
    private const int SkillEXPFromHealingTroops = 5;
    private const float StarvingWoundedEffectRatio = 0.25f;
    private const float StarvingWoundedEffectRatioForGarrison = 0.1f;
    private static readonly TextObject _starvingText = new TextObject("{=jZYUdkXF}Starving");
    private static readonly TextObject _settlementText = new TextObject("{=M0Gpl0dH}In Settlement");

    public override float GetSurgeryChance(PartyBase party, CharacterObject character)
    {
      return 0.0015f * (float) (party.MobileParty?.EffectiveSurgeon?.GetSkillValue(DefaultSkills.Medicine) ?? 0);
    }

    public override float GetSiegeBombardmentHitSurgeryChance(PartyBase party)
    {
      float hitSurgeryChance = 0.0f;
      if (party != null && party.IsMobile && party.MobileParty.HasPerk(DefaultPerks.Medicine.SiegeMedic))
        hitSurgeryChance += DefaultPerks.Medicine.SiegeMedic.PrimaryBonus;
      return hitSurgeryChance;
    }

    public override float GetSurvivalChance(
      PartyBase party,
      CharacterObject character,
      DamageTypes damageType,
      bool canDamageKillEvenIfBlunt,
      PartyBase enemyParty = null)
    {
      if (damageType == DamageTypes.Blunt && !canDamageKillEvenIfBlunt || character.IsHero && CampaignOptions.BattleDeath == CampaignOptions.Difficulty.VeryEasy || character.IsPlayerCharacter && CampaignOptions.BattleDeath == CampaignOptions.Difficulty.Easy)
        return 1f;
      ExplainedNumber stat = new ExplainedNumber(1f);
      float survivalChance;
      if (party?.MobileParty != null)
      {
        SkillHelper.AddSkillBonusForParty(DefaultSkills.Medicine, DefaultSkillEffects.SurgeonSurvivalBonus, party.MobileParty, ref stat);
        if (enemyParty?.MobileParty != null && enemyParty.MobileParty.HasPerk(DefaultPerks.Medicine.DoctorsOath))
        {
          SkillHelper.AddSkillBonusForParty(DefaultSkills.Medicine, DefaultSkillEffects.SurgeonSurvivalBonus, enemyParty.MobileParty, ref stat);
          SkillLevelingManager.OnSurgeryApplied(enemyParty.MobileParty, false, character.Tier);
        }
        stat.Add((float) character.Level * 0.02f);
        if (!character.IsHero && party.MapEvent != null && character.Tier < 3)
          PerkHelper.AddPerkBonusForParty(DefaultPerks.Medicine.PhysicianOfPeople, party.MobileParty, false, ref stat);
        if (character.IsHero)
        {
          stat.Add(character.GetTotalArmorSum() * 0.01f);
          stat.Add(character.Age * -0.01f);
          stat.AddFactor(50f);
        }
        ExplainedNumber explainedNumber = new ExplainedNumber(1f / stat.ResultNumber);
        if (character.IsHero)
        {
          if (party.IsMobile && party.MobileParty.HasPerk(DefaultPerks.Medicine.CheatDeath, true))
            explainedNumber.AddFactor(DefaultPerks.Medicine.CheatDeath.SecondaryBonus, DefaultPerks.Medicine.CheatDeath.Name);
          if (character.HeroObject.Clan == Clan.PlayerClan)
          {
            float chanceMultiplier = Campaign.Current.Models.DifficultyModel.GetClanMemberDeathChanceMultiplier();
            if (!chanceMultiplier.ApproximatelyEqualsTo(0.0f))
              explainedNumber.AddFactor(chanceMultiplier, GameTexts.FindText("str_game_difficulty"));
          }
        }
        survivalChance = 1f - MBMath.ClampFloat(explainedNumber.ResultNumber, 0.0f, 1f);
      }
      else
        survivalChance = !character.IsHero || !character.HeroObject.IsPrisoner ? (!stat.ResultNumber.ApproximatelyEqualsTo(0.0f) ? (float) (1.0 - 1.0 / (double) stat.ResultNumber) : 0.0f) : (float) (1.0 - (double) character.Age * 0.0035000001080334187);
      return survivalChance;
    }

    public override int GetSkillXpFromHealingTroop(PartyBase party) => 5;

    public override ExplainedNumber GetDailyHealingForRegulars(
      MobileParty party,
      bool includeDescriptions = false)
    {
      ExplainedNumber healingForRegulars = new ExplainedNumber(includeDescriptions: includeDescriptions);
      if (party.Party.IsStarving || party.IsGarrison && party.CurrentSettlement.IsStarving)
      {
        if (party.IsGarrison)
        {
          if (SettlementHelper.IsGarrisonStarving(party.CurrentSettlement))
          {
            int num = MBRandom.RoundRandomized((float) party.MemberRoster.TotalRegulars * 0.1f);
            healingForRegulars.Add((float) -num, DefaultPartyHealingModel._starvingText);
          }
        }
        else
        {
          int totalRegulars = party.MemberRoster.TotalRegulars;
          healingForRegulars.Add((float) -totalRegulars * 0.25f, DefaultPartyHealingModel._starvingText);
        }
      }
      else
      {
        healingForRegulars = new ExplainedNumber(5f, includeDescriptions);
        if (party.IsGarrison)
        {
          if (party.CurrentSettlement.IsTown)
            SkillHelper.AddSkillBonusForTown(DefaultSkills.Medicine, DefaultSkillEffects.GovernorHealingRateBonus, party.CurrentSettlement.Town, ref healingForRegulars);
        }
        else
          SkillHelper.AddSkillBonusForParty(DefaultSkills.Medicine, DefaultSkillEffects.HealingRateBonusForRegulars, party, ref healingForRegulars);
        if (!party.IsGarrison && !party.IsMilitia)
        {
          if (!party.IsMoving)
          {
            PerkHelper.AddPerkBonusForParty(DefaultPerks.Medicine.TriageTent, party, true, ref healingForRegulars);
            PerkHelper.AddPerkBonusForParty(DefaultPerks.Athletics.AGoodDaysRest, party, true, ref healingForRegulars);
          }
          else
          {
            PerkHelper.AddPerkBonusForParty(DefaultPerks.Medicine.WalkItOff, party, true, ref healingForRegulars);
            PerkHelper.AddPerkBonusForParty(DefaultPerks.Athletics.WalkItOff, party, true, ref healingForRegulars);
          }
        }
        if ((double) party.Morale >= (double) Campaign.Current.Models.PartyMoraleModel.HighMoraleValue)
          PerkHelper.AddPerkBonusForParty(DefaultPerks.Medicine.BestMedicine, party, true, ref healingForRegulars);
        if (party.CurrentSettlement != null && !party.CurrentSettlement.IsHideout)
        {
          if (party.CurrentSettlement.IsFortification)
            healingForRegulars.Add(10f, DefaultPartyHealingModel._settlementText);
          if (party.SiegeEvent == null && !party.CurrentSettlement.IsUnderSiege && !party.CurrentSettlement.IsRaided && !party.CurrentSettlement.IsUnderRaid)
          {
            if (party.CurrentSettlement.IsTown)
              PerkHelper.AddPerkBonusForParty(DefaultPerks.Medicine.PristineStreets, party, false, ref healingForRegulars);
            PerkHelper.AddPerkBonusForParty(DefaultPerks.Medicine.GoodLogdings, party, true, ref healingForRegulars);
          }
        }
        else if (!party.IsMoving && party.LastVisitedSettlement != null && party.LastVisitedSettlement.IsVillage && (double) party.LastVisitedSettlement.Position2D.DistanceSquared(party.Position2D) < 2.0 && !party.LastVisitedSettlement.IsUnderRaid && !party.LastVisitedSettlement.IsRaided)
          PerkHelper.AddPerkBonusForParty(DefaultPerks.Medicine.BushDoctor, party, false, ref healingForRegulars);
        if (party.Army != null)
          PerkHelper.AddPerkBonusForParty(DefaultPerks.Scouting.Rearguard, party, true, ref healingForRegulars);
        if (party.ItemRoster.FoodVariety > 0 && party.HasPerk(DefaultPerks.Medicine.PerfectHealth))
          healingForRegulars.AddFactor((float) party.ItemRoster.FoodVariety * DefaultPerks.Medicine.PerfectHealth.PrimaryBonus, DefaultPerks.Medicine.PerfectHealth.Name);
        if (party.HasPerk(DefaultPerks.Medicine.HelpingHands))
        {
          float num = (float) MathF.Floor((float) party.MemberRoster.TotalManCount / 10f) * DefaultPerks.Medicine.HelpingHands.PrimaryBonus;
          healingForRegulars.AddFactor(num, DefaultPerks.Medicine.HelpingHands.Name);
        }
      }
      return healingForRegulars;
    }

    public override ExplainedNumber GetDailyHealingHpForHeroes(
      MobileParty party,
      bool includeDescriptions = false)
    {
      if (party.Party.IsStarving && party.CurrentSettlement == null)
        return new ExplainedNumber(-19f, includeDescriptions, DefaultPartyHealingModel._starvingText);
      ExplainedNumber stat = new ExplainedNumber(11f, includeDescriptions);
      if (!party.IsGarrison && !party.IsMilitia)
      {
        if (!party.IsMoving)
        {
          PerkHelper.AddPerkBonusForParty(DefaultPerks.Medicine.TriageTent, party, true, ref stat);
          PerkHelper.AddPerkBonusForParty(DefaultPerks.Athletics.AGoodDaysRest, party, true, ref stat);
        }
        else
        {
          PerkHelper.AddPerkBonusForParty(DefaultPerks.Medicine.WalkItOff, party, true, ref stat);
          PerkHelper.AddPerkBonusForParty(DefaultPerks.Athletics.WalkItOff, party, true, ref stat);
        }
      }
      if ((double) party.Morale >= (double) Campaign.Current.Models.PartyMoraleModel.HighMoraleValue)
        PerkHelper.AddPerkBonusForParty(DefaultPerks.Medicine.BestMedicine, party, true, ref stat);
      if (party.CurrentSettlement != null && !party.CurrentSettlement.IsHideout)
      {
        if (party.CurrentSettlement.IsFortification)
          stat.Add(8f, DefaultPartyHealingModel._settlementText);
        if (party.CurrentSettlement.IsTown)
          PerkHelper.AddPerkBonusForParty(DefaultPerks.Medicine.PristineStreets, party, false, ref stat);
        PerkHelper.AddPerkBonusForParty(DefaultPerks.Medicine.GoodLogdings, party, true, ref stat);
      }
      else if (!party.IsMoving && party.LastVisitedSettlement != null && party.LastVisitedSettlement.IsVillage && (double) party.LastVisitedSettlement.Position2D.DistanceSquared(party.Position2D) < 2.0 && !party.LastVisitedSettlement.IsUnderRaid && !party.LastVisitedSettlement.IsRaided)
        PerkHelper.AddPerkBonusForParty(DefaultPerks.Medicine.BushDoctor, party, false, ref stat);
      SkillHelper.AddSkillBonusForParty(DefaultSkills.Medicine, DefaultSkillEffects.HealingRateBonusForHeroes, party, ref stat);
      return stat;
    }

    public override int GetHeroesEffectedHealingAmount(Hero hero, float healingRate)
    {
      ExplainedNumber bonuses = new ExplainedNumber(healingRate);
      PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Medicine.SelfMedication, hero.CharacterObject, true, ref bonuses);
      float resultNumber = bonuses.ResultNumber;
      return (double) resultNumber - (double) (int) resultNumber > (double) MBRandom.RandomFloat ? (int) resultNumber + 1 : (int) resultNumber;
    }

    public override int GetBattleEndHealingAmount(MobileParty party, CharacterObject character)
    {
      float f = 0.0f;
      if (character.IsHero)
      {
        Hero heroObject = character.HeroObject;
        if (heroObject.GetPerkValue(DefaultPerks.Medicine.PreventiveMedicine))
          f += (float) (heroObject.MaxHitPoints - heroObject.HitPoints) * DefaultPerks.Medicine.PreventiveMedicine.SecondaryBonus;
        if (party.MapEventSide == party.MapEvent.AttackerSide && heroObject.GetPerkValue(DefaultPerks.Medicine.WalkItOff))
          f += DefaultPerks.Medicine.WalkItOff.SecondaryBonus;
      }
      return MathF.Round(f);
    }
  }
}

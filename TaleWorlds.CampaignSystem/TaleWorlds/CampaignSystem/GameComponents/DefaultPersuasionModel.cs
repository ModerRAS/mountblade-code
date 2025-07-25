// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultPersuasionModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Conversation.Persuasion;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultPersuasionModel : PersuasionModel
  {
    public override int GetSkillXpFromPersuasion(
      PersuasionDifficulty difficulty,
      int argumentDifficultyBonusCoefficient)
    {
      return (int) (difficulty - 0) / 1 * 5 * argumentDifficultyBonusCoefficient;
    }

    public override void GetChances(
      PersuasionOptionArgs optionArgs,
      out float successChance,
      out float critSuccessChance,
      out float critFailChance,
      out float failChance,
      float difficultyMultiplier)
    {
      float defaultSuccessChance = this.GetDefaultSuccessChance(optionArgs, difficultyMultiplier);
      switch (optionArgs.ArgumentStrength)
      {
        case PersuasionArgumentStrength.ExtremelyHard:
          successChance = defaultSuccessChance * 0.05f;
          critFailChance = defaultSuccessChance * 0.15f;
          break;
        case PersuasionArgumentStrength.VeryHard:
          successChance = defaultSuccessChance * 0.15f;
          critFailChance = defaultSuccessChance * 0.2f;
          break;
        case PersuasionArgumentStrength.Hard:
          successChance = defaultSuccessChance * 0.35f;
          critFailChance = defaultSuccessChance * 0.15f;
          break;
        case PersuasionArgumentStrength.Easy:
          successChance = defaultSuccessChance * 0.7f;
          critFailChance = 0.0f;
          break;
        case PersuasionArgumentStrength.VeryEasy:
          successChance = defaultSuccessChance * 0.8f;
          critFailChance = 0.0f;
          break;
        case PersuasionArgumentStrength.ExtremelyEasy:
          successChance = defaultSuccessChance * 0.9f;
          critFailChance = 0.0f;
          break;
        default:
          successChance = defaultSuccessChance * 0.55f;
          critFailChance = defaultSuccessChance * 0.15f;
          break;
      }
      float bonusSuccessChance = this.GetBonusSuccessChance(optionArgs);
      successChance = MathF.Clamp(successChance * bonusSuccessChance, 0.0f, 1f);
      critFailChance = MathF.Clamp(critFailChance * (2f - bonusSuccessChance), 0.0f, 1f);
      critSuccessChance = 0.0f;
      if (optionArgs.GivesCriticalSuccess)
      {
        critSuccessChance = successChance;
        successChance = 0.0f;
      }
      if ((double) critSuccessChance > 0.0 && Hero.MainHero.GetPerkValue(DefaultPerks.Charm.MeaningfulFavors))
        critSuccessChance = MathF.Clamp(critSuccessChance + critSuccessChance * DefaultPerks.Charm.MeaningfulFavors.PrimaryBonus, 0.0f, 1f);
      failChance = 1f - critSuccessChance - successChance - critFailChance;
    }

    private float GetDefaultSuccessChance(
      PersuasionOptionArgs optionArgs,
      float difficultyMultiplier)
    {
      int skillValue = Hero.MainHero.GetSkillValue(optionArgs.SkillUsed);
      float num1 = optionArgs.TraitEffect == TraitEffect.Positive ? (float) Hero.MainHero.GetTraitLevel(optionArgs.TraitUsed) : (float) -Hero.MainHero.GetTraitLevel(optionArgs.TraitUsed);
      float num2 = MBMath.ClampFloat(optionArgs.TraitUsed != null ? num1 : 0.0f, -1f, 2f);
      float num3 = (double) num2 > 0.0 ? ((double) num2 > 1.0 ? (float) (1.2000000476837158 + ((double) num2 - 1.0) * 0.40000000596046448) : (float) (0.60000002384185791 + ((double) num2 - 0.0) * 0.60000002384185791)) : (float) (0.20000000298023224 + ((double) num2 - -1.0) * 0.40000000596046448);
      return MathF.Clamp((float) ((100.0 - (double) difficultyMultiplier / (0.0099999997764825821 * (100.0 + (double) skillValue * (double) num3))) / 100.0), 0.1f, 1f);
    }

    private float GetBonusSuccessChance(PersuasionOptionArgs optionArgs)
    {
      ExplainedNumber explainedNumber = new ExplainedNumber(1f);
      explainedNumber.AddFactor(MathF.Clamp((float) (Hero.MainHero.GetSkillValue(optionArgs.SkillUsed) / Campaign.Current.Models.CharacterDevelopmentModel.MaxSkillRequiredForEpicPerkBonus) * 0.2f, 0.0f, 0.2f), optionArgs.SkillUsed.Name);
      if (Hero.MainHero.GetPerkValue(DefaultPerks.Athletics.ImposingStature))
        explainedNumber.AddFactor(DefaultPerks.Athletics.ImposingStature.PrimaryBonus, DefaultPerks.Athletics.ImposingStature.Name);
      float persuasionBonusChance = Campaign.Current.Models.DifficultyModel.GetPersuasionBonusChance();
      if ((double) persuasionBonusChance > 0.0)
        explainedNumber.AddFactor(persuasionBonusChance, GameTexts.FindText("str_game_difficulty"));
      return explainedNumber.ResultNumber;
    }

    public override void GetEffectChances(
      PersuasionOptionArgs option,
      out float moveToNextStageChance,
      out float blockRandomOptionChance,
      float difficultyMultiplier)
    {
      moveToNextStageChance = 0.0f;
      blockRandomOptionChance = 0.0f;
      if (!option.CanMoveToTheNextReservation && !option.CanBlockOtherOption)
        return;
      moveToNextStageChance = option.CanMoveToTheNextReservation ? 1f : 0.0f;
      blockRandomOptionChance = option.CanBlockOtherOption ? 1f : 0.0f;
    }

    public override PersuasionArgumentStrength GetArgumentStrengthBasedOnTargetTraits(
      CharacterObject character,
      Tuple<TraitObject, int>[] traitCorrelations)
    {
      float num1 = 0.0f;
      float num2 = 1f;
      for (int index = 0; index < traitCorrelations.Length; ++index)
      {
        float num3 = num2 + (float) (character.GetTraitLevel(traitCorrelations[index].Item1) * traitCorrelations[index].Item2);
        float num4 = num1 + (float) MathF.Abs(traitCorrelations[index].Item2);
        num2 = num3 + (float) (CharacterObject.PlayerCharacter.GetTraitLevel(traitCorrelations[index].Item1) * traitCorrelations[index].Item2);
        num1 = num4 + (float) MathF.Abs(traitCorrelations[index].Item2);
      }
      if ((double) num2 > (double) num1 / 6.0)
        return PersuasionArgumentStrength.VeryEasy;
      if ((double) num2 > 0.0)
        return PersuasionArgumentStrength.ExtremelyEasy;
      if ((double) num2 < (double) num1 / -6.0)
        return PersuasionArgumentStrength.VeryHard;
      return (double) num2 < 0.0 ? PersuasionArgumentStrength.Hard : PersuasionArgumentStrength.Normal;
    }

    public override float CalculateInitialPersuasionProgress(
      CharacterObject character,
      float goalValue,
      float successValue)
    {
      return character.IsHero ? MathF.Max(0.0f, character.HeroObject.GetRelationWithPlayer() * successValue) / (float) Campaign.Current.Models.DiplomacyModel.MaxRelationLimit : 0.0f;
    }

    public override float CalculatePersuasionGoalValue(
      CharacterObject oneToOneConversationCharacter,
      float baseGoalValue)
    {
      ExplainedNumber explainedNumber = new ExplainedNumber(baseGoalValue);
      if (CharacterObject.OneToOneConversationCharacter != null && CharacterObject.OneToOneConversationCharacter.IsHero)
      {
        if (CharacterObject.OneToOneConversationCharacter.HeroObject.MapFaction == Hero.MainHero.MapFaction && Hero.MainHero.GetPerkValue(DefaultPerks.Charm.MoralLeader))
          explainedNumber.Add(DefaultPerks.Charm.MoralLeader.PrimaryBonus, DefaultPerks.Charm.MoralLeader.Name);
        else if (CharacterObject.OneToOneConversationCharacter.HeroObject.MapFaction != Hero.MainHero.MapFaction && Hero.MainHero.GetPerkValue(DefaultPerks.Charm.NaturalLeader))
          explainedNumber.Add(DefaultPerks.Charm.NaturalLeader.PrimaryBonus, DefaultPerks.Charm.NaturalLeader.Name);
      }
      explainedNumber.LimitMin(1f);
      return explainedNumber.ResultNumber;
    }

    public override float GetDifficulty(PersuasionDifficulty difficulty)
    {
      switch (difficulty)
      {
        case PersuasionDifficulty.VeryEasy:
          return 0.9f;
        case PersuasionDifficulty.Easy:
          return 0.8f;
        case PersuasionDifficulty.EasyMedium:
          return 0.7f;
        case PersuasionDifficulty.Medium:
          return 0.6f;
        case PersuasionDifficulty.MediumHard:
          return 0.5f;
        case PersuasionDifficulty.Hard:
          return 0.4f;
        case PersuasionDifficulty.VeryHard:
          return 0.3f;
        case PersuasionDifficulty.UltraHard:
          return 0.2f;
        case PersuasionDifficulty.Impossible:
          return 0.1f;
        default:
          return 1f;
      }
    }
  }
}

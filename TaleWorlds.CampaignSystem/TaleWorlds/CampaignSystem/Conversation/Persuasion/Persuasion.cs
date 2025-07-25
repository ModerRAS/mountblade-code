// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Conversation.Persuasion.Persuasion
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.Conversation.Persuasion
{
  public class Persuasion
  {
    public readonly float SuccessValue;
    public readonly float FailValue;
    public readonly float CriticalSuccessValue;
    public readonly float CriticalFailValue;
    private readonly float _difficultyMultiplier;
    private readonly PersuasionDifficulty _difficulty;
    private readonly List<Tuple<PersuasionOptionArgs, PersuasionOptionResult>> _chosenOptions;
    public readonly float GoalValue;

    public float DifficultyMultiplier => this._difficultyMultiplier;

    public float Progress { get; private set; }

    public Persuasion(
      float goalValue,
      float successValue,
      float failValue,
      float criticalSuccessValue,
      float criticalFailValue,
      float initialProgress,
      PersuasionDifficulty difficulty)
    {
      this._chosenOptions = new List<Tuple<PersuasionOptionArgs, PersuasionOptionResult>>();
      this.GoalValue = Campaign.Current.Models.PersuasionModel.CalculatePersuasionGoalValue(CharacterObject.OneToOneConversationCharacter, goalValue);
      this.SuccessValue = successValue;
      this.FailValue = failValue;
      this.CriticalSuccessValue = criticalSuccessValue;
      this.CriticalFailValue = criticalFailValue;
      this._difficulty = difficulty;
      this.Progress = (double) initialProgress >= 0.0 ? initialProgress : Campaign.Current.Models.PersuasionModel.CalculateInitialPersuasionProgress(CharacterObject.OneToOneConversationCharacter, this.GoalValue, this.SuccessValue);
      this._difficultyMultiplier = Campaign.Current.Models.PersuasionModel.GetDifficulty(difficulty);
    }

    public void CommitProgress(PersuasionOptionArgs persuasionOptionArgs)
    {
      PersuasionOptionResult result = this.CheckPerkEffectOnResult(this.GetResult(persuasionOptionArgs));
      Tuple<PersuasionOptionArgs, PersuasionOptionResult> progress = new Tuple<PersuasionOptionArgs, PersuasionOptionResult>(persuasionOptionArgs, result);
      persuasionOptionArgs.BlockTheOption(true);
      this._chosenOptions.Add(progress);
      this.Progress = MathF.Clamp(this.Progress + this.GetPersuasionOptionResultValue(result), 0.0f, this.GoalValue);
      CampaignEventDispatcher.Instance.OnPersuasionProgressCommitted(progress);
    }

    private PersuasionOptionResult CheckPerkEffectOnResult(PersuasionOptionResult result)
    {
      PersuasionOptionResult persuasionOptionResult = result;
      if (result == PersuasionOptionResult.CriticalFailure && Hero.MainHero.GetPerkValue(DefaultPerks.Charm.ForgivableGrievances) && (double) MBRandom.RandomFloat <= (double) DefaultPerks.Charm.ForgivableGrievances.PrimaryBonus)
      {
        TextObject textObject = new TextObject("{=5IQriov5}You avoided critical failure because of {PERK_NAME}.");
        textObject.SetTextVariable("PERK_NAME", DefaultPerks.Charm.ForgivableGrievances.Name);
        InformationManager.DisplayMessage(new InformationMessage(textObject.ToString(), Color.White));
        persuasionOptionResult = PersuasionOptionResult.Failure;
      }
      return persuasionOptionResult;
    }

    private float GetPersuasionOptionResultValue(PersuasionOptionResult result)
    {
      switch (result)
      {
        case PersuasionOptionResult.CriticalFailure:
          return -this.CriticalFailValue;
        case PersuasionOptionResult.Failure:
          return 0.0f;
        case PersuasionOptionResult.Success:
          return this.SuccessValue;
        case PersuasionOptionResult.CriticalSuccess:
          return this.CriticalSuccessValue;
        case PersuasionOptionResult.Miss:
          return 0.0f;
        default:
          return 0.0f;
      }
    }

    private PersuasionOptionResult GetResult(PersuasionOptionArgs optionArgs)
    {
      float successChance;
      float critSuccessChance;
      float critFailChance;
      float failChance;
      Campaign.Current.Models.PersuasionModel.GetChances(optionArgs, out successChance, out critSuccessChance, out critFailChance, out failChance, this._difficultyMultiplier);
      float randomFloat = MBRandom.RandomFloat;
      if ((double) randomFloat < (double) critSuccessChance)
        return PersuasionOptionResult.CriticalSuccess;
      float num1 = randomFloat - critSuccessChance;
      if ((double) num1 < (double) successChance)
        return PersuasionOptionResult.Success;
      float num2 = num1 - successChance;
      if ((double) num2 < (double) failChance)
        return PersuasionOptionResult.Failure;
      return (double) (num2 - failChance) < (double) critFailChance ? PersuasionOptionResult.CriticalFailure : PersuasionOptionResult.Miss;
    }

    public IEnumerable<Tuple<PersuasionOptionArgs, PersuasionOptionResult>> GetChosenOptions()
    {
      return (IEnumerable<Tuple<PersuasionOptionArgs, PersuasionOptionResult>>) this._chosenOptions.AsReadOnly();
    }
  }
}

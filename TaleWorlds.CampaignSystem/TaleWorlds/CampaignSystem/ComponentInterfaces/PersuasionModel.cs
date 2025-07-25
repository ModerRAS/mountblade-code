// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ComponentInterfaces.PersuasionModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Conversation.Persuasion;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.ComponentInterfaces
{
  public abstract class PersuasionModel : GameModel
  {
    public abstract int GetSkillXpFromPersuasion(
      PersuasionDifficulty difficulty,
      int argumentDifficultyBonusCoefficient);

    public abstract void GetChances(
      PersuasionOptionArgs optionArgs,
      out float successChance,
      out float critSuccessChance,
      out float critFailChance,
      out float failChance,
      float difficultyMultiplier);

    public abstract void GetEffectChances(
      PersuasionOptionArgs option,
      out float moveToNextStageChance,
      out float blockRandomOptionChance,
      float difficultyMultiplier);

    public abstract PersuasionArgumentStrength GetArgumentStrengthBasedOnTargetTraits(
      CharacterObject character,
      Tuple<TraitObject, int>[] traitCorrelation);

    public abstract float GetDifficulty(PersuasionDifficulty difficulty);

    public abstract float CalculateInitialPersuasionProgress(
      CharacterObject character,
      float goalValue,
      float successValue);

    public abstract float CalculatePersuasionGoalValue(
      CharacterObject oneToOneConversationCharacter,
      float successValue);
  }
}

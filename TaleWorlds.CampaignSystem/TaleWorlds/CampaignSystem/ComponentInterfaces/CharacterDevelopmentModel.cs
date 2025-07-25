// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ComponentInterfaces.CharacterDevelopmentModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.ComponentInterfaces
{
  public abstract class CharacterDevelopmentModel : GameModel
  {
    public abstract List<Tuple<SkillObject, int>> GetSkillsDerivedFromTraits(
      Hero hero = null,
      CharacterObject templateCharacter = null,
      bool isByNaturalGrowth = false);

    public abstract int SkillsRequiredForLevel(int level);

    public abstract int GetMaxSkillPoint();

    public abstract int GetXpRequiredForSkillLevel(int skillLevel);

    public abstract int GetSkillLevelChange(Hero hero, SkillObject skill, float skillXp);

    public abstract int GetXpAmountForSkillLevelChange(
      Hero hero,
      SkillObject skill,
      int skillLevelChange);

    public abstract int MaxAttribute { get; }

    public abstract int MaxFocusPerSkill { get; }

    public abstract int MaxSkillRequiredForEpicPerkBonus { get; }

    public abstract int MinSkillRequiredForEpicPerkBonus { get; }

    public abstract void GetTraitLevelForTraitXp(
      Hero hero,
      TraitObject trait,
      int newValue,
      out int traitLevel,
      out int traitXp);

    public abstract int GetTraitXpRequiredForTraitLevel(TraitObject trait, int traitLevel);

    public abstract int FocusPointsPerLevel { get; }

    public abstract int FocusPointsAtStart { get; }

    public abstract int AttributePointsAtStart { get; }

    public abstract int LevelsPerAttributePoint { get; }

    public abstract ExplainedNumber CalculateLearningLimit(
      int attributeValue,
      int focusValue,
      TextObject attributeName,
      bool includeDescriptions = false);

    public abstract float CalculateLearningRate(Hero hero, SkillObject skill);

    public abstract ExplainedNumber CalculateLearningRate(
      int attributeValue,
      int focusValue,
      int skillValue,
      int characterLevel,
      TextObject attributeName,
      bool includeDescriptions = false);

    public abstract SkillObject GetNextSkillToAddFocus(Hero hero);

    public abstract CharacterAttribute GetNextAttributeToUpgrade(Hero hero);

    public abstract PerkObject GetNextPerkToChoose(Hero hero, PerkObject perk);
  }
}

// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultCharacterDevelopmentModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultCharacterDevelopmentModel : CharacterDevelopmentModel
  {
    private const int MaxCharacterLevels = 62;
    private const int SkillPointsAtLevel1 = 1;
    private const int SkillPointsGainNeededInitialValue = 1000;
    private const int SkillPointsGainNeededIncreasePerLevel = 1000;
    private readonly int[] _skillsRequiredForLevel = new int[63];
    private const int FocusPointsPerLevelConst = 1;
    private const int LevelsPerAttributePointConst = 4;
    private const int FocusPointsAtStartConst = 5;
    private const int AttributePointsAtStartConst = 15;
    private const int MaxSkillLevels = 1024;
    private readonly int[] _xpRequiredForSkillLevel = new int[1024];
    private const int XpRequirementForFirstLevel = 30;
    private const int MaxSkillPoint = 2147483647;
    private const float BaseLearningRate = 1.25f;
    private const int TraitThreshold2 = 4000;
    private const int TraitMaxValue1 = 2500;
    private const int TraitThreshold1 = 1000;
    private const int TraitMaxValue2 = 6000;
    private const int SkillLevelVariant = 10;
    private static readonly TextObject _skillFocusText = new TextObject("{=MRktqZwu}Skill Focus");
    private static readonly TextObject _overLimitText = new TextObject("{=bcA7ZuyO}Learning Limit Exceeded");

    public DefaultCharacterDevelopmentModel()
    {
      this.InitializeSkillsRequiredForLevel();
      this.InitializeXpRequiredForSkillLevel();
    }

    public override List<Tuple<SkillObject, int>> GetSkillsDerivedFromTraits(
      Hero hero = null,
      CharacterObject templateCharacter = null,
      bool isByNaturalGrowth = false)
    {
      List<Tuple<SkillObject, int>> derivedFromTraits = new List<Tuple<SkillObject, int>>();
      Occupation occupation = hero != null ? hero.Occupation : templateCharacter.Occupation;
      if (templateCharacter == null)
        templateCharacter = hero.CharacterObject;
      int num1 = templateCharacter.GetTraitLevel(DefaultTraits.Commander);
      int num2 = templateCharacter.GetTraitLevel(DefaultTraits.Manager);
      int num3 = templateCharacter.GetTraitLevel(DefaultTraits.Trader);
      int num4 = templateCharacter.GetTraitLevel(DefaultTraits.Politician);
      int traitLevel1 = templateCharacter.GetTraitLevel(DefaultTraits.Siegecraft);
      int traitLevel2 = templateCharacter.GetTraitLevel(DefaultTraits.SergeantCommandSkills);
      int traitLevel3 = templateCharacter.GetTraitLevel(DefaultTraits.ScoutSkills);
      int traitLevel4 = templateCharacter.GetTraitLevel(DefaultTraits.Surgery);
      int traitLevel5 = templateCharacter.GetTraitLevel(DefaultTraits.Blacksmith);
      int num5 = templateCharacter.GetTraitLevel(DefaultTraits.RogueSkills);
      int a = templateCharacter.GetTraitLevel(DefaultTraits.Fighter);
      switch (occupation)
      {
        case Occupation.Artisan:
        case Occupation.Headman:
        case Occupation.RuralNotable:
          a = 4;
          num2 = 4;
          num3 = 2;
          num4 = 5;
          break;
        case Occupation.Merchant:
          a = 3;
          num2 = 6;
          num3 = 8;
          num4 = 5;
          num1 = 2;
          break;
        case Occupation.Preacher:
          a = 2;
          num4 = 7;
          break;
        case Occupation.GangLeader:
          a = 6;
          num2 = 3;
          num3 = 3;
          num4 = 5;
          num1 = 3;
          num5 = 6;
          break;
      }
      int num6 = MathF.Max(num1 * 10 + MBRandom.RandomInt(10), traitLevel2 * 5 + MBRandom.RandomInt(10));
      int num7 = MathF.Max(num1 * 5 + MBRandom.RandomInt(10), traitLevel2 * 10 + MBRandom.RandomInt(10));
      int num8 = num2 * 10 + MBRandom.RandomInt(10);
      int val2 = num3 * 10 + MBRandom.RandomInt(10);
      int num9 = traitLevel1 * 10 + MBRandom.RandomInt(10);
      int num10 = traitLevel3 * 10 + MBRandom.RandomInt(10);
      int num11 = num4 * 10 + MBRandom.RandomInt(10);
      int num12 = num5 * 10 + MBRandom.RandomInt(10);
      int num13 = traitLevel4 * 10 + MBRandom.RandomInt(10);
      int num14 = traitLevel5 * 10 + MBRandom.RandomInt(10);
      int num15 = Math.Max(num8 - 20, val2);
      derivedFromTraits.Add(new Tuple<SkillObject, int>(DefaultSkills.Steward, num8));
      derivedFromTraits.Add(new Tuple<SkillObject, int>(DefaultSkills.Trade, num15));
      derivedFromTraits.Add(new Tuple<SkillObject, int>(DefaultSkills.Crafting, num14));
      derivedFromTraits.Add(new Tuple<SkillObject, int>(DefaultSkills.Medicine, num13));
      derivedFromTraits.Add(new Tuple<SkillObject, int>(DefaultSkills.Roguery, num12));
      derivedFromTraits.Add(new Tuple<SkillObject, int>(DefaultSkills.Leadership, num6));
      derivedFromTraits.Add(new Tuple<SkillObject, int>(DefaultSkills.Tactics, num7));
      derivedFromTraits.Add(new Tuple<SkillObject, int>(DefaultSkills.Engineering, num9));
      derivedFromTraits.Add(new Tuple<SkillObject, int>(DefaultSkills.Scouting, num10));
      derivedFromTraits.Add(new Tuple<SkillObject, int>(DefaultSkills.Charm, num11));
      int num16 = MathF.Max(MathF.Max(MathF.Max(MathF.Max(MathF.Max(MathF.Max(MathF.Max(MathF.Max(a, templateCharacter.GetTraitLevel(DefaultTraits.KnightFightingSkills)), templateCharacter.GetTraitLevel(DefaultTraits.CavalryFightingSkills)), templateCharacter.GetTraitLevel(DefaultTraits.HorseArcherFightingSkills)), templateCharacter.GetTraitLevel(DefaultTraits.HopliteFightingSkills)), templateCharacter.GetTraitLevel(DefaultTraits.PeltastFightingSkills)), templateCharacter.GetTraitLevel(DefaultTraits.HuscarlFightingSkills)), templateCharacter.GetTraitLevel(DefaultTraits.ArcherFIghtingSkills)), templateCharacter.GetTraitLevel(DefaultTraits.CrossbowmanStyle));
      int num17 = num16 * 30 + MBRandom.RandomInt(10);
      int num18 = num16 * 30 + MBRandom.RandomInt(10);
      int num19 = num16 * 30 + MBRandom.RandomInt(10);
      int num20 = num16 * 25 + MBRandom.RandomInt(10);
      int num21 = num16 * 20 + MBRandom.RandomInt(10);
      int num22 = num16 * 20 + MBRandom.RandomInt(10);
      int num23 = num16 * 20 + MBRandom.RandomInt(10);
      int num24 = num16 * 20 + MBRandom.RandomInt(10);
      if (templateCharacter.GetTraitLevel(DefaultTraits.KnightFightingSkills) > 0)
      {
        num24 += 50;
        num17 += 10;
        num19 += 20;
        num20 -= 30;
        num21 -= 30;
        num22 -= 30;
        num23 += 10;
      }
      if (templateCharacter.GetTraitLevel(DefaultTraits.CavalryFightingSkills) > 0)
      {
        num24 += 50;
        num19 += 10;
        num22 += 30;
        num20 -= 20;
        num21 -= 40;
        num18 -= 20;
        num23 -= 10;
      }
      if (templateCharacter.GetTraitLevel(DefaultTraits.HorseArcherFightingSkills) > 0)
      {
        num24 += 40;
        num20 += 30;
        num19 -= 10;
        num18 -= 30;
        num21 -= 10;
        num22 -= 10;
        num23 -= 10;
      }
      if (templateCharacter.GetTraitLevel(DefaultTraits.ArcherFIghtingSkills) > 0)
      {
        num18 -= 20;
        num19 -= 30;
        num24 -= 30;
        num21 -= 20;
        num22 -= 20;
        num20 += 60;
        num17 -= 10;
        num23 += 10;
      }
      if (templateCharacter.GetTraitLevel(DefaultTraits.HuscarlFightingSkills) > 0)
      {
        num18 += 50;
        num19 += 20;
        num20 -= 20;
        num21 -= 20;
        num22 -= 20;
        num23 += 10;
        num24 -= 20;
      }
      if (templateCharacter.GetTraitLevel(DefaultTraits.PeltastFightingSkills) > 0)
      {
        num22 += 30;
        num23 += 30;
        num17 += 10;
        num18 -= 20;
        num19 -= 20;
        num20 -= 20;
        num21 -= 20;
        num24 -= 10;
      }
      if (templateCharacter.GetTraitLevel(DefaultTraits.HopliteFightingSkills) > 0)
      {
        num19 += 20;
        num17 += 10;
        num18 -= 10;
        num23 += 10;
        num20 -= 20;
        num21 -= 20;
        num24 -= 10;
        num22 -= 20;
      }
      if (templateCharacter.GetTraitLevel(DefaultTraits.CrossbowmanStyle) > 0)
      {
        num21 += 60;
        num22 -= 20;
        num19 -= 20;
        num18 -= 10;
        num20 -= 20;
        num23 -= 10;
        num24 -= 20;
      }
      if (occupation == Occupation.Lord)
        num24 = MathF.Max(num24 + 20, 100);
      if (occupation == Occupation.Wanderer)
      {
        if (num17 < num16 * 30)
          num17 = MBRandom.RandomInt(5);
        if (num18 < num16 * 30)
          num18 = MBRandom.RandomInt(5);
        if (num19 < num16 * 30)
          num19 = MBRandom.RandomInt(5);
        if (num20 < num16 * 25)
          num20 = MBRandom.RandomInt(5);
        if (num21 < num16 * 20)
          num21 = MBRandom.RandomInt(5);
        if (num22 < num16 * 20)
          num22 = MBRandom.RandomInt(5);
        if (num23 < num16 * 20)
          num23 = MBRandom.RandomInt(5);
        if (num24 < num16 * 20)
          num24 = MBRandom.RandomInt(5);
      }
      derivedFromTraits.Add(new Tuple<SkillObject, int>(DefaultSkills.OneHanded, num17));
      derivedFromTraits.Add(new Tuple<SkillObject, int>(DefaultSkills.TwoHanded, num18));
      derivedFromTraits.Add(new Tuple<SkillObject, int>(DefaultSkills.Polearm, num19));
      derivedFromTraits.Add(new Tuple<SkillObject, int>(DefaultSkills.Bow, num20));
      derivedFromTraits.Add(new Tuple<SkillObject, int>(DefaultSkills.Crossbow, num21));
      derivedFromTraits.Add(new Tuple<SkillObject, int>(DefaultSkills.Throwing, num22));
      derivedFromTraits.Add(new Tuple<SkillObject, int>(DefaultSkills.Athletics, num23));
      derivedFromTraits.Add(new Tuple<SkillObject, int>(DefaultSkills.Riding, num24));
      if (hero != null)
      {
        for (int index = derivedFromTraits.Count - 1; index >= 0; --index)
        {
          SkillObject skill = derivedFromTraits[index].Item1;
          int num25 = MathF.Floor((float) derivedFromTraits[index].Item2 * Campaign.Current.Models.AgeModel.GetSkillScalingModifierForAge(hero, skill, isByNaturalGrowth));
          derivedFromTraits[index] = new Tuple<SkillObject, int>(skill, num25);
        }
      }
      return derivedFromTraits;
    }

    private void InitializeSkillsRequiredForLevel()
    {
      int num1 = 1000;
      int num2 = 1;
      this._skillsRequiredForLevel[0] = 0;
      this._skillsRequiredForLevel[1] = 1;
      for (int index = 2; index < this._skillsRequiredForLevel.Length; ++index)
      {
        num2 += num1;
        this._skillsRequiredForLevel[index] = num2;
        num1 += 1000 + num1 / 5;
      }
    }

    public override int MaxFocusPerSkill => 5;

    public override int MaxAttribute => 10;

    public override int SkillsRequiredForLevel(int level)
    {
      return level > 62 ? int.MaxValue : this._skillsRequiredForLevel[level];
    }

    public override int GetMaxSkillPoint() => int.MaxValue;

    private void InitializeXpRequiredForSkillLevel()
    {
      int num = 30;
      this._xpRequiredForSkillLevel[0] = num;
      for (int index = 1; index < 1024; ++index)
      {
        num += 10 + index;
        this._xpRequiredForSkillLevel[index] = this._xpRequiredForSkillLevel[index - 1] + num;
      }
    }

    public override int GetXpRequiredForSkillLevel(int skillLevel)
    {
      if (skillLevel > 1024)
        skillLevel = 1024;
      return skillLevel <= 0 ? 0 : this._xpRequiredForSkillLevel[skillLevel - 1];
    }

    public override int GetSkillLevelChange(Hero hero, SkillObject skill, float skillXp)
    {
      int skillLevelChange = 0;
      int skillValue = hero.GetSkillValue(skill);
      for (int index1 = 0; index1 < 1024 - skillValue; ++index1)
      {
        int index2 = skillValue + index1;
        if (index2 < 1023)
        {
          if ((double) skillXp >= (double) this._xpRequiredForSkillLevel[index2])
            ++skillLevelChange;
          else
            break;
        }
      }
      return skillLevelChange;
    }

    public override int GetXpAmountForSkillLevelChange(
      Hero hero,
      SkillObject skill,
      int skillLevelChange)
    {
      int skillValue = hero.GetSkillValue(skill);
      return this._xpRequiredForSkillLevel[skillValue + skillLevelChange] - this._xpRequiredForSkillLevel[skillValue];
    }

    public override void GetTraitLevelForTraitXp(
      Hero hero,
      TraitObject trait,
      int xpValue,
      out int traitLevel,
      out int clampedTraitXp)
    {
      clampedTraitXp = xpValue;
      int num1 = trait.MinValue < -1 ? -6000 : (trait.MinValue == -1 ? -2500 : 0);
      int num2 = trait.MaxValue > 1 ? 6000 : (trait.MaxValue == 1 ? 2500 : 0);
      if (xpValue > num2)
        clampedTraitXp = num2;
      else if (xpValue < num1)
        clampedTraitXp = num1;
      traitLevel = clampedTraitXp <= -4000 ? -2 : (clampedTraitXp <= -1000 ? -1 : (clampedTraitXp < 1000 ? 0 : (clampedTraitXp < 4000 ? 1 : 2)));
      if (traitLevel < trait.MinValue)
      {
        traitLevel = trait.MinValue;
      }
      else
      {
        if (traitLevel <= trait.MaxValue)
          return;
        traitLevel = trait.MaxValue;
      }
    }

    public override int GetTraitXpRequiredForTraitLevel(TraitObject trait, int traitLevel)
    {
      if (traitLevel < -1)
        return -4000;
      if (traitLevel == -1)
        return -1000;
      if (traitLevel == 0)
        return 0;
      return traitLevel != 1 ? 4000 : 1000;
    }

    public override int AttributePointsAtStart => 15;

    public override int LevelsPerAttributePoint => 4;

    public override int FocusPointsPerLevel => 1;

    public override int FocusPointsAtStart => 5;

    public override int MaxSkillRequiredForEpicPerkBonus => 250;

    public override int MinSkillRequiredForEpicPerkBonus => 200;

    public override ExplainedNumber CalculateLearningLimit(
      int attributeValue,
      int focusValue,
      TextObject attributeName,
      bool includeDescriptions = false)
    {
      ExplainedNumber learningLimit = new ExplainedNumber(includeDescriptions: includeDescriptions);
      learningLimit.Add((float) ((attributeValue - 1) * 10), attributeName);
      learningLimit.Add((float) (focusValue * 30), DefaultCharacterDevelopmentModel._skillFocusText);
      learningLimit.LimitMin(0.0f);
      return learningLimit;
    }

    public override float CalculateLearningRate(Hero hero, SkillObject skill)
    {
      int level = hero.Level;
      return this.CalculateLearningRate(hero.GetAttributeValue(skill.CharacterAttribute), hero.HeroDeveloper.GetFocus(skill), hero.GetSkillValue(skill), level, skill.CharacterAttribute.Name, false).ResultNumber;
    }

    public override ExplainedNumber CalculateLearningRate(
      int attributeValue,
      int focusValue,
      int skillValue,
      int characterLevel,
      TextObject attributeName,
      bool includeDescriptions = false)
    {
      ExplainedNumber learningRate = new ExplainedNumber(1.25f, includeDescriptions);
      learningRate.AddFactor(0.4f * (float) attributeValue, attributeName);
      learningRate.AddFactor((float) focusValue * 1f, DefaultCharacterDevelopmentModel._skillFocusText);
      int num1 = MathF.Round(this.CalculateLearningLimit(attributeValue, focusValue, (TextObject) null, false).ResultNumber);
      if (skillValue > num1)
      {
        int num2 = skillValue - num1;
        learningRate.AddFactor((float) (-1.0 - 0.10000000149011612 * (double) num2), DefaultCharacterDevelopmentModel._overLimitText);
      }
      learningRate.LimitMin(0.0f);
      return learningRate;
    }

    public override SkillObject GetNextSkillToAddFocus(Hero hero)
    {
      SkillObject nextSkillToAddFocus = (SkillObject) null;
      float num1 = float.MinValue;
      foreach (SkillObject skill in (List<SkillObject>) Skills.All)
      {
        if (hero.HeroDeveloper.CanAddFocusToSkill(skill))
        {
          int attributeValue = hero.GetAttributeValue(skill.CharacterAttribute);
          int focus = hero.HeroDeveloper.GetFocus(skill);
          float num2 = (float) hero.GetSkillValue(skill) - this.CalculateLearningLimit(attributeValue, focus, (TextObject) null, false).ResultNumber;
          if ((double) num2 > (double) num1)
          {
            num1 = num2;
            nextSkillToAddFocus = skill;
          }
        }
      }
      return nextSkillToAddFocus;
    }

    public override CharacterAttribute GetNextAttributeToUpgrade(Hero hero)
    {
      CharacterAttribute attributeToUpgrade = (CharacterAttribute) null;
      float num1 = float.MinValue;
      foreach (CharacterAttribute charAttribute1 in (List<CharacterAttribute>) Attributes.All)
      {
        int attributeValue1 = hero.GetAttributeValue(charAttribute1);
        if (attributeValue1 < this.MaxAttribute)
        {
          float num2 = 0.0f;
          float num3;
          if (attributeValue1 == 0)
          {
            num3 = float.MaxValue;
          }
          else
          {
            foreach (SkillObject skill in (List<SkillObject>) charAttribute1.Skills)
            {
              float num4 = MathF.Max(0.0f, (float) (75 + hero.GetSkillValue(skill)) - this.CalculateLearningLimit(attributeValue1, hero.HeroDeveloper.GetFocus(skill), (TextObject) null, false).ResultNumber);
              num2 += num4;
            }
            int num5 = 1;
            foreach (CharacterAttribute charAttribute2 in (List<CharacterAttribute>) Attributes.All)
            {
              if (charAttribute2 != charAttribute1)
              {
                int attributeValue2 = hero.GetAttributeValue(charAttribute2);
                if (num5 < attributeValue2)
                  num5 = attributeValue2;
              }
            }
            float num6 = MathF.Sqrt((float) num5 / (float) attributeValue1);
            num3 = num2 * num6;
          }
          if ((double) num3 > (double) num1)
          {
            num1 = num3;
            attributeToUpgrade = charAttribute1;
          }
        }
      }
      return attributeToUpgrade;
    }

    public override PerkObject GetNextPerkToChoose(Hero hero, PerkObject perk)
    {
      PerkObject nextPerkToChoose = perk;
      if (perk.AlternativePerk != null && (double) MBRandom.RandomFloat < 0.5)
        nextPerkToChoose = perk.AlternativePerk;
      return nextPerkToChoose;
    }
  }
}

// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CharacterCreationContent.CharacterCreationCategory
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.CharacterCreationContent
{
  public class CharacterCreationCategory
  {
    public CharacterCreationOnCondition CategoryCondition { get; private set; }

    public List<CharacterCreationOption> CharacterCreationOptions { get; private set; }

    public CharacterCreationCategory(CharacterCreationOnCondition condition = null)
    {
      this.CategoryCondition = condition;
      this.CharacterCreationOptions = new List<CharacterCreationOption>();
    }

    public void AddCategoryOption(
      TextObject text,
      MBList<SkillObject> effectedSkills,
      CharacterAttribute effectedAttribute,
      int focusToAdd,
      int skillLevelToAdd,
      int attributeLevelToAdd,
      CharacterCreationOnCondition optionCondition,
      CharacterCreationOnSelect onSelect,
      CharacterCreationApplyFinalEffects onApply,
      TextObject descriptionText = null,
      MBList<TraitObject> effectedTraits = null,
      int traitLevelToAdd = 0,
      int renownToAdd = 0,
      int goldToAdd = 0,
      int unspentFocusPoint = 0,
      int unspentAttributePoint = 0)
    {
      this.CharacterCreationOptions.Add(new CharacterCreationOption(this.CharacterCreationOptions.Count + 1, effectedSkills, effectedAttribute, focusToAdd, skillLevelToAdd, attributeLevelToAdd, text, optionCondition, onSelect, onApply, descriptionText, effectedTraits, traitLevelToAdd, renownToAdd, goldToAdd, unspentFocusPoint, unspentAttributePoint));
    }
  }
}

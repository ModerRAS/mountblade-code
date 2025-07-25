// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CharacterCreationContent.CharacterCreationMenu
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.CharacterCreationContent
{
  public class CharacterCreationMenu
  {
    public readonly CharacterCreationMenu.MenuTypes MenuType;
    public readonly TextObject Title;
    public readonly TextObject Text;
    public readonly CharacterCreationOnInit OnInit;
    private readonly MBList<CharacterCreationCategory> _characterCreationCategories;
    public readonly List<int> SelectedOptions;

    public MBReadOnlyList<CharacterCreationCategory> CharacterCreationCategories
    {
      get => (MBReadOnlyList<CharacterCreationCategory>) this._characterCreationCategories;
    }

    public CharacterCreationCategory AddMenuCategory(CharacterCreationOnCondition condition = null)
    {
      CharacterCreationCategory creationCategory = new CharacterCreationCategory(condition);
      this._characterCreationCategories.Add(creationCategory);
      return creationCategory;
    }

    public CharacterCreationMenu(
      TextObject title,
      TextObject text,
      CharacterCreationOnInit onInit,
      CharacterCreationMenu.MenuTypes menuType = CharacterCreationMenu.MenuTypes.MultipleChoice)
    {
      this.Title = title;
      this.Text = text;
      this.OnInit = onInit;
      this.SelectedOptions = new List<int>();
      this._characterCreationCategories = new MBList<CharacterCreationCategory>();
      this.MenuType = menuType;
    }

    public void ApplyFinalEffect(CharacterCreation characterCreation)
    {
      foreach (int selectedOption1 in this.SelectedOptions)
      {
        int selectedOption = selectedOption1;
        foreach (CharacterCreationCategory creationCategory in (List<CharacterCreationCategory>) this.CharacterCreationCategories)
        {
          if (creationCategory.CategoryCondition == null || creationCategory.CategoryCondition())
          {
            CharacterCreationOption characterCreationOption = creationCategory.CharacterCreationOptions.Find((Predicate<CharacterCreationOption>) (o => o.Id == selectedOption));
            if (characterCreationOption.ApplyFinalEffects != null)
            {
              MBReadOnlyList<SkillObject> affectedSkills = characterCreationOption.AffectedSkills;
              List<SkillObject> list1 = affectedSkills != null ? affectedSkills.ToList<SkillObject>() : (List<SkillObject>) null;
              MBReadOnlyList<TraitObject> affectedTraits = characterCreationOption.AffectedTraits;
              List<TraitObject> list2 = affectedTraits != null ? affectedTraits.ToList<TraitObject>() : (List<TraitObject>) null;
              CharacterCreationContentBase.Instance.ApplySkillAndAttributeEffects(list1, characterCreationOption.FocusToAdd, characterCreationOption.SkillLevelToAdd, characterCreationOption.EffectedAttribute, characterCreationOption.AttributeLevelToAdd, list2, characterCreationOption.TraitLevelToAdd, characterCreationOption.RenownToAdd, characterCreationOption.GoldToAdd, characterCreationOption.UnspentFocusToAdd, characterCreationOption.UnspentAttributeToAdd);
              characterCreationOption.ApplyFinalEffects(characterCreation);
            }
          }
        }
      }
    }

    public enum MenuTypes
    {
      MultipleChoice,
      SelectAllThatApply,
    }
  }
}

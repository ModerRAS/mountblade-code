// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CharacterCreationContent.CharacterCreationContentBase
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Localization;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace TaleWorlds.CampaignSystem.CharacterCreationContent
{
  public abstract class CharacterCreationContentBase
  {
    private CultureObject _culture;
    private Banner _banner;

    public static CharacterCreationContentBase Instance
    {
      get
      {
        return !(GameStateManager.Current.ActiveState is CharacterCreationState activeState) ? (CharacterCreationContentBase) null : activeState.CurrentCharacterCreationContent;
      }
    }

    protected virtual int ChildhoodAge => 7;

    protected virtual int EducationAge => 12;

    protected virtual int YouthAge => 17;

    protected virtual int AccomplishmentAge => 20;

    protected virtual int FocusToAdd => 1;

    protected virtual int SkillLevelToAdd => 10;

    protected virtual int AttributeLevelToAdd => 1;

    public virtual int FocusToAddByCulture => 1;

    public virtual int SkillLevelToAddByCulture => 10;

    protected int SelectedParentType { get; set; } = 1;

    protected int SelectedTitleType { get; set; }

    public abstract TextObject ReviewPageDescription { get; }

    protected FaceGenChar MotherFacegenCharacter { get; set; }

    protected FaceGenChar FatherFacegenCharacter { get; set; }

    protected BodyProperties PlayerBodyProperties { get; set; }

    protected Equipment PlayerStartEquipment { get; set; }

    protected Equipment PlayerCivilianEquipment { get; set; }

    public abstract IEnumerable<Type> CharacterCreationStages { get; }

    public void Initialize(CharacterCreation characterCreation)
    {
      this.OnInitialized(characterCreation);
      this.SetMainHeroInitialStats();
    }

    protected virtual void OnInitialized(CharacterCreation characterCreation)
    {
    }

    public void ApplySkillAndAttributeEffects(
      List<SkillObject> skills,
      int focusToAdd,
      int skillLevelToAdd,
      CharacterAttribute attribute,
      int attributeLevelToAdd,
      List<TraitObject> traits = null,
      int traitLevelToAdd = 0,
      int renownToAdd = 0,
      int goldToAdd = 0,
      int unspentFocusPoints = 0,
      int unspentAttributePoints = 0)
    {
      foreach (SkillObject skill in skills)
      {
        Hero.MainHero.HeroDeveloper.AddFocus(skill, focusToAdd, false);
        if (Hero.MainHero.GetSkillValue(skill) == 1)
          Hero.MainHero.HeroDeveloper.ChangeSkillLevel(skill, skillLevelToAdd - 1, false);
        else
          Hero.MainHero.HeroDeveloper.ChangeSkillLevel(skill, skillLevelToAdd, false);
      }
      Hero.MainHero.HeroDeveloper.UnspentFocusPoints += unspentFocusPoints;
      Hero.MainHero.HeroDeveloper.UnspentAttributePoints += unspentAttributePoints;
      if (attribute != null)
        Hero.MainHero.HeroDeveloper.AddAttribute(attribute, attributeLevelToAdd, false);
      if (traits != null && traitLevelToAdd > 0 && traits.Count > 0)
      {
        foreach (TraitObject trait in traits)
          Hero.MainHero.SetTraitLevel(trait, Hero.MainHero.GetTraitLevel(trait) + traitLevelToAdd);
      }
      if (renownToAdd > 0)
        GainRenownAction.Apply(Hero.MainHero, (float) renownToAdd, true);
      if (goldToAdd > 0)
        GiveGoldAction.ApplyBetweenCharacters((Hero) null, Hero.MainHero, goldToAdd, true);
      Hero.MainHero.HeroDeveloper.SetInitialLevel(1);
    }

    public void SetPlayerBanner(Banner banner) => this._banner = banner;

    public Banner GetCurrentPlayerBanner() => this._banner;

    public void SetSelectedCulture(CultureObject culture, CharacterCreation characterCreation)
    {
      this._culture = culture;
      characterCreation.ResetMenuOptions();
      this.OnCultureSelected();
    }

    public void ApplyCulture(CharacterCreation characterCreation)
    {
      CharacterObject.PlayerCharacter.Culture = CharacterCreationContentBase.Instance._culture;
      Clan.PlayerClan.Culture = CharacterCreationContentBase.Instance._culture;
      Clan.PlayerClan.UpdateHomeSettlement((Settlement) null);
      Hero.MainHero.BornSettlement = Clan.PlayerClan.HomeSettlement;
      this.OnApplyCulture();
    }

    public IEnumerable<CultureObject> GetCultures()
    {
      foreach (CultureObject objectType in (List<CultureObject>) MBObjectManager.Instance.GetObjectTypeList<CultureObject>())
      {
        if (objectType.IsMainCulture)
          yield return objectType;
      }
    }

    public CultureObject GetSelectedCulture() => this._culture;

    public virtual int GetSelectedParentType() => 0;

    protected virtual void OnApplyCulture()
    {
    }

    protected virtual void OnCultureSelected()
    {
    }

    public virtual void OnCharacterCreationFinalized()
    {
    }

    private void SetMainHeroInitialStats()
    {
      Hero.MainHero.HeroDeveloper.ClearHero();
      Hero.MainHero.HitPoints = 100;
      foreach (SkillObject skill in (List<SkillObject>) Skills.All)
        Hero.MainHero.HeroDeveloper.InitializeSkillXp(skill);
      foreach (CharacterAttribute attribute in (List<CharacterAttribute>) Attributes.All)
        Hero.MainHero.HeroDeveloper.AddAttribute(attribute, 2, false);
    }
  }
}

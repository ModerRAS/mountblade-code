// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CharacterCreationContent.CharacterCreation
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.CharacterCreationContent
{
  public class CharacterCreation
  {
    private readonly MBList<FaceGenChar> _faceGenChars;
    public readonly List<CharacterCreationMenu> CharacterCreationMenus;

    public bool IsPlayerAlone { get; set; }

    public bool HasSecondaryCharacter { get; set; }

    public string PrefabId { get; private set; }

    public sbyte PrefabBoneUsage { get; private set; }

    public MBReadOnlyList<FaceGenChar> FaceGenChars
    {
      get => (MBReadOnlyList<FaceGenChar>) this._faceGenChars;
    }

    public FaceGenMount FaceGenMount { get; private set; }

    public bool CharsEquipmentNeedsRefresh { get; private set; }

    public bool CharsNeedsRefresh { get; set; }

    public bool MountsNeedsRefresh { get; set; }

    public string Name { get; set; }

    public int CharacterCreationMenuCount => this.CharacterCreationMenus.Count;

    public void ChangeFaceGenChars(List<FaceGenChar> newChars)
    {
      this._faceGenChars.Clear();
      foreach (FaceGenChar newChar in newChars)
        this._faceGenChars.Add(newChar);
      this.CharsNeedsRefresh = true;
    }

    public void SetFaceGenMount(FaceGenMount newMount)
    {
      this.FaceGenMount = (FaceGenMount) null;
      if (newMount != null)
        this.FaceGenMount = newMount;
      this.MountsNeedsRefresh = true;
    }

    public void ClearFaceGenMounts()
    {
      this.FaceGenMount = (FaceGenMount) null;
      this.MountsNeedsRefresh = true;
    }

    public void ClearFaceGenChars()
    {
      this._faceGenChars.Clear();
      this.CharsNeedsRefresh = true;
    }

    public void ClearFaceGenPrefab()
    {
      this.PrefabId = "";
      this.PrefabBoneUsage = (sbyte) 0;
    }

    public void ChangeCharactersEquipment(List<Equipment> equipmentList)
    {
      for (int index = 0; index < equipmentList.Count; ++index)
        this._faceGenChars[index].Equipment.FillFrom(equipmentList[index]);
      this.CharsEquipmentNeedsRefresh = true;
    }

    public void ClearCharactersEquipment()
    {
      for (int index = 0; index < this._faceGenChars.Count; ++index)
        this._faceGenChars[index].Equipment.FillFrom(new Equipment());
      this.CharsEquipmentNeedsRefresh = true;
    }

    public void ChangeCharacterPrefab(string id, sbyte boneUsage)
    {
      this.PrefabId = id;
      this.PrefabBoneUsage = boneUsage;
    }

    public void ChangeCharsAnimation(List<string> actionList)
    {
      for (int index = 0; index < actionList.Count; ++index)
        this._faceGenChars[index].ActionName = actionList[index];
      this.CharsEquipmentNeedsRefresh = true;
    }

    public void ChangeMountsAnimation(string action)
    {
      this.FaceGenMount.ActionName = action;
      this.MountsNeedsRefresh = true;
    }

    public CharacterCreation()
    {
      this._faceGenChars = new MBList<FaceGenChar>();
      this.CharacterCreationMenus = new List<CharacterCreationMenu>();
      this.CharsEquipmentNeedsRefresh = false;
    }

    public void AddNewMenu(CharacterCreationMenu menu) => this.CharacterCreationMenus.Add(menu);

    public CharacterCreationMenu GetCurrentMenu(int index)
    {
      return index >= 0 && index < this.CharacterCreationMenus.Count ? this.CharacterCreationMenus[index] : (CharacterCreationMenu) null;
    }

    public IEnumerable<CharacterCreationOption> GetCurrentMenuOptions(int index)
    {
      List<CharacterCreationOption> currentMenuOptions = new List<CharacterCreationOption>();
      CharacterCreationMenu currentMenu = this.GetCurrentMenu(index);
      if (currentMenu != null)
      {
        foreach (CharacterCreationCategory creationCategory in (List<CharacterCreationCategory>) currentMenu.CharacterCreationCategories)
        {
          CharacterCreationOnCondition categoryCondition = creationCategory.CategoryCondition;
          if (categoryCondition == null || categoryCondition())
          {
            foreach (CharacterCreationOption characterCreationOption in creationCategory.CharacterCreationOptions)
            {
              if (characterCreationOption.OnCondition == null || characterCreationOption.OnCondition())
                currentMenuOptions.Add(characterCreationOption);
            }
          }
        }
      }
      return (IEnumerable<CharacterCreationOption>) currentMenuOptions;
    }

    public void ResetMenuOptions()
    {
      for (int index = 0; index < this.CharacterCreationMenus.Count; ++index)
        this.CharacterCreationMenus[index].SelectedOptions.Clear();
    }

    public void OnInit(int stage)
    {
      if (this.CharacterCreationMenus[stage].OnInit == null)
        return;
      this.CharacterCreationMenus[stage].OnInit(this);
    }

    public TextObject GetCurrentMenuText(int stage)
    {
      StringHelpers.SetCharacterProperties("PLAYER", CharacterObject.PlayerCharacter);
      return this.CharacterCreationMenus[stage].Text;
    }

    public TextObject GetCurrentMenuTitle(int stage) => this.CharacterCreationMenus[stage].Title;

    public void RunConsequence(CharacterCreationOption option, int stage, bool fromInit)
    {
      if (this.CharacterCreationMenus[stage].MenuType == CharacterCreationMenu.MenuTypes.MultipleChoice)
        this.CharacterCreationMenus[stage].SelectedOptions.Clear();
      if (!fromInit && this.CharacterCreationMenus[stage].SelectedOptions.Contains(option.Id))
      {
        this.CharacterCreationMenus[stage].SelectedOptions.Remove(option.Id);
      }
      else
      {
        this.CharacterCreationMenus[stage].SelectedOptions.Add(option.Id);
        if (option.OnSelect == null)
          return;
        option.OnSelect(this);
      }
    }

    public IEnumerable<int> GetSelectedOptions(int stage)
    {
      return (IEnumerable<int>) this.CharacterCreationMenus[stage].SelectedOptions;
    }

    public void ApplyFinalEffects()
    {
      Clan.PlayerClan.Renown = 0.0f;
      CharacterCreationContentBase.Instance.ApplyCulture(this);
      foreach (CharacterCreationMenu characterCreationMenu in this.CharacterCreationMenus)
        characterCreationMenu.ApplyFinalEffect(this);
      Campaign.Current.PlayerTraitDeveloper.UpdateTraitXPAccordingToTraitLevels();
    }
  }
}

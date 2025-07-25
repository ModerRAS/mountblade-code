// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CharacterDevelopment.IHeroDeveloper
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.CharacterDevelopment
{
  public interface IHeroDeveloper
  {
    void SetInitialLevel(int i);

    void AddSkillXp(
      SkillObject skill,
      float rawXp,
      bool isAffectedByFocusFactor = true,
      bool shouldNotify = true);

    void InitializeHeroDeveloper(bool isByNaturalGrowth = false, CharacterObject template = null);

    int UnspentFocusPoints { get; set; }

    int UnspentAttributePoints { get; set; }

    void ClearUnspentPoints();

    void AddFocus(SkillObject skill, int changeAmount, bool checkUnspentFocusPoints = true);

    void RemoveFocus(SkillObject skill, int changeAmount);

    void SetInitialSkillLevel(SkillObject skill, int newSkillValue);

    void InitializeSkillXp(SkillObject skill);

    void ClearHero();

    void AddPerk(PerkObject perk);

    float GetFocusFactor(SkillObject skill);

    void AddAttribute(CharacterAttribute attribute, int changeAmount, bool checkUnspentPoints = true);

    void RemoveAttribute(CharacterAttribute attrib, int changeAmount);

    void ChangeSkillLevel(SkillObject skill, int changeAmount, bool shouldNotify = true);

    int GetFocus(SkillObject skill);

    bool CanAddFocusToSkill(SkillObject skill);

    void AfterLoad();

    int GetTotalSkillPoints();

    int GetXpRequiredForLevel(int level);

    int GetRequiredFocusPointsToAddFocus(SkillObject skill);

    int TotalXp { get; }

    Hero Hero { get; }

    int GetSkillXpProgress(SkillObject skill);

    bool GetPerkValue(PerkObject perk);

    void DevelopCharacterStats();
  }
}

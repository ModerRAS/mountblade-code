// Decompiled with JetBrains decompiler
// Type: StoryMode.GameComponents.StoryModePartyWageModel
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.GameComponents;

#nullable disable
namespace StoryMode.GameComponents
{
  public class StoryModePartyWageModel : DefaultPartyWageModel
  {
    private const int StoryModeTutorialTroopCost = 50;

    public override int GetTroopRecruitmentCost(
      CharacterObject troop,
      Hero buyerHero,
      bool withoutItemCost = false)
    {
      if (StoryModeManager.Current.MainStoryLine.TutorialPhase.IsCompleted)
        return base.GetTroopRecruitmentCost(troop, buyerHero, withoutItemCost);
      return !(troop.StringId == "tutorial_placeholder_volunteer") ? base.GetTroopRecruitmentCost(troop, buyerHero, withoutItemCost) : 50;
    }
  }
}

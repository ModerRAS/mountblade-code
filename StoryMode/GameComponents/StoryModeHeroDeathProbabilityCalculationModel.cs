// Decompiled with JetBrains decompiler
// Type: StoryMode.GameComponents.StoryModeHeroDeathProbabilityCalculationModel
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using StoryMode.StoryModeObjects;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.GameComponents;

#nullable disable
namespace StoryMode.GameComponents
{
  public class StoryModeHeroDeathProbabilityCalculationModel : 
    DefaultHeroDeathProbabilityCalculationModel
  {
    public override float CalculateHeroDeathProbability(Hero hero)
    {
      return hero == StoryModeHeroes.ElderBrother && !StoryModeManager.Current.MainStoryLine.IsCompleted ? 0.0f : base.CalculateHeroDeathProbability(hero);
    }
  }
}

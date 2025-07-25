// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultHeroDeathProbabilityCalculationModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultHeroDeathProbabilityCalculationModel : HeroDeathProbabilityCalculationModel
  {
    public override float CalculateHeroDeathProbability(Hero hero)
    {
      return this.CalculateHeroDeathProbabilityInternal(hero);
    }

    private float CalculateHeroDeathProbabilityInternal(Hero hero)
    {
      float probabilityInternal = 0.0f;
      if (!CampaignOptions.IsLifeDeathCycleDisabled)
      {
        int becomeOldAge = Campaign.Current.Models.AgeModel.BecomeOldAge;
        int num1 = Campaign.Current.Models.AgeModel.MaxAge - 1;
        if ((double) hero.Age > (double) becomeOldAge)
        {
          if ((double) hero.Age < (double) num1)
          {
            float num2 = 1f - MathF.Pow(1f - (float) (0.30000001192092896 * (((double) hero.Age - (double) becomeOldAge) / (double) (Campaign.Current.Models.AgeModel.MaxAge - becomeOldAge))), 0.0119047621f);
            probabilityInternal += num2;
          }
          else if ((double) hero.Age >= (double) num1)
            ++probabilityInternal;
        }
      }
      return probabilityInternal;
    }
  }
}

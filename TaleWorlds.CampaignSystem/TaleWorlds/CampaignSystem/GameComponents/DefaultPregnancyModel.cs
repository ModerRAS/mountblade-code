// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultPregnancyModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Linq;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultPregnancyModel : PregnancyModel
  {
    private const int MinPregnancyAge = 18;
    private const int MaxPregnancyAge = 45;

    public override float PregnancyDurationInDays => 36f;

    public override float MaternalMortalityProbabilityInLabor => 0.015f;

    public override float StillbirthProbability => 0.01f;

    public override float DeliveringFemaleOffspringProbability => 0.51f;

    public override float DeliveringTwinsProbability => 0.03f;

    private bool IsHeroAgeSuitableForPregnancy(Hero hero)
    {
      return (double) hero.Age >= 18.0 && (double) hero.Age <= 45.0;
    }

    public override float GetDailyChanceOfPregnancyForHero(Hero hero)
    {
      int num1 = hero.Children.Count + 1;
      float num2 = (float) (4 + 4 * hero.Clan.Tier);
      int num3 = hero.Clan.Lords.Count<Hero>((Func<Hero, bool>) (x => x.IsAlive));
      float num4 = hero == Hero.MainHero || hero.Spouse == Hero.MainHero ? 1f : Math.Min(1f, (2f * num2 - (float) num3) / num2);
      float num5 = (float) ((1.2000000476837158 - ((double) hero.Age - 18.0) * 0.039999999105930328) / (double) (num1 * num1) * 0.11999999731779099) * num4;
      ExplainedNumber explainedNumber = new ExplainedNumber(hero.Spouse == null || !this.IsHeroAgeSuitableForPregnancy(hero) ? 0.0f : num5);
      if (hero.GetPerkValue(DefaultPerks.Charm.Virile) || hero.Spouse.GetPerkValue(DefaultPerks.Charm.Virile))
        explainedNumber.AddFactor(DefaultPerks.Charm.Virile.PrimaryBonus, DefaultPerks.Charm.Virile.Name);
      return explainedNumber.ResultNumber;
    }
  }
}

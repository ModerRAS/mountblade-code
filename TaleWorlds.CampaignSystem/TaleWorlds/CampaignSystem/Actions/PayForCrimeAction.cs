// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.PayForCrimeAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class PayForCrimeAction
  {
    private static void ApplyInternal(IFaction faction, CrimeModel.PaymentMethod paymentMethod)
    {
      bool flag = false;
      if (paymentMethod.HasAnyFlag<CrimeModel.PaymentMethod>(CrimeModel.PaymentMethod.Gold))
      {
        GiveGoldAction.ApplyBetweenCharacters(Hero.MainHero, (Hero) null, (int) PayForCrimeAction.GetClearCrimeCost(faction, CrimeModel.PaymentMethod.Gold));
        SkillLevelingManager.OnBribeGiven((int) PayForCrimeAction.GetClearCrimeCost(faction, CrimeModel.PaymentMethod.Gold));
      }
      if (paymentMethod.HasAnyFlag<CrimeModel.PaymentMethod>(CrimeModel.PaymentMethod.Influence))
        ChangeClanInfluenceAction.Apply(Clan.PlayerClan, -PayForCrimeAction.GetClearCrimeCost(faction, CrimeModel.PaymentMethod.Influence));
      if (paymentMethod.HasAnyFlag<CrimeModel.PaymentMethod>(CrimeModel.PaymentMethod.Punishment))
      {
        if ((double) MathF.Clamp((float) (1.0 - (double) Hero.MainHero.HitPoints * 0.0099999997764825821), 1f / 1000f, 1f) * 0.25 > (double) MBRandom.RandomFloat)
        {
          flag = true;
          KillCharacterAction.ApplyByMurder(Hero.MainHero);
        }
        else
        {
          Hero.MainHero.MakeWounded();
          if ((double) MBRandom.RandomFloat < 0.5)
            SkillLevelingManager.OnMainHeroTortured();
        }
      }
      if (paymentMethod.HasAnyFlag<CrimeModel.PaymentMethod>(CrimeModel.PaymentMethod.Execution))
      {
        flag = true;
        KillCharacterAction.ApplyByMurder(Hero.MainHero);
      }
      if (flag)
        return;
      float num = MathF.Min(faction.MainHeroCrimeRating, Campaign.Current.Models.CrimeModel.GetMinAcceptableCrimeRating(faction));
      ChangeCrimeRatingAction.Apply(faction, num - faction.MainHeroCrimeRating);
    }

    public static float GetClearCrimeCost(IFaction faction, CrimeModel.PaymentMethod paymentMethod)
    {
      return Campaign.Current.Models.CrimeModel.GetCost(faction, paymentMethod, Campaign.Current.Models.CrimeModel.GetMinAcceptableCrimeRating(faction));
    }

    public static void Apply(IFaction faction, CrimeModel.PaymentMethod paymentMethod)
    {
      PayForCrimeAction.ApplyInternal(faction, paymentMethod);
    }
  }
}

// Decompiled with JetBrains decompiler
// Type: MBHelpers.BannerHelper
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace MBHelpers
{
  public static class BannerHelper
  {
    public static void AddBannerBonusForBanner(
      BannerEffect bannerEffect,
      BannerComponent bannerComponent,
      ref FactoredNumber bonuses)
    {
      if (bannerComponent == null || bannerComponent.BannerEffect != bannerEffect)
        return;
      BannerHelper.AddBannerEffectToStat(ref bonuses, bannerEffect.IncrementType, bannerComponent.GetBannerEffectBonus());
    }

    private static void AddBannerEffectToStat(
      ref FactoredNumber stat,
      BannerEffect.EffectIncrementType effectIncrementType,
      float number)
    {
      if (effectIncrementType == BannerEffect.EffectIncrementType.Add)
      {
        stat.Add(number);
      }
      else
      {
        if (effectIncrementType != BannerEffect.EffectIncrementType.AddFactor)
          return;
        stat.AddFactor(number);
      }
    }
  }
}

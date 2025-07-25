using TaleWorlds.CampaignSystem;
using TaleWorlds.Core;
using TaleWorlds.Localization;

namespace Helpers
{
  public static class BannerHelper
  {
    // 获取英雄随机的旗帜物品
    public static ItemObject GetRandomBannerItemForHero(Hero hero)
    {
      // 从当前活动中获取可能奖励给英雄的旗帜物品，并随机选择一个
      return Campaign.Current.Models.BannerItemModel.GetPossibleRewardBannerItemsForHero(hero).GetRandomElementInefficiently<ItemObject>();
    }

    // 为指定旗帜添加旗帜效果的加成
    public static void AddBannerBonusForBanner(
      BannerEffect bannerEffect, // 旗帜效果
      BannerComponent bannerComponent, // 旗帜组件
      ref ExplainedNumber bonuses) // 需要添加加成的数值
    {
      // 如果旗帜组件为空或其效果与传入的旗帜效果不同，则直接返回，不进行加成
      if (bannerComponent == null || bannerComponent.BannerEffect != bannerEffect)
        return;
      // 调用内部方法，将旗帜效果应用到数值上
      BannerHelper.AddBannerEffectToStat(ref bonuses, bannerEffect.IncrementType, bannerComponent.GetBannerEffectBonus(), bannerEffect.Name);
    }

    // 将旗帜效果应用到数值上
    private static void AddBannerEffectToStat(
      ref ExplainedNumber stat, // 需要应用效果的数值
      BannerEffect.EffectIncrementType effectIncrementType, // 旗帜效果的增量类型
      float number, // 需要应用的数值
      TextObject effectName) // 效果的名称（用于解释或显示）
    {
      // 根据增量类型判断如何应用效果
      if (effectIncrementType == BannerEffect.EffectIncrementType.Add)
      {
        // 如果是“加”类型，直接增加指定的数值
        stat.Add(number, effectName);
      }
      else
      {
        // 如果是“加成因子”类型，应用因子加成
        if (effectIncrementType != BannerEffect.EffectIncrementType.AddFactor)
          return;
        stat.AddFactor(number, effectName);
      }
    }
  }
}

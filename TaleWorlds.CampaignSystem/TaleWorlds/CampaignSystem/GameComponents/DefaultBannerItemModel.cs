// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultBannerItemModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultBannerItemModel : BannerItemModel
  {
    public const int BannerLevel1 = 1;
    public const int BannerLevel2 = 2;
    public const int BannerLevel3 = 3;
    private const string MapBannerId = "campaign_banner_small";

    public override IEnumerable<ItemObject> GetPossibleRewardBannerItems()
    {
      return Items.All.WhereQ<ItemObject>((Func<ItemObject, bool>) (i => i.IsBannerItem && i.StringId != "campaign_banner_small"));
    }

    public override IEnumerable<ItemObject> GetPossibleRewardBannerItemsForHero(Hero hero)
    {
      IEnumerable<ItemObject> rewardBannerItems = this.GetPossibleRewardBannerItems();
      int itemLevelForHero = this.GetBannerItemLevelForHero(hero);
      List<ItemObject> bannerItemsForHero = new List<ItemObject>();
      foreach (ItemObject itemObject in rewardBannerItems)
      {
        if ((itemObject.Culture == null || itemObject.Culture == hero.Culture) && (itemObject.ItemComponent as BannerComponent).BannerLevel == itemLevelForHero)
          bannerItemsForHero.Add(itemObject);
      }
      return (IEnumerable<ItemObject>) bannerItemsForHero;
    }

    public override int GetBannerItemLevelForHero(Hero hero)
    {
      if (hero.Clan == null || hero.Clan.Leader != hero)
        return 1;
      return hero.MapFaction.IsKingdomFaction && hero.Clan.Kingdom.RulingClan == hero.Clan ? 3 : 2;
    }

    public override bool CanBannerBeUpdated(ItemObject item) => true;
  }
}

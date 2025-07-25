// Decompiled with JetBrains decompiler
// Type: StoryMode.GameComponents.StoryModeBannerItemModel
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.GameComponents;
using TaleWorlds.Core;

#nullable disable
namespace StoryMode.GameComponents
{
  public class StoryModeBannerItemModel : DefaultBannerItemModel
  {
    public override IEnumerable<ItemObject> GetPossibleRewardBannerItems()
    {
      return !StoryModeManager.Current.MainStoryLine.TutorialPhase.IsCompleted ? (IEnumerable<ItemObject>) new List<ItemObject>() : base.GetPossibleRewardBannerItems().WhereQ<ItemObject>((Func<ItemObject, bool>) (i => !this.IsItemDragonBanner(i)));
    }

    public override bool CanBannerBeUpdated(ItemObject item)
    {
      return !this.IsItemDragonBanner(item) && base.CanBannerBeUpdated(item);
    }

    private bool IsItemDragonBanner(ItemObject item)
    {
      return item.StringId == "dragon_banner" || item.StringId == "dragon_banner_center" || item.StringId == "dragon_banner_dragonhead" || item.StringId == "dragon_banner_handle";
    }
  }
}

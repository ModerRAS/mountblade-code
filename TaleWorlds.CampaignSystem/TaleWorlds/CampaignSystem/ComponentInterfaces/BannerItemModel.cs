// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ComponentInterfaces.BannerItemModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.ComponentInterfaces
{
  public abstract class BannerItemModel : GameModel
  {
    public abstract IEnumerable<ItemObject> GetPossibleRewardBannerItems();

    public abstract IEnumerable<ItemObject> GetPossibleRewardBannerItemsForHero(Hero hero);

    public abstract int GetBannerItemLevelForHero(Hero hero);

    public abstract bool CanBannerBeUpdated(ItemObject item);
  }
}

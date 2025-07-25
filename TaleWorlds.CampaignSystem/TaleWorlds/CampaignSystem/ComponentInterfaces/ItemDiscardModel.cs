// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ComponentInterfaces.ItemDiscardModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.ComponentInterfaces
{
  public abstract class ItemDiscardModel : GameModel
  {
    public abstract int GetXpBonusForDiscardingItems(ItemRoster itemRoster);

    public abstract int GetXpBonusForDiscardingItem(ItemObject item, int amount = 1);

    public abstract bool PlayerCanDonateItem(ItemObject item);
  }
}

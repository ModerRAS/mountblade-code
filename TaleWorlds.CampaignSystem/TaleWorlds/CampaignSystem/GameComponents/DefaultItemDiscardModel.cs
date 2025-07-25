// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultItemDiscardModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultItemDiscardModel : ItemDiscardModel
  {
    public override bool PlayerCanDonateItem(ItemObject item)
    {
      bool flag = false;
      if (item.HasWeaponComponent)
        flag = MobileParty.MainParty.HasPerk(DefaultPerks.Steward.GivingHands);
      else if (item.HasArmorComponent)
        flag = MobileParty.MainParty.HasPerk(DefaultPerks.Steward.PaidInPromise, true);
      return flag;
    }

    public override int GetXpBonusForDiscardingItem(ItemObject item, int amount = 1)
    {
      int num = 0;
      if (this.PlayerCanDonateItem(item))
      {
        switch (item.Tier)
        {
          case ItemObject.ItemTiers.Tier1:
            num = 75;
            break;
          case ItemObject.ItemTiers.Tier2:
            num = 150;
            break;
          case ItemObject.ItemTiers.Tier3:
            num = 250;
            break;
          case ItemObject.ItemTiers.Tier4:
          case ItemObject.ItemTiers.Tier5:
          case ItemObject.ItemTiers.Tier6:
            num = 300;
            break;
          default:
            num = 35;
            break;
        }
      }
      return num * amount;
    }

    public override int GetXpBonusForDiscardingItems(ItemRoster itemRoster)
    {
      float f = 0.0f;
      for (int index = 0; index < itemRoster.Count; ++index)
      {
        ItemObject itemAtIndex = itemRoster.GetItemAtIndex(index);
        f += (float) this.GetXpBonusForDiscardingItem(itemAtIndex, itemRoster.GetElementNumber(index));
      }
      return MathF.Floor(f);
    }
  }
}

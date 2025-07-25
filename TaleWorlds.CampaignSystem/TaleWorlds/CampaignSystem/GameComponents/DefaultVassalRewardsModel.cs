// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultVassalRewardsModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultVassalRewardsModel : VassalRewardsModel
  {
    private const int VassalRewardBannerLevel = 2;

    public override int RelationRewardWithLeader => 10;

    public override float InfluenceReward => 10f;

    public override ItemRoster GetEquipmentRewardsForJoiningKingdom(Kingdom kingdom)
    {
      ItemRoster forJoiningKingdom = new ItemRoster();
      foreach (ItemObject vassalRewardItem in (List<ItemObject>) kingdom.Culture.VassalRewardItems)
        forJoiningKingdom.AddToCounts(vassalRewardItem, 1);
      ItemObject randomBannerAtLevel = this.GetRandomBannerAtLevel(2, kingdom.Culture);
      if (randomBannerAtLevel != null)
        forJoiningKingdom.AddToCounts(randomBannerAtLevel, 1);
      return forJoiningKingdom;
    }

    private ItemObject GetRandomBannerAtLevel(int bannerLevel, CultureObject culture = null)
    {
      MBList<ItemObject> mbList = Campaign.Current.Models.BannerItemModel.GetPossibleRewardBannerItems().ToMBList<ItemObject>();
      return culture == null ? mbList.GetRandomElementWithPredicate<ItemObject>((Func<ItemObject, bool>) (i => (i.ItemComponent as BannerComponent).BannerLevel == bannerLevel)) : mbList.GetRandomElementWithPredicate<ItemObject>((Func<ItemObject, bool>) (i => (i.ItemComponent as BannerComponent).BannerLevel == bannerLevel && i.Culture == culture));
    }

    public override TroopRoster GetTroopRewardsForJoiningKingdom(Kingdom kingdom)
    {
      TroopRoster dummyTroopRoster = TroopRoster.CreateDummyTroopRoster();
      foreach (PartyTemplateStack stack in (List<PartyTemplateStack>) kingdom.Culture.VassalRewardTroopsPartyTemplate.Stacks)
        dummyTroopRoster.AddToCounts(stack.Character, stack.MaxValue);
      return dummyTroopRoster;
    }
  }
}

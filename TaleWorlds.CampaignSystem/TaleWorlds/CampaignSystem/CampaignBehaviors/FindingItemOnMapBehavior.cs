// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.FindingItemOnMapBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class FindingItemOnMapBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.DailyTickPartyEvent.AddNonSerializedListener((object) this, new Action<MobileParty>(this.DailyTickParty));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    public void DailyTickParty(MobileParty party)
    {
      switch (Campaign.Current.MapSceneWrapper.GetFaceTerrainType(party.CurrentNavigationFace))
      {
        case TerrainType.Steppe:
        case TerrainType.Plain:
          if (!party.HasPerk(DefaultPerks.Scouting.BeastWhisperer) || (double) MBRandom.RandomFloat >= (double) DefaultPerks.Scouting.BeastWhisperer.PrimaryBonus)
            break;
          ItemObject elementWithPredicate = Items.All.GetRandomElementWithPredicate<ItemObject>((Func<ItemObject, bool>) (x => x.IsMountable && !x.NotMerchandise));
          if (elementWithPredicate == null)
            break;
          party.ItemRoster.AddToCounts(elementWithPredicate, 1);
          if (!party.IsMainParty)
            break;
          TextObject textObject = new TextObject("{=vl9bawa7}{COUNT} {?(COUNT > 1)}{PLURAL(ANIMAL_NAME)} are{?}{ANIMAL_NAME} is{\\?} added to your party.");
          textObject.SetTextVariable("COUNT", 1);
          textObject.SetTextVariable("ANIMAL_NAME", elementWithPredicate.Name);
          InformationManager.DisplayMessage(new InformationMessage(textObject.ToString()));
          break;
      }
    }
  }
}

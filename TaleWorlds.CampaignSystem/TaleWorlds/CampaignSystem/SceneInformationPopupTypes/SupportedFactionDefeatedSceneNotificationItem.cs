// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.SceneInformationPopupTypes.SupportedFactionDefeatedSceneNotificationItem
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.SceneInformationPopupTypes
{
  public class SupportedFactionDefeatedSceneNotificationItem : SceneNotificationData
  {
    private readonly CampaignTime _creationCampaignTime;

    public Kingdom Faction { get; }

    public bool PlayerWantsRestore { get; }

    public override string SceneID => "scn_supported_faction_defeated_notification";

    public override TextObject TitleText
    {
      get
      {
        GameTexts.SetVariable("FORMAL_NAME", CampaignSceneNotificationHelper.GetFormalNameForKingdom(this.Faction));
        GameTexts.SetVariable("PLAYER_WANTS_RESTORE", this.PlayerWantsRestore ? 1 : 0);
        GameTexts.SetVariable("DAY_OF_YEAR", CampaignSceneNotificationHelper.GetFormalDayAndSeasonText(this._creationCampaignTime));
        GameTexts.SetVariable("YEAR", this._creationCampaignTime.GetYear);
        return GameTexts.FindText("str_supported_faction_defeated");
      }
    }

    public override IEnumerable<Banner> GetBanners()
    {
      return (IEnumerable<Banner>) new List<Banner>()
      {
        this.Faction.Banner,
        this.Faction.Banner
      };
    }

    public SupportedFactionDefeatedSceneNotificationItem(Kingdom faction, bool playerWantsRestore)
    {
      this.Faction = faction;
      this.PlayerWantsRestore = playerWantsRestore;
      this._creationCampaignTime = CampaignTime.Now;
    }
  }
}

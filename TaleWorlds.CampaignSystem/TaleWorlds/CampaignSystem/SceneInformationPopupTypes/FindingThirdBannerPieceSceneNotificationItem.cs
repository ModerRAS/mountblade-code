// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.SceneInformationPopupTypes.FindingThirdBannerPieceSceneNotificationItem
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.SceneInformationPopupTypes
{
  public class FindingThirdBannerPieceSceneNotificationItem : SceneNotificationData
  {
    private readonly CampaignTime _creationCampaignTime;

    public override string SceneID => "scn_third_banner_piece_notification";

    public override bool IsAffirmativeOptionShown { get; }

    public override TextObject TitleText
    {
      get
      {
        GameTexts.SetVariable("DAY_OF_YEAR", CampaignSceneNotificationHelper.GetFormalDayAndSeasonText(this._creationCampaignTime));
        GameTexts.SetVariable("YEAR", this._creationCampaignTime.GetYear);
        return GameTexts.FindText("str_third_banner_piece_found");
      }
    }

    public override TextObject AffirmativeTitleText
    {
      get => GameTexts.FindText("str_third_banner_piece_found_assembled");
    }

    public override TextObject AffirmativeText => new TextObject("{=6mgapvxb}Assemble");

    public override TextObject AffirmativeDescriptionText
    {
      get => new TextObject("{=IRLB42FY}Assemble the dragon banner!");
    }

    public override IEnumerable<Banner> GetBanners()
    {
      return (IEnumerable<Banner>) new List<Banner>()
      {
        Hero.MainHero.ClanBanner
      };
    }

    public FindingThirdBannerPieceSceneNotificationItem()
    {
      this.IsAffirmativeOptionShown = true;
      this._creationCampaignTime = CampaignTime.Now;
    }
  }
}

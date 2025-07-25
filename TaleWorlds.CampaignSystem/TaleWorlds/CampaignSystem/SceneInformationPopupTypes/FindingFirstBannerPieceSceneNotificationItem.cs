// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.SceneInformationPopupTypes.FindingFirstBannerPieceSceneNotificationItem
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.SceneInformationPopupTypes
{
  public class FindingFirstBannerPieceSceneNotificationItem : SceneNotificationData
  {
    private readonly Action _onCloseAction;
    private readonly CampaignTime _creationCampaignTime;

    public Hero PlayerHero { get; }

    public override string SceneID => "scn_first_banner_piece_notification";

    public override TextObject TitleText
    {
      get
      {
        GameTexts.SetVariable("DAY_OF_YEAR", CampaignSceneNotificationHelper.GetFormalDayAndSeasonText(this._creationCampaignTime));
        GameTexts.SetVariable("YEAR", this._creationCampaignTime.GetYear);
        return GameTexts.FindText("str_first_banner_piece_found");
      }
    }

    public override void OnCloseAction()
    {
      base.OnCloseAction();
      Action onCloseAction = this._onCloseAction;
      if (onCloseAction == null)
        return;
      onCloseAction();
    }

    public FindingFirstBannerPieceSceneNotificationItem(Hero playerHero, Action onCloseAction = null)
    {
      this.PlayerHero = playerHero;
      this._creationCampaignTime = CampaignTime.Now;
      this._onCloseAction = onCloseAction;
    }
  }
}

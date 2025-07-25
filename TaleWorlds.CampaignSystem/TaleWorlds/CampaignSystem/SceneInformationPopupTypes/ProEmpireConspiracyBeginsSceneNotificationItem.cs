// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.SceneInformationPopupTypes.ProEmpireConspiracyBeginsSceneNotificationItem
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.SceneInformationPopupTypes
{
  public class ProEmpireConspiracyBeginsSceneNotificationItem : 
    EmpireConspiracySupportsSceneNotificationItemBase
  {
    public override TextObject TitleText
    {
      get
      {
        TextObject text = GameTexts.FindText("str_empire_conspiracy_supports_proempire");
        text.SetTextVariable("DAY_OF_YEAR", CampaignSceneNotificationHelper.GetFormalDayAndSeasonText(CampaignTime.Now));
        text.SetTextVariable("YEAR", CampaignTime.Now.GetYear);
        return text;
      }
    }

    public ProEmpireConspiracyBeginsSceneNotificationItem(Hero kingHero)
      : base(kingHero)
    {
    }
  }
}

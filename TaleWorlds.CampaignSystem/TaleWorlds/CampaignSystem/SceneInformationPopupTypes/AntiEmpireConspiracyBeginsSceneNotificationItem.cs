// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.SceneInformationPopupTypes.AntiEmpireConspiracyBeginsSceneNotificationItem
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.SceneInformationPopupTypes
{
  public class AntiEmpireConspiracyBeginsSceneNotificationItem : 
    EmpireConspiracySupportsSceneNotificationItemBase
  {
    private readonly List<Kingdom> _antiEmpireFactions;

    public override TextObject TitleText
    {
      get
      {
        List<TextObject> textObjects = new List<TextObject>();
        foreach (Kingdom antiEmpireFaction in this._antiEmpireFactions)
          textObjects.Add(antiEmpireFaction.InformalName);
        TextObject text = GameTexts.FindText("str_empire_conspiracy_supports_antiempire");
        text.SetTextVariable("FACTION_NAMES", GameTexts.GameTextHelper.MergeTextObjectsWithComma(textObjects, true));
        text.SetTextVariable("DAY_OF_YEAR", CampaignSceneNotificationHelper.GetFormalDayAndSeasonText(CampaignTime.Now));
        text.SetTextVariable("YEAR", CampaignTime.Now.GetYear);
        return text;
      }
    }

    public AntiEmpireConspiracyBeginsSceneNotificationItem(
      Hero kingHero,
      List<Kingdom> antiEmpireFactions)
      : base(kingHero)
    {
      this._antiEmpireFactions = antiEmpireFactions;
    }
  }
}

// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignTutorial
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem
{
  public class CampaignTutorial
  {
    public readonly string TutorialTypeId;
    public readonly int Priority;

    public TextObject Description
    {
      get => GameTexts.FindText("str_campaign_tutorial_description", this.TutorialTypeId);
    }

    public TextObject Title
    {
      get => GameTexts.FindText("str_campaign_tutorial_title", this.TutorialTypeId);
    }

    public CampaignTutorial(string tutorialType, int priority)
    {
      this.TutorialTypeId = tutorialType;
      this.Priority = priority;
    }
  }
}

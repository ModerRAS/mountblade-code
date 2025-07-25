// Decompiled with JetBrains decompiler
// Type: StoryMode.GameComponents.StoryModeNotableSpawnModel
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.GameComponents;
using TaleWorlds.CampaignSystem.Settlements;

#nullable disable
namespace StoryMode.GameComponents
{
  public class StoryModeNotableSpawnModel : DefaultNotableSpawnModel
  {
    public override int GetTargetNotableCountForSettlement(
      Settlement settlement,
      Occupation occupation)
    {
      return !StoryModeManager.Current.MainStoryLine.TutorialPhase.IsCompleted && settlement.StringId == "village_ES3_2" ? 0 : base.GetTargetNotableCountForSettlement(settlement, occupation);
    }
  }
}

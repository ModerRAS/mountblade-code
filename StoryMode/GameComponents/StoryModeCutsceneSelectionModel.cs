// Decompiled with JetBrains decompiler
// Type: StoryMode.GameComponents.StoryModeCutsceneSelectionModel
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.GameComponents;
using TaleWorlds.CampaignSystem.SceneInformationPopupTypes;
using TaleWorlds.Core;

#nullable disable
namespace StoryMode.GameComponents
{
  public class StoryModeCutsceneSelectionModel : DefaultCutsceneSelectionModel
  {
    public override SceneNotificationData GetKingdomDestroyedSceneNotification(Kingdom kingdom)
    {
      return StoryModeManager.Current.MainStoryLine.PlayerSupportedKingdom != kingdom ? (SceneNotificationData) new KingdomDestroyedSceneNotificationItem(kingdom, CampaignTime.Now) : (SceneNotificationData) new SupportedFactionDefeatedSceneNotificationItem(kingdom, StoryModeManager.Current.MainStoryLine.IsOnImperialQuestLine);
    }
  }
}

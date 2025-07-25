// Decompiled with JetBrains decompiler
// Type: StoryMode.GameComponents.StoryModeKingdomDecisionPermissionModel
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.GameComponents;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace StoryMode.GameComponents
{
  public class StoryModeKingdomDecisionPermissionModel : DefaultKingdomDecisionPermissionModel
  {
    public override bool IsWarDecisionAllowedBetweenKingdoms(
      Kingdom kingdom1,
      Kingdom kingdom2,
      out TextObject reason)
    {
      if (StoryModeManager.Current.MainStoryLine.ThirdPhase != null)
      {
        MBReadOnlyList<Kingdom> oppositionKingdoms = StoryModeManager.Current.MainStoryLine.ThirdPhase.OppositionKingdoms;
        if (oppositionKingdoms.IndexOf(kingdom1) >= 0 && oppositionKingdoms.IndexOf(kingdom2) >= 0)
        {
          reason = GameTexts.FindText("str_kingdom_diplomacy_war_truce_disabled_reason_story");
          return false;
        }
      }
      reason = TextObject.Empty;
      return true;
    }

    public override bool IsPeaceDecisionAllowedBetweenKingdoms(
      Kingdom kingdom1,
      Kingdom kingdom2,
      out TextObject reason)
    {
      if (StoryModeManager.Current.MainStoryLine.ThirdPhase != null)
      {
        MBReadOnlyList<Kingdom> oppositionKingdoms = StoryModeManager.Current.MainStoryLine.ThirdPhase.OppositionKingdoms;
        MBReadOnlyList<Kingdom> allyKingdoms = StoryModeManager.Current.MainStoryLine.ThirdPhase.AllyKingdoms;
        if (oppositionKingdoms.IndexOf(kingdom1) >= 0 && allyKingdoms.IndexOf(kingdom2) >= 0 || oppositionKingdoms.IndexOf(kingdom2) >= 0 && allyKingdoms.IndexOf(kingdom1) >= 0)
        {
          reason = GameTexts.FindText("str_kingdom_diplomacy_war_truce_disabled_reason_story");
          return false;
        }
      }
      reason = TextObject.Empty;
      return true;
    }
  }
}

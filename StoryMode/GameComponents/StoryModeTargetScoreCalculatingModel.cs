// Decompiled with JetBrains decompiler
// Type: StoryMode.GameComponents.StoryModeTargetScoreCalculatingModel
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using StoryMode.StoryModePhases;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.GameComponents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;

#nullable disable
namespace StoryMode.GameComponents
{
  public class StoryModeTargetScoreCalculatingModel : DefaultTargetScoreCalculatingModel
  {
    public override float GetTargetScoreForFaction(
      Settlement targetSettlement,
      Army.ArmyTypes missionType,
      MobileParty mobileParty,
      float ourStrength,
      int numberOfEnemyFactionSettlements,
      float totalEnemyMobilePartyStrength)
    {
      return missionType == Army.ArmyTypes.Raider && targetSettlement != null && targetSettlement.StringId == "village_ES3_2" && TutorialPhase.Instance != null && !TutorialPhase.Instance.IsCompleted ? 0.0f : base.GetTargetScoreForFaction(targetSettlement, missionType, mobileParty, ourStrength, numberOfEnemyFactionSettlements, totalEnemyMobilePartyStrength);
    }
  }
}

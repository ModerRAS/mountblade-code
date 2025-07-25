// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Encounters.CastleEncounter
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.Encounters
{
  public class CastleEncounter : LocationEncounter
  {
    public CastleEncounter(Settlement settlement)
      : base(settlement)
    {
    }

    public override IMission CreateAndOpenMissionController(
      Location nextLocation,
      Location previousLocation = null,
      CharacterObject talkToChar = null,
      string playerSpecialSpawnTag = null)
    {
      int wallLevel = this.Settlement.Town.GetWallLevel();
      IMission missionController;
      if (nextLocation.StringId == "center")
        missionController = CampaignMission.OpenCastleCourtyardMission(nextLocation.GetSceneName(wallLevel), nextLocation, talkToChar, wallLevel);
      else if (nextLocation.StringId == "lordshall")
      {
        nextLocation.GetSceneName(wallLevel);
        missionController = CampaignMission.OpenIndoorMission(nextLocation.GetSceneName(wallLevel), wallLevel, nextLocation, talkToChar);
      }
      else
      {
        int settlementUpgradeLevel = Campaign.Current.Models.LocationModel.GetSettlementUpgradeLevel(PlayerEncounter.LocationEncounter);
        nextLocation.GetSceneName(settlementUpgradeLevel);
        missionController = CampaignMission.OpenIndoorMission(nextLocation.GetSceneName(settlementUpgradeLevel), settlementUpgradeLevel, nextLocation, talkToChar);
      }
      return missionController;
    }
  }
}

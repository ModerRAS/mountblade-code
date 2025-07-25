// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Encounters.TownEncounter
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.Encounters
{
  public class TownEncounter : LocationEncounter
  {
    public TownEncounter(Settlement settlement)
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
      string sceneName = nextLocation.GetSceneName(wallLevel);
      IMission missionController;
      if (nextLocation.StringId == "center")
        missionController = CampaignMission.OpenTownCenterMission(sceneName, nextLocation, talkToChar, wallLevel, playerSpecialSpawnTag);
      else if (nextLocation.StringId == "arena")
      {
        missionController = CampaignMission.OpenArenaStartMission(sceneName, nextLocation, talkToChar);
      }
      else
      {
        int settlementUpgradeLevel = Campaign.Current.Models.LocationModel.GetSettlementUpgradeLevel(PlayerEncounter.LocationEncounter);
        missionController = CampaignMission.OpenIndoorMission(sceneName, settlementUpgradeLevel, nextLocation, talkToChar);
      }
      return missionController;
    }
  }
}

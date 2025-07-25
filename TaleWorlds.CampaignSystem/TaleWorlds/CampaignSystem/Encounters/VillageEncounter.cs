// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Encounters.VillageEncounter
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.Encounters
{
  public class VillageEncounter : LocationEncounter
  {
    public VillageEncounter(Settlement settlement)
      : base(settlement)
    {
    }

    public override IMission CreateAndOpenMissionController(
      Location nextLocation,
      Location previousLocation = null,
      CharacterObject talkToChar = null,
      string playerSpecialSpawnTag = null)
    {
      IMission missionController = (IMission) null;
      if (nextLocation.StringId == "village_center")
        missionController = CampaignMission.OpenVillageMission(nextLocation.GetSceneName(1), nextLocation, talkToChar);
      return missionController;
    }
  }
}

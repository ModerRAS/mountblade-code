// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.MissionLogics.Towns.TownCenterMissionController
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using TaleWorlds.CampaignSystem;
using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Missions.MissionLogics.Towns
{
  public class TownCenterMissionController : MissionLogic
  {
    public override void OnCreated()
    {
      base.OnCreated();
      this.Mission.DoesMissionRequireCivilianEquipment = true;
    }

    public override void AfterStart()
    {
      int num = Campaign.Current.IsNight ? 1 : 0;
      this.Mission.SetMissionMode(MissionMode.StartUp, true);
      this.Mission.IsInventoryAccessible = !Campaign.Current.IsMainHeroDisguised;
      this.Mission.IsQuestScreenAccessible = true;
      MissionAgentHandler missionBehavior = this.Mission.GetMissionBehavior<MissionAgentHandler>();
      missionBehavior.SpawnPlayer(this.Mission.DoesMissionRequireCivilianEquipment, true);
      missionBehavior.SpawnLocationCharacters();
      MissionAgentHandler.SpawnHorses();
      if (num != 0)
        return;
      MissionAgentHandler.SpawnSheeps();
      MissionAgentHandler.SpawnCows();
      MissionAgentHandler.SpawnHogs();
      MissionAgentHandler.SpawnGeese();
      MissionAgentHandler.SpawnChicken();
    }
  }
}

// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.Source.Missions.EquipmentTestMissionController
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.Engine;

#nullable disable
namespace TaleWorlds.MountAndBlade.Source.Missions
{
  public class EquipmentTestMissionController : MissionLogic
  {
    public override void AfterStart()
    {
      base.AfterStart();
      GameEntity entityWithTag = this.Mission.Scene.FindEntityWithTag("spawnpoint_player");
      this.Mission.SpawnAgent(new AgentBuildData(Game.Current.PlayerTroop).Team(this.Mission.AttackerTeam).InitialFrameFromSpawnPointEntity(entityWithTag).CivilianEquipment(false).Controller(Agent.ControllerType.Player));
    }
  }
}

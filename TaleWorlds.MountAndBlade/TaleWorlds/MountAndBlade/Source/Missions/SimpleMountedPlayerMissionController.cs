// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.Source.Missions.SimpleMountedPlayerMissionController
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade.Source.Missions
{
  public class SimpleMountedPlayerMissionController : MissionLogic
  {
    private Game _game;

    public SimpleMountedPlayerMissionController() => this._game = Game.Current;

    public override void AfterStart()
    {
      BasicCharacterObject troop = this._game.ObjectManager.GetObject<BasicCharacterObject>("aserai_tribal_horseman");
      GameEntity entityWithTag = Mission.Current.Scene.FindEntityWithTag("sp_play");
      MatrixFrame matrixFrame = entityWithTag != null ? entityWithTag.GetGlobalFrame() : MatrixFrame.Identity;
      AgentBuildData agentBuildData1 = new AgentBuildData((IAgentOriginBase) new BasicBattleAgentOrigin(troop));
      AgentBuildData agentBuildData2 = agentBuildData1.InitialPosition(in matrixFrame.origin);
      Vec2 vec2 = matrixFrame.rotation.f.AsVec2;
      vec2 = vec2.Normalized();
      ref Vec2 local = ref vec2;
      agentBuildData2.InitialDirection(in local).Controller(Agent.ControllerType.Player);
      this.Mission.SpawnAgent(agentBuildData1).WieldInitialWeapons();
    }

    public override bool MissionEnded(ref MissionResult missionResult)
    {
      return this.Mission.InputManager.IsGameKeyPressed(4);
    }
  }
}

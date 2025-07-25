// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.MissionLogics.SneakTeam3MissionController
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Missions.MissionLogics
{
  public class SneakTeam3MissionController : MissionLogic
  {
    private Game _game;
    private List<List<GameEntity>> _townRegionProps;
    private Agent _playerAgent;
    private const string _targetEntityTag = "khuzait_scroll";
    private bool _isScrollObtained;

    public SneakTeam3MissionController()
    {
      this._game = Game.Current;
      this._townRegionProps = new List<List<GameEntity>>();
      this._isScrollObtained = false;
    }

    public override void AfterStart()
    {
      base.AfterStart();
      this.Mission.SetMissionMode(MissionMode.Stealth, true);
      this.Mission.Scene.TimeOfDay = 20.5f;
      this.GetAllProps();
      this.RandomizeScrollPosition();
      GameEntity entityWithTag = this.Mission.Scene.FindEntityWithTag("spawnpoint_player");
      MatrixFrame matrixFrame = (NativeObject) entityWithTag != (NativeObject) null ? entityWithTag.GetGlobalFrame() : MatrixFrame.Identity;
      if ((NativeObject) entityWithTag != (NativeObject) null)
        matrixFrame.rotation.OrthonormalizeAccordingToForwardAndKeepUpAsZAxis();
      this._playerAgent = this.Mission.SpawnAgent(new AgentBuildData(this._game.PlayerTroop).Team(this.Mission.PlayerTeam).InitialPosition(in matrixFrame.origin).InitialDirection(matrixFrame.rotation.f.AsVec2.Normalized()).NoHorses(true).Controller(Agent.ControllerType.Player));
      this._playerAgent.WieldInitialWeapons();
    }

    private void GetAllProps()
    {
      for (int index = 0; index < 5; ++index)
      {
        List<GameEntity> gameEntityList = new List<GameEntity>();
        IEnumerable<GameEntity> entitiesWithTag = this.Mission.Scene.FindEntitiesWithTag("patrol_region_" + (object) index);
        gameEntityList.AddRange(entitiesWithTag);
        this._townRegionProps.Add(gameEntityList);
      }
    }

    private void RandomizeScrollPosition()
    {
      GameEntity entityWithTag1 = this.Mission.Scene.FindEntityWithTag("scroll_" + (object) MBRandom.RandomInt(3));
      if (!((NativeObject) entityWithTag1 != (NativeObject) null))
        return;
      GameEntity entityWithTag2 = this.Mission.Scene.FindEntityWithTag("khuzait_scroll");
      if (!((NativeObject) entityWithTag2 != (NativeObject) null))
        return;
      MatrixFrame frame = entityWithTag1.GetFrame();
      frame.origin.z += 0.9f;
      entityWithTag2.SetFrame(ref frame);
    }

    public override void OnMissionTick(float dt) => base.OnMissionTick(dt);

    private bool IsPlayerDead()
    {
      return this.Mission.MainAgent == null || !this.Mission.MainAgent.IsActive();
    }

    public override void OnObjectUsed(Agent userAgent, UsableMissionObject usedObject)
    {
      if (!usedObject.GameEntity.HasTag("khuzait_scroll"))
        return;
      this._isScrollObtained = true;
    }

    public override bool MissionEnded(ref MissionResult missionResult)
    {
      return this._isScrollObtained || this.IsPlayerDead();
    }
  }
}

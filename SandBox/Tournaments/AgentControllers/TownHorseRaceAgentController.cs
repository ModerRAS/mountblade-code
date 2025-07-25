// Decompiled with JetBrains decompiler
// Type: SandBox.Tournaments.AgentControllers.TownHorseRaceAgentController
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.Tournaments.MissionLogics;
using System;
using TaleWorlds.Engine;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Tournaments.AgentControllers
{
  public class TownHorseRaceAgentController : AgentController
  {
    private TownHorseRaceMissionController _controller;
    private int _checkPointIndex;
    private int _tourCount;

    public override void OnInitialize()
    {
      this._controller = this.Mission.GetMissionBehavior<TownHorseRaceMissionController>();
      this._checkPointIndex = 0;
      this._tourCount = 0;
    }

    public void DisableMovement()
    {
      if (!this.Owner.IsAIControlled)
        return;
      WorldPosition worldPosition = this.Owner.GetWorldPosition();
      this.Owner.SetScriptedPositionAndDirection(ref worldPosition, this.Owner.Frame.rotation.f.AsVec2.RotationInRadians, false);
    }

    public void Start()
    {
      if (this._checkPointIndex >= this._controller.CheckPoints.Count)
        return;
      TownHorseRaceMissionController.CheckPoint checkPoint = this._controller.CheckPoints[this._checkPointIndex];
      checkPoint.AddToCheckList(this.Owner);
      if (!this.Owner.IsAIControlled)
        return;
      WorldPosition position = new WorldPosition(Mission.Current.Scene, UIntPtr.Zero, checkPoint.GetBestTargetPosition(), false);
      this.Owner.SetScriptedPosition(ref position, false, Agent.AIScriptedFrameFlags.NeverSlowDown);
    }

    public void OnEnterCheckPoint(VolumeBox checkPoint)
    {
      this._controller.CheckPoints[this._checkPointIndex].RemoveFromCheckList(this.Owner);
      ++this._checkPointIndex;
      if (this._checkPointIndex < this._controller.CheckPoints.Count)
      {
        if (this.Owner.IsAIControlled)
        {
          WorldPosition position = new WorldPosition(Mission.Current.Scene, UIntPtr.Zero, this._controller.CheckPoints[this._checkPointIndex].GetBestTargetPosition(), false);
          this.Owner.SetScriptedPosition(ref position, false, Agent.AIScriptedFrameFlags.NeverSlowDown);
        }
        this._controller.CheckPoints[this._checkPointIndex].AddToCheckList(this.Owner);
      }
      else
      {
        ++this._tourCount;
        if (this._tourCount >= 2)
          return;
        this._checkPointIndex = 0;
        if (this.Owner.IsAIControlled)
        {
          WorldPosition position = new WorldPosition(Mission.Current.Scene, UIntPtr.Zero, this._controller.CheckPoints[this._checkPointIndex].GetBestTargetPosition(), false);
          this.Owner.SetScriptedPosition(ref position, false, Agent.AIScriptedFrameFlags.NeverSlowDown);
        }
        this._controller.CheckPoints[this._checkPointIndex].AddToCheckList(this.Owner);
      }
    }
  }
}

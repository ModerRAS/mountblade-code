// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.AgentControllers.AmbushBattleAgentController
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using System;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Missions.AgentControllers
{
  public class AmbushBattleAgentController : AgentController
  {
    private readonly ActionIndexCache act_pickup_boulder_begin = ActionIndexCache.Create(nameof (act_pickup_boulder_begin));
    private readonly ActionIndexCache act_pickup_boulder_end = ActionIndexCache.Create(nameof (act_pickup_boulder_end));
    public bool IsAttacker;
    private bool _aggressive;
    public bool IsLeader;
    public GameEntity BoulderTarget;
    public bool HasBeenPlaced;
    public MatrixFrame OriginalSpawnFrame;
    private bool _boulderAddedToEquip;
    private AmbushBattleAgentController.AgentState _agentState = AmbushBattleAgentController.AgentState.SearchingForBoulder;

    public bool Aggressive
    {
      set
      {
        this._aggressive = value;
        if (!this._aggressive)
          return;
        this.Owner.SetWatchState(Agent.WatchState.Alarmed);
      }
      get => this._aggressive;
    }

    public override void OnInitialize() => this.Aggressive = false;

    public bool CheckArrivedAtWayPoint(GameEntity waypoint)
    {
      return waypoint.CheckPointWithOrientedBoundingBox(this.Owner.Position);
    }

    public void UpdateState()
    {
      if (!this.IsAttacker)
        this.UpdateDefendingAIAgentState();
      else
        this.UpdateAttackingAIAgentState();
    }

    private void UpdateDefendingAIAgentState()
    {
    }

    private void UpdateAttackingAIAgentState()
    {
      if (this._agentState == AmbushBattleAgentController.AgentState.MovingToBoulder || this._agentState == AmbushBattleAgentController.AgentState.SearchingForBoulder)
      {
        if (this.Owner.Character != Game.Current.PlayerTroop && !this.Owner.Character.IsPlayerCharacter && this._agentState != AmbushBattleAgentController.AgentState.SearchingForBoulder && (double) this.Owner.AgentVisuals.GetGlobalFrame().origin.DistanceSquared(this.BoulderTarget.GlobalPosition) < 0.16000001132488251)
        {
          MBDebug.Print("Picking up a boulder");
          this._agentState = AmbushBattleAgentController.AgentState.PickingUpBoulder;
          this.Owner.DisableScriptedMovement();
          MatrixFrame globalFrame = this.BoulderTarget.GetGlobalFrame();
          Vec2 asVec2 = globalFrame.origin.AsVec2;
          this.Owner.SetTargetPositionAndDirectionSynched(ref asVec2, ref globalFrame.rotation.f);
        }
      }
      else if (this._agentState == AmbushBattleAgentController.AgentState.PickingUpBoulder)
        this.PickUpBoulderWithAnimation();
      if (this._agentState != AmbushBattleAgentController.AgentState.MovingBackToSpawn)
        return;
      this.Owner.DisableScriptedMovement();
      this._agentState = AmbushBattleAgentController.AgentState.None;
    }

    private void PickUpBoulderWithAnimation()
    {
      ActionIndexValueCache currentActionValue = this.Owner.GetCurrentActionValue(0);
      if (!this._boulderAddedToEquip && currentActionValue != this.act_pickup_boulder_begin)
        this.Owner.SetActionChannel(0, this.act_pickup_boulder_begin, true);
      else if (!this._boulderAddedToEquip && currentActionValue == this.act_pickup_boulder_begin)
      {
        if ((double) this.Owner.GetCurrentActionProgress(0) < 0.699999988079071)
          return;
        this._boulderAddedToEquip = true;
      }
      else
      {
        if (this.Owner.IsMainAgent || this._agentState != AmbushBattleAgentController.AgentState.PickingUpBoulder || !(currentActionValue != this.act_pickup_boulder_end) || !(currentActionValue != this.act_pickup_boulder_begin))
          return;
        this.Owner.ClearTargetFrame();
        if (!this.Aggressive)
        {
          WorldPosition position = new WorldPosition(Mission.Current.Scene, UIntPtr.Zero, this.OriginalSpawnFrame.origin, false);
          this.Owner.SetScriptedPosition(ref position, false);
          this._agentState = AmbushBattleAgentController.AgentState.MovingBackToSpawn;
        }
        else
          this._agentState = AmbushBattleAgentController.AgentState.None;
      }
    }

    private enum AgentState
    {
      None,
      SearchingForBoulder,
      MovingToBoulder,
      PickingUpBoulder,
      MovingBackToSpawn,
    }
  }
}

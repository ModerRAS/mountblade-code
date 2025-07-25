// Decompiled with JetBrains decompiler
// Type: SandBox.Tournaments.AgentControllers.JoustingAgentController
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.Tournaments.MissionLogics;
using System;
using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Tournaments.AgentControllers
{
  public class JoustingAgentController : AgentController
  {
    private JoustingAgentController.JoustingAgentState _state;
    public int CurrentCornerIndex;
    private const float MaxDistance = 3f;
    public int Score;
    private Agent _opponentAgent;

    public JoustingAgentController.JoustingAgentState State
    {
      get => this._state;
      set
      {
        if (value == this._state)
          return;
        this._state = value;
        this.JoustingMissionController.OnJoustingAgentStateChanged(this.Owner, value);
      }
    }

    public TournamentJoustingMissionController JoustingMissionController { get; private set; }

    public Agent Opponent
    {
      get
      {
        if (this._opponentAgent == null)
        {
          foreach (Agent agent in (List<Agent>) this.Mission.Agents)
          {
            if (agent.IsHuman && agent != this.Owner)
              this._opponentAgent = agent;
          }
        }
        return this._opponentAgent;
      }
    }

    public bool PrepareEquipmentsAfterDismount { get; private set; }

    public override void OnInitialize()
    {
      this.JoustingMissionController = this.Mission.GetMissionBehavior<TournamentJoustingMissionController>();
      this._state = JoustingAgentController.JoustingAgentState.WaitingOpponent;
    }

    public void UpdateState()
    {
      if (this.Owner.Character.IsPlayerCharacter)
        this.UpdateMainAgentState();
      else
        this.UpdateAIAgentState();
    }

    private void UpdateMainAgentState()
    {
      JoustingAgentController controller = this.Opponent.GetController<JoustingAgentController>();
      bool flag = this.JoustingMissionController.CornerStartList[this.CurrentCornerIndex].CheckPointWithOrientedBoundingBox(this.Owner.Position) && !this.JoustingMissionController.RegionBoxList[this.CurrentCornerIndex].CheckPointWithOrientedBoundingBox(this.Owner.Position);
      switch (this.State)
      {
        case JoustingAgentController.JoustingAgentState.GoToStartPosition:
          if (!flag)
            break;
          this.State = JoustingAgentController.JoustingAgentState.WaitInStartPosition;
          break;
        case JoustingAgentController.JoustingAgentState.WaitInStartPosition:
          if (!flag)
          {
            this.State = JoustingAgentController.JoustingAgentState.GoToStartPosition;
            break;
          }
          if ((double) this.Owner.GetCurrentVelocity().LengthSquared >= 0.0025000001769512892)
            break;
          this.State = JoustingAgentController.JoustingAgentState.WaitingOpponent;
          break;
        case JoustingAgentController.JoustingAgentState.WaitingOpponent:
          if (!flag)
          {
            this.State = JoustingAgentController.JoustingAgentState.GoToStartPosition;
            break;
          }
          if (controller.State != JoustingAgentController.JoustingAgentState.WaitingOpponent && controller.State != JoustingAgentController.JoustingAgentState.Ready)
            break;
          this.State = JoustingAgentController.JoustingAgentState.Ready;
          break;
        case JoustingAgentController.JoustingAgentState.Ready:
          if (this.JoustingMissionController.IsAgentInTheTrack(this.Owner) && (double) this.Owner.GetCurrentVelocity().LengthSquared > 0.0025000001769512892)
          {
            this.State = JoustingAgentController.JoustingAgentState.Riding;
            break;
          }
          if (controller.State == JoustingAgentController.JoustingAgentState.GoToStartPosition)
          {
            this.State = JoustingAgentController.JoustingAgentState.WaitingOpponent;
            break;
          }
          if (this.JoustingMissionController.CornerStartList[this.CurrentCornerIndex].CheckPointWithOrientedBoundingBox(this.Owner.Position))
            break;
          this.State = JoustingAgentController.JoustingAgentState.GoToStartPosition;
          break;
        case JoustingAgentController.JoustingAgentState.Riding:
          if (this.JoustingMissionController.IsAgentInTheTrack(this.Owner, false))
            this.State = JoustingAgentController.JoustingAgentState.RidingAtWrongSide;
          if (!this.JoustingMissionController.RegionExitBoxList[this.CurrentCornerIndex].CheckPointWithOrientedBoundingBox(this.Owner.Position))
            break;
          this.State = JoustingAgentController.JoustingAgentState.GoToStartPosition;
          this.CurrentCornerIndex = 1 - this.CurrentCornerIndex;
          break;
        case JoustingAgentController.JoustingAgentState.RidingAtWrongSide:
          if (this.JoustingMissionController.IsAgentInTheTrack(this.Owner))
          {
            this.State = JoustingAgentController.JoustingAgentState.Riding;
            break;
          }
          if (!this.JoustingMissionController.CornerStartList[1 - this.CurrentCornerIndex].CheckPointWithOrientedBoundingBox(this.Owner.Position))
            break;
          this.State = JoustingAgentController.JoustingAgentState.GoToStartPosition;
          this.CurrentCornerIndex = 1 - this.CurrentCornerIndex;
          break;
      }
    }

    private void UpdateAIAgentState()
    {
      if (this.Opponent == null || !this.Opponent.IsActive())
        return;
      JoustingAgentController controller = this.Opponent.GetController<JoustingAgentController>();
      switch (this.State)
      {
        case JoustingAgentController.JoustingAgentState.GoingToBackStart:
          if ((double) this.Owner.Position.Distance(this.JoustingMissionController.CornerBackStartList[this.CurrentCornerIndex].origin) >= 3.0 || (double) this.Owner.GetCurrentVelocity().LengthSquared >= 0.0025000001769512892)
            break;
          this.CurrentCornerIndex = 1 - this.CurrentCornerIndex;
          MatrixFrame globalFrame = this.JoustingMissionController.CornerStartList[this.CurrentCornerIndex].GetGlobalFrame();
          WorldPosition scriptedPosition = new WorldPosition(Mission.Current.Scene, UIntPtr.Zero, globalFrame.origin, false);
          this.Owner.SetScriptedPositionAndDirection(ref scriptedPosition, globalFrame.rotation.f.AsVec2.RotationInRadians, false);
          this.State = JoustingAgentController.JoustingAgentState.GoToStartPosition;
          break;
        case JoustingAgentController.JoustingAgentState.GoToStartPosition:
          if (!this.JoustingMissionController.CornerStartList[this.CurrentCornerIndex].CheckPointWithOrientedBoundingBox(this.Owner.Position) || (double) this.Owner.GetCurrentVelocity().LengthSquared >= 0.0025000001769512892)
            break;
          this.State = JoustingAgentController.JoustingAgentState.WaitingOpponent;
          break;
        case JoustingAgentController.JoustingAgentState.WaitingOpponent:
          if (controller.State != JoustingAgentController.JoustingAgentState.WaitingOpponent && controller.State != JoustingAgentController.JoustingAgentState.Ready)
            break;
          this.State = JoustingAgentController.JoustingAgentState.Ready;
          break;
        case JoustingAgentController.JoustingAgentState.Ready:
          if (controller.State == JoustingAgentController.JoustingAgentState.Riding)
          {
            this.State = JoustingAgentController.JoustingAgentState.StartRiding;
            WorldPosition position = new WorldPosition(Mission.Current.Scene, UIntPtr.Zero, this.JoustingMissionController.CornerMiddleList[this.CurrentCornerIndex].origin, false);
            this.Owner.SetScriptedPosition(ref position, false, Agent.AIScriptedFrameFlags.NeverSlowDown);
            break;
          }
          if (controller.State == JoustingAgentController.JoustingAgentState.Ready)
          {
            WorldPosition position = new WorldPosition(Mission.Current.Scene, UIntPtr.Zero, this.JoustingMissionController.CornerStartList[this.CurrentCornerIndex].GetGlobalFrame().origin, false);
            this.Owner.SetScriptedPosition(ref position, false, Agent.AIScriptedFrameFlags.NeverSlowDown);
            break;
          }
          this.State = JoustingAgentController.JoustingAgentState.WaitingOpponent;
          break;
        case JoustingAgentController.JoustingAgentState.StartRiding:
          if ((double) this.Owner.Position.Distance(this.JoustingMissionController.CornerMiddleList[this.CurrentCornerIndex].origin) >= 3.0)
            break;
          WorldPosition position1 = new WorldPosition(Mission.Current.Scene, UIntPtr.Zero, this.JoustingMissionController.CornerFinishList[this.CurrentCornerIndex].origin, false);
          this.Owner.SetScriptedPosition(ref position1, false, Agent.AIScriptedFrameFlags.NeverSlowDown);
          this.State = JoustingAgentController.JoustingAgentState.Riding;
          break;
        case JoustingAgentController.JoustingAgentState.Riding:
          if ((double) this.Owner.Position.Distance(this.JoustingMissionController.CornerFinishList[this.CurrentCornerIndex].origin) >= 3.0)
            break;
          WorldPosition position2 = new WorldPosition(Mission.Current.Scene, UIntPtr.Zero, this.JoustingMissionController.CornerBackStartList[this.CurrentCornerIndex].origin, false);
          this.Owner.SetScriptedPosition(ref position2, false);
          this.State = JoustingAgentController.JoustingAgentState.GoingToBackStart;
          break;
      }
    }

    public void PrepareAgentToSwordDuel()
    {
      if (this.Owner.MountAgent != null)
      {
        this.Owner.Controller = Agent.ControllerType.AI;
        WorldPosition worldPosition = this.Opponent.GetWorldPosition();
        this.Owner.SetScriptedPosition(ref worldPosition, false, Agent.AIScriptedFrameFlags.GoWithoutMount);
        this.PrepareEquipmentsAfterDismount = true;
      }
      else
      {
        this.PrepareEquipmentsForSwordDuel();
        this.Owner.DisableScriptedMovement();
      }
    }

    public void PrepareEquipmentsForSwordDuel()
    {
      this.AddEquipmentsForSwordDuel();
      this.Owner.WieldInitialWeapons();
      this.PrepareEquipmentsAfterDismount = false;
    }

    private void AddEquipmentsForSwordDuel()
    {
      this.Owner.DropItem(EquipmentIndex.WeaponItemBeginSlot);
      MissionWeapon weapon = new MissionWeapon(Game.Current.ObjectManager.GetObject<ItemObject>("wooden_sword_t1"), (ItemModifier) null, this.Owner.Origin?.Banner);
      this.Owner.EquipWeaponWithNewEntity(EquipmentIndex.Weapon2, ref weapon);
    }

    public bool IsRiding()
    {
      return this.State == JoustingAgentController.JoustingAgentState.StartRiding || this.State == JoustingAgentController.JoustingAgentState.Riding;
    }

    public enum JoustingAgentState
    {
      GoingToBackStart,
      GoToStartPosition,
      WaitInStartPosition,
      WaitingOpponent,
      Ready,
      StartRiding,
      Riding,
      RidingAtWrongSide,
      SwordDuel,
    }
  }
}

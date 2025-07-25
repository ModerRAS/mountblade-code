// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.SiegeLane
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class SiegeLane
  {
    private readonly Formation[] _lastAssignedFormations;
    private SiegeQuerySystem _siegeQuerySystem;
    private SiegeWeapon _attackerMovableWeapon;

    public SiegeLane.LaneStateEnum LaneState { get; private set; }

    public FormationAI.BehaviorSide LaneSide { get; }

    public List<IPrimarySiegeWeapon> PrimarySiegeWeapons { get; private set; }

    public bool IsOpen { get; private set; }

    public bool IsBreach { get; private set; }

    public bool HasGate { get; private set; }

    public List<ICastleKeyPosition> DefensePoints { get; private set; }

    public WorldPosition DefenderOrigin { get; private set; }

    public WorldPosition AttackerOrigin { get; private set; }

    public SiegeLane(FormationAI.BehaviorSide laneSide, SiegeQuerySystem siegeQuerySystem)
    {
      this.LaneSide = laneSide;
      this.IsOpen = false;
      this.PrimarySiegeWeapons = new List<IPrimarySiegeWeapon>();
      this.DefensePoints = new List<ICastleKeyPosition>();
      this.IsBreach = false;
      this._siegeQuerySystem = siegeQuerySystem;
      this._lastAssignedFormations = new Formation[Mission.Current.Teams.Count];
      this.HasGate = false;
      this.LaneState = SiegeLane.LaneStateEnum.Active;
    }

    public bool CalculateIsLaneUnusable()
    {
      if (this.IsOpen)
        return false;
      if (this.HasGate)
      {
        for (int index = 0; index < this.DefensePoints.Count; ++index)
        {
          if (this.DefensePoints[index] is CastleGate defensePoint && defensePoint.IsGateOpen && defensePoint.GameEntity.HasTag("outer_gate"))
            return false;
        }
      }
      for (int index = 0; index < this.PrimarySiegeWeapons.Count; ++index)
      {
        IPrimarySiegeWeapon primarySiegeWeapon = this.PrimarySiegeWeapons[index];
        if ((!(primarySiegeWeapon is UsableMachine usableMachine) || (NativeObject) usableMachine.GameEntity != (NativeObject) null) && (!(primarySiegeWeapon is SiegeTower siegeTower) || !siegeTower.IsDestroyed) && (primarySiegeWeapon.HasCompletedAction() || !(primarySiegeWeapon is BatteringRam batteringRam) || !batteringRam.IsDestroyed))
          return false;
      }
      return true;
    }

    public Formation GetLastAssignedFormation(int teamIndex)
    {
      return teamIndex >= 0 ? this._lastAssignedFormations[teamIndex] : (Formation) null;
    }

    public void SetLaneState(SiegeLane.LaneStateEnum newLaneState) => this.LaneState = newLaneState;

    public void SetLastAssignedFormation(int teamIndex, Formation formation)
    {
      if (teamIndex < 0)
        return;
      this._lastAssignedFormations[teamIndex] = formation;
    }

    public void SetSiegeQuerySystem(SiegeQuerySystem siegeQuerySystem)
    {
      this._siegeQuerySystem = siegeQuerySystem;
    }

    public float CalculateLaneCapacity()
    {
      bool flag1 = false;
      for (int index = 0; index < this.DefensePoints.Count; ++index)
      {
        if (this.DefensePoints[index] is WallSegment defensePoint && defensePoint.IsBreachedWall)
        {
          flag1 = true;
          break;
        }
      }
      if (flag1)
        return 60f;
      if (this.HasGate)
      {
        bool flag2 = true;
        for (int index = 0; index < this.DefensePoints.Count; ++index)
        {
          if (this.DefensePoints[index] is CastleGate defensePoint && !defensePoint.IsGateOpen)
          {
            flag2 = false;
            break;
          }
        }
        if (flag2)
          return 60f;
      }
      float laneCapacity = 0.0f;
      for (int index = 0; index < this.PrimarySiegeWeapons.Count; ++index)
      {
        SiegeWeapon primarySiegeWeapon = this.PrimarySiegeWeapons[index] as SiegeWeapon;
        if (!primarySiegeWeapon.IsDeactivated && !primarySiegeWeapon.IsDestroyed)
          laneCapacity += this.PrimarySiegeWeapons[index].SiegeWeaponPriority;
      }
      return laneCapacity;
    }

    public SiegeLane.LaneDefenseStates GetDefenseState()
    {
      switch (this.LaneState)
      {
        case SiegeLane.LaneStateEnum.Safe:
        case SiegeLane.LaneStateEnum.Unused:
          return SiegeLane.LaneDefenseStates.Empty;
        case SiegeLane.LaneStateEnum.Used:
        case SiegeLane.LaneStateEnum.Abandoned:
          return SiegeLane.LaneDefenseStates.Token;
        case SiegeLane.LaneStateEnum.Active:
        case SiegeLane.LaneStateEnum.Contested:
        case SiegeLane.LaneStateEnum.Conceited:
          return SiegeLane.LaneDefenseStates.Full;
        default:
          return SiegeLane.LaneDefenseStates.Full;
      }
    }

    private bool IsPowerBehindLane()
    {
      switch (this.LaneSide)
      {
        case FormationAI.BehaviorSide.Left:
          return this._siegeQuerySystem.LeftRegionMemberCount >= 30;
        case FormationAI.BehaviorSide.Middle:
          return this._siegeQuerySystem.MiddleRegionMemberCount >= 30;
        case FormationAI.BehaviorSide.Right:
          return this._siegeQuerySystem.RightRegionMemberCount >= 30;
        default:
          MBDebug.ShowWarning("Lane without side");
          return false;
      }
    }

    public bool IsUnderAttack()
    {
      switch (this.LaneSide)
      {
        case FormationAI.BehaviorSide.Left:
          return this._siegeQuerySystem.LeftCloseAttackerCount >= 15;
        case FormationAI.BehaviorSide.Middle:
          return this._siegeQuerySystem.MiddleCloseAttackerCount >= 15;
        case FormationAI.BehaviorSide.Right:
          return this._siegeQuerySystem.RightCloseAttackerCount >= 15;
        default:
          MBDebug.ShowWarning("Lane without side");
          return false;
      }
    }

    public bool IsDefended()
    {
      switch (this.LaneSide)
      {
        case FormationAI.BehaviorSide.Left:
          return this._siegeQuerySystem.LeftDefenderCount >= 15;
        case FormationAI.BehaviorSide.Middle:
          return this._siegeQuerySystem.MiddleDefenderCount >= 15;
        case FormationAI.BehaviorSide.Right:
          return this._siegeQuerySystem.RightDefenderCount >= 15;
        default:
          MBDebug.ShowWarning("Lane without side");
          return false;
      }
    }

    public void DetermineLaneState()
    {
      if (this.LaneState == SiegeLane.LaneStateEnum.Conceited && !this.IsDefended())
        return;
      if (this.CalculateIsLaneUnusable())
        this.LaneState = SiegeLane.LaneStateEnum.Safe;
      else if (Mission.Current.IsTeleportingAgents)
        this.LaneState = SiegeLane.LaneStateEnum.Active;
      else if (!this.IsOpen)
      {
        bool flag = true;
        foreach (IPrimarySiegeWeapon primarySiegeWeapon in this.PrimarySiegeWeapons)
        {
          if (!(primarySiegeWeapon is IMoveableSiegeWeapon) || primarySiegeWeapon.HasCompletedAction() || ((SiegeWeapon) primarySiegeWeapon).IsUsed)
          {
            flag = false;
            break;
          }
        }
        this.LaneState = !flag ? (!this.IsPowerBehindLane() ? SiegeLane.LaneStateEnum.Used : SiegeLane.LaneStateEnum.Active) : SiegeLane.LaneStateEnum.Unused;
      }
      else
        this.LaneState = this.IsPowerBehindLane() ? (!this.IsUnderAttack() || this.IsDefended() ? SiegeLane.LaneStateEnum.Contested : SiegeLane.LaneStateEnum.Conceited) : SiegeLane.LaneStateEnum.Abandoned;
      if (!this.HasGate || this.LaneState >= SiegeLane.LaneStateEnum.Active || TeamAISiegeComponent.QuerySystem.InsideAttackerCount < 15)
        return;
      this.LaneState = SiegeLane.LaneStateEnum.Active;
    }

    public WorldPosition GetCurrentAttackerPosition()
    {
      if (this.IsBreach)
        return this.DefenderOrigin;
      return this._attackerMovableWeapon != null ? this._attackerMovableWeapon.WaitFrame.origin.ToWorldPosition() : this.AttackerOrigin;
    }

    public void DetermineOrigins()
    {
      this._attackerMovableWeapon = (SiegeWeapon) null;
      if (this.IsBreach)
      {
        WallSegment wallSegment = this.DefensePoints.FirstOrDefault<ICastleKeyPosition>((Func<ICastleKeyPosition, bool>) (dp => dp is WallSegment && (dp as WallSegment).IsBreachedWall)) as WallSegment;
        this.DefenderOrigin = wallSegment.MiddleFrame.Origin;
        this.AttackerOrigin = wallSegment.AttackerWaitFrame.Origin;
      }
      else
      {
        this.HasGate = this.DefensePoints.Any<ICastleKeyPosition>((Func<ICastleKeyPosition, bool>) (dp => dp is CastleGate));
        IEnumerable<IPrimarySiegeWeapon> source = this.PrimarySiegeWeapons.Count == 0 ? Mission.Current.MissionObjects.FindAllWithType<SiegeWeapon>().Where<SiegeWeapon>((Func<SiegeWeapon, bool>) (sw => sw is IPrimarySiegeWeapon primarySiegeWeapon && primarySiegeWeapon.WeaponSide == this.LaneSide)).Select<SiegeWeapon, IPrimarySiegeWeapon>((Func<SiegeWeapon, IPrimarySiegeWeapon>) (sw => sw as IPrimarySiegeWeapon)) : (IEnumerable<IPrimarySiegeWeapon>) this.PrimarySiegeWeapons;
        if (source.FirstOrDefault<IPrimarySiegeWeapon>((Func<IPrimarySiegeWeapon, bool>) (psw => psw is IMoveableSiegeWeapon)) is IMoveableSiegeWeapon moveableSiegeWeapon)
        {
          this._attackerMovableWeapon = moveableSiegeWeapon as SiegeWeapon;
          this.DefenderOrigin = ((moveableSiegeWeapon as IPrimarySiegeWeapon).TargetCastlePosition as ICastleKeyPosition).MiddleFrame.Origin;
          this.AttackerOrigin = moveableSiegeWeapon.GetInitialFrame().origin.ToWorldPosition();
        }
        else
        {
          SiegeLadder siegeLadder = source.FirstOrDefault<IPrimarySiegeWeapon>((Func<IPrimarySiegeWeapon, bool>) (psw => psw is SiegeLadder)) as SiegeLadder;
          this.DefenderOrigin = (siegeLadder.TargetCastlePosition as ICastleKeyPosition).MiddleFrame.Origin;
          this.AttackerOrigin = siegeLadder.InitialWaitPosition.GetGlobalFrame().origin.ToWorldPosition();
        }
      }
    }

    public void RefreshLane()
    {
      for (int index = this.PrimarySiegeWeapons.Count - 1; index >= 0; --index)
      {
        if (this.PrimarySiegeWeapons[index] is SiegeWeapon primarySiegeWeapon && primarySiegeWeapon.IsDisabled)
          this.PrimarySiegeWeapons.RemoveAt(index);
      }
      bool flag1 = false;
      for (int index = 0; index < this.DefensePoints.Count; ++index)
      {
        if (this.DefensePoints[index] is WallSegment defensePoint && defensePoint.IsBreachedWall)
        {
          flag1 = true;
          break;
        }
      }
      if (flag1)
      {
        this.IsOpen = true;
        this.IsBreach = true;
      }
      else
      {
        bool flag2 = false;
        bool flag3 = false;
        bool flag4 = true;
        for (int index = 0; index < this.DefensePoints.Count; ++index)
        {
          ICastleKeyPosition defensePoint = this.DefensePoints[index];
          if (flag4 && defensePoint is CastleGate castleGate)
          {
            flag2 = true;
            flag3 = true;
            if (!castleGate.IsDestroyed && castleGate.State != CastleGate.GateState.Open)
            {
              flag4 = false;
              break;
            }
          }
          else if (!flag3 && !(defensePoint is WallSegment))
            flag3 = true;
        }
        bool flag5 = false;
        if (!flag3)
        {
          for (int index = 0; index < this.PrimarySiegeWeapons.Count; ++index)
          {
            IPrimarySiegeWeapon primarySiegeWeapon = this.PrimarySiegeWeapons[index];
            if (primarySiegeWeapon.HasCompletedAction() && !(primarySiegeWeapon as UsableMachine).IsDestroyed)
            {
              flag5 = true;
              break;
            }
          }
        }
        this.IsOpen = flag2 & flag4 | flag5;
      }
    }

    public void SetPrimarySiegeWeapons(List<IPrimarySiegeWeapon> primarySiegeWeapons)
    {
      this.PrimarySiegeWeapons = primarySiegeWeapons;
    }

    public void SetDefensePoints(List<ICastleKeyPosition> defensePoints)
    {
      this.DefensePoints = defensePoints;
      foreach (ICastleKeyPosition castleKeyPosition in this.PrimarySiegeWeapons.Select<IPrimarySiegeWeapon, ICastleKeyPosition>((Func<IPrimarySiegeWeapon, ICastleKeyPosition>) (psw => psw.TargetCastlePosition as ICastleKeyPosition)))
      {
        if (castleKeyPosition != null && !this.DefensePoints.Contains(castleKeyPosition))
          this.DefensePoints.Add(castleKeyPosition);
      }
    }

    public enum LaneStateEnum
    {
      Safe,
      Unused,
      Used,
      Active,
      Abandoned,
      Contested,
      Conceited,
    }

    public enum LaneDefenseStates
    {
      Empty,
      Token,
      Full,
    }
  }
}

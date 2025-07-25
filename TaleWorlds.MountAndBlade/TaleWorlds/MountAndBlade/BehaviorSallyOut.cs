// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BehaviorSallyOut
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Linq;
using TaleWorlds.Engine;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BehaviorSallyOut : BehaviorComponent
  {
    private readonly TeamAISiegeDefender _teamAISiegeDefender;
    private MovementOrder _gatherOrder;
    private MovementOrder _attackOrder;
    private TacticalPosition _gatheringTacticalPos;

    private bool _calculateAreGatesOutsideOpen
    {
      get
      {
        if (this._teamAISiegeDefender.OuterGate != null && !this._teamAISiegeDefender.OuterGate.IsGateOpen)
          return false;
        return this._teamAISiegeDefender.InnerGate == null || this._teamAISiegeDefender.InnerGate.IsGateOpen;
      }
    }

    private bool _calculateShouldStartAttacking
    {
      get
      {
        return this._calculateAreGatesOutsideOpen || !TeamAISiegeComponent.IsFormationInsideCastle(this.Formation, true);
      }
    }

    public BehaviorSallyOut(Formation formation)
      : base(formation)
    {
      this._teamAISiegeDefender = formation.Team.TeamAI as TeamAISiegeDefender;
      this._behaviorSide = formation.AI.Side;
      this.ResetOrderPositions();
    }

    protected override void CalculateCurrentOrder()
    {
      base.CalculateCurrentOrder();
      this.CurrentOrder = this._calculateShouldStartAttacking ? this._attackOrder : this._gatherOrder;
    }

    private void ResetOrderPositions()
    {
      SiegeLane siegeLane = TeamAISiegeComponent.SiegeLanes.FirstOrDefault<SiegeLane>((Func<SiegeLane, bool>) (sl => sl.LaneSide == FormationAI.BehaviorSide.Middle));
      WorldFrame worldFrame = (siegeLane != null ? siegeLane.DefensePoints.FirstOrDefault<ICastleKeyPosition>((Func<ICastleKeyPosition, bool>) (dp => dp.AttackerSiegeWeapon is UsableMachine && !(dp.AttackerSiegeWeapon as UsableMachine).IsDisabled))?.DefenseWaitFrame : new WorldFrame?()) ?? WorldFrame.Invalid;
      this._gatheringTacticalPos = siegeLane != null ? siegeLane.DefensePoints.FirstOrDefault<ICastleKeyPosition>((Func<ICastleKeyPosition, bool>) (dp => dp.AttackerSiegeWeapon is UsableMachine && !(dp.AttackerSiegeWeapon as UsableMachine).IsDisabled))?.WaitPosition : (TacticalPosition) null;
      if (this._gatheringTacticalPos != null)
        this._gatherOrder = MovementOrder.MovementOrderMove(this._gatheringTacticalPos.Position);
      else if (worldFrame.Origin.IsValid)
      {
        double num = (double) worldFrame.Rotation.f.Normalize();
        this._gatherOrder = MovementOrder.MovementOrderMove(worldFrame.Origin);
      }
      else
        this._gatherOrder = MovementOrder.MovementOrderMove(this.Formation.QuerySystem.MedianPosition);
      this._attackOrder = MovementOrder.MovementOrderCharge;
      this.CurrentOrder = this._calculateShouldStartAttacking ? this._attackOrder : this._gatherOrder;
    }

    public override void TickOccasionally()
    {
      base.TickOccasionally();
      this.CalculateCurrentOrder();
      this.Formation.SetMovementOrder(this.CurrentOrder);
      if (this._calculateAreGatesOutsideOpen)
        return;
      CastleGate usable = this._teamAISiegeDefender.InnerGate == null || this._teamAISiegeDefender.InnerGate.IsGateOpen ? this._teamAISiegeDefender.OuterGate : this._teamAISiegeDefender.InnerGate;
      if (usable.IsUsedByFormation(this.Formation))
        return;
      this.Formation.StartUsingMachine((UsableMachine) usable);
    }

    protected override void OnBehaviorActivatedAux()
    {
      this._behaviorSide = this.Formation.AI.Side;
      this.ResetOrderPositions();
      this.Formation.SetMovementOrder(this.CurrentOrder);
      this.Formation.FacingOrder = FacingOrder.FacingOrderLookAtEnemy;
      this.Formation.ArrangementOrder = ArrangementOrder.ArrangementOrderLine;
      this.Formation.FiringOrder = FiringOrder.FiringOrderFireAtWill;
      this.Formation.FormOrder = FormOrder.FormOrderWide;
    }

    public override float NavmeshlessTargetPositionPenalty => 1f;

    protected override float GetAiWeight() => 10f;
  }
}

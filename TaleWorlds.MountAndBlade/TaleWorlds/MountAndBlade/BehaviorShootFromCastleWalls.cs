// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BehaviorShootFromCastleWalls
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BehaviorShootFromCastleWalls : BehaviorComponent
  {
    private GameEntity _archerPosition;
    private TacticalPosition _tacticalArcherPosition;
    private bool _areStrategicArcherAreasAbandoned;

    public GameEntity ArcherPosition
    {
      get => this._archerPosition;
      set
      {
        if (!((NativeObject) this._archerPosition != (NativeObject) value))
          return;
        this.OnArcherPositionSet(value);
      }
    }

    public BehaviorShootFromCastleWalls(Formation formation)
      : base(formation)
    {
      this.OnArcherPositionSet(this._archerPosition);
      this.BehaviorCoherence = 0.0f;
    }

    private void OnArcherPositionSet(GameEntity value)
    {
      this._archerPosition = value;
      if ((NativeObject) this._archerPosition != (NativeObject) null)
      {
        this._tacticalArcherPosition = this._archerPosition.GetFirstScriptOfType<TacticalPosition>();
        if (this._tacticalArcherPosition != null)
        {
          this.CurrentOrder = MovementOrder.MovementOrderMove(this._tacticalArcherPosition.Position);
          this.CurrentFacingOrder = FacingOrder.FacingOrderLookAtDirection(this._tacticalArcherPosition.Direction);
        }
        else
        {
          this.CurrentOrder = MovementOrder.MovementOrderMove(this._archerPosition.GlobalPosition.ToWorldPosition());
          this.CurrentFacingOrder = FacingOrder.FacingOrderLookAtDirection(this._archerPosition.GetGlobalFrame().rotation.f.AsVec2);
        }
      }
      else
      {
        this._tacticalArcherPosition = (TacticalPosition) null;
        WorldPosition medianPosition = this.Formation.QuerySystem.MedianPosition;
        medianPosition.SetVec2(this.Formation.CurrentPosition);
        this.CurrentOrder = MovementOrder.MovementOrderMove(medianPosition);
        this.CurrentFacingOrder = FacingOrder.FacingOrderLookAtEnemy;
      }
    }

    public override void TickOccasionally()
    {
      this.Formation.SetMovementOrder(this.CurrentOrder);
      this.Formation.FacingOrder = this.CurrentFacingOrder;
      if (this._tacticalArcherPosition != null)
        this.Formation.FormOrder = FormOrder.FormOrderCustom(this._tacticalArcherPosition.Width);
      foreach (Team team in (List<Team>) this.Formation.Team.Mission.Teams)
      {
        if (team.IsEnemyOf(this.Formation.Team))
        {
          if (!this._areStrategicArcherAreasAbandoned)
          {
            if ((double) team.QuerySystem.InsideWallsRatio <= 0.60000002384185791)
              break;
            this.Formation.ArrangementOrder = ArrangementOrder.ArrangementOrderLine;
            this._areStrategicArcherAreasAbandoned = true;
            break;
          }
          if ((double) team.QuerySystem.InsideWallsRatio > 0.40000000596046448)
            break;
          this.Formation.ArrangementOrder = ArrangementOrder.ArrangementOrderScatter;
          this._areStrategicArcherAreasAbandoned = false;
          break;
        }
      }
    }

    protected override void OnBehaviorActivatedAux()
    {
      this.Formation.SetMovementOrder(this.CurrentOrder);
      this.Formation.FacingOrder = this.CurrentFacingOrder;
      this.Formation.ArrangementOrder = ArrangementOrder.ArrangementOrderScatter;
      this.Formation.FiringOrder = FiringOrder.FiringOrderFireAtWill;
      this.Formation.FormOrder = FormOrder.FormOrderWide;
    }

    public override float NavmeshlessTargetPositionPenalty => 1f;

    protected override float GetAiWeight()
    {
      return (float) (10.0 * ((double) this.Formation.QuerySystem.RangedCavalryUnitRatio + (double) this.Formation.QuerySystem.RangedUnitRatio));
    }
  }
}

// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BehaviorSparseSkirmish
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.DotNet;
using TaleWorlds.Engine;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BehaviorSparseSkirmish : BehaviorComponent
  {
    private GameEntity _archerPosition;
    private TacticalPosition _tacticalArcherPosition;

    public GameEntity ArcherPosition
    {
      get => this._archerPosition;
      set
      {
        if (!((NativeObject) this._archerPosition != (NativeObject) value))
          return;
        this.SetArcherPosition(value);
      }
    }

    private void SetArcherPosition(GameEntity value)
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
          this.CurrentFacingOrder = FacingOrder.FacingOrderLookAtEnemy;
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

    public BehaviorSparseSkirmish(Formation formation)
      : base(formation)
    {
      this.SetArcherPosition(this._archerPosition);
      this.BehaviorCoherence = 0.0f;
    }

    public override void TickOccasionally()
    {
      this.Formation.SetMovementOrder(this.CurrentOrder);
      this.Formation.FacingOrder = this.CurrentFacingOrder;
      if (this._tacticalArcherPosition == null)
        return;
      this.Formation.FormOrder = FormOrder.FormOrderCustom(this._tacticalArcherPosition.Width);
    }

    protected override void OnBehaviorActivatedAux()
    {
      this.Formation.SetMovementOrder(this.CurrentOrder);
      this.Formation.FacingOrder = this.CurrentFacingOrder;
      this.Formation.ArrangementOrder = ArrangementOrder.ArrangementOrderScatter;
      this.Formation.FiringOrder = FiringOrder.FiringOrderFireAtWill;
      this.Formation.FormOrder = FormOrder.FormOrderWider;
    }

    public override float NavmeshlessTargetPositionPenalty => 1f;

    protected override float GetAiWeight() => 2f;
  }
}

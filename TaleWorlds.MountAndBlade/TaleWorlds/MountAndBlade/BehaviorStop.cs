// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BehaviorStop
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BehaviorStop : BehaviorComponent
  {
    public BehaviorStop(Formation formation)
      : base(formation)
    {
      this.CurrentOrder = MovementOrder.MovementOrderStop;
      this.BehaviorCoherence = 0.0f;
    }

    public override void TickOccasionally() => this.Formation.SetMovementOrder(this.CurrentOrder);

    protected override void OnBehaviorActivatedAux()
    {
      this.Formation.ArrangementOrder = this.Formation.QuerySystem.HasShield ? ArrangementOrder.ArrangementOrderShieldWall : ArrangementOrder.ArrangementOrderLine;
      this.Formation.FiringOrder = FiringOrder.FiringOrderFireAtWill;
      this._lastPlayerInformTime = Mission.Current.CurrentTime;
    }

    public override float NavmeshlessTargetPositionPenalty => 1f;

    protected override float GetAiWeight() => 0.01f;
  }
}

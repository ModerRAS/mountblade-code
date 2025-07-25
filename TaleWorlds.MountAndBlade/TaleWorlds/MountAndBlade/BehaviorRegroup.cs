// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BehaviorRegroup
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BehaviorRegroup : BehaviorComponent
  {
    public BehaviorRegroup(Formation formation)
      : base(formation)
    {
      this.BehaviorCoherence = 1f;
      this.CalculateCurrentOrder();
    }

    protected override void CalculateCurrentOrder()
    {
      Vec2 direction = this.Formation.QuerySystem.ClosestEnemyFormation == null ? this.Formation.Direction : (this.Formation.QuerySystem.ClosestEnemyFormation.MedianPosition.AsVec2 - this.Formation.QuerySystem.AveragePosition).Normalized();
      WorldPosition medianPosition = this.Formation.QuerySystem.MedianPosition;
      medianPosition.SetVec2(this.Formation.QuerySystem.AveragePosition);
      this.CurrentOrder = MovementOrder.MovementOrderMove(medianPosition);
      this.CurrentFacingOrder = FacingOrder.FacingOrderLookAtDirection(direction);
    }

    public override void TickOccasionally()
    {
      this.CalculateCurrentOrder();
      this.Formation.SetMovementOrder(this.CurrentOrder);
      this.Formation.FacingOrder = this.CurrentFacingOrder;
    }

    protected override float GetAiWeight()
    {
      FormationQuerySystem querySystem = this.Formation.QuerySystem;
      return this.Formation.AI.ActiveBehavior == null ? 0.0f : MBMath.Lerp(0.1f, 1.2f, MBMath.ClampFloat((float) ((double) this.Formation.AI.ActiveBehavior.BehaviorCoherence * ((double) querySystem.FormationIntegrityData.DeviationOfPositionsExcludeFarAgents + 1.0) / ((double) querySystem.IdealAverageDisplacement + 1.0)), 0.0f, 3f) / 3f);
    }
  }
}

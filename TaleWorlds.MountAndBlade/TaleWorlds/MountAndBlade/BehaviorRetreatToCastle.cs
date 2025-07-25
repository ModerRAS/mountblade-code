// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BehaviorRetreatToCastle
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.Engine;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BehaviorRetreatToCastle : BehaviorComponent
  {
    public BehaviorRetreatToCastle(Formation formation)
      : base(formation)
    {
      this.CurrentOrder = MovementOrder.MovementOrderMove(Mission.Current.DeploymentPlan.GetFormationPlan(formation.Team.Side, FormationClass.Cavalry, DeploymentPlanType.Initial).CreateNewDeploymentWorldPosition(WorldPosition.WorldPositionEnforcedCache.GroundVec3));
      this.BehaviorCoherence = 0.0f;
    }

    public override void TickOccasionally()
    {
      base.TickOccasionally();
      if (this.Formation.AI.ActiveBehavior != this)
        return;
      this.Formation.SetMovementOrder(this.CurrentOrder);
    }

    public override float NavmeshlessTargetPositionPenalty => 1f;

    protected override float GetAiWeight() => 1f;
  }
}

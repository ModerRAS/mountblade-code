// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BehaviorRetreat
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BehaviorRetreat : BehaviorComponent
  {
    public BehaviorRetreat(Formation formation)
      : base(formation)
    {
      this.CurrentOrder = MovementOrder.MovementOrderRetreat;
      this.BehaviorCoherence = 0.0f;
    }

    public override void TickOccasionally() => this.Formation.SetMovementOrder(this.CurrentOrder);

    protected override void OnBehaviorActivatedAux()
    {
    }

    public override float NavmeshlessTargetPositionPenalty => 1f;

    protected override float GetAiWeight()
    {
      float powerLossOfFormation = Mission.Current.GetMissionBehavior<CasualtyHandler>().GetCasualtyPowerLossOfFormation(this.Formation);
      float num = MathF.Sqrt(powerLossOfFormation / (this.Formation.QuerySystem.FormationPower + powerLossOfFormation));
      return (float) ((double) MBMath.ClampFloat(this.Formation.Team.QuerySystem.TotalPowerRatio, 0.1f, 3f) / (double) MBMath.ClampFloat(this.Formation.Team.QuerySystem.RemainingPowerRatio, 0.1f, 3f) * (0.05000000074505806 + (double) num));
    }
  }
}

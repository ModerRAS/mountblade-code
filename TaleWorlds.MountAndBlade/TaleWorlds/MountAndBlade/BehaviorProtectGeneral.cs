// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BehaviorProtectGeneral
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BehaviorProtectGeneral : BehaviorComponent
  {
    public BehaviorProtectGeneral(Formation formation)
      : base(formation)
    {
      this.CurrentOrder = MovementOrder.MovementOrderFollow(formation.Team.GeneralsFormation == null || formation.Team.GeneralsFormation.CountOfUnits <= 0 ? Mission.Current.MainAgent : formation.Team.GeneralsFormation.GetFirstUnit());
    }

    public override void TickOccasionally() => this.Formation.SetMovementOrder(this.CurrentOrder);

    public override float NavmeshlessTargetPositionPenalty => 1f;

    protected override float GetAiWeight()
    {
      return this.Formation.Team.GeneralsFormation != null && this.Formation.Team.GeneralsFormation.CountOfUnits > 0 || this.Formation.Team.IsPlayerTeam && this.Formation.Team.IsPlayerGeneral && Mission.Current.MainAgent != null ? 1f : 0.0f;
    }

    public override void OnAgentRemoved(Agent agent)
    {
      if (this.CurrentOrder._targetAgent != agent)
        return;
      this.CurrentOrder = MovementOrder.MovementOrderNull;
    }
  }
}

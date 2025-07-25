// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.SiegeTowerAI
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public sealed class SiegeTowerAI : UsableMachineAIBase
  {
    private SiegeTower SiegeTower => this.UsableMachine as SiegeTower;

    public SiegeTowerAI(SiegeTower siegeTower)
      : base((UsableMachine) siegeTower)
    {
    }

    public override bool HasActionCompleted
    {
      get
      {
        return this.SiegeTower.MovementComponent.HasArrivedAtTarget && this.SiegeTower.State == SiegeTower.GateState.Open;
      }
    }

    protected override MovementOrder NextOrder => MovementOrder.MovementOrderCharge;
  }
}

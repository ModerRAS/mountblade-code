// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BatteringRamAI
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public sealed class BatteringRamAI : UsableMachineAIBase
  {
    public BatteringRamAI(BatteringRam batteringRam)
      : base((UsableMachine) batteringRam)
    {
    }

    private BatteringRam BatteringRam => this.UsableMachine as BatteringRam;

    public override bool HasActionCompleted => this.BatteringRam.IsDeactivated;

    protected override MovementOrder NextOrder
    {
      get
      {
        return Mission.Current.Teams[0].TeamAI is TeamAISiegeComponent teamAi && teamAi.InnerGate != null && !teamAi.InnerGate.IsDestroyed ? MovementOrder.MovementOrderAttackEntity(teamAi.InnerGate.GameEntity, false) : MovementOrder.MovementOrderCharge;
      }
    }
  }
}

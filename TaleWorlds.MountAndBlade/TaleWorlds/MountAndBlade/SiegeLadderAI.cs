// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.SiegeLadderAI
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public sealed class SiegeLadderAI : UsableMachineAIBase
  {
    public SiegeLadderAI(SiegeLadder ladder)
      : base((UsableMachine) ladder)
    {
    }

    public SiegeLadder Ladder => this.UsableMachine as SiegeLadder;

    public override bool HasActionCompleted => false;

    protected override MovementOrder NextOrder => MovementOrder.MovementOrderCharge;
  }
}

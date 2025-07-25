// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.CastleGateAI
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class CastleGateAI : UsableMachineAIBase
  {
    private CastleGate.GateState _initialState;

    public void ResetInitialGateState(CastleGate.GateState newInitialState)
    {
      this._initialState = newInitialState;
    }

    public CastleGateAI(CastleGate gate)
      : base((UsableMachine) gate)
    {
      this._initialState = gate.State;
    }

    public override bool HasActionCompleted
    {
      get => ((CastleGate) this.UsableMachine).State != this._initialState;
    }
  }
}

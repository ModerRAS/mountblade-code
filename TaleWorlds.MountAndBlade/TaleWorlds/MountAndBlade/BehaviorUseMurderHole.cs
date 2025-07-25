// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BehaviorUseMurderHole
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Linq;
using TaleWorlds.Engine;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BehaviorUseMurderHole : BehaviorComponent
  {
    private readonly CastleGate _outerGate;
    private readonly CastleGate _innerGate;
    private readonly BatteringRam _batteringRam;

    public BehaviorUseMurderHole(Formation formation)
      : base(formation)
    {
      this._behaviorSide = formation.AI.Side;
      WorldPosition position = new WorldPosition(this.Formation.Team.Mission.Scene, UIntPtr.Zero, (formation.Team.TeamAI as TeamAISiegeDefender).MurderHolePosition, false);
      this._outerGate = (formation.Team.TeamAI as TeamAISiegeDefender).OuterGate;
      this._innerGate = (formation.Team.TeamAI as TeamAISiegeDefender).InnerGate;
      this._batteringRam = this.Formation.Team.Mission.ActiveMissionObjects.FindAllWithType<BatteringRam>().FirstOrDefault<BatteringRam>();
      this.CurrentOrder = MovementOrder.MovementOrderMove(position);
      this.BehaviorCoherence = 0.0f;
    }

    public override void TickOccasionally() => this.Formation.SetMovementOrder(this.CurrentOrder);

    public bool IsMurderHoleActive()
    {
      if (this._batteringRam != null && this._batteringRam.HasArrivedAtTarget && !this._innerGate.IsDestroyed)
        return true;
      return this._outerGate.IsDestroyed && !this._innerGate.IsDestroyed;
    }

    protected override float GetAiWeight()
    {
      return (float) (10.0 * (this.IsMurderHoleActive() ? 1.0 : 0.0));
    }
  }
}

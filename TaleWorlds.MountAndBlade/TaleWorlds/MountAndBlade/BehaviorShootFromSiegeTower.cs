// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BehaviorShootFromSiegeTower
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Linq;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BehaviorShootFromSiegeTower : BehaviorComponent
  {
    private SiegeTower _siegeTower;

    public BehaviorShootFromSiegeTower(Formation formation)
      : base(formation)
    {
      this._behaviorSide = formation.AI.Side;
      this._siegeTower = Mission.Current.ActiveMissionObjects.FindAllWithType<SiegeTower>().FirstOrDefault<SiegeTower>((Func<SiegeTower, bool>) (st => st.WeaponSide == this._behaviorSide));
    }

    public override void TickOccasionally()
    {
      base.TickOccasionally();
      if (this.Formation.AI.Side != this._behaviorSide)
      {
        this._behaviorSide = this.Formation.AI.Side;
        this._siegeTower = Mission.Current.ActiveMissionObjects.FindAllWithType<SiegeTower>().FirstOrDefault<SiegeTower>((Func<SiegeTower, bool>) (st => st.WeaponSide == this._behaviorSide));
      }
      if (this._siegeTower == null || this._siegeTower.IsDestroyed)
        return;
      this.Formation.SetMovementOrder(this.CurrentOrder);
    }

    protected override float GetAiWeight() => 0.0f;
  }
}

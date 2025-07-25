// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.TacticStop
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class TacticStop : TacticComponent
  {
    public TacticStop(Team team)
      : base(team)
    {
    }

    protected internal override void TickOccasionally()
    {
      foreach (Formation formation in (List<Formation>) this.FormationsIncludingEmpty)
      {
        if (formation.CountOfUnits > 0)
        {
          formation.AI.ResetBehaviorWeights();
          formation.AI.SetBehaviorWeight<BehaviorStop>(1f);
        }
      }
      base.TickOccasionally();
    }
  }
}

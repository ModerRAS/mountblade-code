// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.DividableTasks.FormationSearchThreatTask
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;

#nullable disable
namespace TaleWorlds.MountAndBlade.DividableTasks
{
  public class FormationSearchThreatTask : DividableTask
  {
    private Agent _targetAgent;
    private const float CheckCountRatio = 0.1f;
    private RangedSiegeWeapon _weapon;
    private Formation _formation;
    private int _storedIndex;
    private int _checkCountPerTick;
    private bool _result;

    protected override bool UpdateExtra()
    {
      this._result = this._formation.HasUnitWithConditionLimitedRandom((Func<Agent, bool>) (agent => this._weapon.CanShootAtAgent(agent)), this._storedIndex, this._checkCountPerTick, out this._targetAgent);
      this._storedIndex += this._checkCountPerTick;
      return this._storedIndex >= this._formation.CountOfUnits || this._result;
    }

    public void Prepare(Formation formation, RangedSiegeWeapon weapon)
    {
      this.ResetTaskStatus();
      this._formation = formation;
      this._weapon = weapon;
      this._storedIndex = 0;
      this._checkCountPerTick = (int) ((double) this._formation.CountOfUnits * 0.10000000149011612) + 1;
    }

    public bool GetResult(out Agent targetAgent)
    {
      targetAgent = this._targetAgent;
      return this._result;
    }

    public FormationSearchThreatTask()
      : base()
    {
    }
  }
}

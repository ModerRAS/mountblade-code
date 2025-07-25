// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.DividableTasks.FindMostDangerousThreat
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.MountAndBlade.DividableTasks
{
  public class FindMostDangerousThreat : DividableTask
  {
    private Agent _targetAgent;
    private FormationSearchThreatTask _formationSearchThreatTask;
    private List<Threat> _threats;
    private RangedSiegeWeapon _weapon;
    private Threat _currentThreat;
    private bool _hasOngoingThreatTask;

    public FindMostDangerousThreat(DividableTask continueToTask = null)
      : base(continueToTask)
    {
      this.SetTaskFinished();
      this._formationSearchThreatTask = new FormationSearchThreatTask();
    }

    protected override bool UpdateExtra()
    {
      bool flag = false;
      if (this._hasOngoingThreatTask)
      {
        if (this._formationSearchThreatTask.Update())
        {
          this._hasOngoingThreatTask = false;
          if (!(flag = this._formationSearchThreatTask.GetResult(out this._targetAgent)))
          {
            this._threats.Remove(this._currentThreat);
            this._currentThreat = (Threat) null;
          }
        }
      }
      else
      {
        do
        {
          flag = true;
          int index1 = -1;
          float num = float.MinValue;
          for (int index2 = 0; index2 < this._threats.Count; ++index2)
          {
            Threat threat = this._threats[index2];
            if ((double) threat.ThreatValue > (double) num)
            {
              num = threat.ThreatValue;
              index1 = index2;
            }
          }
          if (index1 >= 0)
          {
            this._currentThreat = this._threats[index1];
            if (this._currentThreat.Formation != null)
            {
              this._formationSearchThreatTask.Prepare(this._currentThreat.Formation, this._weapon);
              this._hasOngoingThreatTask = true;
              flag = false;
              break;
            }
            if (this._currentThreat.WeaponEntity == null && this._currentThreat.Agent == null || !this._weapon.CanShootAtThreat(this._currentThreat))
            {
              this._currentThreat = (Threat) null;
              this._threats.RemoveAt(index1);
              flag = false;
            }
          }
        }
        while (!flag);
      }
      return flag || this._threats.Count == 0;
    }

    public void Prepare(List<Threat> threats, RangedSiegeWeapon weapon)
    {
      this.ResetTaskStatus();
      this._hasOngoingThreatTask = false;
      this._weapon = weapon;
      this._threats = threats;
      foreach (Threat threat in this._threats)
        threat.ThreatValue *= (float) (0.89999997615814209 + (double) MBRandom.RandomFloat * 0.20000000298023224);
      if (this._currentThreat == null)
        return;
      this._currentThreat = this._threats.SingleOrDefault<Threat>((Func<Threat, bool>) (t => t.Equals((object) this._currentThreat)));
      if (this._currentThreat == null)
        return;
      this._currentThreat.ThreatValue *= 2f;
    }

    public Threat GetResult(out Agent targetAgent)
    {
      targetAgent = this._targetAgent;
      return this._currentThreat;
    }
  }
}

// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.SallyOutEndLogic
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class SallyOutEndLogic : MissionLogic
  {
    private SallyOutEndLogic.EndConditionCheckState _checkState;
    private float _nextCheckTime;
    private float _dtSum;

    public bool IsSallyOutOver { get; private set; }

    public override void OnMissionTick(float dt)
    {
      if (!this.CheckTimer(dt))
        return;
      if (this._checkState == SallyOutEndLogic.EndConditionCheckState.Deactive)
      {
        foreach (Team team in this.Mission.Teams.Where<Team>((Func<Team, bool>) (t => t.Side == BattleSideEnum.Defender)))
        {
          foreach (Formation formation in (List<Formation>) team.FormationsIncludingSpecialAndEmpty)
          {
            if (formation.CountOfUnits > 0 && formation.CountOfUnits > 0 && !TeamAISiegeComponent.IsFormationInsideCastle(formation, true, 0.1f))
            {
              this._checkState = SallyOutEndLogic.EndConditionCheckState.Active;
              return;
            }
          }
        }
      }
      else
      {
        if (this._checkState != SallyOutEndLogic.EndConditionCheckState.Idle)
          return;
        this._checkState = SallyOutEndLogic.EndConditionCheckState.Active;
      }
    }

    public override bool MissionEnded(ref MissionResult missionResult)
    {
      if (this.IsSallyOutOver)
      {
        missionResult = MissionResult.CreateSuccessful((IMission) this.Mission);
        return true;
      }
      if (this._checkState != SallyOutEndLogic.EndConditionCheckState.Active)
        return false;
      foreach (Team team in (List<Team>) this.Mission.Teams)
      {
        switch (team.Side)
        {
          case BattleSideEnum.Defender:
            if (team.FormationsIncludingEmpty.Any<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0 && !TeamAISiegeComponent.IsFormationInsideCastle(f, false, 0.9f))))
            {
              this._checkState = SallyOutEndLogic.EndConditionCheckState.Idle;
              return false;
            }
            continue;
          case BattleSideEnum.Attacker:
            if (TeamAISiegeComponent.IsFormationGroupInsideCastle(team.FormationsIncludingSpecialAndEmpty, false, 0.1f))
            {
              this._checkState = SallyOutEndLogic.EndConditionCheckState.Idle;
              return false;
            }
            continue;
          default:
            continue;
        }
      }
      this.IsSallyOutOver = true;
      missionResult = MissionResult.CreateSuccessful((IMission) this.Mission);
      return true;
    }

    private bool CheckTimer(float dt)
    {
      this._dtSum += dt;
      if ((double) this._dtSum < (double) this._nextCheckTime)
        return false;
      this._dtSum = 0.0f;
      this._nextCheckTime = (float) (0.800000011920929 + (double) MBRandom.RandomFloat * 0.40000000596046448);
      return true;
    }

    private enum EndConditionCheckState
    {
      Deactive,
      Active,
      Idle,
    }
  }
}

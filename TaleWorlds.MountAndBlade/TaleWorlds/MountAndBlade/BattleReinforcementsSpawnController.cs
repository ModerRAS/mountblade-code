// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BattleReinforcementsSpawnController
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BattleReinforcementsSpawnController : MissionLogic
  {
    private IMissionAgentSpawnLogic _missionAgentSpawnLogic;
    private bool[] _sideReinforcementSuspended = new bool[2];
    private bool[] _sideRequiresUpdate = new bool[2];

    public override void OnBehaviorInitialize()
    {
      base.OnBehaviorInitialize();
      this._missionAgentSpawnLogic = this.Mission.GetMissionBehavior<IMissionAgentSpawnLogic>();
    }

    public override void AfterStart()
    {
      foreach (Team team in (List<Team>) this.Mission.Teams)
      {
        foreach (Formation formation in (List<Formation>) team.FormationsIncludingEmpty)
          formation.OnBeforeMovementOrderApplied += new Action<Formation, MovementOrder.MovementOrderEnum>(this.OnBeforeFormationMovementOrderApplied);
      }
    }

    public override void OnMissionTick(float dt)
    {
      for (int side = 0; side < 2; ++side)
      {
        if (this._sideRequiresUpdate[side])
        {
          this.UpdateSide((BattleSideEnum) side);
          this._sideRequiresUpdate[side] = false;
        }
      }
    }

    protected override void OnEndMission()
    {
      foreach (Team team in (List<Team>) this.Mission.Teams)
      {
        foreach (Formation formation in (List<Formation>) team.FormationsIncludingEmpty)
          formation.OnBeforeMovementOrderApplied -= new Action<Formation, MovementOrder.MovementOrderEnum>(this.OnBeforeFormationMovementOrderApplied);
      }
    }

    private void UpdateSide(BattleSideEnum side)
    {
      int index = (int) side;
      if (this.IsBattleSideRetreating(side))
      {
        if (this._sideReinforcementSuspended[index] || !this._missionAgentSpawnLogic.IsSideSpawnEnabled(side))
          return;
        this._missionAgentSpawnLogic.StopSpawner(side);
        this._sideReinforcementSuspended[index] = true;
      }
      else
      {
        if (!this._sideReinforcementSuspended[index])
          return;
        this._missionAgentSpawnLogic.StartSpawner(side);
        this._sideReinforcementSuspended[index] = false;
      }
    }

    private bool IsBattleSideRetreating(BattleSideEnum side)
    {
      bool flag = true;
      foreach (Team team in (List<Team>) this.Mission.Teams)
      {
        if (team.Side == side)
        {
          foreach (Formation formation in (List<Formation>) team.FormationsIncludingEmpty)
          {
            if (formation.CountOfUnits > 0 && formation.GetReadonlyMovementOrderReference().OrderEnum != MovementOrder.MovementOrderEnum.Retreat)
            {
              flag = false;
              break;
            }
          }
        }
      }
      return flag;
    }

    private void OnBeforeFormationMovementOrderApplied(
      Formation formation,
      MovementOrder.MovementOrderEnum orderEnum)
    {
      if (formation.GetReadonlyMovementOrderReference().OrderEnum != MovementOrder.MovementOrderEnum.Retreat && orderEnum != MovementOrder.MovementOrderEnum.Retreat)
        return;
      this._sideRequiresUpdate[(int) formation.Team.Side] = true;
    }
  }
}

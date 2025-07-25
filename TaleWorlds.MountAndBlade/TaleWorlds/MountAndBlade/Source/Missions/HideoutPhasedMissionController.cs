// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.Source.Missions.HideoutPhasedMissionController
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade.Source.Missions
{
  public class HideoutPhasedMissionController : MissionLogic
  {
    public const int PhaseCount = 4;
    private GameEntity[] _spawnPoints;
    private Stack<MatrixFrame[]> _spawnPointFrames;
    private bool _isNewlyPopulatedFormationGivenOrder = true;

    public override MissionBehaviorType BehaviorType => MissionBehaviorType.Logic;

    public override void OnMissionTick(float dt)
    {
      base.OnMissionTick(dt);
      if (this._isNewlyPopulatedFormationGivenOrder)
        return;
      foreach (Team team in (List<Team>) this.Mission.Teams)
      {
        if (team.Side == BattleSideEnum.Defender)
        {
          foreach (Formation formation in (List<Formation>) team.FormationsIncludingSpecialAndEmpty)
          {
            if (formation.CountOfUnits > 0)
            {
              formation.SetMovementOrder(MovementOrder.MovementOrderMove(formation.QuerySystem.MedianPosition));
              this._isNewlyPopulatedFormationGivenOrder = true;
            }
          }
        }
      }
    }

    protected override void OnEndMission()
    {
      this.Mission.AreOrderGesturesEnabled_AdditionalCondition -= new Func<bool>(this.AreOrderGesturesEnabled_AdditionalCondition);
    }

    public override void OnBehaviorInitialize()
    {
      this.ReadySpawnPointLogic();
      this.Mission.AreOrderGesturesEnabled_AdditionalCondition += new Func<bool>(this.AreOrderGesturesEnabled_AdditionalCondition);
    }

    public override void AfterStart()
    {
      base.AfterStart();
      MissionAgentSpawnLogic missionBehavior = this.Mission.GetMissionBehavior<MissionAgentSpawnLogic>();
      if (missionBehavior == null || !this.IsPhasingInitialized)
        return;
      missionBehavior.AddPhaseChangeAction(BattleSideEnum.Defender, new MissionAgentSpawnLogic.OnPhaseChangedDelegate(this.OnPhaseChanged));
    }

    private bool IsPhasingInitialized => true;

    private void ReadySpawnPointLogic()
    {
      List<GameEntity> list1 = Mission.Current.GetActiveEntitiesWithScriptComponentOfType<HideoutSpawnPointGroup>().ToList<GameEntity>();
      if (list1.Count == 0)
        return;
      HideoutSpawnPointGroup[] source = new HideoutSpawnPointGroup[list1.Count];
      foreach (GameEntity gameEntity in list1)
      {
        HideoutSpawnPointGroup firstScriptOfType = gameEntity.GetFirstScriptOfType<HideoutSpawnPointGroup>();
        source[firstScriptOfType.PhaseNumber - 1] = firstScriptOfType;
      }
      List<HideoutSpawnPointGroup> list2 = ((IEnumerable<HideoutSpawnPointGroup>) source).ToList<HideoutSpawnPointGroup>();
      list2.RemoveAt(0);
      for (int index = 0; index < 3; ++index)
        list2.RemoveAt(MBRandom.RandomInt(list2.Count));
      this._spawnPointFrames = new Stack<MatrixFrame[]>();
      for (int index = 0; index < source.Length; ++index)
      {
        if (!list2.Contains(source[index]))
        {
          this._spawnPointFrames.Push(source[index].GetSpawnPointFrames());
          Debug.Print("Spawn " + (object) source[index].PhaseNumber + " is active.", color: Debug.DebugColor.Green, debugFilter: 64UL);
        }
        source[index].RemoveWithAllChildren();
      }
      this.CreateSpawnPoints();
    }

    private void CreateSpawnPoints()
    {
      MatrixFrame[] matrixFrameArray = this._spawnPointFrames.Pop();
      this._spawnPoints = new GameEntity[matrixFrameArray.Length];
      for (int index = 0; index < matrixFrameArray.Length; ++index)
      {
        if (!matrixFrameArray[index].IsIdentity)
        {
          this._spawnPoints[index] = GameEntity.CreateEmpty(this.Mission.Scene);
          this._spawnPoints[index].SetGlobalFrame(in matrixFrameArray[index]);
          this._spawnPoints[index].AddTag("defender_" + ((FormationClass) index).GetName().ToLower());
        }
      }
    }

    private void OnPhaseChanged()
    {
      if (this._spawnPointFrames.Count == 0)
      {
        Debug.FailedAssert("No position left.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Missions\\MissionLogics\\HideoutPhasedMissionController.cs", nameof (OnPhaseChanged), 142);
      }
      else
      {
        for (int index = 0; index < this._spawnPoints.Length; ++index)
        {
          if (!((NativeObject) this._spawnPoints[index] == (NativeObject) null))
            this._spawnPoints[index].Remove(78);
        }
        this.CreateSpawnPoints();
        this._isNewlyPopulatedFormationGivenOrder = false;
      }
    }

    private bool AreOrderGesturesEnabled_AdditionalCondition() => false;
  }
}

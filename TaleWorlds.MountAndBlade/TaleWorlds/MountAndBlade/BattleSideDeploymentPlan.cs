// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BattleSideDeploymentPlan
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BattleSideDeploymentPlan
  {
    public const float DeployZoneMinimumWidth = 100f;
    public const float DeployZoneForwardMargin = 10f;
    public const float DeployZoneExtraWidthPerTroop = 1.5f;
    public readonly BattleSideEnum Side;
    private readonly Mission _mission;
    private readonly DeploymentPlan _initialPlan;
    private bool _spawnWithHorses;
    private bool _reinforcementPlansCreated;
    private readonly List<DeploymentPlan> _reinforcementPlans;
    private DeploymentPlan _currentReinforcementPlan;
    private readonly MBList<(string id, List<Vec2> points)> _deploymentBoundaries = new MBList<(string, List<Vec2>)>();
    private MatrixFrame _deploymentFrame;

    public bool SpawnWithHorses => this._spawnWithHorses;

    public MBReadOnlyList<(string id, List<Vec2> points)> DeploymentBoundaries
    {
      get => (MBReadOnlyList<(string, List<Vec2>)>) this._deploymentBoundaries;
    }

    public BattleSideDeploymentPlan(Mission mission, BattleSideEnum side)
    {
      this._mission = mission;
      this.Side = side;
      this._spawnWithHorses = false;
      this._initialPlan = DeploymentPlan.CreateInitialPlan(this._mission, side);
      this._reinforcementPlans = new List<DeploymentPlan>();
      this._reinforcementPlansCreated = false;
      this._currentReinforcementPlan = this._initialPlan;
      this._deploymentBoundaries.Clear();
    }

    public void CreateReinforcementPlans()
    {
      if (this._reinforcementPlansCreated)
        return;
      if (this._mission.HasSpawnPath)
      {
        foreach (SpawnPathData spawnPathData in (List<SpawnPathData>) this._mission.GetReinforcementPathsDataOfSide(this.Side))
          this._reinforcementPlans.Add(DeploymentPlan.CreateReinforcementPlanWithSpawnPath(this._mission, this.Side, spawnPathData));
        this._currentReinforcementPlan = this._reinforcementPlans[0];
      }
      else
      {
        DeploymentPlan reinforcementPlan = DeploymentPlan.CreateReinforcementPlan(this._mission, this.Side);
        this._reinforcementPlans.Add(reinforcementPlan);
        this._currentReinforcementPlan = reinforcementPlan;
      }
      this._reinforcementPlansCreated = true;
    }

    public void SetSpawnWithHorses(bool value)
    {
      this._spawnWithHorses = value;
      this._initialPlan.SetSpawnWithHorses(value);
      foreach (DeploymentPlan reinforcementPlan in this._reinforcementPlans)
        reinforcementPlan.SetSpawnWithHorses(value);
    }

    public void PlanBattleDeployment(
      FormationSceneSpawnEntry[,] formationSceneSpawnEntries,
      DeploymentPlanType planType,
      float spawnPathOffset)
    {
      switch (planType)
      {
        case DeploymentPlanType.Initial:
          if (!this._initialPlan.IsPlanMade)
            this._initialPlan.PlanBattleDeployment(formationSceneSpawnEntries, spawnPathOffset);
          this.PlanDeploymentZone();
          break;
        case DeploymentPlanType.Reinforcement:
          using (List<DeploymentPlan>.Enumerator enumerator = this._reinforcementPlans.GetEnumerator())
          {
            while (enumerator.MoveNext())
            {
              DeploymentPlan current = enumerator.Current;
              if (!current.IsPlanMade)
                current.PlanBattleDeployment(formationSceneSpawnEntries);
            }
            break;
          }
      }
    }

    public void UpdateReinforcementPlans()
    {
      if (!this._reinforcementPlansCreated || this._reinforcementPlans.Count <= 1)
        return;
      foreach (DeploymentPlan reinforcementPlan in this._reinforcementPlans)
        reinforcementPlan.UpdateSafetyScore();
      if (this._currentReinforcementPlan.IsSafeToDeploy)
        return;
      this._currentReinforcementPlan = this._reinforcementPlans.MaxBy<DeploymentPlan, float>((Func<DeploymentPlan, float>) (plan => plan.SafetyScore));
    }

    public void ClearPlans(DeploymentPlanType planType)
    {
      switch (planType)
      {
        case DeploymentPlanType.Initial:
          this._initialPlan.ClearPlan();
          break;
        case DeploymentPlanType.Reinforcement:
          using (List<DeploymentPlan>.Enumerator enumerator = this._reinforcementPlans.GetEnumerator())
          {
            while (enumerator.MoveNext())
              enumerator.Current.ClearPlan();
            break;
          }
      }
    }

    public void ClearAddedTroops(DeploymentPlanType planType)
    {
      if (planType == DeploymentPlanType.Initial)
      {
        this._initialPlan.ClearAddedTroops();
      }
      else
      {
        foreach (DeploymentPlan reinforcementPlan in this._reinforcementPlans)
          reinforcementPlan.ClearAddedTroops();
      }
    }

    public void AddTroops(
      FormationClass formationClass,
      int footTroopCount,
      int mountedTroopCount,
      DeploymentPlanType planType)
    {
      if (planType == DeploymentPlanType.Initial)
      {
        this._initialPlan.AddTroops(formationClass, footTroopCount, mountedTroopCount);
      }
      else
      {
        foreach (DeploymentPlan reinforcementPlan in this._reinforcementPlans)
          reinforcementPlan.AddTroops(formationClass, footTroopCount, mountedTroopCount);
      }
    }

    public bool IsFirstPlan(DeploymentPlanType planType)
    {
      if (planType == DeploymentPlanType.Initial)
        return this._initialPlan.PlanCount == 1;
      return this._reinforcementPlansCreated && this._currentReinforcementPlan.PlanCount == 1;
    }

    public bool IsPlanMade(DeploymentPlanType planType)
    {
      if (planType == DeploymentPlanType.Initial)
        return this._initialPlan.IsPlanMade;
      return this._reinforcementPlansCreated && this._currentReinforcementPlan.IsPlanMade;
    }

    public float GetSpawnPathOffset(DeploymentPlanType planType)
    {
      if (planType == DeploymentPlanType.Initial)
        return this._initialPlan.SpawnPathOffset;
      return !this._reinforcementPlansCreated ? 0.0f : this._currentReinforcementPlan.SpawnPathOffset;
    }

    public int GetTroopCount(DeploymentPlanType planType)
    {
      if (planType == DeploymentPlanType.Initial)
        return this._initialPlan.TroopCount;
      return !this._reinforcementPlansCreated ? 0 : this._currentReinforcementPlan.TroopCount;
    }

    public MatrixFrame GetDeploymentFrame() => this._deploymentFrame;

    public bool HasDeploymentBoundaries()
    {
      return !this._deploymentBoundaries.IsEmpty<(string, List<Vec2>)>();
    }

    public IFormationDeploymentPlan GetFormationPlan(
      FormationClass fClass,
      DeploymentPlanType planType)
    {
      return planType == DeploymentPlanType.Initial ? (IFormationDeploymentPlan) this._initialPlan.GetFormationPlan(fClass) : (IFormationDeploymentPlan) this._currentReinforcementPlan.GetFormationPlan(fClass);
    }

    public Vec3 GetMeanPositionOfPlan(DeploymentPlanType planType)
    {
      return planType == DeploymentPlanType.Initial ? this._initialPlan.MeanPosition : this._currentReinforcementPlan.MeanPosition;
    }

    public bool IsInitialPlanSuitableForFormations((int, int)[] troopDataPerFormationClass)
    {
      return this._initialPlan.IsPlanSuitableForFormations(troopDataPerFormationClass);
    }

    public bool IsPositionInsideDeploymentBoundaries(in Vec2 position)
    {
      bool flag = false;
      foreach ((string _, List<Vec2> vec2List) in (List<(string id, List<Vec2> points)>) this._deploymentBoundaries)
      {
        if (MBSceneUtilities.IsPointInsideBoundaries(in position, vec2List))
        {
          flag = true;
          break;
        }
      }
      return flag;
    }

    public Vec2 GetClosestDeploymentBoundaryPosition(
      in Vec2 position,
      bool withNavMesh = false,
      float positionZ = 0.0f)
    {
      Vec2 boundaryPosition = position;
      float num1 = float.MaxValue;
      foreach ((string _, List<Vec2> vec2List) in (List<(string id, List<Vec2> points)>) this._deploymentBoundaries)
      {
        if (vec2List.Count > 2)
        {
          Vec2 closestPoint;
          float num2 = !withNavMesh ? MBSceneUtilities.FindClosestPointToBoundaries(in position, vec2List, out closestPoint) : MBSceneUtilities.FindClosestPointWithNavMeshToBoundaries(in position, positionZ, vec2List, out closestPoint);
          if ((double) num2 < (double) num1)
          {
            num1 = num2;
            boundaryPosition = closestPoint;
          }
        }
      }
      return boundaryPosition;
    }

    private void PlanDeploymentZone()
    {
      if ((this._mission.HasSpawnPath ? 1 : (this._mission.IsFieldBattle ? 1 : 0)) != 0)
        this.ComputeDeploymentZone();
      else if (this._mission.IsSiegeBattle)
        this.SetDeploymentZoneFromMissionBoundaries();
      else
        this._deploymentBoundaries.Clear();
    }

    private void ComputeDeploymentZone()
    {
      this._initialPlan.GetFormationDeploymentFrame(FormationClass.Infantry, out this._deploymentFrame);
      float val2_1 = 0.0f;
      float val2_2 = 0.0f;
      for (int fClass = 0; fClass < 10; ++fClass)
      {
        FormationDeploymentPlan formationPlan = this._initialPlan.GetFormationPlan((FormationClass) fClass);
        if (formationPlan.HasFrame())
        {
          MatrixFrame local = this._deploymentFrame.TransformToLocal(formationPlan.GetGroundFrame());
          val2_1 = Math.Max(local.origin.y, val2_1);
          val2_2 = Math.Max(Math.Abs(local.origin.x), val2_2);
        }
      }
      this._deploymentFrame.Advance(val2_1 + 10f);
      this._deploymentBoundaries.Clear();
      float desiredWidth = Math.Max((float) (2.0 * (double) val2_2 + 1.5 * (double) this._initialPlan.TroopCount), 100f);
      foreach (KeyValuePair<string, ICollection<Vec2>> boundary in this._mission.Boundaries)
        this._deploymentBoundaries.Add((boundary.Key, BattleSideDeploymentPlan.ComputeDeploymentBoundariesFromMissionBoundaries(boundary.Value, ref this._deploymentFrame, desiredWidth)));
    }

    private void SetDeploymentZoneFromMissionBoundaries()
    {
      this._deploymentBoundaries.Clear();
      foreach ((string tag, List<Vec2> boundaryPoints, bool insideAllowance) deploymentBoundary in MBSceneUtilities.GetDeploymentBoundaries(this.Side))
      {
        List<Vec2> boundary = new List<Vec2>((IEnumerable<Vec2>) deploymentBoundary.boundaryPoints);
        MBSceneUtilities.RadialSortBoundary(ref boundary);
        MBSceneUtilities.FindConvexHull(ref boundary);
        this._deploymentBoundaries.Add((deploymentBoundary.tag, boundary));
      }
    }

    private static List<Vec2> ComputeDeploymentBoundariesFromMissionBoundaries(
      ICollection<Vec2> missionBoundaries,
      ref MatrixFrame deploymentFrame,
      float desiredWidth)
    {
      List<Vec2> boundary = new List<Vec2>();
      float maxLength = desiredWidth / 2f;
      if (missionBoundaries.Count > 2)
      {
        Vec2 asVec2 = deploymentFrame.origin.AsVec2;
        Vec2 vec2_1 = deploymentFrame.rotation.s.AsVec2;
        Vec2 direction = vec2_1.Normalized();
        vec2_1 = deploymentFrame.rotation.f.AsVec2;
        Vec2 vec2_2 = vec2_1.Normalized();
        List<Vec2> list = missionBoundaries.ToList<Vec2>();
        List<(Vec2, Vec2)> valueTupleList = new List<(Vec2, Vec2)>();
        Vec2 missionBoundaries1 = BattleSideDeploymentPlan.ClampRayToMissionBoundaries(list, asVec2, direction, maxLength);
        BattleSideDeploymentPlan.AddDeploymentBoundaryPoint(boundary, missionBoundaries1);
        Vec2 missionBoundaries2 = BattleSideDeploymentPlan.ClampRayToMissionBoundaries(list, asVec2, -direction, maxLength);
        BattleSideDeploymentPlan.AddDeploymentBoundaryPoint(boundary, missionBoundaries2);
        Vec2 intersectionPoint1;
        if (MBMath.IntersectRayWithBoundaryList(missionBoundaries1, -vec2_2, list, out intersectionPoint1))
        {
          vec2_1 = intersectionPoint1 - missionBoundaries1;
          if ((double) vec2_1.Length > 0.10000000149011612)
          {
            valueTupleList.Add((intersectionPoint1, missionBoundaries1));
            BattleSideDeploymentPlan.AddDeploymentBoundaryPoint(boundary, intersectionPoint1);
          }
        }
        valueTupleList.Add((missionBoundaries1, missionBoundaries2));
        Vec2 intersectionPoint2;
        if (MBMath.IntersectRayWithBoundaryList(missionBoundaries2, -vec2_2, list, out intersectionPoint2))
        {
          vec2_1 = intersectionPoint2 - missionBoundaries2;
          if ((double) vec2_1.Length > 0.10000000149011612)
          {
            valueTupleList.Add((missionBoundaries2, intersectionPoint2));
            BattleSideDeploymentPlan.AddDeploymentBoundaryPoint(boundary, intersectionPoint2);
          }
        }
        foreach (Vec2 missionBoundary in (IEnumerable<Vec2>) missionBoundaries)
        {
          bool flag = true;
          foreach ((Vec2, Vec2) valueTuple in valueTupleList)
          {
            Vec2 vec2_3 = missionBoundary - valueTuple.Item1;
            Vec2 vec2_4 = valueTuple.Item2 - valueTuple.Item1;
            if ((double) vec2_4.x * (double) vec2_3.y - (double) vec2_4.y * (double) vec2_3.x <= 0.0)
            {
              flag = false;
              break;
            }
          }
          if (flag)
            BattleSideDeploymentPlan.AddDeploymentBoundaryPoint(boundary, missionBoundary);
        }
        MBSceneUtilities.RadialSortBoundary(ref boundary);
      }
      return boundary;
    }

    private static void AddDeploymentBoundaryPoint(List<Vec2> deploymentBoundaries, Vec2 point)
    {
      if (deploymentBoundaries.Exists((Predicate<Vec2>) (boundaryPoint => (double) boundaryPoint.Distance(point) <= 0.10000000149011612)))
        return;
      deploymentBoundaries.Add(point);
    }

    private static Vec2 ClampRayToMissionBoundaries(
      List<Vec2> boundaries,
      Vec2 origin,
      Vec2 direction,
      float maxLength)
    {
      if (Mission.Current.IsPositionInsideBoundaries(origin))
      {
        Vec2 position = origin + direction * maxLength;
        if (Mission.Current.IsPositionInsideBoundaries(position))
          return position;
      }
      Vec2 intersectionPoint;
      return MBMath.IntersectRayWithBoundaryList(origin, direction, boundaries, out intersectionPoint) ? intersectionPoint : origin;
    }
  }
}

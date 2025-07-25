// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.DeploymentPlan
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class DeploymentPlan
  {
    public const float VerticalFormationGap = 3f;
    public const float HorizontalFormationGap = 2f;
    public const float MaxSafetyScore = 100f;
    public readonly BattleSideEnum Side;
    public readonly DeploymentPlanType Type;
    public readonly SpawnPathData SpawnPathData;
    private readonly Mission _mission;
    private int _planCount;
    private bool _spawnWithHorses;
    private readonly int[] _formationMountedTroopCounts;
    private readonly int[] _formationFootTroopCounts;
    private readonly FormationDeploymentPlan[] _formationPlans;
    private Vec3 _meanPosition;
    private readonly SortedList<FormationDeploymentOrder, FormationDeploymentPlan>[] _deploymentFlanks = new SortedList<FormationDeploymentOrder, FormationDeploymentPlan>[4];

    public bool SpawnWithHorses => this._spawnWithHorses;

    public int PlanCount => this._planCount;

    public bool IsPlanMade { get; private set; }

    public float SpawnPathOffset { get; private set; }

    public bool IsSafeToDeploy => (double) this.SafetyScore >= 50.0;

    public float SafetyScore { get; private set; }

    public int FootTroopCount
    {
      get
      {
        int footTroopCount = 0;
        for (int index = 0; index < 11; ++index)
          footTroopCount += this._formationFootTroopCounts[index];
        return footTroopCount;
      }
    }

    public int MountedTroopCount
    {
      get
      {
        int mountedTroopCount = 0;
        for (int index = 0; index < 11; ++index)
          mountedTroopCount += this._formationMountedTroopCounts[index];
        return mountedTroopCount;
      }
    }

    public int TroopCount
    {
      get
      {
        int troopCount = 0;
        for (int index = 0; index < 11; ++index)
          troopCount += this._formationFootTroopCounts[index] + this._formationMountedTroopCounts[index];
        return troopCount;
      }
    }

    public Vec3 MeanPosition => this._meanPosition;

    public static DeploymentPlan CreateInitialPlan(Mission mission, BattleSideEnum side)
    {
      return new DeploymentPlan(mission, side, DeploymentPlanType.Initial, SpawnPathData.Invalid);
    }

    public static DeploymentPlan CreateReinforcementPlan(Mission mission, BattleSideEnum side)
    {
      return new DeploymentPlan(mission, side, DeploymentPlanType.Reinforcement, SpawnPathData.Invalid);
    }

    public static DeploymentPlan CreateReinforcementPlanWithSpawnPath(
      Mission mission,
      BattleSideEnum side,
      SpawnPathData spawnPathData)
    {
      return new DeploymentPlan(mission, side, DeploymentPlanType.Reinforcement, spawnPathData);
    }

    private DeploymentPlan(
      Mission mission,
      BattleSideEnum side,
      DeploymentPlanType type,
      SpawnPathData spawnPathData)
    {
      this._mission = mission;
      this._planCount = 0;
      this.Side = side;
      this.Type = type;
      this.SpawnPathData = spawnPathData;
      this._formationPlans = new FormationDeploymentPlan[11];
      this._formationFootTroopCounts = new int[11];
      this._formationMountedTroopCounts = new int[11];
      this._meanPosition = Vec3.Zero;
      this.IsPlanMade = false;
      this.SpawnPathOffset = 0.0f;
      this.SafetyScore = 100f;
      for (int index = 0; index < this._formationPlans.Length; ++index)
      {
        FormationClass fClass = (FormationClass) index;
        this._formationPlans[index] = new FormationDeploymentPlan(fClass);
      }
      for (int index = 0; index < 4; ++index)
        this._deploymentFlanks[index] = new SortedList<FormationDeploymentOrder, FormationDeploymentPlan>((IComparer<FormationDeploymentOrder>) FormationDeploymentOrder.GetComparer());
      this.ClearAddedTroops();
      this.ClearPlan();
    }

    public void SetSpawnWithHorses(bool value) => this._spawnWithHorses = value;

    public void ClearAddedTroops()
    {
      for (int index = 0; index < 11; ++index)
      {
        this._formationFootTroopCounts[index] = 0;
        this._formationMountedTroopCounts[index] = 0;
      }
    }

    public void ClearPlan()
    {
      foreach (FormationDeploymentPlan formationPlan in this._formationPlans)
        formationPlan.Clear();
      foreach (SortedList<FormationDeploymentOrder, FormationDeploymentPlan> deploymentFlank in this._deploymentFlanks)
        deploymentFlank.Clear();
      this.IsPlanMade = false;
    }

    public void AddTroops(FormationClass formationClass, int footTroopCount, int mountedTroopCount)
    {
      int index = (int) formationClass;
      if (footTroopCount + mountedTroopCount <= 0 || index >= 11)
        return;
      this._formationFootTroopCounts[index] += footTroopCount;
      this._formationMountedTroopCounts[index] += mountedTroopCount;
    }

    public void PlanBattleDeployment(
      FormationSceneSpawnEntry[,] formationSceneSpawnEntries,
      float spawnPathOffset = 0.0f)
    {
      this.SpawnPathOffset = spawnPathOffset;
      this.PlanFormationDimensions();
      if (this._mission.HasSpawnPath)
        this.PlanFieldBattleDeploymentFromSpawnPath(spawnPathOffset);
      else if (this._mission.IsFieldBattle)
        this.PlanFieldBattleDeploymentFromSceneData(formationSceneSpawnEntries);
      else
        this.PlanBattleDeploymentFromSceneData(formationSceneSpawnEntries);
      this.ComputeMeanPosition();
    }

    public FormationDeploymentPlan GetFormationPlan(FormationClass fClass)
    {
      return this._formationPlans[(int) fClass];
    }

    public bool GetFormationDeploymentFrame(FormationClass fClass, out MatrixFrame frame)
    {
      FormationDeploymentPlan formationPlan = this.GetFormationPlan(fClass);
      if (formationPlan.HasFrame())
      {
        frame = formationPlan.GetGroundFrame();
        return true;
      }
      frame = MatrixFrame.Identity;
      return false;
    }

    public bool IsPlanSuitableForFormations((int, int)[] troopDataPerFormationClass)
    {
      if (troopDataPerFormationClass.Length != 11)
        return false;
      for (int fClass = 0; fClass < 11; ++fClass)
      {
        FormationDeploymentPlan formationPlan = this.GetFormationPlan((FormationClass) fClass);
        (int, int) tuple = troopDataPerFormationClass[fClass];
        if (formationPlan.PlannedFootTroopCount != tuple.Item1 || formationPlan.PlannedMountedTroopCount != tuple.Item2)
          return false;
      }
      return true;
    }

    public void UpdateSafetyScore()
    {
      if (this._mission.Teams == null)
        return;
      float num1 = 100f;
      Team team1 = this.Side == BattleSideEnum.Attacker ? this._mission.Teams.Defender : (this.Side == BattleSideEnum.Defender ? this._mission.Teams.Attacker : (Team) null);
      if (team1 != null)
      {
        foreach (Formation formation in (List<Formation>) team1.FormationsIncludingEmpty)
        {
          if (formation.CountOfUnits > 0)
          {
            float num2 = this._meanPosition.AsVec2.Distance(formation.QuerySystem.AveragePosition);
            if ((double) num1 >= (double) num2)
              num1 = num2;
          }
        }
      }
      Team team2 = this.Side == BattleSideEnum.Attacker ? this._mission.Teams.DefenderAlly : (this.Side == BattleSideEnum.Defender ? this._mission.Teams.AttackerAlly : (Team) null);
      if (team2 != null)
      {
        foreach (Formation formation in (List<Formation>) team2.FormationsIncludingEmpty)
        {
          if (formation.CountOfUnits > 0)
          {
            float num3 = this._meanPosition.AsVec2.Distance(formation.QuerySystem.AveragePosition);
            if ((double) num1 >= (double) num3)
              num1 = num3;
          }
        }
      }
      this.SafetyScore = num1;
    }

    public WorldFrame GetFrameFromFormationSpawnEntity(
      GameEntity formationSpawnEntity,
      float depthOffset = 0.0f)
    {
      MatrixFrame globalFrame = formationSpawnEntity.GetGlobalFrame();
      globalFrame.rotation.OrthonormalizeAccordingToForwardAndKeepUpAsZAxis();
      WorldPosition worldPosition = new WorldPosition(this._mission.Scene, UIntPtr.Zero, globalFrame.origin, false);
      WorldPosition origin = worldPosition;
      if ((double) depthOffset != 0.0)
      {
        origin.SetVec2(origin.AsVec2 - depthOffset * globalFrame.rotation.f.AsVec2);
        if (!origin.IsValid || origin.GetNavMesh() == UIntPtr.Zero)
          origin = worldPosition;
      }
      return new WorldFrame(globalFrame.rotation, origin);
    }

    public (float, float) GetFormationSpawnWidthAndDepth(
      FormationClass formationNo,
      int troopCount,
      bool hasMountedTroops,
      bool considerCavalryAsInfantry = false)
    {
      bool isMounted = !considerCavalryAsInfantry & hasMountedTroops;
      float defaultUnitDiameter = Formation.GetDefaultUnitDiameter(isMounted);
      int unitSpacingOf = ArrangementOrder.GetUnitSpacingOf(ArrangementOrder.ArrangementOrderEnum.Line);
      float num1 = isMounted ? Formation.CavalryInterval(unitSpacingOf) : Formation.InfantryInterval(unitSpacingOf);
      float num2 = isMounted ? Formation.CavalryDistance(unitSpacingOf) : Formation.InfantryDistance(unitSpacingOf);
      int num3 = MathF.Max(1, (int) (((double) MathF.Max(0, troopCount - 1) * ((double) num1 + (double) defaultUnitDiameter) + (double) defaultUnitDiameter) / (double) MathF.Sqrt((float) ((isMounted ? 18.0 : 9.0) * (double) troopCount + 1.0))));
      return (MathF.Max(0.0f, (float) troopCount / (float) num3 - 1f) * (num1 + defaultUnitDiameter) + defaultUnitDiameter, (float) (num3 - 1) * (num2 + defaultUnitDiameter) + defaultUnitDiameter);
    }

    private void PlanFieldBattleDeploymentFromSpawnPath(float pathOffset = 0.0f)
    {
      for (int index = 0; index < this._formationPlans.Length; ++index)
      {
        int formationTroopCount = this._formationFootTroopCounts[index] + this._formationMountedTroopCounts[index];
        FormationDeploymentPlan formationPlan = this._formationPlans[index];
        FormationDeploymentFlank defaultFlank = formationPlan.GetDefaultFlank(this._spawnWithHorses, formationTroopCount, this.FootTroopCount);
        FormationClass formationClass = (FormationClass) index;
        int offset = formationTroopCount > 0 || formationClass == FormationClass.NumberOfRegularFormations ? 0 : 1;
        FormationDeploymentOrder flankDeploymentOrder = formationPlan.GetFlankDeploymentOrder(offset);
        this._deploymentFlanks[(int) defaultFlank].Add(flankDeploymentOrder, formationPlan);
      }
      float horizontalCenterOffset = this.ComputeHorizontalCenterOffset();
      Vec2 spawnPathPosition;
      Vec2 spawnPathDirection;
      (this.Type != DeploymentPlanType.Initial ? this.SpawnPathData : this._mission.GetInitialSpawnPathDataOfSide(this.Side)).GetOrientedSpawnPathPosition(out spawnPathPosition, out spawnPathDirection, pathOffset);
      this.DeployFlanks(spawnPathPosition, spawnPathDirection, horizontalCenterOffset);
      foreach (SortedList<FormationDeploymentOrder, FormationDeploymentPlan> deploymentFlank in this._deploymentFlanks)
        deploymentFlank.Clear();
      this.IsPlanMade = true;
      ++this._planCount;
    }

    private void PlanFieldBattleDeploymentFromSceneData(
      FormationSceneSpawnEntry[,] formationSceneSpawnEntries)
    {
      if (formationSceneSpawnEntries == null || formationSceneSpawnEntries.GetLength(0) != 2 || formationSceneSpawnEntries.GetLength(1) != this._formationPlans.Length)
        return;
      int side = (int) this.Side;
      int index1 = this.Side == BattleSideEnum.Attacker ? 0 : 1;
      Dictionary<GameEntity, float> spawnDepths = new Dictionary<GameEntity, float>();
      bool flag = this.Type == DeploymentPlanType.Initial;
      for (int index2 = 0; index2 < this._formationPlans.Length; ++index2)
      {
        FormationDeploymentPlan formationPlan = this._formationPlans[index2];
        FormationSceneSpawnEntry formationSceneSpawnEntry1 = formationSceneSpawnEntries[side, index2];
        FormationSceneSpawnEntry formationSceneSpawnEntry2 = formationSceneSpawnEntries[index1, index2];
        GameEntity formationSceneEntity = flag ? formationSceneSpawnEntry1.SpawnEntity : formationSceneSpawnEntry1.ReinforcementSpawnEntity;
        GameEntity counterSideFormationSceneEntity = flag ? formationSceneSpawnEntry2.SpawnEntity : formationSceneSpawnEntry2.ReinforcementSpawnEntity;
        if ((NativeObject) formationSceneEntity != (NativeObject) null && (NativeObject) counterSideFormationSceneEntity != (NativeObject) null)
        {
          WorldFrame frameForFormation = this.ComputeFieldBattleDeploymentFrameForFormation(formationPlan, formationSceneEntity, counterSideFormationSceneEntity, ref spawnDepths);
          formationPlan.SetFrame(frameForFormation);
        }
        else
          formationPlan.SetFrame(WorldFrame.Invalid);
        formationPlan.SetSpawnClass(formationSceneSpawnEntry1.FormationClass);
      }
      this.IsPlanMade = true;
      ++this._planCount;
    }

    private void PlanBattleDeploymentFromSceneData(
      FormationSceneSpawnEntry[,] formationSceneSpawnEntries)
    {
      if (formationSceneSpawnEntries == null || formationSceneSpawnEntries.GetLength(0) != 2 || formationSceneSpawnEntries.GetLength(1) != this._formationPlans.Length)
        return;
      int side = (int) this.Side;
      Dictionary<GameEntity, float> spawnDepths = new Dictionary<GameEntity, float>();
      bool flag = this.Type == DeploymentPlanType.Initial;
      for (int index = 0; index < this._formationPlans.Length; ++index)
      {
        FormationDeploymentPlan formationPlan = this._formationPlans[index];
        FormationSceneSpawnEntry formationSceneSpawnEntry = formationSceneSpawnEntries[side, index];
        GameEntity gameEntity = flag ? formationSceneSpawnEntry.SpawnEntity : formationSceneSpawnEntry.ReinforcementSpawnEntity;
        if ((NativeObject) gameEntity != (NativeObject) null)
        {
          float updateSpawnDepth = this.GetAndUpdateSpawnDepth(ref spawnDepths, gameEntity, formationPlan);
          formationPlan.SetFrame(this.GetFrameFromFormationSpawnEntity(gameEntity, updateSpawnDepth));
        }
        else
          formationPlan.SetFrame(WorldFrame.Invalid);
        formationPlan.SetSpawnClass(formationSceneSpawnEntry.FormationClass);
      }
      this.IsPlanMade = true;
      ++this._planCount;
    }

    private void PlanFormationDimensions()
    {
      for (int index = 0; index < this._formationPlans.Length; ++index)
      {
        int formationFootTroopCount = this._formationFootTroopCounts[index];
        int mountedTroopCount = this._formationMountedTroopCounts[index];
        int troopCount = formationFootTroopCount + mountedTroopCount;
        if (troopCount > 0)
        {
          FormationDeploymentPlan formationPlan = this._formationPlans[index];
          bool hasMountedTroops = MissionDeploymentPlan.HasSignificantMountedTroops(formationFootTroopCount, mountedTroopCount);
          (float width, float depth) = this.GetFormationSpawnWidthAndDepth(formationPlan.Class, troopCount, hasMountedTroops, !this._spawnWithHorses);
          formationPlan.SetPlannedDimensions(width, depth);
          formationPlan.SetPlannedTroopCount(formationFootTroopCount, mountedTroopCount);
        }
      }
    }

    private void DeployFlanks(
      Vec2 deployPosition,
      Vec2 deployDirection,
      float horizontalCenterOffset)
    {
      (float flankWidth, float flankDepth) tuple = this.PlanFlankDeployment(FormationDeploymentFlank.Front, deployPosition, deployDirection, horizontalOffset: horizontalCenterOffset);
      float flankWidth1 = tuple.flankWidth;
      float num1 = tuple.flankDepth + 3f;
      Vec2 deployPosition1 = deployPosition;
      Vec2 deployDirection1 = deployDirection;
      float num2 = horizontalCenterOffset;
      double verticalOffset1 = (double) num1;
      double horizontalOffset1 = (double) num2;
      float flankWidth2 = this.PlanFlankDeployment(FormationDeploymentFlank.Rear, deployPosition1, deployDirection1, (float) verticalOffset1, (float) horizontalOffset1).flankWidth;
      float num3 = MathF.Max(flankWidth1, flankWidth2);
      float verticalOffset2 = this.ComputeFlankDepth(FormationDeploymentFlank.Front, true) + 3f;
      float flankWidth3 = this.ComputeFlankWidth(FormationDeploymentFlank.Left);
      float horizontalOffset2 = (float) ((double) horizontalCenterOffset + 2.0 + 0.5 * ((double) num3 + (double) flankWidth3));
      this.PlanFlankDeployment(FormationDeploymentFlank.Left, deployPosition, deployDirection, verticalOffset2, horizontalOffset2);
      float flankWidth4 = this.ComputeFlankWidth(FormationDeploymentFlank.Right);
      float horizontalOffset3 = horizontalCenterOffset - (float) (2.0 + 0.5 * ((double) num3 + (double) flankWidth4));
      this.PlanFlankDeployment(FormationDeploymentFlank.Right, deployPosition, deployDirection, verticalOffset2, horizontalOffset3);
    }

    private (float flankWidth, float flankDepth) PlanFlankDeployment(
      FormationDeploymentFlank flankFlank,
      Vec2 deployPosition,
      Vec2 deployDirection,
      float verticalOffset = 0.0f,
      float horizontalOffset = 0.0f)
    {
      Mat3 identity = Mat3.Identity;
      identity.RotateAboutUp(deployDirection.RotationInRadians);
      float a = 0.0f;
      float num1 = 0.0f;
      Vec2 vec2 = deployDirection.LeftVec();
      WorldPosition position = new WorldPosition(this._mission.Scene, UIntPtr.Zero, deployPosition.ToVec3(), false);
      foreach (KeyValuePair<FormationDeploymentOrder, FormationDeploymentPlan> keyValuePair in this._deploymentFlanks[(int) flankFlank])
      {
        FormationDeploymentPlan formationDeploymentPlan = keyValuePair.Value;
        Vec2 destination = position.AsVec2 - (num1 + verticalOffset) * deployDirection + horizontalOffset * vec2;
        Vec3 positionToDestination = this._mission.Scene.GetLastPointOnNavigationMeshFromWorldPositionToDestination(ref position, destination);
        WorldPosition origin = new WorldPosition(this._mission.Scene, UIntPtr.Zero, positionToDestination, false);
        WorldFrame frame = new WorldFrame(identity, origin);
        formationDeploymentPlan.SetFrame(frame);
        float num2 = formationDeploymentPlan.PlannedDepth + 3f;
        num1 += num2;
        a = MathF.Max(a, formationDeploymentPlan.PlannedWidth);
      }
      float num3 = MathF.Max(num1 - 3f, 0.0f);
      return (a, num3);
    }

    private WorldFrame ComputeFieldBattleDeploymentFrameForFormation(
      FormationDeploymentPlan formationPlan,
      GameEntity formationSceneEntity,
      GameEntity counterSideFormationSceneEntity,
      ref Dictionary<GameEntity, float> spawnDepths)
    {
      Vec3 globalPosition = formationSceneEntity.GlobalPosition;
      Vec2 asVec2 = (counterSideFormationSceneEntity.GlobalPosition - globalPosition).AsVec2;
      double num = (double) asVec2.Normalize();
      float updateSpawnDepth = this.GetAndUpdateSpawnDepth(ref spawnDepths, formationSceneEntity, formationPlan);
      WorldPosition origin = new WorldPosition(this._mission.Scene, UIntPtr.Zero, globalPosition, false);
      origin.SetVec2(origin.AsVec2 - updateSpawnDepth * asVec2);
      Mat3 identity = Mat3.Identity;
      identity.RotateAboutUp(asVec2.RotationInRadians);
      return new WorldFrame(identity, origin);
    }

    private float ComputeFlankWidth(FormationDeploymentFlank flank)
    {
      float a = 0.0f;
      foreach (KeyValuePair<FormationDeploymentOrder, FormationDeploymentPlan> keyValuePair in this._deploymentFlanks[(int) flank])
        a = MathF.Max(a, keyValuePair.Value.PlannedWidth);
      return a;
    }

    private float ComputeFlankDepth(FormationDeploymentFlank flank, bool countPositiveNumTroops = false)
    {
      float num = 0.0f;
      foreach (KeyValuePair<FormationDeploymentOrder, FormationDeploymentPlan> keyValuePair in this._deploymentFlanks[(int) flank])
      {
        if (!countPositiveNumTroops)
          num += keyValuePair.Value.PlannedDepth + 3f;
        else if (keyValuePair.Value.PlannedTroopCount > 0)
          num += keyValuePair.Value.PlannedDepth + 3f;
      }
      return num - 3f;
    }

    private void ComputeMeanPosition()
    {
      this._meanPosition = Vec3.Zero;
      Vec2 vec2 = Vec2.Zero;
      int num = 0;
      foreach (FormationDeploymentPlan formationPlan in this._formationPlans)
      {
        if (formationPlan.HasFrame())
        {
          vec2 += formationPlan.GetGroundPosition().AsVec2;
          ++num;
        }
      }
      if (num <= 0)
        return;
      vec2 = new Vec2(vec2.X / (float) num, vec2.Y / (float) num);
      float height = 0.0f;
      Mission.Current.Scene.GetHeightAtPoint(vec2, BodyFlags.None, ref height);
      this._meanPosition = new Vec3(vec2, height);
    }

    private float ComputeHorizontalCenterOffset()
    {
      double num = (double) MathF.Max(this.ComputeFlankWidth(FormationDeploymentFlank.Front), this.ComputeFlankWidth(FormationDeploymentFlank.Rear));
      float flankWidth = this.ComputeFlankWidth(FormationDeploymentFlank.Left);
      return (float) ((num / 2.0 + (double) this.ComputeFlankWidth(FormationDeploymentFlank.Right) + 2.0 - (num / 2.0 + (double) flankWidth + 2.0)) / 2.0);
    }

    private float GetAndUpdateSpawnDepth(
      ref Dictionary<GameEntity, float> spawnDepths,
      GameEntity spawnEntity,
      FormationDeploymentPlan formationPlan)
    {
      float updateSpawnDepth;
      int num1 = spawnDepths.TryGetValue(spawnEntity, out updateSpawnDepth) ? 1 : 0;
      float num2 = formationPlan.HasDimensions ? formationPlan.PlannedDepth + 3f : 0.0f;
      if (num1 == 0)
      {
        updateSpawnDepth = 0.0f;
        spawnDepths[spawnEntity] = num2;
      }
      else if (formationPlan.HasDimensions)
        spawnDepths[spawnEntity] = updateSpawnDepth + num2;
      return updateSpawnDepth;
    }
  }
}

// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MBSceneUtilities
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
namespace TaleWorlds.MountAndBlade
{
  public static class MBSceneUtilities
  {
    public const int MaxNumberOfSpawnPaths = 32;
    public const string SpawnPathPrefix = "spawn_path_";
    public const string SoftBorderVertexTag = "walk_area_vertex";
    public const string SoftBoundaryName = "walk_area";
    public const string SceneBoundaryName = "scene_boundary";
    private const string DeploymentBoundaryTag = "deployment_castle_boundary";
    private const string DeploymentBoundaryTagExpression = "deployment_castle_boundary(_\\d+)*";

    public static MBList<Path> GetAllSpawnPaths(Scene scene)
    {
      MBList<Path> allSpawnPaths = new MBList<Path>();
      for (int index = 0; index < 32; ++index)
      {
        string name = "spawn_path_" + index.ToString("D2");
        Path pathWithName = scene.GetPathWithName(name);
        if ((NativeObject) pathWithName != (NativeObject) null && pathWithName.NumberOfPoints > 1)
          allSpawnPaths.Add(pathWithName);
      }
      return allSpawnPaths;
    }

    public static List<Vec2> GetSceneBoundaryPoints(Scene scene, out string boundaryName)
    {
      List<Vec2> sceneBoundaryPoints = new List<Vec2>();
      int boundaryVertexCount = scene.GetSoftBoundaryVertexCount();
      if (boundaryVertexCount >= 3)
      {
        boundaryName = "walk_area";
        for (int index = 0; index < boundaryVertexCount; ++index)
        {
          Vec2 softBoundaryVertex = scene.GetSoftBoundaryVertex(index);
          sceneBoundaryPoints.Add(softBoundaryVertex);
        }
      }
      else
      {
        boundaryName = "scene_boundary";
        Vec3 min;
        Vec3 max;
        scene.GetBoundingBox(out min, out max);
        float num1 = MathF.Min(2f, max.x - min.x);
        float num2 = MathF.Min(2f, max.y - min.y);
        List<Vec2> collection = new List<Vec2>()
        {
          new Vec2(min.x + num1, min.y + num2),
          new Vec2(max.x - num1, min.y + num2),
          new Vec2(max.x - num1, max.y - num2),
          new Vec2(min.x + num1, max.y - num2)
        };
        sceneBoundaryPoints.AddRange((IEnumerable<Vec2>) collection);
      }
      return sceneBoundaryPoints;
    }

    public static List<(string tag, List<Vec2> boundaryPoints, bool insideAllowance)> GetDeploymentBoundaries(
      BattleSideEnum battleSide)
    {
      IEnumerable<GameEntity> withTagExpression = Mission.Current.Scene.FindEntitiesWithTagExpression("deployment_castle_boundary(_\\d+)*");
      List<(string, List<GameEntity>)> source = new List<(string, List<GameEntity>)>();
      foreach (GameEntity gameEntity in withTagExpression)
      {
        if (gameEntity.HasTag(battleSide.ToString()))
        {
          foreach (string tag1 in gameEntity.Tags)
          {
            string tag = tag1;
            if (tag.Contains("deployment_castle_boundary"))
            {
              (string, List<GameEntity>) valueTuple = source.FirstOrDefault<(string, List<GameEntity>)>((Func<(string, List<GameEntity>), bool>) (tuple => tuple.tag.Equals(tag)));
              if (valueTuple.Item1 == null)
              {
                valueTuple = (tag, new List<GameEntity>());
                source.Add(valueTuple);
              }
              valueTuple.Item2.Add(gameEntity);
              break;
            }
          }
        }
      }
      List<(string, List<Vec2>, bool)> deploymentBoundaries = new List<(string, List<Vec2>, bool)>();
      foreach ((string, List<GameEntity>) valueTuple in source)
      {
        string str = valueTuple.Item1;
        bool flag = !valueTuple.Item2.Any<GameEntity>((Func<GameEntity, bool>) (e => e.HasTag("out")));
        List<Vec2> list = valueTuple.Item2.Select<GameEntity, Vec2>((Func<GameEntity, Vec2>) (bp => bp.GlobalPosition.AsVec2)).ToList<Vec2>();
        MBSceneUtilities.RadialSortBoundary(ref list);
        deploymentBoundaries.Add((str, list, flag));
      }
      return deploymentBoundaries;
    }

    public static void ProjectPositionToDeploymentBoundaries(
      BattleSideEnum side,
      ref WorldPosition position)
    {
      Mission current = Mission.Current;
      BattleSideEnum battleSideEnum = side;
      IMissionDeploymentPlan deploymentPlan = current.DeploymentPlan;
      if (!deploymentPlan.HasDeploymentBoundaries(battleSideEnum) || deploymentPlan.IsPositionInsideDeploymentBoundaries(battleSideEnum, position.AsVec2))
        return;
      Vec2 boundaryPosition = deploymentPlan.GetClosestDeploymentBoundaryPosition(battleSideEnum, position.AsVec2, true, position.GetGroundZ());
      position = new WorldPosition(current.Scene, new Vec3(boundaryPosition, position.GetGroundZ()));
    }

    public static void FindConvexHull(ref List<Vec2> boundary)
    {
      Vec2[] array = boundary.ToArray();
      int convexPointCount = 0;
      MBAPI.IMBMission.FindConvexHull(array, boundary.Count, ref convexPointCount);
      boundary = ((IEnumerable<Vec2>) array).ToList<Vec2>();
      boundary.RemoveRange(convexPointCount, boundary.Count - convexPointCount);
    }

    public static void RadialSortBoundary(ref List<Vec2> boundary)
    {
      if (boundary.Count == 0)
        return;
      Vec2 boundaryCenter = Vec2.Zero;
      foreach (Vec2 vec2 in boundary)
        boundaryCenter += vec2;
      boundaryCenter.x /= (float) boundary.Count;
      boundaryCenter.y /= (float) boundary.Count;
      boundary = boundary.OrderBy<Vec2, float>((Func<Vec2, float>) (b => (b - boundaryCenter).RotationInRadians)).ToList<Vec2>();
    }

    public static bool IsPointInsideBoundaries(
      in Vec2 point,
      List<Vec2> boundaries,
      float acceptanceThreshold = 0.05f)
    {
      if (boundaries.Count <= 2)
        return false;
      acceptanceThreshold = MathF.Max(0.0f, acceptanceThreshold);
      bool flag = true;
      for (int index = 0; index < boundaries.Count; ++index)
      {
        Vec2 boundary = boundaries[index];
        Vec2 v = boundaries[(index + 1) % boundaries.Count] - boundary;
        Vec2 vec2_1 = point - boundary;
        if ((double) v.x * (double) vec2_1.y - (double) v.y * (double) vec2_1.x < 0.0)
        {
          double num = (double) v.Normalize();
          Vec2 vec2_2 = vec2_1.DotProduct(v) * v;
          if ((double) (vec2_1 - vec2_2).LengthSquared > (double) acceptanceThreshold * (double) acceptanceThreshold)
          {
            flag = false;
            break;
          }
        }
      }
      return flag;
    }

    public static float FindClosestPointToBoundaries(
      in Vec2 position,
      List<Vec2> boundaries,
      out Vec2 closestPoint)
    {
      closestPoint = position;
      float pointToBoundaries = float.MaxValue;
      for (int index = 0; index < boundaries.Count; ++index)
      {
        Vec2 boundary1 = boundaries[index];
        Vec2 boundary2 = boundaries[(index + 1) % boundaries.Count];
        Vec2 closest;
        float pointOnLineSegment = MBMath.GetClosestPointOnLineSegment(position, boundary1, boundary2, out closest);
        if ((double) pointOnLineSegment <= (double) pointToBoundaries)
        {
          pointToBoundaries = pointOnLineSegment;
          closestPoint = closest;
        }
      }
      return pointToBoundaries;
    }

    public static float FindClosestPointWithNavMeshToBoundaries(
      in Vec2 position,
      float positionZ,
      List<Vec2> boundaries,
      out Vec2 closestPoint)
    {
      closestPoint = position;
      float meshToBoundaries = float.MaxValue;
      for (int index = 0; index < boundaries.Count; ++index)
      {
        Vec2 boundary1 = boundaries[index];
        Vec2 boundary2 = boundaries[(index + 1) % boundaries.Count];
        Vec2 closest;
        float num1 = MBMath.GetClosestPointOnLineSegment(position, boundary1, boundary2, out closest);
        if ((double) num1 <= (double) meshToBoundaries)
        {
          Vec2 vec2_1 = boundary2 - boundary1;
          Vec2 vec2_2 = vec2_1.Normalized() * 1f;
          WorldPosition worldPosition = new WorldPosition(Mission.Current.Scene, new Vec3(closest, positionZ));
          int num2 = 0;
          while (worldPosition.GetNavMesh() == UIntPtr.Zero && num2 < 30)
          {
            Vec2 vec2_3 = (float) ((num2 / 2 + 1) * (num2++ % 2 == 0 ? 1 : -1)) * vec2_2;
            Vec2 vec2_4 = closest + vec2_3;
            if ((double) vec2_4.X > (double) MathF.Min(boundary1.X, boundary2.X) && (double) vec2_4.X < (double) MathF.Max(boundary1.X, boundary2.X) && (double) vec2_4.Y > (double) MathF.Min(boundary1.Y, boundary2.Y) && (double) vec2_4.Y < (double) MathF.Max(boundary1.Y, boundary2.Y))
              worldPosition.SetVec2(closest + vec2_3);
          }
          bool flag = worldPosition.GetNavMesh() != UIntPtr.Zero;
          if (flag)
          {
            vec2_1 = worldPosition.AsVec2;
            num1 = vec2_1.Distance(position);
          }
          if ((double) num1 <= (double) meshToBoundaries)
          {
            meshToBoundaries = num1;
            closestPoint = flag ? worldPosition.AsVec2 : closest;
          }
        }
      }
      return meshToBoundaries;
    }
  }
}

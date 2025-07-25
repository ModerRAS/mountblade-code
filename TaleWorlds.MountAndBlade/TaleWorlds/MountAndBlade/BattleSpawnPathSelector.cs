// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BattleSpawnPathSelector
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BattleSpawnPathSelector
  {
    private readonly Mission _mission;
    private Path _initialPath;
    private BattleSideSpawnPathSelector[] _battleSideSelectors;

    public bool IsInitialized { get; private set; }

    public Path InitialPath => this._initialPath;

    public BattleSpawnPathSelector(Mission mission)
    {
      this.IsInitialized = false;
      this._initialPath = (Path) null;
      this._mission = mission;
    }

    public void Initialize()
    {
      float centerRatio;
      bool isInverted;
      Path bestInitialPath = BattleSpawnPathSelector.FindBestInitialPath(this._mission, out centerRatio, out isInverted);
      if ((NativeObject) bestInitialPath != (NativeObject) null)
      {
        this._initialPath = bestInitialPath;
        this._battleSideSelectors = new BattleSideSpawnPathSelector[2];
        this._battleSideSelectors[0] = new BattleSideSpawnPathSelector(this._mission, bestInitialPath, centerRatio, isInverted);
        this._battleSideSelectors[1] = new BattleSideSpawnPathSelector(this._mission, bestInitialPath, MathF.Max(1f - centerRatio, 0.0f), !isInverted);
        this.IsInitialized = true;
      }
      else
      {
        this._initialPath = (Path) null;
        this.IsInitialized = false;
      }
    }

    public bool HasPath(Path path)
    {
      if (!this.IsInitialized)
      {
        Debug.FailedAssert("BattleSpawnPathSelector must be initialized.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Deployment\\BattleSpawnPathSelector.cs", nameof (HasPath), 63);
        return false;
      }
      BattleSideSpawnPathSelector battleSideSelector1 = this._battleSideSelectors[1];
      BattleSideSpawnPathSelector battleSideSelector2 = this._battleSideSelectors[0];
      if (!((NativeObject) path != (NativeObject) null))
        return false;
      return this._initialPath.Pointer == path.Pointer || battleSideSelector1.HasReinforcementPath(path) || battleSideSelector2.HasReinforcementPath(path);
    }

    public bool GetInitialPathDataOfSide(BattleSideEnum side, out SpawnPathData pathPathData)
    {
      if (!this.IsInitialized)
      {
        Debug.FailedAssert("BattleSpawnPathSelector must be initialized.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Deployment\\BattleSpawnPathSelector.cs", nameof (GetInitialPathDataOfSide), 77);
        pathPathData = SpawnPathData.Invalid;
        return false;
      }
      pathPathData = this._battleSideSelectors[(int) side].InitialSpawnPath;
      return pathPathData.IsValid;
    }

    public MBReadOnlyList<SpawnPathData> GetReinforcementPathsDataOfSide(BattleSideEnum side)
    {
      if (this.IsInitialized)
        return this._battleSideSelectors[(int) side].ReinforcementPaths;
      Debug.FailedAssert("BattleSpawnPathSelector must be initialized.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Deployment\\BattleSpawnPathSelector.cs", nameof (GetReinforcementPathsDataOfSide), 91);
      return (MBReadOnlyList<SpawnPathData>) null;
    }

    public static Path FindBestInitialPath(
      Mission mission,
      out float centerRatio,
      out bool isInverted)
    {
      centerRatio = 0.0f;
      isInverted = false;
      MBList<Path> allSpawnPaths = MBSceneUtilities.GetAllSpawnPaths(mission.Scene);
      if (allSpawnPaths.IsEmpty<Path>())
        return (Path) null;
      int b = 2;
      foreach (Path path in (List<Path>) allSpawnPaths)
        b = MathF.Max(path.NumberOfPoints, b);
      Path bestInitialPath = (Path) null;
      if (mission.HasSceneMapPatch())
      {
        Path path1 = (Path) null;
        bool flag1 = false;
        float num1 = float.MinValue;
        MatrixFrame[] points = new MatrixFrame[b];
        Vec3 position;
        mission.GetPatchSceneEncounterPosition(out position);
        Vec2 asVec2_1 = position.AsVec2;
        Vec2 direction;
        mission.GetPatchSceneEncounterDirection(out direction);
        foreach (Path path2 in (List<Path>) allSpawnPaths)
        {
          if (path2.NumberOfPoints > 1)
          {
            path2.GetPoints(points);
            float num2 = 0.0f;
            for (int index = 1; index < path2.NumberOfPoints; ++index)
            {
              Vec2 asVec2_2 = points[index - 1].origin.AsVec2;
              Vec2 v = (points[index].origin.AsVec2 - asVec2_2).Normalized();
              float num3 = direction.DotProduct(v);
              float num4 = (float) (1000.0 / (1.0 + (double) asVec2_2.Distance(asVec2_1)));
              num2 += num4 * num3;
            }
            float num5 = num2 / (float) (path2.NumberOfPoints - 1);
            bool flag2 = false;
            if ((double) num5 < 0.0)
            {
              num5 = -num5;
              flag2 = true;
            }
            if ((double) num5 >= (double) num1)
            {
              path1 = path2;
              num1 = num5;
              flag1 = flag2;
            }
          }
        }
        if ((NativeObject) path1 != (NativeObject) null)
        {
          path1.GetPoints(points);
          Vec2 asVec2_3 = points[0].origin.AsVec2;
          float num6 = asVec2_3.DistanceSquared(asVec2_1);
          float num7 = 0.0f;
          float num8 = 0.0f;
          for (int index = 1; index < path1.NumberOfPoints; ++index)
          {
            asVec2_3 = points[index].origin.AsVec2;
            float num9 = asVec2_3.DistanceSquared(asVec2_1);
            num8 += path1.GetArcLength(index - 1);
            if ((double) num9 < (double) num6)
            {
              num6 = num9;
              num7 = num8;
            }
          }
          bestInitialPath = path1;
          centerRatio = num7 / bestInitialPath.GetTotalLength();
          isInverted = flag1;
        }
      }
      else
      {
        Path randomElement = allSpawnPaths.GetRandomElement<Path>();
        if (randomElement.NumberOfPoints > 1)
        {
          bestInitialPath = randomElement;
          centerRatio = (float) (0.37000000476837158 + (double) MBRandom.RandomFloat * 0.25999999046325684);
          isInverted = false;
        }
      }
      return bestInitialPath;
    }
  }
}

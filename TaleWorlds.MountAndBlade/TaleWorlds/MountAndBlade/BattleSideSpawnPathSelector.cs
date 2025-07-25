// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BattleSideSpawnPathSelector
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BattleSideSpawnPathSelector
  {
    public const float MaxNeighborCount = 2f;
    private readonly Mission _mission;
    private readonly SpawnPathData _initialSpawnPath;
    private readonly MBList<SpawnPathData> _reinforcementSpawnPaths;

    public SpawnPathData InitialSpawnPath => this._initialSpawnPath;

    public MBReadOnlyList<SpawnPathData> ReinforcementPaths
    {
      get => (MBReadOnlyList<SpawnPathData>) this._reinforcementSpawnPaths;
    }

    public BattleSideSpawnPathSelector(
      Mission mission,
      Path initialPath,
      float initialPathCenterRatio,
      bool initialPathIsInverted)
    {
      this._mission = mission;
      this._initialSpawnPath = new SpawnPathData(initialPath, centerRatio: initialPathCenterRatio, isInverted: initialPathIsInverted);
      this._reinforcementSpawnPaths = new MBList<SpawnPathData>();
      this.FindReinforcementPaths();
    }

    public bool HasReinforcementPath(Path path)
    {
      return (NativeObject) path != (NativeObject) null && this._reinforcementSpawnPaths.Exists((Predicate<SpawnPathData>) (pathData => pathData.Path.Pointer == path.Pointer));
    }

    private void FindReinforcementPaths()
    {
      this._reinforcementSpawnPaths.Clear();
      SpawnPathData spawnPathData = new SpawnPathData(this._initialSpawnPath.Path, SpawnPathOrientation.Local, isInverted: this._initialSpawnPath.IsInverted);
      this._reinforcementSpawnPaths.Add(spawnPathData);
      MBList<Path> allSpawnPaths = MBSceneUtilities.GetAllSpawnPaths(this._mission.Scene);
      if (allSpawnPaths.Count == 0)
        return;
      bool flag1 = false;
      if (allSpawnPaths.Count > 1)
      {
        MatrixFrame[] points = new MatrixFrame[100];
        spawnPathData.Path.GetPoints(points);
        MatrixFrame matrixFrame1 = spawnPathData.IsInverted ? points[spawnPathData.Path.NumberOfPoints - 1] : points[0];
        SortedList<float, SpawnPathData> sortedList = new SortedList<float, SpawnPathData>();
        foreach (Path path in (List<Path>) allSpawnPaths)
        {
          if (path.NumberOfPoints > 1 && path.Pointer != spawnPathData.Path.Pointer)
          {
            path.GetPoints(points);
            MatrixFrame matrixFrame2 = points[0];
            MatrixFrame matrixFrame3 = points[path.NumberOfPoints - 1];
            float key1 = matrixFrame2.origin.DistanceSquared(matrixFrame1.origin);
            float key2 = matrixFrame3.origin.DistanceSquared(matrixFrame1.origin);
            sortedList.Add(key1, new SpawnPathData(path, SpawnPathOrientation.Local));
            sortedList.Add(key2, new SpawnPathData(path, SpawnPathOrientation.Local, isInverted: true));
          }
          else
            flag1 = flag1 || spawnPathData.Path.Pointer == path.Pointer;
        }
        int num = 0;
        foreach (KeyValuePair<float, SpawnPathData> keyValuePair in sortedList)
        {
          this._reinforcementSpawnPaths.Add(keyValuePair.Value);
          ++num;
          if ((double) num >= 2.0)
            break;
        }
      }
      else
      {
        bool flag2 = spawnPathData.Path.Pointer == allSpawnPaths[0].Pointer;
      }
    }
  }
}

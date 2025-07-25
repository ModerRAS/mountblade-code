// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MissionBoundaryPlacer
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class MissionBoundaryPlacer : MissionLogic
  {
    public const string DefaultWalkAreaBoundaryName = "walk_area";

    public override void EarlyStart() => this.AddMissionBoundaries();

    public void AddMissionBoundaries()
    {
      string boundaryName;
      List<Vec2> sceneBoundaryPoints = MBSceneUtilities.GetSceneBoundaryPoints(this.Mission.Scene, out boundaryName);
      this.Mission.Boundaries.Add(boundaryName, (ICollection<Vec2>) sceneBoundaryPoints);
    }
  }
}

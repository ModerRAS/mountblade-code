// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.IMissionDeploymentPlan
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public interface IMissionDeploymentPlan
  {
    bool IsPlanMadeForBattleSide(BattleSideEnum side, DeploymentPlanType planType);

    bool IsPositionInsideDeploymentBoundaries(BattleSideEnum battleSide, in Vec2 position);

    bool HasDeploymentBoundaries(BattleSideEnum side);

    MBReadOnlyList<(string id, List<Vec2> points)> GetDeploymentBoundaries(BattleSideEnum side);

    Vec2 GetClosestDeploymentBoundaryPosition(
      BattleSideEnum battleSide,
      in Vec2 position,
      bool withNavMesh = false,
      float positionZ = 0.0f);

    int GetTroopCountForSide(BattleSideEnum side, DeploymentPlanType planType);

    Vec3 GetMeanPositionOfPlan(BattleSideEnum battleSide, DeploymentPlanType planType);

    MatrixFrame GetBattleSideDeploymentFrame(BattleSideEnum side);

    IFormationDeploymentPlan GetFormationPlan(
      BattleSideEnum side,
      FormationClass fClass,
      DeploymentPlanType planType);
  }
}

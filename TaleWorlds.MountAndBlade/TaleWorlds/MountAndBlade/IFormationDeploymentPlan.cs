// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.IFormationDeploymentPlan
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public interface IFormationDeploymentPlan
  {
    FormationClass Class { get; }

    FormationClass SpawnClass { get; }

    float PlannedWidth { get; }

    float PlannedDepth { get; }

    int PlannedTroopCount { get; }

    int PlannedFootTroopCount { get; }

    int PlannedMountedTroopCount { get; }

    bool HasDimensions { get; }

    bool HasSignificantMountedTroops { get; }

    bool HasFrame();

    FormationDeploymentFlank GetDefaultFlank(
      bool spawnWithHorses,
      int formationTroopCount,
      int infantryCount);

    FormationDeploymentOrder GetFlankDeploymentOrder(int offset = 0);

    MatrixFrame GetGroundFrame();

    Vec3 GetGroundPosition();

    Vec2 GetDirection();

    WorldPosition CreateNewDeploymentWorldPosition(
      WorldPosition.WorldPositionEnforcedCache worldPositionEnforcedCache);
  }
}

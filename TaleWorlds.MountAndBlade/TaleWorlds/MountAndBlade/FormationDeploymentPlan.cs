// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.FormationDeploymentPlan
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class FormationDeploymentPlan : IFormationDeploymentPlan
  {
    private WorldFrame _spawnFrame;
    private FormationClass _spawnClass;
    private readonly FormationClass _class;
    private float _plannedWidth;
    private float _plannedDepth;
    private int _plannedFootTroopCount;
    private int _plannedMountedTroopCount;

    public FormationClass Class => this._class;

    public FormationClass SpawnClass => this._spawnClass;

    public float PlannedWidth => this._plannedWidth;

    public float PlannedDepth => this._plannedDepth;

    public int PlannedTroopCount => this._plannedFootTroopCount + this._plannedMountedTroopCount;

    public int PlannedFootTroopCount => this._plannedFootTroopCount;

    public int PlannedMountedTroopCount => this._plannedMountedTroopCount;

    public bool HasDimensions
    {
      get
      {
        return (double) this._plannedWidth >= 9.9999997473787516E-06 && (double) this._plannedDepth >= 9.9999997473787516E-06;
      }
    }

    public bool HasSignificantMountedTroops
    {
      get
      {
        return MissionDeploymentPlan.HasSignificantMountedTroops(this._plannedFootTroopCount, this._plannedMountedTroopCount);
      }
    }

    public FormationDeploymentPlan(FormationClass fClass)
    {
      this._class = fClass;
      this._spawnClass = fClass;
      this.Clear();
    }

    public bool HasFrame() => this._spawnFrame.IsValid;

    public FormationDeploymentFlank GetDefaultFlank(
      bool spawnWithHorses,
      int formationTroopCount,
      int infantryCount)
    {
      FormationDeploymentFlank defaultFlank;
      if (!this._class.IsMounted() && formationTroopCount == 0)
        defaultFlank = FormationDeploymentFlank.Rear;
      else if (this.HasSignificantMountedTroops && (!spawnWithHorses || infantryCount == 0))
      {
        defaultFlank = formationTroopCount == 0 || this._class == FormationClass.LightCavalry || this._class == FormationClass.HorseArcher ? FormationDeploymentFlank.Rear : FormationDeploymentFlank.Front;
      }
      else
      {
        switch (this._class)
        {
          case FormationClass.Ranged:
          case FormationClass.NumberOfRegularFormations:
          case FormationClass.Bodyguard:
          case FormationClass.NumberOfAllFormations:
            defaultFlank = FormationDeploymentFlank.Rear;
            break;
          case FormationClass.Cavalry:
          case FormationClass.HeavyCavalry:
            defaultFlank = FormationDeploymentFlank.Left;
            break;
          case FormationClass.HorseArcher:
          case FormationClass.LightCavalry:
            defaultFlank = FormationDeploymentFlank.Right;
            break;
          default:
            defaultFlank = FormationDeploymentFlank.Front;
            break;
        }
      }
      return defaultFlank;
    }

    public FormationDeploymentOrder GetFlankDeploymentOrder(int offset = 0)
    {
      return FormationDeploymentOrder.GetDeploymentOrder(this._class, offset);
    }

    public MatrixFrame GetGroundFrame() => this._spawnFrame.ToGroundMatrixFrame();

    public Vec3 GetGroundPosition() => this._spawnFrame.Origin.GetGroundVec3();

    public Vec2 GetDirection() => this._spawnFrame.Rotation.f.AsVec2.Normalized();

    public WorldPosition CreateNewDeploymentWorldPosition(
      WorldPosition.WorldPositionEnforcedCache worldPositionEnforcedCache)
    {
      if (worldPositionEnforcedCache == WorldPosition.WorldPositionEnforcedCache.NavMeshVec3)
        return new WorldPosition(Mission.Current.Scene, UIntPtr.Zero, this._spawnFrame.Origin.GetNavMeshVec3(), false);
      return worldPositionEnforcedCache == WorldPosition.WorldPositionEnforcedCache.GroundVec3 ? new WorldPosition(Mission.Current.Scene, UIntPtr.Zero, this._spawnFrame.Origin.GetGroundVec3(), false) : this._spawnFrame.Origin;
    }

    public void Clear()
    {
      this._plannedWidth = 0.0f;
      this._plannedDepth = 0.0f;
      this._plannedFootTroopCount = 0;
      this._plannedMountedTroopCount = 0;
      this._spawnFrame = WorldFrame.Invalid;
    }

    public void SetPlannedTroopCount(int footTroopCount, int mountedTroopCount)
    {
      this._plannedFootTroopCount = footTroopCount;
      this._plannedMountedTroopCount = mountedTroopCount;
    }

    public void SetPlannedDimensions(float width, float depth)
    {
      this._plannedWidth = MathF.Max(0.0f, width);
      this._plannedDepth = MathF.Max(0.0f, depth);
    }

    public void SetFrame(WorldFrame frame) => this._spawnFrame = frame;

    public void SetSpawnClass(FormationClass spawnClass) => this._spawnClass = spawnClass;
  }
}

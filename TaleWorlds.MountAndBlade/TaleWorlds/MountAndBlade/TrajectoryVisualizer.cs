// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.TrajectoryVisualizer
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class TrajectoryVisualizer : ScriptComponentBehavior
  {
    public bool ShowTrajectory;
    private GameEntity _trajectoryMeshHolder;
    private TrajectoryVisualizer.TrajectoryParams _trajectoryParams;

    public void SetTrajectoryParams(
      Vec3 missileShootingPositionOffset,
      float missileSpeed,
      float verticalAngleMinInDegrees,
      float verticalAngleMaxInDegrees,
      float horizontalAngleRangeInDegrees,
      float airFrictionConstant)
    {
      this._trajectoryParams.MissileShootingPositionOffset = missileShootingPositionOffset;
      this._trajectoryParams.MissileSpeed = missileSpeed;
      this._trajectoryParams.VerticalAngleMinInDegrees = verticalAngleMinInDegrees;
      this._trajectoryParams.VerticalAngleMaxInDegrees = verticalAngleMaxInDegrees;
      this._trajectoryParams.HorizontalAngleRangeInDegrees = horizontalAngleRangeInDegrees;
      this._trajectoryParams.AirFrictionConstant = airFrictionConstant;
      this._trajectoryParams.IsValid = true;
    }

    protected internal override void OnEditorInit() => base.OnEditorInit();

    protected internal override void OnEditorVariableChanged(string variableName)
    {
      if (!(variableName == "ShowTrajectory"))
        return;
      if (this.ShowTrajectory && (NativeObject) this._trajectoryMeshHolder == (NativeObject) null && !this.GameEntity.IsGhostObject() && this._trajectoryParams.IsValid)
      {
        this._trajectoryMeshHolder = GameEntity.CreateEmpty(this.Scene, false);
        if ((NativeObject) this._trajectoryMeshHolder != (NativeObject) null)
        {
          this._trajectoryMeshHolder.EntityFlags |= EntityFlags.DontSaveToScene;
          MatrixFrame frame = this.GameEntity.GetGlobalFrame();
          Vec3 vec3 = frame.origin + (frame.rotation.s * this._trajectoryParams.MissileShootingPositionOffset.x + frame.rotation.f * this._trajectoryParams.MissileShootingPositionOffset.y + frame.rotation.u * this._trajectoryParams.MissileShootingPositionOffset.z);
          frame.origin = vec3;
          this._trajectoryMeshHolder.SetGlobalFrame(in frame);
          this._trajectoryMeshHolder.ComputeTrajectoryVolume(this._trajectoryParams.MissileSpeed, this._trajectoryParams.VerticalAngleMaxInDegrees, this._trajectoryParams.VerticalAngleMinInDegrees, this._trajectoryParams.HorizontalAngleRangeInDegrees, this._trajectoryParams.AirFrictionConstant);
          this.GameEntity.AddChild(this._trajectoryMeshHolder, true);
          this._trajectoryMeshHolder.SetVisibilityExcludeParents(false);
        }
      }
      if (!((NativeObject) this._trajectoryMeshHolder != (NativeObject) null))
        return;
      this._trajectoryMeshHolder.SetVisibilityExcludeParents(this.ShowTrajectory);
    }

    protected override void OnRemoved(int removeReason)
    {
      if (!((NativeObject) this._trajectoryMeshHolder != (NativeObject) null))
        return;
      this._trajectoryMeshHolder.Remove(removeReason);
    }

    private struct TrajectoryParams
    {
      public Vec3 MissileShootingPositionOffset;
      public float MissileSpeed;
      public float VerticalAngleMinInDegrees;
      public float VerticalAngleMaxInDegrees;
      public float HorizontalAngleRangeInDegrees;
      public float AirFrictionConstant;
      public bool IsValid;
    }
  }
}

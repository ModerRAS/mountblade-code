// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.Objects.Siege.SiegeLadderSpawner
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade.Objects.Siege
{
  public class SiegeLadderSpawner : SpawnerBase
  {
    [SpawnerBase.SpawnerPermissionField]
    public MatrixFrame fork_holder = MatrixFrame.Zero;
    [SpawnerBase.SpawnerPermissionField]
    public MatrixFrame initial_wait_pos = MatrixFrame.Zero;
    [SpawnerBase.SpawnerPermissionField]
    public MatrixFrame use_push = MatrixFrame.Zero;
    [SpawnerBase.SpawnerPermissionField]
    public MatrixFrame stand_position_wall_push = MatrixFrame.Zero;
    [SpawnerBase.SpawnerPermissionField]
    public MatrixFrame distance_holder = MatrixFrame.Zero;
    [SpawnerBase.SpawnerPermissionField]
    public MatrixFrame stand_position_ground_wait = MatrixFrame.Zero;
    [EditorVisibleScriptComponentVariable(true)]
    public string SideTag;
    [EditorVisibleScriptComponentVariable(true)]
    public string TargetWallSegmentTag = "";
    [EditorVisibleScriptComponentVariable(true)]
    public int OnWallNavMeshId = -1;
    [EditorVisibleScriptComponentVariable(true)]
    public string AddOnDeployTag = "";
    [EditorVisibleScriptComponentVariable(true)]
    public string RemoveOnDeployTag = "";
    [EditorVisibleScriptComponentVariable(true)]
    public float UpperStateRotationDegree;
    [EditorVisibleScriptComponentVariable(true)]
    public float DownStateRotationDegree = 90f;
    public float TacticalPositionWidth = 1f;
    [EditorVisibleScriptComponentVariable(true)]
    public string BarrierTagToRemove = string.Empty;
    [EditorVisibleScriptComponentVariable(true)]
    public string IndestructibleMerlonsTag = string.Empty;

    public float UpperStateRotationRadian
    {
      get => this.UpperStateRotationDegree * ((float) Math.PI / 180f);
    }

    public float DownStateRotationRadian => this.DownStateRotationDegree * ((float) Math.PI / 180f);

    protected internal override void OnEditorInit()
    {
      base.OnEditorInit();
      this._spawnerEditorHelper = new SpawnerEntityEditorHelper((ScriptComponentBehavior) this);
      if (this._spawnerEditorHelper.IsValid)
      {
        this._spawnerEditorHelper.GivePermission("ladder_up_state", new SpawnerEntityEditorHelper.Permission(SpawnerEntityEditorHelper.PermissionType.rotation, SpawnerEntityEditorHelper.Axis.x), new Action<float>(this.OnLadderUpStateChange));
        this._spawnerEditorHelper.GivePermission("ladder_down_state", new SpawnerEntityEditorHelper.Permission(SpawnerEntityEditorHelper.PermissionType.rotation, SpawnerEntityEditorHelper.Axis.x), new Action<float>(this.OnLadderDownStateChange));
      }
      this.OnEditorVariableChanged("UpperStateRotationDegree");
      this.OnEditorVariableChanged("DownStateRotationDegree");
    }

    protected internal override void OnEditorTick(float dt)
    {
      base.OnEditorTick(dt);
      this._spawnerEditorHelper.Tick(dt);
    }

    private void OnLadderUpStateChange(float rotation)
    {
      if ((double) rotation > -0.20135831832885742)
      {
        rotation = -0.201358318f;
        this.UpperStateRotationDegree = rotation * 57.29578f;
        this.OnEditorVariableChanged("UpperStateRotationDegree");
      }
      else
        this.UpperStateRotationDegree = rotation * 57.29578f;
    }

    private void OnLadderDownStateChange(float unusedArgument)
    {
      GameEntity ghostEntityOrChild = this._spawnerEditorHelper.GetGhostEntityOrChild("ladder_down_state");
      this.DownStateRotationDegree = Vec3.AngleBetweenTwoVectors(Vec3.Up, ghostEntityOrChild.GetFrame().rotation.u) * 57.29578f;
    }

    protected internal override void OnEditorVariableChanged(string variableName)
    {
      base.OnEditorVariableChanged(variableName);
      switch (variableName)
      {
        case "UpperStateRotationDegree":
          if ((double) this.UpperStateRotationDegree > -11.536981582641602)
            this.UpperStateRotationDegree = -11.5369816f;
          MatrixFrame frame1 = this._spawnerEditorHelper.GetGhostEntityOrChild("ladder_up_state").GetFrame() with
          {
            rotation = Mat3.Identity
          };
          frame1.rotation.RotateAboutSide(this.UpperStateRotationRadian);
          this._spawnerEditorHelper.ChangeStableChildMatrixFrameAndApply("ladder_up_state", frame1);
          break;
        case "DownStateRotationDegree":
          MatrixFrame frame2 = this._spawnerEditorHelper.GetGhostEntityOrChild("ladder_down_state").GetFrame() with
          {
            rotation = Mat3.Identity
          };
          frame2.rotation.RotateAboutUp(1.57079637f);
          frame2.rotation.RotateAboutSide(this.DownStateRotationRadian);
          this._spawnerEditorHelper.ChangeStableChildMatrixFrameAndApply("ladder_down_state", frame2);
          break;
      }
    }

    protected internal override bool OnCheckForProblems()
    {
      bool flag = base.OnCheckForProblems();
      if (this.Scene.IsMultiplayerScene())
      {
        if (this.OnWallNavMeshId == 0 || this.OnWallNavMeshId % 10 == 1)
        {
          MBEditor.AddEntityWarning(this.GameEntity, "OnWallNavMeshId's ones digit cannot be 1 and OnWallNavMeshId cannot be 0 in a multiplayer scene.");
          flag = true;
        }
      }
      else if (this.OnWallNavMeshId == -1 || this.OnWallNavMeshId == 0 || this.OnWallNavMeshId % 10 == 1)
      {
        MBEditor.AddEntityWarning(this.GameEntity, "OnWallNavMeshId's ones digit cannot be 1 and OnWallNavMeshId cannot be -1 or 0 in a singleplayer scene.");
        flag = true;
      }
      if (this.OnWallNavMeshId != -1)
      {
        List<GameEntity> entities = new List<GameEntity>();
        this.Scene.GetEntities(ref entities);
        foreach (GameEntity gameEntity in entities)
        {
          SiegeLadderSpawner firstScriptOfType = gameEntity.GetFirstScriptOfType<SiegeLadderSpawner>();
          if (firstScriptOfType != null && (NativeObject) gameEntity != (NativeObject) this.GameEntity && this.OnWallNavMeshId == firstScriptOfType.OnWallNavMeshId && (int) this.GameEntity.GetVisibilityLevelMaskIncludingParents() == (int) gameEntity.GetVisibilityLevelMaskIncludingParents())
            MBEditor.AddEntityWarning(this.GameEntity, "OnWallNavMeshId must not be shared with any other siege ladder.");
        }
      }
      return flag;
    }

    protected internal override void OnPreInit()
    {
      base.OnPreInit();
      this._spawnerMissionHelper = new SpawnerEntityMissionHelper((SpawnerBase) this);
    }

    public override void AssignParameters(SpawnerEntityMissionHelper _spawnerMissionHelper)
    {
      SiegeLadder firstScriptOfType = _spawnerMissionHelper.SpawnedEntity.GetFirstScriptOfType<SiegeLadder>();
      firstScriptOfType.AddOnDeployTag = this.AddOnDeployTag;
      firstScriptOfType.RemoveOnDeployTag = this.RemoveOnDeployTag;
      firstScriptOfType.AssignParametersFromSpawner(this.SideTag, this.TargetWallSegmentTag, this.OnWallNavMeshId, this.DownStateRotationRadian, this.UpperStateRotationRadian, this.BarrierTagToRemove, this.IndestructibleMerlonsTag);
      List<GameEntity> children = new List<GameEntity>();
      _spawnerMissionHelper.SpawnedEntity.GetChildrenRecursive(ref children);
      children.Find((Predicate<GameEntity>) (x => x.Name == "initial_wait_pos")).GetFirstScriptOfType<TacticalPosition>().SetWidth(this.TacticalPositionWidth);
    }
  }
}

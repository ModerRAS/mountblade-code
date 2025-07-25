// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.Objects.Siege.BatteringRamSpawner
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Linq;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade.Objects.Siege
{
  public class BatteringRamSpawner : SpawnerBase
  {
    private const float _modifierFactorUpperLimit = 1.2f;
    private const float _modifierFactorLowerLimit = 0.8f;
    [SpawnerBase.SpawnerPermissionField]
    public MatrixFrame wait_pos_ground = MatrixFrame.Zero;
    [EditorVisibleScriptComponentVariable(true)]
    public string SideTag;
    [EditorVisibleScriptComponentVariable(true)]
    public string GateTag = "";
    [EditorVisibleScriptComponentVariable(true)]
    public string PathEntityName = "Path";
    [EditorVisibleScriptComponentVariable(true)]
    public int BridgeNavMeshID_1 = 8;
    [EditorVisibleScriptComponentVariable(true)]
    public int BridgeNavMeshID_2 = 8;
    [EditorVisibleScriptComponentVariable(true)]
    public int DitchNavMeshID_1 = 9;
    [EditorVisibleScriptComponentVariable(true)]
    public int DitchNavMeshID_2 = 10;
    [EditorVisibleScriptComponentVariable(true)]
    public int GroundToBridgeNavMeshID_1 = 12;
    [EditorVisibleScriptComponentVariable(true)]
    public int GroundToBridgeNavMeshID_2 = 13;
    [EditorVisibleScriptComponentVariable(true)]
    public string AddOnDeployTag = "";
    [EditorVisibleScriptComponentVariable(true)]
    public string RemoveOnDeployTag = "";
    [EditorVisibleScriptComponentVariable(true)]
    public float SpeedModifierFactor = 1f;
    public bool EnableAutoGhostMovement;

    protected internal override void OnEditorInit()
    {
      base.OnEditorInit();
      this._spawnerEditorHelper = new SpawnerEntityEditorHelper((ScriptComponentBehavior) this);
      this._spawnerEditorHelper.LockGhostParent = false;
      if (!this._spawnerEditorHelper.IsValid)
        return;
      this._spawnerEditorHelper.SetupGhostMovement(this.PathEntityName);
    }

    protected internal override void OnEditorTick(float dt)
    {
      base.OnEditorTick(dt);
      this._spawnerEditorHelper.Tick(dt);
    }

    protected internal override void OnEditorVariableChanged(string variableName)
    {
      base.OnEditorVariableChanged(variableName);
      switch (variableName)
      {
        case "PathEntityName":
          this._spawnerEditorHelper.SetupGhostMovement(this.PathEntityName);
          break;
        case "EnableAutoGhostMovement":
          this._spawnerEditorHelper.SetEnableAutoGhostMovement(this.EnableAutoGhostMovement);
          break;
        case "SpeedModifierFactor":
          this.SpeedModifierFactor = MathF.Clamp(this.SpeedModifierFactor, 0.8f, 1.2f);
          break;
      }
    }

    protected internal override bool OnCheckForProblems()
    {
      bool flag = base.OnCheckForProblems();
      if (!this.Scene.IsMultiplayerScene() && (NativeObject) this.Scene.FindEntitiesWithTag("ditch_filler").FirstOrDefault<GameEntity>((Func<GameEntity, bool>) (df => df.HasTag(this.SideTag))) != (NativeObject) null)
      {
        if (this.DitchNavMeshID_1 >= 0 && !this.Scene.IsAnyFaceWithId(this.DitchNavMeshID_1))
        {
          MBEditor.AddEntityWarning(this.GameEntity, "Couldn't find any face with 'DitchNavMeshID_1' id.");
          flag = true;
        }
        if (this.DitchNavMeshID_2 >= 0 && !this.Scene.IsAnyFaceWithId(this.DitchNavMeshID_2))
        {
          MBEditor.AddEntityWarning(this.GameEntity, "Couldn't find any face with 'DitchNavMeshID_2' id.");
          flag = true;
        }
        if (this.GroundToBridgeNavMeshID_1 >= 0 && !this.Scene.IsAnyFaceWithId(this.GroundToBridgeNavMeshID_1))
        {
          MBEditor.AddEntityWarning(this.GameEntity, "Couldn't find any face with 'GroundToBridgeNavMeshID_1' id.");
          flag = true;
        }
        if (this.GroundToBridgeNavMeshID_2 >= 0 && !this.Scene.IsAnyFaceWithId(this.GroundToBridgeNavMeshID_2))
        {
          MBEditor.AddEntityWarning(this.GameEntity, "Couldn't find any face with 'GroundToBridgeNavMeshID_1' id.");
          flag = true;
        }
        if (this.BridgeNavMeshID_1 >= 0 && !this.Scene.IsAnyFaceWithId(this.BridgeNavMeshID_1))
        {
          MBEditor.AddEntityWarning(this.GameEntity, "Couldn't find any face with 'BridgeNavMeshID_1' id.");
          flag = true;
        }
        if (this.BridgeNavMeshID_2 >= 0 && !this.Scene.IsAnyFaceWithId(this.BridgeNavMeshID_2))
        {
          MBEditor.AddEntityWarning(this.GameEntity, "Couldn't find any face with 'BridgeNavMeshID_2' id.");
          flag = true;
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
      BatteringRam firstScriptOfType = _spawnerMissionHelper.SpawnedEntity.GetFirstScriptOfType<BatteringRam>();
      firstScriptOfType.AddOnDeployTag = this.AddOnDeployTag;
      firstScriptOfType.RemoveOnDeployTag = this.RemoveOnDeployTag;
      firstScriptOfType.MaxSpeed *= this.SpeedModifierFactor;
      firstScriptOfType.MinSpeed *= this.SpeedModifierFactor;
      firstScriptOfType.AssignParametersFromSpawner(this.GateTag, this.SideTag, this.BridgeNavMeshID_1, this.BridgeNavMeshID_2, this.DitchNavMeshID_1, this.DitchNavMeshID_2, this.GroundToBridgeNavMeshID_1, this.GroundToBridgeNavMeshID_2, this.PathEntityName);
    }
  }
}

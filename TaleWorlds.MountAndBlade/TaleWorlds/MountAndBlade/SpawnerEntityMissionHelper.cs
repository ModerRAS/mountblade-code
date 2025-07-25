// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.SpawnerEntityMissionHelper
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.Objects.Siege;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class SpawnerEntityMissionHelper
  {
    private const string EnabledSuffix = "_enabled";
    public GameEntity SpawnedEntity;
    private GameEntity _ownerEntity;
    private SpawnerBase _spawner;
    private string _gameEntityName;
    private bool _fireVersion;

    public SpawnerEntityMissionHelper(SpawnerBase spawner, bool fireVersion = false)
    {
      this._spawner = spawner;
      this._fireVersion = fireVersion;
      this._ownerEntity = this._spawner.GameEntity;
      this._gameEntityName = this._ownerEntity.Name;
      if ((NativeObject) this.SpawnPrefab(this._ownerEntity, this.GetPrefabName()) != (NativeObject) null)
        this.SyncMatrixFrames();
      else
        Debug.FailedAssert("Spawner couldn't spawn a proper entity.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Objects\\Siege\\SpawnerEntityMissionHelper.cs", ".ctor", 34);
      this._spawner.AssignParameters(this);
      this.CallSetSpawnedFromSpawnerOfScripts();
    }

    private GameEntity SpawnPrefab(GameEntity parent, string entityName)
    {
      this.SpawnedEntity = GameEntity.Instantiate(parent.Scene, entityName, false);
      this.SpawnedEntity.SetMobility(GameEntity.Mobility.dynamic);
      this.SpawnedEntity.EntityFlags |= EntityFlags.DontSaveToScene;
      parent.AddChild(this.SpawnedEntity);
      MatrixFrame identity = MatrixFrame.Identity;
      this.SpawnedEntity.SetFrame(ref identity);
      foreach (string tag in this._ownerEntity.Tags)
        this.SpawnedEntity.AddTag(tag);
      return this.SpawnedEntity;
    }

    private void RemoveChildEntity(GameEntity child)
    {
      child.CallScriptCallbacks();
      child.Remove(85);
    }

    private void SyncMatrixFrames()
    {
      List<GameEntity> children = new List<GameEntity>();
      this.SpawnedEntity.GetChildrenRecursive(ref children);
      foreach (GameEntity child in children)
      {
        if (SpawnerEntityMissionHelper.HasField((object) this._spawner, child.Name))
        {
          MatrixFrame fieldValue = (MatrixFrame) SpawnerEntityMissionHelper.GetFieldValue((object) this._spawner, child.Name);
          child.SetFrame(ref fieldValue);
        }
        if (SpawnerEntityMissionHelper.HasField((object) this._spawner, child.Name + "_enabled") && !(bool) SpawnerEntityMissionHelper.GetFieldValue((object) this._spawner, child.Name + "_enabled"))
          this.RemoveChildEntity(child);
      }
    }

    private void CallSetSpawnedFromSpawnerOfScripts()
    {
      foreach (GameEntity entityAndChild in this.SpawnedEntity.GetEntityAndChildren())
      {
        foreach (ScriptComponentBehavior componentBehavior in entityAndChild.GetScriptComponents().Where<ScriptComponentBehavior>((Func<ScriptComponentBehavior, bool>) (x => x is ISpawnable)))
          (componentBehavior as ISpawnable).SetSpawnedFromSpawner();
      }
    }

    private string GetPrefabName()
    {
      string prefabName;
      if (this._spawner.ToBeSpawnedOverrideName != "")
        prefabName = this._spawner.ToBeSpawnedOverrideName;
      else
        prefabName = this._gameEntityName.Remove(this._gameEntityName.Length - ((IEnumerable<string>) this._gameEntityName.Split('_')).Last<string>().Length - 1);
      if (this._fireVersion)
        prefabName = !(this._spawner.ToBeSpawnedOverrideNameForFireVersion != "") ? prefabName + "_fire" : this._spawner.ToBeSpawnedOverrideNameForFireVersion;
      return prefabName;
    }

    private static object GetFieldValue(object src, string propName)
    {
      return src.GetType().GetField(propName).GetValue(src);
    }

    private static bool HasField(object obj, string propertyName)
    {
      return obj.GetType().GetField(propertyName) != (FieldInfo) null;
    }
  }
}

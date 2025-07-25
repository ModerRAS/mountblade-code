// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MissionObject
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public abstract class MissionObject : ScriptComponentBehavior
  {
    public const int MaxNavMeshPerDynamicObject = 10;
    [EditableScriptComponentVariable(true)]
    protected string NavMeshPrefabName = "";
    protected int DynamicNavmeshIdStart;

    private Mission Mission => Mission.Current;

    public MissionObjectId Id { get; set; }

    public bool IsDisabled { get; private set; }

    public MissionObject() => this.Id = new MissionObjectId(-1);

    public virtual void SetAbilityOfFaces(bool enabled)
    {
      if (this.DynamicNavmeshIdStart <= 0)
        return;
      this.GameEntity.Scene.SetAbilityOfFacesWithId(this.DynamicNavmeshIdStart + 1, enabled);
      this.GameEntity.Scene.SetAbilityOfFacesWithId(this.DynamicNavmeshIdStart + 2, enabled);
      this.GameEntity.Scene.SetAbilityOfFacesWithId(this.DynamicNavmeshIdStart + 3, enabled);
      this.GameEntity.Scene.SetAbilityOfFacesWithId(this.DynamicNavmeshIdStart + 4, enabled);
      this.GameEntity.Scene.SetAbilityOfFacesWithId(this.DynamicNavmeshIdStart + 5, enabled);
      this.GameEntity.Scene.SetAbilityOfFacesWithId(this.DynamicNavmeshIdStart + 6, enabled);
      this.GameEntity.Scene.SetAbilityOfFacesWithId(this.DynamicNavmeshIdStart + 7, enabled);
    }

    protected internal override void OnInit()
    {
      base.OnInit();
      if (GameNetwork.IsClientOrReplay)
        return;
      this.AttachDynamicNavmeshToEntity();
      this.SetAbilityOfFaces((NativeObject) this.GameEntity != (NativeObject) null && this.GameEntity.IsVisibleIncludeParents());
    }

    protected virtual void AttachDynamicNavmeshToEntity()
    {
      if (this.NavMeshPrefabName.Length <= 0)
        return;
      this.DynamicNavmeshIdStart = Mission.Current.GetNextDynamicNavMeshIdStart();
      this.GameEntity.Scene.ImportNavigationMeshPrefab(this.NavMeshPrefabName, this.DynamicNavmeshIdStart);
      this.GetEntityToAttachNavMeshFaces().AttachNavigationMeshFaces(this.DynamicNavmeshIdStart + 1, false);
      this.GetEntityToAttachNavMeshFaces().AttachNavigationMeshFaces(this.DynamicNavmeshIdStart + 2, true);
      this.GetEntityToAttachNavMeshFaces().AttachNavigationMeshFaces(this.DynamicNavmeshIdStart + 3, true);
      this.GetEntityToAttachNavMeshFaces().AttachNavigationMeshFaces(this.DynamicNavmeshIdStart + 4, false, true);
      this.SetAbilityOfFaces((NativeObject) this.GameEntity != (NativeObject) null && this.GameEntity.GetPhysicsState());
    }

    protected virtual GameEntity GetEntityToAttachNavMeshFaces() => this.GameEntity;

    protected internal override bool OnCheckForProblems()
    {
      base.OnCheckForProblems();
      bool flag1 = false;
      List<GameEntity> children = new List<GameEntity>();
      children.Add(this.GameEntity);
      this.GameEntity.GetChildrenRecursive(ref children);
      bool flag2 = false;
      foreach (GameEntity gameEntity in children)
        flag2 = flag2 || gameEntity.HasPhysicsDefinitionWithoutFlags(1) && !gameEntity.PhysicsDescBodyFlag.HasAnyFlag<BodyFlags>(BodyFlags.CommonCollisionExcludeFlagsForMissile);
      Vec3 scaleVector = this.GameEntity.GetGlobalFrame().rotation.GetScaleVector();
      bool flag3 = (double) MathF.Abs(scaleVector.x - scaleVector.y) >= 0.0099999997764825821 || (double) MathF.Abs(scaleVector.x - scaleVector.z) >= 0.0099999997764825821;
      if (flag2 & flag3)
      {
        MBEditor.AddEntityWarning(this.GameEntity, "Mission object has non-uniform scale and physics object. This is not supported because any attached focusable item to this mesh will not work within this configuration.");
        flag1 = true;
      }
      return flag1;
    }

    protected internal override void OnPreInit()
    {
      base.OnPreInit();
      if (this.Mission != null)
      {
        int id = -1;
        bool createdAtRuntime;
        if (this.Mission.IsLoadingFinished)
        {
          createdAtRuntime = true;
          if (!GameNetwork.IsClientOrReplay)
            id = this.Mission.GetFreeRuntimeMissionObjectId();
        }
        else
        {
          createdAtRuntime = false;
          id = this.Mission.GetFreeSceneMissionObjectId();
        }
        this.Id = new MissionObjectId(id, createdAtRuntime);
        this.Mission.AddActiveMissionObject(this);
      }
      this.GameEntity.SetAsReplayEntity();
    }

    public override int GetHashCode() => this.Id.GetHashCode();

    protected internal virtual void OnMissionReset()
    {
    }

    public virtual void AfterMissionStart()
    {
    }

    public virtual void OnMissionEnded()
    {
    }

    protected internal virtual bool OnHit(
      Agent attackerAgent,
      int damage,
      Vec3 impactPosition,
      Vec3 impactDirection,
      in MissionWeapon weapon,
      ScriptComponentBehavior attackerScriptComponentBehavior,
      out bool reportDamage)
    {
      reportDamage = false;
      return false;
    }

    public void SetDisabled(bool isParentObject = false)
    {
      if (!GameNetwork.IsClientOrReplay)
        this.SetAbilityOfFaces(false);
      if (isParentObject && (NativeObject) this.GameEntity != (NativeObject) null)
      {
        List<GameEntity> children = new List<GameEntity>();
        this.GameEntity.GetChildrenRecursive(ref children);
        foreach (MissionObject missionObject in children.SelectMany<GameEntity, ScriptComponentBehavior>((Func<GameEntity, IEnumerable<ScriptComponentBehavior>>) (ac => ac.GetScriptComponents())).Where<ScriptComponentBehavior>((Func<ScriptComponentBehavior, bool>) (sc => sc is MissionObject)).Select<ScriptComponentBehavior, MissionObject>((Func<ScriptComponentBehavior, MissionObject>) (sc => sc as MissionObject)))
          missionObject.SetDisabled();
      }
      Mission.Current.DeactivateMissionObject(this);
      this.IsDisabled = true;
    }

    public void SetDisabledAndMakeInvisible(bool isParentObject = false)
    {
      if (isParentObject && (NativeObject) this.GameEntity != (NativeObject) null)
      {
        List<GameEntity> children = new List<GameEntity>();
        this.GameEntity.GetChildrenRecursive(ref children);
        foreach (MissionObject missionObject in children.SelectMany<GameEntity, ScriptComponentBehavior>((Func<GameEntity, IEnumerable<ScriptComponentBehavior>>) (ac => ac.GetScriptComponents())).Where<ScriptComponentBehavior>((Func<ScriptComponentBehavior, bool>) (sc => sc is MissionObject)).Select<ScriptComponentBehavior, MissionObject>((Func<ScriptComponentBehavior, MissionObject>) (sc => sc as MissionObject)))
          missionObject.SetDisabledAndMakeInvisible();
      }
      Mission.Current.DeactivateMissionObject(this);
      this.IsDisabled = true;
      if (!((NativeObject) this.GameEntity != (NativeObject) null))
        return;
      this.GameEntity.SetVisibilityExcludeParents(false);
      this.SetScriptComponentToTick(this.GetTickRequirement());
    }

    protected override void OnRemoved(int removeReason)
    {
      base.OnRemoved(removeReason);
      if (!GameNetwork.IsClientOrReplay)
        this.SetAbilityOfFaces(false);
      if (this.Mission == null)
        return;
      this.Mission.OnMissionObjectRemoved(this, removeReason);
    }

    public virtual void OnEndMission()
    {
    }

    public bool CreatedAtRuntime => this.Id.CreatedAtRuntime;

    protected internal override bool MovesEntity() => true;

    public virtual void AddStuckMissile(GameEntity missileEntity)
    {
      this.GameEntity.AddChild(missileEntity);
    }

    protected enum DynamicNavmeshLocalIds
    {
      Inside = 1,
      Enter = 2,
      Exit = 3,
      Blocker = 4,
      Extra1 = 5,
      Extra2 = 6,
      Extra3 = 7,
      Reserved1 = 8,
      Reserved2 = 9,
      Count = 10, // 0x0000000A
    }
  }
}

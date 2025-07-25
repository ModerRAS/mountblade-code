// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.DestructableComponent
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using NetworkMessages.FromServer;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class DestructableComponent : SynchedMissionObject, IFocusable
  {
    public const string CleanStateTag = "operational";
    public static float MaxBlowMagnitude = 20f;
    public string DestructionStates;
    public bool DestroyedByStoneOnly;
    public bool CanBeDestroyedInitially = true;
    public float MaxHitPoint = 100f;
    public bool DestroyOnAnyHit;
    public bool PassHitOnToParent;
    public string ReferenceEntityTag;
    public string HeavyHitParticlesTag;
    public float HeavyHitParticlesThreshold = 5f;
    public string ParticleEffectOnDestroy = "";
    public string SoundEffectOnDestroy = "";
    public float SoundAndParticleEffectHeightOffset;
    public float SoundAndParticleEffectForwardOffset;
    public BattleSideEnum BattleSide = BattleSideEnum.None;
    [EditableScriptComponentVariable(false)]
    public Func<int, int, int, int> OnCalculateDestructionStateIndex;
    private float _hitPoint;
    private string OriginalStateTag = "operational";
    private GameEntity _referenceEntity;
    private GameEntity _previousState;
    private GameEntity _originalState;
    private string[] _destructionStates;
    private int _currentStateIndex;
    private IEnumerable<GameEntity> _heavyHitParticles;

    public event Action OnNextDestructionState;

    public event DestructableComponent.OnHitTakenAndDestroyedDelegate OnDestroyed;

    public event DestructableComponent.OnHitTakenAndDestroyedDelegate OnHitTaken;

    public float HitPoint
    {
      get => this._hitPoint;
      set
      {
        if (this._hitPoint.Equals(value))
          return;
        this._hitPoint = MathF.Max(value, 0.0f);
        if (!GameNetwork.IsServerOrRecorder)
          return;
        GameNetwork.BeginBroadcastModuleEvent();
        GameNetwork.WriteMessage((GameNetworkMessage) new SyncObjectHitpoints(this.Id, value));
        GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.AddToMissionRecord);
      }
    }

    public FocusableObjectType FocusableObjectType => FocusableObjectType.None;

    public bool IsDestroyed => (double) this.HitPoint <= 0.0;

    public GameEntity CurrentState { get; private set; }

    private bool HasDestructionState
    {
      get
      {
        return this._destructionStates != null && !((IEnumerable<string>) this._destructionStates).IsEmpty<string>();
      }
    }

    private DestructableComponent()
    {
    }

    protected internal override void OnInit()
    {
      base.OnInit();
      this._hitPoint = this.MaxHitPoint;
      this._referenceEntity = string.IsNullOrEmpty(this.ReferenceEntityTag) ? this.GameEntity : this.GameEntity.GetChildren().FirstOrDefault<GameEntity>((Func<GameEntity, bool>) (x => x.HasTag(this.ReferenceEntityTag)));
      if (!string.IsNullOrEmpty(this.DestructionStates))
      {
        this._destructionStates = this.DestructionStates.Replace(" ", string.Empty).Split(',');
        bool flag = false;
        foreach (string destructionState in this._destructionStates)
        {
          string item = destructionState;
          if (!string.IsNullOrEmpty(item))
          {
            GameEntity gameEntity1 = this.GameEntity.GetChildren().FirstOrDefault<GameEntity>((Func<GameEntity, bool>) (x => x.Name == item));
            if ((NativeObject) gameEntity1 != (NativeObject) null)
            {
              gameEntity1.AddBodyFlags(BodyFlags.Moveable);
              PhysicsShape bodyShape = gameEntity1.GetBodyShape();
              if ((NativeObject) bodyShape != (NativeObject) null)
              {
                PhysicsShape.AddPreloadQueueWithName(bodyShape.GetName(), gameEntity1.GetGlobalScale());
                flag = true;
              }
            }
            else
            {
              GameEntity gameEntity2 = GameEntity.Instantiate((Scene) null, item, false);
              List<GameEntity> children = new List<GameEntity>();
              gameEntity2.GetChildrenRecursive(ref children);
              children.Add(gameEntity2);
              foreach (GameEntity gameEntity3 in children)
              {
                PhysicsShape bodyShape = gameEntity3.GetBodyShape();
                if ((NativeObject) bodyShape != (NativeObject) null)
                {
                  Vec3 globalScale1 = gameEntity3.GetGlobalScale();
                  Vec3 globalScale2 = this._referenceEntity.GetGlobalScale();
                  Vec3 scale = new Vec3(globalScale1.x * globalScale2.x, globalScale1.y * globalScale2.y, globalScale1.z * globalScale2.z);
                  PhysicsShape.AddPreloadQueueWithName(bodyShape.GetName(), scale);
                  flag = true;
                }
              }
            }
          }
        }
        if (flag)
          PhysicsShape.ProcessPreloadQueue();
      }
      this._originalState = this.GetOriginalState(this.GameEntity);
      if ((NativeObject) this._originalState == (NativeObject) null)
        this._originalState = this.GameEntity;
      this.CurrentState = this._originalState;
      this._originalState.AddBodyFlags(BodyFlags.Moveable);
      List<GameEntity> children1 = new List<GameEntity>();
      this.GameEntity.GetChildrenRecursive(ref children1);
      foreach (GameEntity gameEntity in children1.Where<GameEntity>((Func<GameEntity, bool>) (child => child.BodyFlag.HasAnyFlag<BodyFlags>(BodyFlags.Dynamic))))
      {
        gameEntity.SetPhysicsState(false, true);
        gameEntity.SetFrameChanged();
      }
      this._heavyHitParticles = (IEnumerable<GameEntity>) this.GameEntity.CollectChildrenEntitiesWithTag(this.HeavyHitParticlesTag);
      this.GameEntity.SetAnimationSoundActivation(true);
    }

    public GameEntity GetOriginalState(GameEntity parent)
    {
      int childCount = parent.ChildCount;
      for (int index = 0; index < childCount; ++index)
      {
        GameEntity child = parent.GetChild(index);
        if (!child.HasScriptOfType<DestructableComponent>())
        {
          if (child.HasTag(this.OriginalStateTag))
            return child;
          GameEntity originalState = this.GetOriginalState(child);
          if ((NativeObject) originalState != (NativeObject) null)
            return originalState;
        }
      }
      return (GameEntity) null;
    }

    protected internal override void OnEditorInit()
    {
      base.OnEditorInit();
      this._referenceEntity = string.IsNullOrEmpty(this.ReferenceEntityTag) ? this.GameEntity : this.GameEntity.GetChildren().FirstOrDefault<GameEntity>((Func<GameEntity, bool>) (x => x.HasTag(this.ReferenceEntityTag)));
    }

    protected internal override void OnEditorVariableChanged(string variableName)
    {
      base.OnEditorVariableChanged(variableName);
      if (!variableName.Equals(this.ReferenceEntityTag))
        return;
      this._referenceEntity = string.IsNullOrEmpty(this.ReferenceEntityTag) ? this.GameEntity : this.GameEntity.GetChildren().SingleOrDefault<GameEntity>((Func<GameEntity, bool>) (x => x.HasTag(this.ReferenceEntityTag)));
    }

    protected internal override void OnMissionReset()
    {
      base.OnMissionReset();
      this.Reset();
    }

    public void Reset()
    {
      this.RestoreEntity();
      this._hitPoint = this.MaxHitPoint;
      this._currentStateIndex = 0;
    }

    private void RestoreEntity()
    {
      if (this._destructionStates != null)
      {
        for (int i = 0; i < this._destructionStates.Length; i++)
        {
          GameEntity gameEntity = this.GameEntity.GetChildren().FirstOrDefault<GameEntity>((Func<GameEntity, bool>) (x => x.Name == this._destructionStates[i].ToString()));
          if (gameEntity != null)
          {
            Skeleton skeleton = gameEntity.Skeleton;
            if (skeleton != null)
              skeleton.SetAnimationAtChannel(-1, 0);
          }
        }
      }
      if ((NativeObject) this.CurrentState != (NativeObject) this._originalState)
      {
        this.CurrentState.SetVisibilityExcludeParents(false);
        this.CurrentState = this._originalState;
      }
      this.CurrentState.SetVisibilityExcludeParents(true);
      this.CurrentState.SetPhysicsState(true, true);
      this.CurrentState.SetFrameChanged();
    }

    protected internal override void OnEditorTick(float dt)
    {
      base.OnEditorTick(dt);
      if (!((NativeObject) this._referenceEntity != (NativeObject) null) || !((NativeObject) this._referenceEntity != (NativeObject) this.GameEntity) || !MBEditor.IsEntitySelected(this._referenceEntity))
        return;
      Vec3 vec3_1 = new Vec3(-2f, -0.5f, -1f);
      Vec3 vec3_2 = new Vec3(2f, 0.5f, 1f);
      MatrixFrame identity = MatrixFrame.Identity;
      GameEntity gameEntity = this._referenceEntity;
      while ((NativeObject) gameEntity.Parent != (NativeObject) null)
        gameEntity = gameEntity.Parent;
      gameEntity.GetMeshBendedFrame(this._referenceEntity.GetGlobalFrame(), ref identity);
    }

    public void TriggerOnHit(
      Agent attackerAgent,
      int inflictedDamage,
      Vec3 impactPosition,
      Vec3 impactDirection,
      in MissionWeapon weapon,
      ScriptComponentBehavior attackerScriptComponentBehavior)
    {
      this.OnHit(attackerAgent, inflictedDamage, impactPosition, impactDirection, in weapon, attackerScriptComponentBehavior, out bool _);
    }

    protected internal override bool OnHit(
      Agent attackerAgent,
      int inflictedDamage,
      Vec3 impactPosition,
      Vec3 impactDirection,
      in MissionWeapon weapon,
      ScriptComponentBehavior attackerScriptComponentBehavior,
      out bool reportDamage)
    {
      reportDamage = false;
      if (this.IsDisabled)
        return true;
      if (weapon.IsEmpty && !(attackerScriptComponentBehavior is BatteringRam))
        inflictedDamage = 0;
      else if (this.DestroyedByStoneOnly)
      {
        WeaponComponentData currentUsageItem = weapon.CurrentUsageItem;
        if (currentUsageItem.WeaponClass != WeaponClass.Stone && currentUsageItem.WeaponClass != WeaponClass.Boulder || !currentUsageItem.WeaponFlags.HasAnyFlag<WeaponFlags>(WeaponFlags.NotUsableWithOneHand))
          inflictedDamage = 0;
      }
      bool isDestroyed = this.IsDestroyed;
      if (this.DestroyOnAnyHit)
        inflictedDamage = (int) ((double) this.MaxHitPoint + 1.0);
      if (inflictedDamage > 0 && !isDestroyed)
      {
        this.HitPoint -= (float) inflictedDamage;
        if ((double) inflictedDamage > (double) this.HeavyHitParticlesThreshold)
          this.BurstHeavyHitParticles();
        int destructionLevel = this.CalculateNextDestructionLevel(inflictedDamage);
        if (!this.IsDestroyed)
        {
          DestructableComponent.OnHitTakenAndDestroyedDelegate onHitTaken = this.OnHitTaken;
          if (onHitTaken != null)
            onHitTaken(this, attackerAgent, in weapon, attackerScriptComponentBehavior, inflictedDamage);
        }
        else if (this.IsDestroyed && !isDestroyed)
        {
          Mission.Current.OnObjectDisabled(this);
          DestructableComponent.OnHitTakenAndDestroyedDelegate onHitTaken = this.OnHitTaken;
          if (onHitTaken != null)
            onHitTaken(this, attackerAgent, in weapon, attackerScriptComponentBehavior, inflictedDamage);
          DestructableComponent.OnHitTakenAndDestroyedDelegate onDestroyed = this.OnDestroyed;
          if (onDestroyed != null)
            onDestroyed(this, attackerAgent, in weapon, attackerScriptComponentBehavior, inflictedDamage);
          MatrixFrame globalFrame = this.GameEntity.GetGlobalFrame();
          globalFrame.origin += globalFrame.rotation.u * this.SoundAndParticleEffectHeightOffset + globalFrame.rotation.f * this.SoundAndParticleEffectForwardOffset;
          globalFrame.rotation.Orthonormalize();
          if (this.ParticleEffectOnDestroy != "")
            Mission.Current.Scene.CreateBurstParticle(ParticleSystemManager.GetRuntimeIdByName(this.ParticleEffectOnDestroy), globalFrame);
          if (this.SoundEffectOnDestroy != "")
            Mission.Current.MakeSound(SoundEvent.GetEventIdFromString(this.SoundEffectOnDestroy), globalFrame.origin, false, true, attackerAgent != null ? attackerAgent.Index : -1, -1);
        }
        this.SetDestructionLevel(destructionLevel, -1, (float) inflictedDamage, impactPosition, impactDirection);
        reportDamage = true;
      }
      return !this.PassHitOnToParent;
    }

    public void BurstHeavyHitParticles()
    {
      foreach (GameEntity heavyHitParticle in this._heavyHitParticles)
        heavyHitParticle.BurstEntityParticle(false);
      if (!GameNetwork.IsServerOrRecorder)
        return;
      GameNetwork.BeginBroadcastModuleEvent();
      GameNetwork.WriteMessage((GameNetworkMessage) new BurstAllHeavyHitParticles(this.Id));
      GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.AddToMissionRecord);
    }

    private int CalculateNextDestructionLevel(int inflictedDamage)
    {
      if (this.HasDestructionState)
      {
        float num1 = this.MaxHitPoint / (float) this._destructionStates.Length;
        float maxHitPoint = this.MaxHitPoint;
        int num2 = 0;
        while ((double) maxHitPoint - (double) num1 >= (double) this.HitPoint)
        {
          maxHitPoint -= num1;
          ++num2;
        }
        Func<int, int, int, int> destructionStateIndex = this.OnCalculateDestructionStateIndex;
        return destructionStateIndex != null ? destructionStateIndex(num2, inflictedDamage, this.DestructionStates.Length) : num2;
      }
      return this.IsDestroyed ? this._currentStateIndex + 1 : this._currentStateIndex;
    }

    public void SetDestructionLevel(
      int state,
      int forcedId,
      float blowMagnitude,
      Vec3 blowPosition,
      Vec3 blowDirection,
      bool noEffects = false)
    {
      if (this._currentStateIndex == state)
        return;
      float blowMagnitude1 = MBMath.ClampFloat(blowMagnitude, 1f, DestructableComponent.MaxBlowMagnitude);
      this._currentStateIndex = state;
      this.ReplaceEntityWithBrokenEntity(forcedId);
      if ((NativeObject) this.CurrentState != (NativeObject) null)
      {
        foreach (GameEntity gameEntity in this.CurrentState.GetChildren().Where<GameEntity>((Func<GameEntity, bool>) (child => child.BodyFlag.HasAnyFlag<BodyFlags>(BodyFlags.Dynamic))))
        {
          gameEntity.SetPhysicsState(true, true);
          gameEntity.SetFrameChanged();
        }
        if (!GameNetwork.IsDedicatedServer && !noEffects)
        {
          this.CurrentState.BurstEntityParticle(true);
          this.ApplyPhysics(blowMagnitude1, blowPosition, blowDirection);
        }
        Action destructionState = this.OnNextDestructionState;
        if (destructionState != null)
          destructionState();
      }
      if (!GameNetwork.IsServerOrRecorder)
        return;
      if ((NativeObject) this.CurrentState != (NativeObject) null)
      {
        MissionObject firstScriptOfType = this.CurrentState.GetFirstScriptOfType<MissionObject>();
        if (firstScriptOfType != null)
          forcedId = firstScriptOfType.Id.Id;
      }
      GameNetwork.BeginBroadcastModuleEvent();
      GameNetwork.WriteMessage((GameNetworkMessage) new SyncObjectDestructionLevel(this.Id, state, forcedId, blowMagnitude1, blowPosition, blowDirection));
      GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.AddToMissionRecord);
    }

    private void ApplyPhysics(float blowMagnitude, Vec3 blowPosition, Vec3 blowDirection)
    {
      if (!((NativeObject) this.CurrentState != (NativeObject) null))
        return;
      IEnumerable<GameEntity> source = this.CurrentState.GetChildren().Where<GameEntity>((Func<GameEntity, bool>) (child => child.HasBody() && child.BodyFlag.HasAnyFlag<BodyFlags>(BodyFlags.Dynamic) && !child.HasScriptOfType<SpawnedItemEntity>()));
      int num1 = source.Count<GameEntity>();
      float num2 = num1 > 1 ? blowMagnitude / (float) num1 : blowMagnitude;
      foreach (GameEntity gameEntity in source)
      {
        gameEntity.ApplyLocalImpulseToDynamicBody(Vec3.Zero, blowDirection * num2);
        Mission.Current.AddTimerToDynamicEntity(gameEntity, (float) (10.0 + (double) MBRandom.RandomFloat * 2.0));
      }
    }

    private void ReplaceEntityWithBrokenEntity(int forcedId)
    {
      this._previousState = this.CurrentState;
      this._previousState.SetVisibilityExcludeParents(false);
      if (!this.HasDestructionState)
        return;
      bool newCreated;
      this.CurrentState = this.AddBrokenEntity(this._destructionStates[this._currentStateIndex - 1], out newCreated);
      if (newCreated)
      {
        if ((NativeObject) this._originalState != (NativeObject) this.GameEntity)
          this.GameEntity.AddChild(this.CurrentState, true);
        if (forcedId == -1)
          return;
        MissionObject firstScriptOfType1 = this.CurrentState.GetFirstScriptOfType<MissionObject>();
        if (firstScriptOfType1 != null)
        {
          firstScriptOfType1.Id = new MissionObjectId(forcedId, true);
          foreach (GameEntity child in this.CurrentState.GetChildren())
          {
            MissionObject firstScriptOfType2 = child.GetFirstScriptOfType<MissionObject>();
            if (firstScriptOfType2 != null && firstScriptOfType2.Id.CreatedAtRuntime)
              firstScriptOfType2.Id = new MissionObjectId(++forcedId, true);
          }
        }
        else
          MBDebug.ShowWarning("Current destruction state doesn't have mission object script component.");
      }
      else
      {
        MatrixFrame frame = this._previousState.GetFrame();
        this.CurrentState.SetFrame(ref frame);
      }
    }

    protected internal override bool MovesEntity() => true;

    public void PreDestroy()
    {
      DestructableComponent.OnHitTakenAndDestroyedDelegate onDestroyed = this.OnDestroyed;
      if (onDestroyed != null)
        onDestroyed(this, (Agent) null, in MissionWeapon.Invalid, (ScriptComponentBehavior) null, 0);
      this.SetVisibleSynched(false, true);
    }

    private GameEntity AddBrokenEntity(string prefab, out bool newCreated)
    {
      if (!string.IsNullOrEmpty(prefab))
      {
        GameEntity gameEntity = this.GameEntity.GetChildren().FirstOrDefault<GameEntity>((Func<GameEntity, bool>) (x => x.Name == prefab));
        if ((NativeObject) gameEntity != (NativeObject) null)
        {
          gameEntity.SetVisibilityExcludeParents(true);
          if (!GameNetwork.IsClientOrReplay)
            gameEntity.GetScriptComponents<MissionObject>().FirstOrDefault<MissionObject>()?.SetAbilityOfFaces(true);
          newCreated = false;
        }
        else
        {
          gameEntity = GameEntity.Instantiate(Mission.Current.Scene, prefab, this._referenceEntity.GetGlobalFrame());
          if ((NativeObject) gameEntity != (NativeObject) null)
            gameEntity.SetMobility(GameEntity.Mobility.stationary);
          if ((NativeObject) this.GameEntity.Parent != (NativeObject) null)
            this.GameEntity.Parent.AddChild(gameEntity, true);
          newCreated = true;
        }
        if ((NativeObject) this._referenceEntity.Skeleton != (NativeObject) null && (NativeObject) gameEntity.Skeleton != (NativeObject) null)
        {
          Skeleton skeleton = ((NativeObject) this.CurrentState != (NativeObject) this._originalState ? this.CurrentState : this._referenceEntity).Skeleton;
          int animationIndexAtChannel = skeleton.GetAnimationIndexAtChannel(0);
          float parameterAtChannel = skeleton.GetAnimationParameterAtChannel(0);
          if (animationIndexAtChannel != -1)
          {
            gameEntity.Skeleton.SetAnimationAtChannel(animationIndexAtChannel, 0, startProgress: parameterAtChannel);
            gameEntity.ResumeSkeletonAnimation();
          }
        }
        return gameEntity;
      }
      newCreated = false;
      return (GameEntity) null;
    }

    public override void WriteToNetwork()
    {
      base.WriteToNetwork();
      GameNetworkMessage.WriteFloatToPacket(MathF.Max(this.HitPoint, 0.0f), CompressionMission.UsableGameObjectHealthCompressionInfo);
      GameNetworkMessage.WriteIntToPacket(this._currentStateIndex, CompressionMission.UsableGameObjectDestructionStateCompressionInfo);
      if (this._currentStateIndex == 0)
        return;
      MissionObject firstScriptOfType = this.CurrentState.GetFirstScriptOfType<MissionObject>();
      GameNetworkMessage.WriteBoolToPacket(firstScriptOfType != null);
      if (firstScriptOfType == null)
        return;
      GameNetworkMessage.WriteMissionObjectIdToPacket(firstScriptOfType.Id);
    }

    public override void AddStuckMissile(GameEntity missileEntity)
    {
      if ((NativeObject) this.CurrentState != (NativeObject) null)
        this.CurrentState.AddChild(missileEntity);
      else
        this.GameEntity.AddChild(missileEntity);
    }

    protected internal override bool OnCheckForProblems()
    {
      bool flag = base.OnCheckForProblems();
      if ((string.IsNullOrEmpty(this.ReferenceEntityTag) ? (NativeObject) this.GameEntity : (NativeObject) this.GameEntity.GetChildren().FirstOrDefault<GameEntity>((Func<GameEntity, bool>) (x => x.HasTag(this.ReferenceEntityTag)))) == (NativeObject) null)
      {
        MBEditor.AddEntityWarning(this.GameEntity, "Reference entity must be assigned. Root entity is " + this.GameEntity.Root.Name + ", child is " + this.GameEntity.Name);
        flag = true;
      }
      string str1 = this.DestructionStates.Replace(" ", string.Empty);
      char[] chArray = new char[1]{ ',' };
      foreach (string str2 in str1.Split(chArray))
      {
        string destructionState = str2;
        if (!string.IsNullOrEmpty(destructionState) && !((NativeObject) this.GameEntity.GetChildren().FirstOrDefault<GameEntity>((Func<GameEntity, bool>) (x => x.Name == destructionState)) != (NativeObject) null) && (NativeObject) GameEntity.Instantiate((Scene) null, destructionState, false) == (NativeObject) null)
        {
          MBEditor.AddEntityWarning(this.GameEntity, "Destruction state '" + destructionState + "' is not valid.");
          flag = true;
        }
      }
      return flag;
    }

    public void OnFocusGain(Agent userAgent)
    {
    }

    public void OnFocusLose(Agent userAgent)
    {
    }

    public TextObject GetInfoTextForBeingNotInteractable(Agent userAgent) => new TextObject();

    public string GetDescriptionText(GameEntity gameEntity = null)
    {
      int result;
      if (int.TryParse(((IEnumerable<string>) gameEntity.Name.Split('_')).Last<string>(), out result))
      {
        string name = gameEntity.Name;
        string variation = name.Remove(name.Length - result.ToString().Length) + "x";
        TextObject textObject;
        return GameTexts.TryGetText("str_destructible_component", out textObject, variation) ? textObject.ToString() : "";
      }
      TextObject textObject1;
      return GameTexts.TryGetText("str_destructible_component", out textObject1, gameEntity.Name) ? textObject1.ToString() : "";
    }

    public override void OnAfterReadFromNetwork(
      (BaseSynchedMissionObjectReadableRecord, ISynchedMissionObjectReadableRecord) synchedMissionObjectReadableRecord)
    {
      base.OnAfterReadFromNetwork(synchedMissionObjectReadableRecord);
      DestructableComponent.DestructableComponentRecord destructableComponentRecord = (DestructableComponent.DestructableComponentRecord) synchedMissionObjectReadableRecord.Item2;
      this.HitPoint = destructableComponentRecord.HitPoint;
      if (destructableComponentRecord.DestructionState == 0)
        return;
      if (this.IsDestroyed)
      {
        DestructableComponent.OnHitTakenAndDestroyedDelegate onDestroyed = this.OnDestroyed;
        if (onDestroyed != null)
          onDestroyed(this, (Agent) null, in MissionWeapon.Invalid, (ScriptComponentBehavior) null, 0);
      }
      this.SetDestructionLevel(destructableComponentRecord.DestructionState, destructableComponentRecord.ForceIndex, 0.0f, Vec3.Zero, Vec3.Zero, true);
    }

    [DefineSynchedMissionObjectType(typeof (DestructableComponent))]
    public struct DestructableComponentRecord : ISynchedMissionObjectReadableRecord
    {
      public float HitPoint { get; private set; }

      public int DestructionState { get; private set; }

      public int ForceIndex { get; private set; }

      public bool IsMissionObject { get; private set; }

      public DestructableComponentRecord(
        float hitPoint,
        int destructionState,
        int forceIndex,
        bool isMissionObject)
      {
        this.HitPoint = hitPoint;
        this.DestructionState = destructionState;
        this.ForceIndex = forceIndex;
        this.IsMissionObject = isMissionObject;
      }

      public bool ReadFromNetwork(ref bool bufferReadValid)
      {
        this.HitPoint = GameNetworkMessage.ReadFloatFromPacket(CompressionMission.UsableGameObjectHealthCompressionInfo, ref bufferReadValid);
        this.DestructionState = GameNetworkMessage.ReadIntFromPacket(CompressionMission.UsableGameObjectDestructionStateCompressionInfo, ref bufferReadValid);
        this.ForceIndex = -1;
        if (this.DestructionState != 0)
        {
          this.IsMissionObject = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
          if (this.IsMissionObject)
            this.ForceIndex = GameNetworkMessage.ReadMissionObjectIdFromPacket(ref bufferReadValid).Id;
        }
        return bufferReadValid;
      }
    }

    public delegate void OnHitTakenAndDestroyedDelegate(
      DestructableComponent target,
      Agent attackerAgent,
      in MissionWeapon weapon,
      ScriptComponentBehavior attackerScriptComponentBehavior,
      int inflictedDamage);
  }
}

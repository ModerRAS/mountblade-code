// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.SynchedMissionObject
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using NetworkMessages.FromServer;
using System;
using System.Collections.Generic;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class SynchedMissionObject : MissionObject
  {
    private SynchedMissionObject.SynchFlags _initialSynchFlags;
    private SynchedMissionObject.SynchState _synchState;
    private MatrixFrame _lastSynchedFrame;
    private MatrixFrame _firstFrame;
    private float _timer;
    private float _duration;

    public uint Color { get; private set; }

    public uint Color2 { get; private set; }

    public bool SynchronizeCompleted
    {
      get => this._synchState == SynchedMissionObject.SynchState.SynchronizeCompleted;
    }

    protected internal override void OnInit()
    {
      base.OnInit();
      this.SetScriptComponentToTick(this.GetTickRequirement());
    }

    public override ScriptComponentBehavior.TickRequirement GetTickRequirement()
    {
      return !this.SynchronizeCompleted ? ScriptComponentBehavior.TickRequirement.Tick | base.GetTickRequirement() : base.GetTickRequirement();
    }

    protected internal override void OnTick(float dt)
    {
      if (this.SynchronizeCompleted)
        return;
      MatrixFrame frame1 = this.GameEntity.GetFrame();
      if (this._synchState == SynchedMissionObject.SynchState.SynchronizePosition && this._lastSynchedFrame.origin.NearlyEquals(frame1.origin) || this._lastSynchedFrame.NearlyEquals(frame1))
      {
        this.SetSynchState(SynchedMissionObject.SynchState.SynchronizeCompleted);
      }
      else
      {
        MatrixFrame frame2;
        frame2.origin = this._synchState == SynchedMissionObject.SynchState.SynchronizeFrameOverTime ? MBMath.Lerp(this._firstFrame.origin, this._lastSynchedFrame.origin, this._timer / this._duration, 0.2f * dt) : MBMath.Lerp(frame1.origin, this._lastSynchedFrame.origin, 8f * dt, 0.2f * dt);
        if (this._synchState == SynchedMissionObject.SynchState.SynchronizeFrame || this._synchState == SynchedMissionObject.SynchState.SynchronizeFrameOverTime)
        {
          frame2.rotation.s = MBMath.Lerp(frame1.rotation.s, this._lastSynchedFrame.rotation.s, 8f * dt, 0.2f * dt);
          frame2.rotation.f = MBMath.Lerp(frame1.rotation.f, this._lastSynchedFrame.rotation.f, 8f * dt, 0.2f * dt);
          frame2.rotation.u = MBMath.Lerp(frame1.rotation.u, this._lastSynchedFrame.rotation.u, 8f * dt, 0.2f * dt);
          if (frame2.origin != this._lastSynchedFrame.origin || frame2.rotation.s != this._lastSynchedFrame.rotation.s || frame2.rotation.f != this._lastSynchedFrame.rotation.f || frame2.rotation.u != this._lastSynchedFrame.rotation.u)
          {
            frame2.rotation.Orthonormalize();
            if (this._lastSynchedFrame.rotation.HasScale())
              frame2.rotation.ApplyScaleLocal(this._lastSynchedFrame.rotation.GetScaleVector());
          }
          this.GameEntity.SetFrame(ref frame2);
        }
        else
          this.GameEntity.SetLocalPosition(frame2.origin);
        this._timer = MathF.Min(this._timer + dt, this._duration);
      }
    }

    private void SetSynchState(SynchedMissionObject.SynchState newState)
    {
      if (newState == this._synchState)
        return;
      this._synchState = newState;
      this.SetScriptComponentToTick(this.GetTickRequirement());
    }

    public void SetLocalPositionSmoothStep(ref Vec3 targetPosition)
    {
      this._lastSynchedFrame.origin = targetPosition;
      this.SetSynchState(SynchedMissionObject.SynchState.SynchronizePosition);
    }

    public virtual void SetVisibleSynched(bool value, bool forceChildrenVisible = false)
    {
      bool flag = this.GameEntity.IsVisibleIncludeParents() != value;
      List<GameEntity> children = (List<GameEntity>) null;
      if (!flag & forceChildrenVisible)
      {
        children = new List<GameEntity>();
        this.GameEntity.GetChildrenRecursive(ref children);
        foreach (GameEntity gameEntity in children)
        {
          if (gameEntity.GetPhysicsState() != value)
          {
            flag = true;
            break;
          }
        }
      }
      if (!((NativeObject) this.GameEntity != (NativeObject) null & flag))
        return;
      if (GameNetwork.IsServerOrRecorder)
      {
        GameNetwork.BeginBroadcastModuleEvent();
        GameNetwork.WriteMessage((GameNetworkMessage) new SetMissionObjectVisibility(this.Id, value));
        GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.AddToMissionRecord);
      }
      this.GameEntity.SetVisibilityExcludeParents(value);
      if (!forceChildrenVisible)
        return;
      if (children == null)
      {
        children = new List<GameEntity>();
        this.GameEntity.GetChildrenRecursive(ref children);
      }
      foreach (GameEntity gameEntity in children)
        gameEntity.SetVisibilityExcludeParents(value);
    }

    public virtual void SetPhysicsStateSynched(bool value, bool setChildren = true)
    {
    }

    public virtual void SetDisabledSynched()
    {
      if (GameNetwork.IsServerOrRecorder)
      {
        GameNetwork.BeginBroadcastModuleEvent();
        GameNetwork.WriteMessage((GameNetworkMessage) new SetMissionObjectDisabled(this.Id));
        GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.AddToMissionRecord);
      }
      this.SetDisabledAndMakeInvisible();
    }

    public void SetFrameSynched(ref MatrixFrame frame, bool isClient = false)
    {
      if (!(this.GameEntity.GetFrame() != frame) && this._synchState == SynchedMissionObject.SynchState.SynchronizeCompleted)
        return;
      this._duration = 0.0f;
      this._timer = 0.0f;
      if (GameNetwork.IsClientOrReplay)
      {
        this._lastSynchedFrame = frame;
        this.SetSynchState(SynchedMissionObject.SynchState.SynchronizeFrame);
      }
      else
      {
        if (GameNetwork.IsServerOrRecorder)
        {
          GameNetwork.BeginBroadcastModuleEvent();
          GameNetwork.WriteMessage((GameNetworkMessage) new SetMissionObjectFrame(this.Id, ref frame));
          GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.AddToMissionRecord);
        }
        this.SetSynchState(SynchedMissionObject.SynchState.SynchronizeCompleted);
        this.GameEntity.SetFrame(ref frame);
        this._initialSynchFlags |= SynchedMissionObject.SynchFlags.SynchTransform;
      }
    }

    public void SetGlobalFrameSynched(ref MatrixFrame frame, bool isClient = false)
    {
      this._duration = 0.0f;
      this._timer = 0.0f;
      if (!(this.GameEntity.GetGlobalFrame() != frame))
        return;
      if (GameNetwork.IsClientOrReplay)
      {
        this._lastSynchedFrame = (NativeObject) this.GameEntity.Parent != (NativeObject) null ? this.GameEntity.Parent.GetGlobalFrame().TransformToLocalNonOrthogonal(ref frame) : frame;
        this.SetSynchState(SynchedMissionObject.SynchState.SynchronizeFrame);
      }
      else
      {
        if (GameNetwork.IsServerOrRecorder)
        {
          GameNetwork.BeginBroadcastModuleEvent();
          GameNetwork.WriteMessage((GameNetworkMessage) new SetMissionObjectGlobalFrame(this.Id, ref frame));
          GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.AddToMissionRecord);
        }
        this.SetSynchState(SynchedMissionObject.SynchState.SynchronizeCompleted);
        this.GameEntity.SetGlobalFrame(in frame);
        this._initialSynchFlags |= SynchedMissionObject.SynchFlags.SynchTransform;
      }
    }

    public void SetFrameSynchedOverTime(ref MatrixFrame frame, float duration, bool isClient = false)
    {
      if (!(this.GameEntity.GetFrame() != frame) && !duration.ApproximatelyEqualsTo(0.0f))
        return;
      this._firstFrame = this.GameEntity.GetFrame();
      this._lastSynchedFrame = frame;
      this.SetSynchState(SynchedMissionObject.SynchState.SynchronizeFrameOverTime);
      this._duration = duration.ApproximatelyEqualsTo(0.0f) ? 0.1f : duration;
      this._timer = 0.0f;
      if (GameNetwork.IsServerOrRecorder)
      {
        GameNetwork.BeginBroadcastModuleEvent();
        GameNetwork.WriteMessage((GameNetworkMessage) new SetMissionObjectFrameOverTime(this.Id, ref frame, duration));
        GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.AddToMissionRecord);
      }
      this._initialSynchFlags |= SynchedMissionObject.SynchFlags.SynchTransform;
    }

    public void SetGlobalFrameSynchedOverTime(ref MatrixFrame frame, float duration, bool isClient = false)
    {
      if (!(this.GameEntity.GetGlobalFrame() != frame) && !duration.ApproximatelyEqualsTo(0.0f))
        return;
      this._firstFrame = this.GameEntity.GetFrame();
      this._lastSynchedFrame = (NativeObject) this.GameEntity.Parent != (NativeObject) null ? this.GameEntity.Parent.GetGlobalFrame().TransformToLocalNonOrthogonal(ref frame) : frame;
      this.SetSynchState(SynchedMissionObject.SynchState.SynchronizeFrameOverTime);
      this._duration = duration.ApproximatelyEqualsTo(0.0f) ? 0.1f : duration;
      this._timer = 0.0f;
      if (GameNetwork.IsServerOrRecorder)
      {
        GameNetwork.BeginBroadcastModuleEvent();
        GameNetwork.WriteMessage((GameNetworkMessage) new SetMissionObjectGlobalFrameOverTime(this.Id, ref frame, duration));
        GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.AddToMissionRecord);
      }
      this._initialSynchFlags |= SynchedMissionObject.SynchFlags.SynchTransform;
    }

    public void SetAnimationAtChannelSynched(
      string animationName,
      int channelNo,
      float animationSpeed = 1f)
    {
      this.SetAnimationAtChannelSynched(MBAnimation.GetAnimationIndexWithName(animationName), channelNo, animationSpeed);
    }

    public void SetAnimationAtChannelSynched(
      int animationIndex,
      int channelNo,
      float animationSpeed = 1f)
    {
      if (GameNetwork.IsServerOrRecorder)
      {
        int animationIndexAtChannel = this.GameEntity.Skeleton.GetAnimationIndexAtChannel(channelNo);
        bool flag = true;
        int num = animationIndex;
        if (animationIndexAtChannel == num && this.GameEntity.Skeleton.GetAnimationSpeedAtChannel(channelNo).ApproximatelyEqualsTo(animationSpeed) && (double) this.GameEntity.Skeleton.GetAnimationParameterAtChannel(channelNo) < 0.019999999552965164)
          flag = false;
        if (flag)
        {
          GameNetwork.BeginBroadcastModuleEvent();
          GameNetwork.WriteMessage((GameNetworkMessage) new SetMissionObjectAnimationAtChannel(this.Id, channelNo, animationIndex, animationSpeed));
          GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.AddToMissionRecord);
          this._initialSynchFlags |= SynchedMissionObject.SynchFlags.SynchAnimation;
        }
      }
      this.GameEntity.Skeleton.SetAnimationAtChannel(animationIndex, channelNo, animationSpeed);
    }

    public void SetAnimationChannelParameterSynched(int channelNo, float parameter)
    {
      if (this.GameEntity.Skeleton.GetAnimationParameterAtChannel(channelNo).ApproximatelyEqualsTo(parameter))
        return;
      if (GameNetwork.IsServerOrRecorder)
      {
        GameNetwork.BeginBroadcastModuleEvent();
        GameNetwork.WriteMessage((GameNetworkMessage) new SetMissionObjectAnimationChannelParameter(this.Id, channelNo, parameter));
        GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.AddToMissionRecord);
      }
      this.GameEntity.Skeleton.SetAnimationParameterAtChannel(channelNo, parameter);
      this._initialSynchFlags |= SynchedMissionObject.SynchFlags.SynchAnimation;
    }

    public void PauseSkeletonAnimationSynched()
    {
      if (this.GameEntity.IsSkeletonAnimationPaused())
        return;
      if (GameNetwork.IsServerOrRecorder)
      {
        GameNetwork.BeginBroadcastModuleEvent();
        GameNetwork.WriteMessage((GameNetworkMessage) new SetMissionObjectAnimationPaused(this.Id, true));
        GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.AddToMissionRecord);
      }
      this.GameEntity.PauseSkeletonAnimation();
      this._initialSynchFlags |= SynchedMissionObject.SynchFlags.SynchAnimation;
    }

    public void ResumeSkeletonAnimationSynched()
    {
      if (!this.GameEntity.IsSkeletonAnimationPaused())
        return;
      if (GameNetwork.IsServerOrRecorder)
      {
        GameNetwork.BeginBroadcastModuleEvent();
        GameNetwork.WriteMessage((GameNetworkMessage) new SetMissionObjectAnimationPaused(this.Id, false));
        GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.AddToMissionRecord);
      }
      this.GameEntity.ResumeSkeletonAnimation();
      this._initialSynchFlags |= SynchedMissionObject.SynchFlags.SynchAnimation;
    }

    public void BurstParticlesSynched(bool doChildren = true)
    {
      if (GameNetwork.IsServerOrRecorder)
      {
        GameNetwork.BeginBroadcastModuleEvent();
        GameNetwork.WriteMessage((GameNetworkMessage) new BurstMissionObjectParticles(this.Id, false));
        GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.AddToMissionRecord);
      }
      this.GameEntity.BurstEntityParticle(doChildren);
    }

    public void ApplyImpulseSynched(Vec3 localPosition, Vec3 impulse)
    {
      if (GameNetwork.IsServerOrRecorder)
      {
        GameNetwork.BeginBroadcastModuleEvent();
        GameNetwork.WriteMessage((GameNetworkMessage) new SetMissionObjectImpulse(this.Id, localPosition, impulse));
        GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.AddToMissionRecord);
      }
      this.GameEntity.ApplyLocalImpulseToDynamicBody(localPosition, impulse);
      this._initialSynchFlags |= SynchedMissionObject.SynchFlags.SynchTransform;
    }

    public void AddBodyFlagsSynched(BodyFlags flags, bool applyToChildren = true)
    {
      if ((this.GameEntity.BodyFlag & flags) == flags)
        return;
      if (GameNetwork.IsServerOrRecorder)
      {
        GameNetwork.BeginBroadcastModuleEvent();
        GameNetwork.WriteMessage((GameNetworkMessage) new AddMissionObjectBodyFlags(this.Id, flags, applyToChildren));
        GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.AddToMissionRecord);
      }
      this.GameEntity.AddBodyFlags(flags, applyToChildren);
      this._initialSynchFlags |= SynchedMissionObject.SynchFlags.SynchBodyFlags;
    }

    public void RemoveBodyFlagsSynched(BodyFlags flags, bool applyToChildren = true)
    {
      if ((this.GameEntity.BodyFlag & flags) == BodyFlags.None)
        return;
      if (GameNetwork.IsServerOrRecorder)
      {
        GameNetwork.BeginBroadcastModuleEvent();
        GameNetwork.WriteMessage((GameNetworkMessage) new RemoveMissionObjectBodyFlags(this.Id, flags, applyToChildren));
        GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.AddToMissionRecord);
      }
      this.GameEntity.RemoveBodyFlags(flags, applyToChildren);
      this._initialSynchFlags |= SynchedMissionObject.SynchFlags.SynchBodyFlags;
    }

    public void SetTeamColors(uint color, uint color2)
    {
      this.Color = color;
      this.Color2 = color2;
      this.GameEntity.SetColor(color, color2, "use_team_color");
    }

    public virtual void SetTeamColorsSynched(uint color, uint color2)
    {
      if (!((NativeObject) this.GameEntity != (NativeObject) null))
        return;
      if (GameNetwork.IsServerOrRecorder)
      {
        GameNetwork.BeginBroadcastModuleEvent();
        GameNetwork.WriteMessage((GameNetworkMessage) new SetMissionObjectColors(this.Id, color, color2));
        GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.AddToMissionRecord);
      }
      this.SetTeamColors(color, color2);
      this._initialSynchFlags |= SynchedMissionObject.SynchFlags.SyncColors;
    }

    public virtual void WriteToNetwork()
    {
      GameEntity gameEntity = this.GameEntity;
      GameNetworkMessage.WriteBoolToPacket(gameEntity.GetVisibilityExcludeParents());
      GameNetworkMessage.WriteBoolToPacket(this._initialSynchFlags.HasAnyFlag<SynchedMissionObject.SynchFlags>(SynchedMissionObject.SynchFlags.SynchTransform));
      if (this._initialSynchFlags.HasAnyFlag<SynchedMissionObject.SynchFlags>(SynchedMissionObject.SynchFlags.SynchTransform))
      {
        GameNetworkMessage.WriteMatrixFrameToPacket(gameEntity.GetFrame());
        GameNetworkMessage.WriteBoolToPacket(this._synchState == SynchedMissionObject.SynchState.SynchronizeFrameOverTime);
        if (this._synchState == SynchedMissionObject.SynchState.SynchronizeFrameOverTime)
        {
          GameNetworkMessage.WriteMatrixFrameToPacket(this._lastSynchedFrame);
          GameNetworkMessage.WriteFloatToPacket(this._duration - this._timer, CompressionMission.FlagCapturePointDurationCompressionInfo);
        }
      }
      Skeleton skeleton = gameEntity.Skeleton;
      GameNetworkMessage.WriteBoolToPacket((NativeObject) skeleton != (NativeObject) null);
      if ((NativeObject) skeleton != (NativeObject) null)
      {
        int animationIndexAtChannel = skeleton.GetAnimationIndexAtChannel(0);
        int num = animationIndexAtChannel >= 0 ? 1 : 0;
        GameNetworkMessage.WriteBoolToPacket(num != 0 && this._initialSynchFlags.HasAnyFlag<SynchedMissionObject.SynchFlags>(SynchedMissionObject.SynchFlags.SynchAnimation));
        if (num != 0 && this._initialSynchFlags.HasAnyFlag<SynchedMissionObject.SynchFlags>(SynchedMissionObject.SynchFlags.SynchAnimation))
        {
          float animationSpeedAtChannel = skeleton.GetAnimationSpeedAtChannel(0);
          double parameterAtChannel = (double) skeleton.GetAnimationParameterAtChannel(0);
          GameNetworkMessage.WriteIntToPacket(animationIndexAtChannel, CompressionBasic.AnimationIndexCompressionInfo);
          GameNetworkMessage.WriteFloatToPacket(animationSpeedAtChannel, CompressionBasic.AnimationSpeedCompressionInfo);
          CompressionInfo.Float progressCompressionInfo = CompressionBasic.AnimationProgressCompressionInfo;
          GameNetworkMessage.WriteFloatToPacket((float) parameterAtChannel, progressCompressionInfo);
          GameNetworkMessage.WriteBoolToPacket(gameEntity.IsSkeletonAnimationPaused());
        }
      }
      GameNetworkMessage.WriteBoolToPacket(this._initialSynchFlags.HasAnyFlag<SynchedMissionObject.SynchFlags>(SynchedMissionObject.SynchFlags.SyncColors));
      if (this._initialSynchFlags.HasAnyFlag<SynchedMissionObject.SynchFlags>(SynchedMissionObject.SynchFlags.SyncColors))
      {
        GameNetworkMessage.WriteUintToPacket(this.Color, CompressionBasic.ColorCompressionInfo);
        GameNetworkMessage.WriteUintToPacket(this.Color2, CompressionBasic.ColorCompressionInfo);
      }
      GameNetworkMessage.WriteBoolToPacket(this.IsDisabled);
    }

    public virtual void OnAfterReadFromNetwork(
      (BaseSynchedMissionObjectReadableRecord, ISynchedMissionObjectReadableRecord) synchedMissionObjectReadableRecord)
    {
      BaseSynchedMissionObjectReadableRecord objectReadableRecord = synchedMissionObjectReadableRecord.Item1;
      this.GameEntity.SetVisibilityExcludeParents(objectReadableRecord.SetVisibilityExcludeParents);
      if (objectReadableRecord.SynchTransform)
      {
        MatrixFrame gameObjectFrame = objectReadableRecord.GameObjectFrame;
        this.GameEntity.SetFrame(ref gameObjectFrame);
        if (objectReadableRecord.SynchronizeFrameOverTime)
        {
          this._firstFrame = objectReadableRecord.GameObjectFrame;
          this._lastSynchedFrame = objectReadableRecord.LastSynchedFrame;
          this.SetSynchState(SynchedMissionObject.SynchState.SynchronizeFrameOverTime);
          this._duration = objectReadableRecord.Duration;
          this._timer = 0.0f;
          if (this._duration.ApproximatelyEqualsTo(0.0f))
            this._duration = 0.1f;
        }
      }
      if (objectReadableRecord.HasSkeleton && objectReadableRecord.SynchAnimation)
      {
        this.GameEntity.Skeleton.SetAnimationAtChannel(objectReadableRecord.AnimationIndex, 0, objectReadableRecord.AnimationSpeed, 0.0f);
        this.GameEntity.Skeleton.SetAnimationParameterAtChannel(0, objectReadableRecord.AnimationParameter);
        if (objectReadableRecord.IsSkeletonAnimationPaused)
        {
          this.GameEntity.Skeleton.TickAnimationsAndForceUpdate(1f / 1000f, this.GameEntity.GetGlobalFrame(), true);
          this.GameEntity.PauseSkeletonAnimation();
        }
        else
          this.GameEntity.ResumeSkeletonAnimation();
      }
      if (objectReadableRecord.SynchColors)
        this.SetTeamColors(objectReadableRecord.Color, objectReadableRecord.Color2);
      if (!objectReadableRecord.IsDisabled)
        return;
      this.SetDisabledAndMakeInvisible();
    }

    private enum SynchState
    {
      SynchronizeCompleted,
      SynchronizePosition,
      SynchronizeFrame,
      SynchronizeFrameOverTime,
    }

    [Flags]
    public enum SynchFlags : uint
    {
      SynchNone = 0,
      SynchTransform = 1,
      SynchAnimation = 2,
      SynchBodyFlags = 4,
      SyncColors = 8,
      SynchAll = 4294967295, // 0xFFFFFFFF
    }
  }
}

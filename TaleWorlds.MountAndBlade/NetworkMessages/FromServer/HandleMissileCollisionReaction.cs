// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.HandleMissileCollisionReaction
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class HandleMissileCollisionReaction : GameNetworkMessage
  {
    public int MissileIndex { get; private set; }

    public Mission.MissileCollisionReaction CollisionReaction { get; private set; }

    public MatrixFrame AttachLocalFrame { get; private set; }

    public bool IsAttachedFrameLocal { get; private set; }

    public int AttackerAgentIndex { get; private set; }

    public int AttachedAgentIndex { get; private set; }

    public bool AttachedToShield { get; private set; }

    public sbyte AttachedBoneIndex { get; private set; }

    public MissionObjectId AttachedMissionObjectId { get; private set; }

    public Vec3 BounceBackVelocity { get; private set; }

    public Vec3 BounceBackAngularVelocity { get; private set; }

    public int ForcedSpawnIndex { get; private set; }

    public HandleMissileCollisionReaction(
      int missileIndex,
      Mission.MissileCollisionReaction collisionReaction,
      MatrixFrame attachLocalFrame,
      bool isAttachedFrameLocal,
      int attackerAgentIndex,
      int attachedAgentIndex,
      bool attachedToShield,
      sbyte attachedBoneIndex,
      MissionObjectId attachedMissionObjectId,
      Vec3 bounceBackVelocity,
      Vec3 bounceBackAngularVelocity,
      int forcedSpawnIndex)
    {
      this.MissileIndex = missileIndex;
      this.CollisionReaction = collisionReaction;
      this.AttachLocalFrame = attachLocalFrame;
      this.IsAttachedFrameLocal = isAttachedFrameLocal;
      this.AttackerAgentIndex = attackerAgentIndex;
      this.AttachedAgentIndex = attachedAgentIndex;
      this.AttachedToShield = attachedToShield;
      this.AttachedBoneIndex = attachedBoneIndex;
      this.AttachedMissionObjectId = attachedMissionObjectId;
      this.BounceBackVelocity = bounceBackVelocity;
      this.BounceBackAngularVelocity = bounceBackAngularVelocity;
      this.ForcedSpawnIndex = forcedSpawnIndex;
    }

    public HandleMissileCollisionReaction()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.MissileIndex = GameNetworkMessage.ReadIntFromPacket(CompressionMission.MissileCompressionInfo, ref bufferReadValid);
      this.CollisionReaction = (Mission.MissileCollisionReaction) GameNetworkMessage.ReadIntFromPacket(CompressionMission.MissileCollisionReactionCompressionInfo, ref bufferReadValid);
      this.AttackerAgentIndex = GameNetworkMessage.ReadAgentIndexFromPacket(ref bufferReadValid);
      this.AttachedAgentIndex = -1;
      this.AttachedToShield = false;
      this.AttachedBoneIndex = (sbyte) -1;
      this.AttachedMissionObjectId = MissionObjectId.Invalid;
      if (this.CollisionReaction == Mission.MissileCollisionReaction.Stick || this.CollisionReaction == Mission.MissileCollisionReaction.BounceBack)
      {
        if (GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid))
        {
          this.AttachedAgentIndex = GameNetworkMessage.ReadAgentIndexFromPacket(ref bufferReadValid);
          this.AttachedToShield = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
          if (!this.AttachedToShield)
            this.AttachedBoneIndex = (sbyte) GameNetworkMessage.ReadIntFromPacket(CompressionMission.BoneIndexCompressionInfo, ref bufferReadValid);
        }
        else
          this.AttachedMissionObjectId = GameNetworkMessage.ReadMissionObjectIdFromPacket(ref bufferReadValid);
      }
      if (this.CollisionReaction != Mission.MissileCollisionReaction.BecomeInvisible && this.CollisionReaction != Mission.MissileCollisionReaction.PassThrough)
      {
        this.IsAttachedFrameLocal = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
        this.AttachLocalFrame = !this.IsAttachedFrameLocal ? GameNetworkMessage.ReadNonUniformTransformFromPacket(CompressionBasic.PositionCompressionInfo, CompressionBasic.LowResQuaternionCompressionInfo, ref bufferReadValid) : GameNetworkMessage.ReadNonUniformTransformFromPacket(CompressionBasic.BigRangeLowResLocalPositionCompressionInfo, CompressionBasic.LowResQuaternionCompressionInfo, ref bufferReadValid);
      }
      else
        this.AttachLocalFrame = MatrixFrame.Identity;
      if (this.CollisionReaction == Mission.MissileCollisionReaction.BounceBack)
      {
        this.BounceBackVelocity = GameNetworkMessage.ReadVec3FromPacket(CompressionMission.SpawnedItemVelocityCompressionInfo, ref bufferReadValid);
        this.BounceBackAngularVelocity = GameNetworkMessage.ReadVec3FromPacket(CompressionMission.SpawnedItemAngularVelocityCompressionInfo, ref bufferReadValid);
      }
      else
      {
        this.BounceBackVelocity = Vec3.Zero;
        this.BounceBackAngularVelocity = Vec3.Zero;
      }
      if (this.CollisionReaction == Mission.MissileCollisionReaction.Stick || this.CollisionReaction == Mission.MissileCollisionReaction.BounceBack)
        this.ForcedSpawnIndex = GameNetworkMessage.ReadIntFromPacket(CompressionBasic.MissionObjectIDCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteIntToPacket(this.MissileIndex, CompressionMission.MissileCompressionInfo);
      GameNetworkMessage.WriteIntToPacket((int) this.CollisionReaction, CompressionMission.MissileCollisionReactionCompressionInfo);
      GameNetworkMessage.WriteAgentIndexToPacket(this.AttackerAgentIndex);
      if (this.CollisionReaction == Mission.MissileCollisionReaction.Stick || this.CollisionReaction == Mission.MissileCollisionReaction.BounceBack)
      {
        int num = this.AttachedAgentIndex >= 0 ? 1 : 0;
        GameNetworkMessage.WriteBoolToPacket(num != 0);
        if (num != 0)
        {
          GameNetworkMessage.WriteAgentIndexToPacket(this.AttachedAgentIndex);
          GameNetworkMessage.WriteBoolToPacket(this.AttachedToShield);
          if (!this.AttachedToShield)
            GameNetworkMessage.WriteIntToPacket((int) this.AttachedBoneIndex, CompressionMission.BoneIndexCompressionInfo);
        }
        else
          GameNetworkMessage.WriteMissionObjectIdToPacket(this.AttachedMissionObjectId.Id >= 0 ? this.AttachedMissionObjectId : MissionObjectId.Invalid);
      }
      if (this.CollisionReaction != Mission.MissileCollisionReaction.BecomeInvisible && this.CollisionReaction != Mission.MissileCollisionReaction.PassThrough)
      {
        GameNetworkMessage.WriteBoolToPacket(this.IsAttachedFrameLocal);
        if (this.IsAttachedFrameLocal)
          GameNetworkMessage.WriteNonUniformTransformToPacket(this.AttachLocalFrame, CompressionBasic.BigRangeLowResLocalPositionCompressionInfo, CompressionBasic.LowResQuaternionCompressionInfo);
        else
          GameNetworkMessage.WriteNonUniformTransformToPacket(this.AttachLocalFrame, CompressionBasic.PositionCompressionInfo, CompressionBasic.LowResQuaternionCompressionInfo);
      }
      if (this.CollisionReaction == Mission.MissileCollisionReaction.BounceBack)
      {
        GameNetworkMessage.WriteVec3ToPacket(this.BounceBackVelocity, CompressionMission.SpawnedItemVelocityCompressionInfo);
        GameNetworkMessage.WriteVec3ToPacket(this.BounceBackAngularVelocity, CompressionMission.SpawnedItemAngularVelocityCompressionInfo);
      }
      if (this.CollisionReaction != Mission.MissileCollisionReaction.Stick && this.CollisionReaction != Mission.MissileCollisionReaction.BounceBack)
        return;
      GameNetworkMessage.WriteIntToPacket(this.ForcedSpawnIndex, CompressionBasic.MissionObjectIDCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter() => MultiplayerMessageFilter.Items;

    protected override string OnGetLogFormat()
    {
      return "Handle Missile Collision with index: " + (object) this.MissileIndex + " collision reaction: " + (object) this.CollisionReaction + " AttackerAgent index: " + (object) this.AttackerAgentIndex + " AttachedAgent index: " + (object) this.AttachedAgentIndex + " AttachedToShield: " + this.AttachedToShield.ToString() + " AttachedBoneIndex: " + (object) this.AttachedBoneIndex + " AttachedMissionObject id: " + (this.AttachedMissionObjectId != MissionObjectId.Invalid ? (object) this.AttachedMissionObjectId.Id.ToString() : (object) "-1") + " ForcedSpawnIndex: " + (object) this.ForcedSpawnIndex;
    }
  }
}

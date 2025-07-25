// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.SyncObjectDestructionLevel
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
  public sealed class SyncObjectDestructionLevel : GameNetworkMessage
  {
    public MissionObjectId MissionObjectId { get; private set; }

    public int DestructionLevel { get; private set; }

    public int ForcedIndex { get; private set; }

    public float BlowMagnitude { get; private set; }

    public Vec3 BlowPosition { get; private set; }

    public Vec3 BlowDirection { get; private set; }

    public SyncObjectDestructionLevel(
      MissionObjectId missionObjectId,
      int destructionLevel,
      int forcedIndex,
      float blowMagnitude,
      Vec3 blowPosition,
      Vec3 blowDirection)
    {
      this.MissionObjectId = missionObjectId;
      this.DestructionLevel = destructionLevel;
      this.ForcedIndex = forcedIndex;
      this.BlowMagnitude = blowMagnitude;
      this.BlowPosition = blowPosition;
      this.BlowDirection = blowDirection;
    }

    public SyncObjectDestructionLevel()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.MissionObjectId = GameNetworkMessage.ReadMissionObjectIdFromPacket(ref bufferReadValid);
      this.DestructionLevel = GameNetworkMessage.ReadIntFromPacket(CompressionMission.UsableGameObjectDestructionStateCompressionInfo, ref bufferReadValid);
      this.ForcedIndex = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid) ? GameNetworkMessage.ReadIntFromPacket(CompressionBasic.MissionObjectIDCompressionInfo, ref bufferReadValid) : -1;
      this.BlowMagnitude = GameNetworkMessage.ReadFloatFromPacket(CompressionMission.UsableGameObjectBlowMagnitude, ref bufferReadValid);
      this.BlowPosition = GameNetworkMessage.ReadVec3FromPacket(CompressionBasic.PositionCompressionInfo, ref bufferReadValid);
      this.BlowDirection = GameNetworkMessage.ReadVec3FromPacket(CompressionMission.UsableGameObjectBlowDirection, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteMissionObjectIdToPacket(this.MissionObjectId);
      GameNetworkMessage.WriteIntToPacket(this.DestructionLevel, CompressionMission.UsableGameObjectDestructionStateCompressionInfo);
      GameNetworkMessage.WriteBoolToPacket(this.ForcedIndex != -1);
      if (this.ForcedIndex != -1)
        GameNetworkMessage.WriteIntToPacket(this.ForcedIndex, CompressionBasic.MissionObjectIDCompressionInfo);
      GameNetworkMessage.WriteFloatToPacket(this.BlowMagnitude, CompressionMission.UsableGameObjectBlowMagnitude);
      GameNetworkMessage.WriteVec3ToPacket(this.BlowPosition, CompressionBasic.PositionCompressionInfo);
      GameNetworkMessage.WriteVec3ToPacket(this.BlowDirection, CompressionMission.UsableGameObjectBlowDirection);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.MissionObjectsDetailed | MultiplayerMessageFilter.SiegeWeaponsDetailed;
    }

    protected override string OnGetLogFormat()
    {
      return "Synchronize DestructionLevel: " + (object) this.DestructionLevel + " of MissionObject with Id: " + (object) this.MissionObjectId + (this.ForcedIndex != -1 ? (object) (" (New object will have ID: " + (object) this.ForcedIndex + ")") : (object) "");
    }
  }
}

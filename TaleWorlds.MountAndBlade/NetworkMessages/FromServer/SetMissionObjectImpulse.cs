// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.SetMissionObjectImpulse
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
  public sealed class SetMissionObjectImpulse : GameNetworkMessage
  {
    public MissionObjectId MissionObjectId { get; private set; }

    public Vec3 Position { get; private set; }

    public Vec3 Impulse { get; private set; }

    public SetMissionObjectImpulse(MissionObjectId missionObjectId, Vec3 position, Vec3 impulse)
    {
      this.MissionObjectId = missionObjectId;
      this.Position = position;
      this.Impulse = impulse;
    }

    public SetMissionObjectImpulse()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.MissionObjectId = GameNetworkMessage.ReadMissionObjectIdFromPacket(ref bufferReadValid);
      this.Position = GameNetworkMessage.ReadVec3FromPacket(CompressionBasic.LocalPositionCompressionInfo, ref bufferReadValid);
      this.Impulse = GameNetworkMessage.ReadVec3FromPacket(CompressionBasic.ImpulseCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteMissionObjectIdToPacket(this.MissionObjectId);
      GameNetworkMessage.WriteVec3ToPacket(this.Position, CompressionBasic.LocalPositionCompressionInfo);
      GameNetworkMessage.WriteVec3ToPacket(this.Impulse, CompressionBasic.ImpulseCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.MissionObjects;
    }

    protected override string OnGetLogFormat()
    {
      return "Set impulse on MissionObject with ID: " + (object) this.MissionObjectId;
    }
  }
}

// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.SetMissionObjectAnimationAtChannel
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class SetMissionObjectAnimationAtChannel : GameNetworkMessage
  {
    public MissionObjectId MissionObjectId { get; private set; }

    public int ChannelNo { get; private set; }

    public int AnimationIndex { get; private set; }

    public float AnimationSpeed { get; private set; }

    public SetMissionObjectAnimationAtChannel(
      MissionObjectId missionObjectId,
      int channelNo,
      int animationIndex,
      float animationSpeed)
    {
      this.MissionObjectId = missionObjectId;
      this.ChannelNo = channelNo;
      this.AnimationIndex = animationIndex;
      this.AnimationSpeed = animationSpeed;
    }

    public SetMissionObjectAnimationAtChannel()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.MissionObjectId = GameNetworkMessage.ReadMissionObjectIdFromPacket(ref bufferReadValid);
      this.ChannelNo = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid) ? 1 : 0;
      this.AnimationIndex = GameNetworkMessage.ReadIntFromPacket(CompressionBasic.AnimationIndexCompressionInfo, ref bufferReadValid);
      this.AnimationSpeed = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid) ? GameNetworkMessage.ReadFloatFromPacket(CompressionBasic.AnimationSpeedCompressionInfo, ref bufferReadValid) : 1f;
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteMissionObjectIdToPacket(this.MissionObjectId);
      GameNetworkMessage.WriteBoolToPacket(this.ChannelNo == 1);
      GameNetworkMessage.WriteIntToPacket(this.AnimationIndex, CompressionBasic.AnimationIndexCompressionInfo);
      GameNetworkMessage.WriteBoolToPacket((double) this.AnimationSpeed != 1.0);
      if ((double) this.AnimationSpeed == 1.0)
        return;
      GameNetworkMessage.WriteFloatToPacket(this.AnimationSpeed, CompressionBasic.AnimationSpeedCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.MissionObjectsDetailed;
    }

    protected override string OnGetLogFormat()
    {
      return "Set animation: " + (object) this.AnimationIndex + " on channel: " + (object) this.ChannelNo + " of MissionObject with ID: " + (object) this.MissionObjectId;
    }
  }
}

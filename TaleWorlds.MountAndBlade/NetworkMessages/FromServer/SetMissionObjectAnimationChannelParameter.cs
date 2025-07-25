// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.SetMissionObjectAnimationChannelParameter
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class SetMissionObjectAnimationChannelParameter : GameNetworkMessage
  {
    public MissionObjectId MissionObjectId { get; private set; }

    public int ChannelNo { get; private set; }

    public float Parameter { get; private set; }

    public SetMissionObjectAnimationChannelParameter(
      MissionObjectId missionObjectId,
      int channelNo,
      float parameter)
    {
      this.MissionObjectId = missionObjectId;
      this.ChannelNo = channelNo;
      this.Parameter = parameter;
    }

    public SetMissionObjectAnimationChannelParameter()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.MissionObjectId = GameNetworkMessage.ReadMissionObjectIdFromPacket(ref bufferReadValid);
      bool flag = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      if (bufferReadValid)
        this.ChannelNo = flag ? 1 : 0;
      this.Parameter = GameNetworkMessage.ReadFloatFromPacket(CompressionBasic.AnimationProgressCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteMissionObjectIdToPacket(this.MissionObjectId);
      GameNetworkMessage.WriteBoolToPacket(this.ChannelNo == 1);
      GameNetworkMessage.WriteFloatToPacket(this.Parameter, CompressionBasic.AnimationProgressCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.MissionObjectsDetailed;
    }

    protected override string OnGetLogFormat()
    {
      return "Set animation parameter: " + (object) this.Parameter + " on channel: " + (object) this.ChannelNo + " of MissionObject with ID: " + (object) this.MissionObjectId;
    }
  }
}

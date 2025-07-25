// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.PollRequestRejected
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class PollRequestRejected : GameNetworkMessage
  {
    public int Reason { get; private set; }

    public PollRequestRejected(int reason) => this.Reason = reason;

    public PollRequestRejected()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.Reason = GameNetworkMessage.ReadIntFromPacket(CompressionMission.MultiplayerPollRejectReasonCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteIntToPacket(this.Reason, CompressionMission.MultiplayerPollRejectReasonCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.Administration;
    }

    protected override string OnGetLogFormat()
    {
      return "Poll request rejected (" + (object) (MultiplayerPollRejectReason) this.Reason + ")";
    }
  }
}

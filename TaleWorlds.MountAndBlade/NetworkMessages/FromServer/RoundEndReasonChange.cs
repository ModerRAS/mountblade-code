// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.RoundEndReasonChange
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class RoundEndReasonChange : GameNetworkMessage
  {
    public RoundEndReason RoundEndReason { get; private set; }

    public RoundEndReasonChange() => this.RoundEndReason = RoundEndReason.Invalid;

    public RoundEndReasonChange(RoundEndReason roundEndReason)
    {
      this.RoundEndReason = roundEndReason;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteIntToPacket((int) this.RoundEndReason, CompressionMission.RoundEndReasonCompressionInfo);
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.RoundEndReason = (RoundEndReason) GameNetworkMessage.ReadIntFromPacket(CompressionMission.RoundEndReasonCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.GameMode;
    }

    protected override string OnGetLogFormat()
    {
      return "Change round end reason to: " + this.RoundEndReason.ToString();
    }
  }
}

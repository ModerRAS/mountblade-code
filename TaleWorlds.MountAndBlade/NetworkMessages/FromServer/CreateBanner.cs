// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.CreateBanner
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class CreateBanner : GameNetworkMessage
  {
    public NetworkCommunicator Peer { get; private set; }

    public string BannerCode { get; private set; }

    public CreateBanner(NetworkCommunicator peer, string bannerCode)
    {
      this.Peer = peer;
      this.BannerCode = bannerCode;
    }

    public CreateBanner()
    {
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteNetworkPeerReferenceToPacket(this.Peer);
      GameNetworkMessage.WriteStringToPacket(this.BannerCode);
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.Peer = GameNetworkMessage.ReadNetworkPeerReferenceFromPacket(ref bufferReadValid);
      this.BannerCode = GameNetworkMessage.ReadStringFromPacket(ref bufferReadValid);
      return bufferReadValid;
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.Peers | MultiplayerMessageFilter.AgentsDetailed;
    }

    protected override string OnGetLogFormat()
    {
      return "Create banner for peer: " + this.Peer.UserName + ", with index: " + (object) this.Peer.Index;
    }
  }
}

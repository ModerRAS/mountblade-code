// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.DuelSessionStarted
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class DuelSessionStarted : GameNetworkMessage
  {
    public NetworkCommunicator RequesterPeer { get; private set; }

    public NetworkCommunicator RequestedPeer { get; private set; }

    public DuelSessionStarted(NetworkCommunicator requesterPeer, NetworkCommunicator requestedPeer)
    {
      this.RequesterPeer = requesterPeer;
      this.RequestedPeer = requestedPeer;
    }

    public DuelSessionStarted()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.RequesterPeer = GameNetworkMessage.ReadNetworkPeerReferenceFromPacket(ref bufferReadValid);
      this.RequestedPeer = GameNetworkMessage.ReadNetworkPeerReferenceFromPacket(ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteNetworkPeerReferenceToPacket(this.RequesterPeer);
      GameNetworkMessage.WriteNetworkPeerReferenceToPacket(this.RequestedPeer);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.GameMode;
    }

    protected override string OnGetLogFormat()
    {
      return "Duel session started between agent with name: " + this.RequestedPeer.UserName + " and index: " + (object) this.RequestedPeer.Index + " and agent with name: " + this.RequesterPeer.UserName + " and index: " + (object) this.RequesterPeer.Index;
    }
  }
}

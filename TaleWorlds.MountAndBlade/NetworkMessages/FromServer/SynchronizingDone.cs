// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.SynchronizingDone
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class SynchronizingDone : GameNetworkMessage
  {
    public NetworkCommunicator Peer { get; private set; }

    public bool Synchronized { get; private set; }

    public SynchronizingDone(NetworkCommunicator peer, bool synchronized)
    {
      this.Peer = peer;
      this.Synchronized = synchronized;
    }

    public SynchronizingDone()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.Peer = GameNetworkMessage.ReadNetworkPeerReferenceFromPacket(ref bufferReadValid);
      this.Synchronized = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteNetworkPeerReferenceToPacket(this.Peer);
      GameNetworkMessage.WriteBoolToPacket(this.Synchronized);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.General;
    }

    protected override string OnGetLogFormat()
    {
      string str = "peer with name: " + this.Peer.UserName + ", and index: " + (object) this.Peer.Index;
      return !this.Synchronized ? "Synchronized: FALSE for " + str + " (Peer will not receive broadcasted messages)" : "Synchronized: TRUE for " + str + " (received all initial data from the server and will now receive broadcasted messages)";
    }
  }
}

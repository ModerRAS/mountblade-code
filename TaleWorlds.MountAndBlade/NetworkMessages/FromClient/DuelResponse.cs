// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromClient.DuelResponse
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromClient
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromClient)]
  public sealed class DuelResponse : GameNetworkMessage
  {
    public NetworkCommunicator Peer { get; private set; }

    public bool Accepted { get; private set; }

    public DuelResponse(NetworkCommunicator peer, bool accepted)
    {
      this.Peer = peer;
      this.Accepted = accepted;
    }

    public DuelResponse()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.Peer = GameNetworkMessage.ReadNetworkPeerReferenceFromPacket(ref bufferReadValid);
      this.Accepted = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteNetworkPeerReferenceToPacket(this.Peer);
      GameNetworkMessage.WriteBoolToPacket(this.Accepted);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.GameMode;
    }

    protected override string OnGetLogFormat()
    {
      return "Duel Response: " + (this.Accepted ? " Accepted" : " Not accepted");
    }
  }
}

// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.SetPeerTeam
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class SetPeerTeam : GameNetworkMessage
  {
    public NetworkCommunicator Peer { get; private set; }

    public int TeamIndex { get; private set; }

    public SetPeerTeam(NetworkCommunicator peer, int teamIndex)
    {
      this.Peer = peer;
      this.TeamIndex = teamIndex;
    }

    public SetPeerTeam()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.Peer = GameNetworkMessage.ReadNetworkPeerReferenceFromPacket(ref bufferReadValid);
      this.TeamIndex = GameNetworkMessage.ReadTeamIndexFromPacket(ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteNetworkPeerReferenceToPacket(this.Peer);
      GameNetworkMessage.WriteTeamIndexToPacket(this.TeamIndex);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter() => MultiplayerMessageFilter.Peers;

    protected override string OnGetLogFormat()
    {
      return "Set Team: " + (object) this.TeamIndex + " of NetworkPeer with name: " + this.Peer.UserName + " and peer-index" + (object) this.Peer.Index;
    }
  }
}

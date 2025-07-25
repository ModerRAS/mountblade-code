// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.AssignFormationToPlayer
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class AssignFormationToPlayer : GameNetworkMessage
  {
    public NetworkCommunicator Peer { get; private set; }

    public FormationClass FormationClass { get; private set; }

    public AssignFormationToPlayer(NetworkCommunicator peer, FormationClass formationClass)
    {
      this.Peer = peer;
      this.FormationClass = formationClass;
    }

    public AssignFormationToPlayer()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.Peer = GameNetworkMessage.ReadNetworkPeerReferenceFromPacket(ref bufferReadValid);
      this.FormationClass = (FormationClass) GameNetworkMessage.ReadIntFromPacket(CompressionMission.FormationClassCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteNetworkPeerReferenceToPacket(this.Peer);
      GameNetworkMessage.WriteIntToPacket((int) this.FormationClass, CompressionMission.FormationClassCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.Formations;
    }

    protected override string OnGetLogFormat()
    {
      return "Assign formation with index: " + (object) (int) this.FormationClass + " to NetworkPeer with name: " + this.Peer.UserName + " and peer-index" + (object) this.Peer.Index + " and make him captain.";
    }
  }
}

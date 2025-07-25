// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.UpdateSelectedTroopIndex
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class UpdateSelectedTroopIndex : GameNetworkMessage
  {
    public NetworkCommunicator Peer { get; private set; }

    public int SelectedTroopIndex { get; private set; }

    public UpdateSelectedTroopIndex(NetworkCommunicator peer, int selectedTroopIndex)
    {
      this.Peer = peer;
      this.SelectedTroopIndex = selectedTroopIndex;
    }

    public UpdateSelectedTroopIndex()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.Peer = GameNetworkMessage.ReadNetworkPeerReferenceFromPacket(ref bufferReadValid);
      this.SelectedTroopIndex = GameNetworkMessage.ReadIntFromPacket(CompressionMission.SelectedTroopIndexCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteNetworkPeerReferenceToPacket(this.Peer);
      GameNetworkMessage.WriteIntToPacket(this.SelectedTroopIndex, CompressionMission.SelectedTroopIndexCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.Equipment;
    }

    protected override string OnGetLogFormat()
    {
      return "Update SelectedTroopIndex to: " + (object) this.SelectedTroopIndex + ", on peer: " + this.Peer.UserName + " with peer-index:" + (object) this.Peer.Index;
    }
  }
}

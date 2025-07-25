// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.DuelPreparationStartedForTheFirstTime
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class DuelPreparationStartedForTheFirstTime : GameNetworkMessage
  {
    public NetworkCommunicator RequesterPeer { get; private set; }

    public NetworkCommunicator RequesteePeer { get; private set; }

    public int AreaIndex { get; private set; }

    public DuelPreparationStartedForTheFirstTime(
      NetworkCommunicator requesterPeer,
      NetworkCommunicator requesteePeer,
      int areaIndex)
    {
      this.RequesterPeer = requesterPeer;
      this.RequesteePeer = requesteePeer;
      this.AreaIndex = areaIndex;
    }

    public DuelPreparationStartedForTheFirstTime()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.RequesterPeer = GameNetworkMessage.ReadNetworkPeerReferenceFromPacket(ref bufferReadValid);
      this.RequesteePeer = GameNetworkMessage.ReadNetworkPeerReferenceFromPacket(ref bufferReadValid);
      this.AreaIndex = GameNetworkMessage.ReadIntFromPacket(CompressionMission.DuelAreaIndexCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteNetworkPeerReferenceToPacket(this.RequesterPeer);
      GameNetworkMessage.WriteNetworkPeerReferenceToPacket(this.RequesteePeer);
      GameNetworkMessage.WriteIntToPacket(this.AreaIndex, CompressionMission.DuelAreaIndexCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.GameMode;
    }

    protected override string OnGetLogFormat()
    {
      return "Duel started between agent with name: " + this.RequesteePeer.UserName + " and index: " + (object) this.RequesteePeer.Index + " and agent with name: " + this.RequesterPeer.UserName + " and index: " + (object) this.RequesterPeer.Index;
    }
  }
}

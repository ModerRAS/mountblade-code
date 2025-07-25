// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.ChangeCulture
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class ChangeCulture : GameNetworkMessage
  {
    public NetworkCommunicator Peer { get; private set; }

    public BasicCultureObject Culture { get; private set; }

    public ChangeCulture()
    {
    }

    public ChangeCulture(MissionPeer peer, BasicCultureObject culture)
    {
      this.Peer = peer.GetNetworkPeer();
      this.Culture = culture;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteNetworkPeerReferenceToPacket(this.Peer);
      GameNetworkMessage.WriteObjectReferenceToPacket((MBObjectBase) this.Culture, CompressionBasic.GUIDCompressionInfo);
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.Peer = GameNetworkMessage.ReadNetworkPeerReferenceFromPacket(ref bufferReadValid);
      this.Culture = (BasicCultureObject) GameNetworkMessage.ReadObjectReferenceFromPacket(MBObjectManager.Instance, CompressionBasic.GUIDCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.Mission;
    }

    protected override string OnGetLogFormat()
    {
      return "Requested culture: " + (object) this.Culture.Name;
    }
  }
}

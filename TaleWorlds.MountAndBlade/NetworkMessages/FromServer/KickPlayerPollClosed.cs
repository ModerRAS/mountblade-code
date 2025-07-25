// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.KickPlayerPollClosed
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class KickPlayerPollClosed : GameNetworkMessage
  {
    public NetworkCommunicator PlayerPeer { get; private set; }

    public bool Accepted { get; private set; }

    public KickPlayerPollClosed(NetworkCommunicator playerPeer, bool accepted)
    {
      this.PlayerPeer = playerPeer;
      this.Accepted = accepted;
    }

    public KickPlayerPollClosed()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.PlayerPeer = GameNetworkMessage.ReadNetworkPeerReferenceFromPacket(ref bufferReadValid);
      this.Accepted = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteNetworkPeerReferenceToPacket(this.PlayerPeer);
      GameNetworkMessage.WriteBoolToPacket(this.Accepted);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.Administration;
    }

    protected override string OnGetLogFormat()
    {
      return "Poll is closed. " + this.PlayerPeer?.UserName + " is " + (this.Accepted ? "" : "not ") + "kicked.";
    }
  }
}

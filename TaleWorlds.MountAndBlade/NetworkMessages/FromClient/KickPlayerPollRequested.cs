// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromClient.KickPlayerPollRequested
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromClient
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromClient)]
  public sealed class KickPlayerPollRequested : GameNetworkMessage
  {
    public NetworkCommunicator PlayerPeer { get; private set; }

    public bool BanPlayer { get; private set; }

    public KickPlayerPollRequested(NetworkCommunicator playerPeer, bool banPlayer)
    {
      this.PlayerPeer = playerPeer;
      this.BanPlayer = banPlayer;
    }

    public KickPlayerPollRequested()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.PlayerPeer = GameNetworkMessage.ReadNetworkPeerReferenceFromPacket(ref bufferReadValid, true);
      this.BanPlayer = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteNetworkPeerReferenceToPacket(this.PlayerPeer);
      GameNetworkMessage.WriteBoolToPacket(this.BanPlayer);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.Administration;
    }

    protected override string OnGetLogFormat()
    {
      return "Requested to start poll to kick" + (this.BanPlayer ? " and ban" : "") + " player: " + this.PlayerPeer?.UserName;
    }
  }
}

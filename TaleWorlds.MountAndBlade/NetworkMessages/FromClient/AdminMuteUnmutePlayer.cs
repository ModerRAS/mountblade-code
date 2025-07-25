// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromClient.AdminMuteUnmutePlayer
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromClient
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromClient)]
  public sealed class AdminMuteUnmutePlayer : GameNetworkMessage
  {
    public NetworkCommunicator PlayerPeer { get; private set; }

    public bool Unmute { get; private set; }

    public AdminMuteUnmutePlayer(NetworkCommunicator playerPeer, bool unmute)
    {
      this.PlayerPeer = playerPeer;
      this.Unmute = unmute;
    }

    public AdminMuteUnmutePlayer()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.PlayerPeer = GameNetworkMessage.ReadNetworkPeerReferenceFromPacket(ref bufferReadValid);
      this.Unmute = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteNetworkPeerReferenceToPacket(this.PlayerPeer);
      GameNetworkMessage.WriteBoolToPacket(this.Unmute);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.Administration;
    }

    protected override string OnGetLogFormat()
    {
      return "Requested to " + (this.Unmute ? " unmute" : "mute") + " player: " + this.PlayerPeer.UserName;
    }
  }
}

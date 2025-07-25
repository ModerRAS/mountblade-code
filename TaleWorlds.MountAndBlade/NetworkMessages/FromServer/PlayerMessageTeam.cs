// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.PlayerMessageTeam
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class PlayerMessageTeam : GameNetworkMessage
  {
    public string Message { get; private set; }

    public NetworkCommunicator Player { get; private set; }

    public PlayerMessageTeam(NetworkCommunicator player, string message)
    {
      this.Player = player;
      this.Message = message;
    }

    public PlayerMessageTeam()
    {
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteNetworkPeerReferenceToPacket(this.Player);
      GameNetworkMessage.WriteStringToPacket(this.Message);
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.Player = GameNetworkMessage.ReadNetworkPeerReferenceFromPacket(ref bufferReadValid);
      this.Message = GameNetworkMessage.ReadStringFromPacket(ref bufferReadValid);
      return bufferReadValid;
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.Messaging;
    }

    protected override string OnGetLogFormat()
    {
      return "Receiving team message: " + this.Message + " from peer: " + this.Player.UserName + " index: " + (object) this.Player.Index;
    }
  }
}

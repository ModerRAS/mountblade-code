// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.DuelEnded
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class DuelEnded : GameNetworkMessage
  {
    public NetworkCommunicator WinnerPeer { get; private set; }

    public DuelEnded(NetworkCommunicator winnerPeer) => this.WinnerPeer = winnerPeer;

    public DuelEnded()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.WinnerPeer = GameNetworkMessage.ReadNetworkPeerReferenceFromPacket(ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteNetworkPeerReferenceToPacket(this.WinnerPeer);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.GameMode;
    }

    protected override string OnGetLogFormat() => this.WinnerPeer.UserName + "has won the duel";
  }
}

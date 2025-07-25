// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.SendVoiceToPlay
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class SendVoiceToPlay : GameNetworkMessage
  {
    public NetworkCommunicator Peer { get; private set; }

    public byte[] Buffer { get; private set; }

    public int BufferLength { get; private set; }

    public SendVoiceToPlay()
    {
    }

    public SendVoiceToPlay(NetworkCommunicator peer, byte[] buffer, int bufferLength)
    {
      this.Peer = peer;
      this.Buffer = buffer;
      this.BufferLength = bufferLength;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteNetworkPeerReferenceToPacket(this.Peer);
      GameNetworkMessage.WriteByteArrayToPacket(this.Buffer, 0, this.BufferLength);
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.Peer = GameNetworkMessage.ReadNetworkPeerReferenceFromPacket(ref bufferReadValid);
      this.Buffer = new byte[1440];
      this.BufferLength = GameNetworkMessage.ReadByteArrayFromPacket(this.Buffer, 0, 1440, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override MultiplayerMessageFilter OnGetLogFilter() => MultiplayerMessageFilter.None;

    protected override string OnGetLogFormat() => string.Empty;
  }
}

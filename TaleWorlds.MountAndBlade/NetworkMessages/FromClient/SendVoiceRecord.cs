// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromClient.SendVoiceRecord
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromClient
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromClient)]
  public sealed class SendVoiceRecord : GameNetworkMessage
  {
    public byte[] Buffer { get; private set; }

    public int BufferLength { get; private set; }

    public List<VirtualPlayer> ReceiverList { get; private set; }

    public bool HasReceiverList { get; private set; }

    public SendVoiceRecord()
    {
    }

    public SendVoiceRecord(byte[] buffer, int bufferLength)
    {
      this.Buffer = buffer;
      this.BufferLength = bufferLength;
    }

    public SendVoiceRecord(byte[] buffer, int bufferLength, List<VirtualPlayer> receiverList)
    {
      this.Buffer = buffer;
      this.BufferLength = bufferLength;
      this.ReceiverList = receiverList;
      this.HasReceiverList = true;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteByteArrayToPacket(this.Buffer, 0, this.BufferLength);
      int num = 0;
      if (this.ReceiverList != null)
        num = this.ReceiverList.Count;
      GameNetworkMessage.WriteBoolToPacket(this.HasReceiverList);
      GameNetworkMessage.WriteIntToPacket(num, CompressionBasic.PlayerCompressionInfo);
      for (int index = 0; index < num; ++index)
        GameNetworkMessage.WriteVirtualPlayerReferenceToPacket(this.ReceiverList[index]);
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.Buffer = new byte[1440];
      this.BufferLength = GameNetworkMessage.ReadByteArrayFromPacket(this.Buffer, 0, 1440, ref bufferReadValid);
      this.HasReceiverList = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      int num = GameNetworkMessage.ReadIntFromPacket(CompressionBasic.PlayerCompressionInfo, ref bufferReadValid);
      if (this.HasReceiverList)
      {
        this.ReceiverList = new List<VirtualPlayer>();
        if (num > 0)
        {
          for (int index = 0; index < num; ++index)
            this.ReceiverList.Add(GameNetworkMessage.ReadVirtualPlayerReferenceToPacket(ref bufferReadValid));
        }
      }
      return bufferReadValid;
    }

    protected override MultiplayerMessageFilter OnGetLogFilter() => MultiplayerMessageFilter.None;

    protected override string OnGetLogFormat() => string.Empty;
  }
}

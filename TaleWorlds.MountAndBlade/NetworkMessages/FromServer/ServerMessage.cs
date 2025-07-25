// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.ServerMessage
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class ServerMessage : GameNetworkMessage
  {
    public string Message { get; private set; }

    public bool IsMessageTextId { get; private set; }

    public bool IsAdminAnnouncement { get; private set; }

    public ServerMessage(string message, bool isMessageTextId = false, bool isAdminAnnouncement = false)
    {
      this.Message = message;
      this.IsMessageTextId = isMessageTextId;
      this.IsAdminAnnouncement = isAdminAnnouncement;
    }

    public ServerMessage()
    {
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteStringToPacket(this.Message);
      GameNetworkMessage.WriteBoolToPacket(this.IsMessageTextId);
      GameNetworkMessage.WriteBoolToPacket(this.IsAdminAnnouncement);
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.Message = GameNetworkMessage.ReadStringFromPacket(ref bufferReadValid);
      this.IsMessageTextId = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      this.IsAdminAnnouncement = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      return bufferReadValid;
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.Messaging;
    }

    protected override string OnGetLogFormat() => "Message from server: " + this.Message;
  }
}

// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.ServerAdminMessage
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class ServerAdminMessage : GameNetworkMessage
  {
    public string Message { get; private set; }

    public bool IsAdminBroadcast { get; private set; }

    public ServerAdminMessage(string message, bool isAdminBroadcast)
    {
      this.Message = message;
      this.IsAdminBroadcast = isAdminBroadcast;
    }

    public ServerAdminMessage()
    {
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteStringToPacket(this.Message);
      GameNetworkMessage.WriteBoolToPacket(this.IsAdminBroadcast);
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.Message = GameNetworkMessage.ReadStringFromPacket(ref bufferReadValid);
      this.IsAdminBroadcast = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      return bufferReadValid;
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.Messaging;
    }

    protected override string OnGetLogFormat() => "Admin message from server: " + this.Message;
  }
}

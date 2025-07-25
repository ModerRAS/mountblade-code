// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromClient.ChangeWelcomeMessage
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromClient
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromClient)]
  public sealed class ChangeWelcomeMessage : GameNetworkMessage
  {
    public string NewWelcomeMessage { get; private set; }

    public ChangeWelcomeMessage(string newWelcomeMessage)
    {
      this.NewWelcomeMessage = newWelcomeMessage;
    }

    public ChangeWelcomeMessage()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.NewWelcomeMessage = GameNetworkMessage.ReadStringFromPacket(ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteStringToPacket(this.NewWelcomeMessage);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.Administration;
    }

    protected override string OnGetLogFormat()
    {
      return "Requested to change the welcome message to: " + this.NewWelcomeMessage;
    }
  }
}

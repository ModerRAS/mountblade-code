// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.MultiplayerIntermissionMapItemAdded
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class MultiplayerIntermissionMapItemAdded : GameNetworkMessage
  {
    public string MapId { get; private set; }

    public MultiplayerIntermissionMapItemAdded()
    {
    }

    public MultiplayerIntermissionMapItemAdded(string mapId) => this.MapId = mapId;

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.MapId = GameNetworkMessage.ReadStringFromPacket(ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite() => GameNetworkMessage.WriteStringToPacket(this.MapId);

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.Administration;
    }

    protected override string OnGetLogFormat()
    {
      return "Adding map for voting with id: " + this.MapId + ".";
    }
  }
}

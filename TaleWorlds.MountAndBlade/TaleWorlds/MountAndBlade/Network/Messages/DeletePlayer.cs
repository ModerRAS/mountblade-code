// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.Network.Messages.DeletePlayer
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

#nullable disable
namespace TaleWorlds.MountAndBlade.Network.Messages
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class DeletePlayer : GameNetworkMessage
  {
    public int PlayerIndex { get; private set; }

    public bool AddToDisconnectList { get; private set; }

    public DeletePlayer(int playerIndex, bool addToDisconnectList)
    {
      this.PlayerIndex = playerIndex;
      this.AddToDisconnectList = addToDisconnectList;
    }

    public DeletePlayer()
    {
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteIntToPacket(this.PlayerIndex, CompressionBasic.PlayerCompressionInfo);
      GameNetworkMessage.WriteBoolToPacket(this.AddToDisconnectList);
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.PlayerIndex = GameNetworkMessage.ReadIntFromPacket(CompressionBasic.PlayerCompressionInfo, ref bufferReadValid);
      this.AddToDisconnectList = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      return bufferReadValid;
    }

    protected override MultiplayerMessageFilter OnGetLogFilter() => MultiplayerMessageFilter.Peers;

    protected override string OnGetLogFormat()
    {
      return "Delete player with index" + (object) this.PlayerIndex;
    }
  }
}

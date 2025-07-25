// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.SyncGoldsForSkirmish
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class SyncGoldsForSkirmish : GameNetworkMessage
  {
    public VirtualPlayer VirtualPlayer { get; private set; }

    public int GoldAmount { get; private set; }

    public SyncGoldsForSkirmish()
    {
    }

    public SyncGoldsForSkirmish(VirtualPlayer peer, int goldAmount)
    {
      this.VirtualPlayer = peer;
      this.GoldAmount = goldAmount;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteVirtualPlayerReferenceToPacket(this.VirtualPlayer);
      GameNetworkMessage.WriteIntToPacket(this.GoldAmount, CompressionBasic.RoundGoldAmountCompressionInfo);
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.VirtualPlayer = GameNetworkMessage.ReadVirtualPlayerReferenceToPacket(ref bufferReadValid);
      this.GoldAmount = GameNetworkMessage.ReadIntFromPacket(CompressionBasic.RoundGoldAmountCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.GameMode;
    }

    protected override string OnGetLogFormat()
    {
      return "Gold amount set to " + (object) this.GoldAmount + " for " + this.VirtualPlayer.UserName + ".";
    }
  }
}

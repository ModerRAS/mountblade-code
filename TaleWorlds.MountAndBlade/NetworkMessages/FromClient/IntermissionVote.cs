// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromClient.IntermissionVote
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromClient
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromClient)]
  public sealed class IntermissionVote : GameNetworkMessage
  {
    public int VoteCount { get; private set; }

    public string ItemID { get; private set; }

    public IntermissionVote(string itemID, int voteCount)
    {
      this.VoteCount = voteCount;
      this.ItemID = itemID;
    }

    public IntermissionVote()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.ItemID = GameNetworkMessage.ReadStringFromPacket(ref bufferReadValid);
      this.VoteCount = GameNetworkMessage.ReadIntFromPacket(new CompressionInfo.Integer(-1, 1, true), ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteStringToPacket(this.ItemID);
      GameNetworkMessage.WriteIntToPacket(this.VoteCount, new CompressionInfo.Integer(-1, 1, true));
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.Administration;
    }

    protected override string OnGetLogFormat()
    {
      return string.Format("Intermission vote casted for item with ID: {0} with count: {1}.", (object) this.ItemID, (object) this.VoteCount);
    }
  }
}

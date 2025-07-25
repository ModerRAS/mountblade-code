// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.MultiplayerIntermissionCultureItemVoteCountChanged
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class MultiplayerIntermissionCultureItemVoteCountChanged : GameNetworkMessage
  {
    public int CultureItemIndex { get; private set; }

    public int VoteCount { get; private set; }

    public MultiplayerIntermissionCultureItemVoteCountChanged()
    {
    }

    public MultiplayerIntermissionCultureItemVoteCountChanged(int cultureItemIndex, int voteCount)
    {
      this.CultureItemIndex = cultureItemIndex;
      this.VoteCount = voteCount;
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.CultureItemIndex = GameNetworkMessage.ReadIntFromPacket(CompressionBasic.CultureIndexCompressionInfo, ref bufferReadValid);
      this.VoteCount = GameNetworkMessage.ReadIntFromPacket(CompressionBasic.IntermissionVoterCountCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteIntToPacket(this.CultureItemIndex, CompressionBasic.CultureIndexCompressionInfo);
      GameNetworkMessage.WriteIntToPacket(this.VoteCount, CompressionBasic.IntermissionVoterCountCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.Administration;
    }

    protected override string OnGetLogFormat()
    {
      return string.Format("Vote count changed for culture with index: {0}, vote count: {1}.", (object) this.CultureItemIndex, (object) this.VoteCount);
    }
  }
}

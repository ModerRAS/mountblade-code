// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.DuelPointsUpdateMessage
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.MissionRepresentatives;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class DuelPointsUpdateMessage : GameNetworkMessage
  {
    public int Bounty { get; private set; }

    public int Score { get; private set; }

    public int NumberOfWins { get; private set; }

    public NetworkCommunicator NetworkCommunicator { get; private set; }

    public DuelPointsUpdateMessage()
    {
    }

    public DuelPointsUpdateMessage(DuelMissionRepresentative representative)
    {
      this.Bounty = representative.Bounty;
      this.Score = representative.Score;
      this.NumberOfWins = representative.NumberOfWins;
      this.NetworkCommunicator = representative.GetNetworkPeer();
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteIntToPacket(this.Bounty, CompressionMatchmaker.ScoreCompressionInfo);
      GameNetworkMessage.WriteIntToPacket(this.Score, CompressionMatchmaker.ScoreCompressionInfo);
      GameNetworkMessage.WriteIntToPacket(this.NumberOfWins, CompressionMatchmaker.KillDeathAssistCountCompressionInfo);
      GameNetworkMessage.WriteNetworkPeerReferenceToPacket(this.NetworkCommunicator);
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.Bounty = GameNetworkMessage.ReadIntFromPacket(CompressionMatchmaker.ScoreCompressionInfo, ref bufferReadValid);
      this.Score = GameNetworkMessage.ReadIntFromPacket(CompressionMatchmaker.ScoreCompressionInfo, ref bufferReadValid);
      this.NumberOfWins = GameNetworkMessage.ReadIntFromPacket(CompressionMatchmaker.KillDeathAssistCountCompressionInfo, ref bufferReadValid);
      this.NetworkCommunicator = GameNetworkMessage.ReadNetworkPeerReferenceFromPacket(ref bufferReadValid);
      return bufferReadValid;
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.GameMode;
    }

    protected override string OnGetLogFormat() => "PointUpdateMessage";
  }
}

// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.ReplaceBotWithPlayer
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class ReplaceBotWithPlayer : GameNetworkMessage
  {
    public int BotAgentIndex { get; private set; }

    public NetworkCommunicator Peer { get; private set; }

    public int Health { get; private set; }

    public int MountHealth { get; private set; }

    public ReplaceBotWithPlayer(
      NetworkCommunicator peer,
      int botAgentIndex,
      float botAgentHealth,
      float botAgentMountHealth = -1f)
    {
      this.Peer = peer;
      this.BotAgentIndex = botAgentIndex;
      this.Health = MathF.Ceiling(botAgentHealth);
      this.MountHealth = MathF.Ceiling(botAgentMountHealth);
    }

    public ReplaceBotWithPlayer()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.Peer = GameNetworkMessage.ReadNetworkPeerReferenceFromPacket(ref bufferReadValid);
      this.BotAgentIndex = GameNetworkMessage.ReadAgentIndexFromPacket(ref bufferReadValid);
      this.Health = GameNetworkMessage.ReadIntFromPacket(CompressionMission.AgentHealthCompressionInfo, ref bufferReadValid);
      this.MountHealth = GameNetworkMessage.ReadIntFromPacket(CompressionMission.AgentHealthCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteNetworkPeerReferenceToPacket(this.Peer);
      GameNetworkMessage.WriteAgentIndexToPacket(this.BotAgentIndex);
      GameNetworkMessage.WriteIntToPacket(this.Health, CompressionMission.AgentHealthCompressionInfo);
      GameNetworkMessage.WriteIntToPacket(this.MountHealth, CompressionMission.AgentHealthCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter() => MultiplayerMessageFilter.Agents;

    protected override string OnGetLogFormat() => "Replace a bot with a player";
  }
}

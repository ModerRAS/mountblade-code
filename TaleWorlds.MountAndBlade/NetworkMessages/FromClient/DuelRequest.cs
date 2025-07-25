// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromClient.DuelRequest
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromClient
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromClient)]
  public sealed class DuelRequest : GameNetworkMessage
  {
    public int RequestedAgentIndex { get; private set; }

    public DuelRequest(int requestedAgentIndex) => this.RequestedAgentIndex = requestedAgentIndex;

    public DuelRequest()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.RequestedAgentIndex = GameNetworkMessage.ReadAgentIndexFromPacket(ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteAgentIndexToPacket(this.RequestedAgentIndex);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.GameMode;
    }

    protected override string OnGetLogFormat()
    {
      return "Duel requested from agent with index: " + (object) this.RequestedAgentIndex;
    }
  }
}

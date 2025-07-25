// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.DuelRequest
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
  public sealed class DuelRequest : GameNetworkMessage
  {
    public int RequesterAgentIndex { get; private set; }

    public int RequestedAgentIndex { get; private set; }

    public TroopType SelectedAreaTroopType { get; private set; }

    public DuelRequest(
      int requesterAgentIndex,
      int requestedAgentIndex,
      TroopType selectedAreaTroopType)
    {
      this.RequesterAgentIndex = requesterAgentIndex;
      this.RequestedAgentIndex = requestedAgentIndex;
      this.SelectedAreaTroopType = selectedAreaTroopType;
    }

    public DuelRequest()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.RequesterAgentIndex = GameNetworkMessage.ReadAgentIndexFromPacket(ref bufferReadValid);
      this.RequestedAgentIndex = GameNetworkMessage.ReadAgentIndexFromPacket(ref bufferReadValid);
      this.SelectedAreaTroopType = (TroopType) GameNetworkMessage.ReadIntFromPacket(CompressionBasic.TroopTypeCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteAgentIndexToPacket(this.RequesterAgentIndex);
      GameNetworkMessage.WriteAgentIndexToPacket(this.RequestedAgentIndex);
      GameNetworkMessage.WriteIntToPacket((int) this.SelectedAreaTroopType, CompressionBasic.TroopTypeCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.GameMode;
    }

    protected override string OnGetLogFormat()
    {
      return "Request duel from agent with index: " + (object) this.RequestedAgentIndex;
    }
  }
}

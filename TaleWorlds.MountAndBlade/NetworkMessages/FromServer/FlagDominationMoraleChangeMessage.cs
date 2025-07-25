// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.FlagDominationMoraleChangeMessage
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class FlagDominationMoraleChangeMessage : GameNetworkMessage
  {
    public float Morale { get; private set; }

    public FlagDominationMoraleChangeMessage()
    {
    }

    public FlagDominationMoraleChangeMessage(float morale) => this.Morale = morale;

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteFloatToPacket(this.Morale, CompressionMission.FlagDominationMoraleCompressionInfo);
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.Morale = GameNetworkMessage.ReadFloatFromPacket(CompressionMission.FlagDominationMoraleCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.GameMode;
    }

    protected override string OnGetLogFormat() => "Morale synched: " + (object) this.Morale;
  }
}

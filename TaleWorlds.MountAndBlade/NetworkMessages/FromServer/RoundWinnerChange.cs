// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.RoundWinnerChange
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
  public sealed class RoundWinnerChange : GameNetworkMessage
  {
    public BattleSideEnum RoundWinner { get; private set; }

    public RoundWinnerChange(BattleSideEnum roundWinner) => this.RoundWinner = roundWinner;

    public RoundWinnerChange() => this.RoundWinner = BattleSideEnum.None;

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.RoundWinner = (BattleSideEnum) GameNetworkMessage.ReadIntFromPacket(CompressionMission.TeamSideCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteIntToPacket((int) this.RoundWinner, CompressionMission.TeamSideCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.Mission;
    }

    protected override string OnGetLogFormat()
    {
      return "Change round winner to: " + this.RoundWinner.ToString();
    }
  }
}

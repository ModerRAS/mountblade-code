// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.WarmupStateChange
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class WarmupStateChange : GameNetworkMessage
  {
    public MultiplayerWarmupComponent.WarmupStates WarmupState { get; private set; }

    public float StateStartTimeInSeconds { get; private set; }

    public WarmupStateChange(
      MultiplayerWarmupComponent.WarmupStates warmupState,
      long stateStartTimeInTicks)
    {
      this.WarmupState = warmupState;
      this.StateStartTimeInSeconds = (float) stateStartTimeInTicks / 1E+07f;
    }

    public WarmupStateChange()
    {
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteIntToPacket((int) this.WarmupState, CompressionMission.MissionRoundStateCompressionInfo);
      GameNetworkMessage.WriteFloatToPacket(this.StateStartTimeInSeconds, CompressionMatchmaker.MissionTimeCompressionInfo);
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.WarmupState = (MultiplayerWarmupComponent.WarmupStates) GameNetworkMessage.ReadIntFromPacket(CompressionMission.MissionRoundStateCompressionInfo, ref bufferReadValid);
      this.StateStartTimeInSeconds = GameNetworkMessage.ReadFloatFromPacket(CompressionMatchmaker.MissionTimeCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.MissionDetailed;
    }

    protected override string OnGetLogFormat()
    {
      return "Warmup state set to " + (object) this.WarmupState;
    }
  }
}

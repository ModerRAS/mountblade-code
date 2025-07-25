// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.SetBoundariesState
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class SetBoundariesState : GameNetworkMessage
  {
    public bool IsOutside { get; private set; }

    public float StateStartTimeInSeconds { get; private set; }

    public SetBoundariesState()
    {
    }

    public SetBoundariesState(bool isOutside) => this.IsOutside = isOutside;

    public SetBoundariesState(bool isOutside, long stateStartTimeInTicks)
      : this(isOutside)
    {
      this.StateStartTimeInSeconds = (float) stateStartTimeInTicks / 1E+07f;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteBoolToPacket(this.IsOutside);
      if (!this.IsOutside)
        return;
      GameNetworkMessage.WriteFloatToPacket(this.StateStartTimeInSeconds, CompressionMatchmaker.MissionTimeCompressionInfo);
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.IsOutside = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      if (this.IsOutside)
        this.StateStartTimeInSeconds = GameNetworkMessage.ReadFloatFromPacket(CompressionMatchmaker.MissionTimeCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.AgentsDetailed;
    }

    protected override string OnGetLogFormat()
    {
      return !this.IsOutside ? "I am now inside the level boundaries" : "I am now outside of the level boundaries";
    }
  }
}

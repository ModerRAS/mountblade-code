// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.SynchronizeMissionTimeTracker
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class SynchronizeMissionTimeTracker : GameNetworkMessage
  {
    public float CurrentTime { get; private set; }

    public SynchronizeMissionTimeTracker(float currentTime) => this.CurrentTime = currentTime;

    public SynchronizeMissionTimeTracker()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.CurrentTime = GameNetworkMessage.ReadFloatFromPacket(CompressionMatchmaker.MissionTimeCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteFloatToPacket(this.CurrentTime, CompressionMatchmaker.MissionTimeCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.MissionDetailed;
    }

    protected override string OnGetLogFormat()
    {
      return this.CurrentTime.ToString() + " seconds have elapsed since the start of the mission.";
    }
  }
}

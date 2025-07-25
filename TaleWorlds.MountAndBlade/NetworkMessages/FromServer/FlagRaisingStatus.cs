// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.FlagRaisingStatus
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class FlagRaisingStatus : GameNetworkMessage
  {
    public float Progress { get; private set; }

    public CaptureTheFlagFlagDirection Direction { get; private set; }

    public float Speed { get; private set; }

    public FlagRaisingStatus()
    {
    }

    public FlagRaisingStatus(
      float currProgress,
      CaptureTheFlagFlagDirection direction,
      float speed)
    {
      this.Progress = currProgress;
      this.Direction = direction;
      this.Speed = speed;
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.Progress = GameNetworkMessage.ReadFloatFromPacket(CompressionMission.FlagClassicProgressCompressionInfo, ref bufferReadValid);
      this.Direction = (CaptureTheFlagFlagDirection) GameNetworkMessage.ReadIntFromPacket(CompressionMission.FlagDirectionEnumCompressionInfo, ref bufferReadValid);
      if (bufferReadValid && this.Direction != CaptureTheFlagFlagDirection.None && this.Direction != CaptureTheFlagFlagDirection.Static)
        this.Speed = GameNetworkMessage.ReadFloatFromPacket(CompressionMission.FlagSpeedCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteFloatToPacket(this.Progress, CompressionMission.FlagClassicProgressCompressionInfo);
      GameNetworkMessage.WriteIntToPacket((int) this.Direction, CompressionMission.FlagDirectionEnumCompressionInfo);
      if (this.Direction == CaptureTheFlagFlagDirection.None || this.Direction == CaptureTheFlagFlagDirection.Static)
        return;
      GameNetworkMessage.WriteFloatToPacket(this.Speed, CompressionMission.FlagSpeedCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.GameMode;
    }

    protected override string OnGetLogFormat()
    {
      return "Updating flag movement: Progress: " + (object) this.Progress + ", Direction: " + (object) this.Direction + ", Speed: " + (object) this.Speed;
    }
  }
}

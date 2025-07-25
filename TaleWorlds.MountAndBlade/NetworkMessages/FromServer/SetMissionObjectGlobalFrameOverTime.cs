// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.SetMissionObjectGlobalFrameOverTime
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
  public sealed class SetMissionObjectGlobalFrameOverTime : GameNetworkMessage
  {
    public MissionObjectId MissionObjectId { get; private set; }

    public MatrixFrame Frame { get; private set; }

    public float Duration { get; private set; }

    public SetMissionObjectGlobalFrameOverTime(
      MissionObjectId missionObjectId,
      ref MatrixFrame frame,
      float duration)
    {
      this.MissionObjectId = missionObjectId;
      this.Frame = frame;
      this.Duration = duration;
    }

    public SetMissionObjectGlobalFrameOverTime()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.MissionObjectId = GameNetworkMessage.ReadMissionObjectIdFromPacket(ref bufferReadValid);
      Vec3 s = GameNetworkMessage.ReadVec3FromPacket(CompressionBasic.UnitVectorCompressionInfo, ref bufferReadValid);
      Vec3 f = GameNetworkMessage.ReadVec3FromPacket(CompressionBasic.UnitVectorCompressionInfo, ref bufferReadValid);
      Vec3 u = GameNetworkMessage.ReadVec3FromPacket(CompressionBasic.UnitVectorCompressionInfo, ref bufferReadValid);
      Vec3 scalingVector = GameNetworkMessage.ReadVec3FromPacket(CompressionBasic.ScaleCompressionInfo, ref bufferReadValid);
      Vec3 o = GameNetworkMessage.ReadVec3FromPacket(CompressionBasic.PositionCompressionInfo, ref bufferReadValid);
      if (bufferReadValid)
      {
        this.Frame = new MatrixFrame(new Mat3(s, f, u), o);
        this.Frame.Scale(scalingVector);
      }
      this.Duration = GameNetworkMessage.ReadFloatFromPacket(CompressionMission.FlagCapturePointDurationCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      Vec3 scaleVector = this.Frame.rotation.GetScaleVector();
      MatrixFrame frame = this.Frame;
      frame.Scale(new Vec3(1f / scaleVector.x, 1f / scaleVector.y, 1f / scaleVector.z));
      GameNetworkMessage.WriteMissionObjectIdToPacket(this.MissionObjectId);
      GameNetworkMessage.WriteVec3ToPacket(frame.rotation.f, CompressionBasic.UnitVectorCompressionInfo);
      GameNetworkMessage.WriteVec3ToPacket(frame.rotation.s, CompressionBasic.UnitVectorCompressionInfo);
      GameNetworkMessage.WriteVec3ToPacket(frame.rotation.u, CompressionBasic.UnitVectorCompressionInfo);
      GameNetworkMessage.WriteVec3ToPacket(scaleVector, CompressionBasic.ScaleCompressionInfo);
      GameNetworkMessage.WriteVec3ToPacket(frame.origin, CompressionBasic.PositionCompressionInfo);
      GameNetworkMessage.WriteFloatToPacket(this.Duration, CompressionMission.FlagCapturePointDurationCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.MissionObjectsDetailed;
    }

    protected override string OnGetLogFormat()
    {
      return "Set Move-to-global-frame on MissionObject with ID: " + (object) this.MissionObjectId + " over a period of " + (object) this.Duration + " seconds.";
    }
  }
}

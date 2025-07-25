// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.SetMissionObjectGlobalFrame
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
  public sealed class SetMissionObjectGlobalFrame : GameNetworkMessage
  {
    public MissionObjectId MissionObjectId { get; private set; }

    public MatrixFrame Frame { get; private set; }

    public SetMissionObjectGlobalFrame(MissionObjectId missionObjectId, ref MatrixFrame frame)
    {
      this.MissionObjectId = missionObjectId;
      this.Frame = frame;
    }

    public SetMissionObjectGlobalFrame()
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
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.MissionObjectsDetailed;
    }

    protected override string OnGetLogFormat()
    {
      return "Set Global Frame on MissionObject with ID: " + (object) this.MissionObjectId;
    }
  }
}

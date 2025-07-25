// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.StopPhysicsAndSetFrameOfMissionObject
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
  public sealed class StopPhysicsAndSetFrameOfMissionObject : GameNetworkMessage
  {
    public MissionObjectId ObjectId { get; private set; }

    public MissionObjectId ParentId { get; private set; }

    public MatrixFrame Frame { get; private set; }

    public StopPhysicsAndSetFrameOfMissionObject(
      MissionObjectId objectId,
      MissionObjectId parentId,
      MatrixFrame frame)
    {
      this.ObjectId = objectId;
      this.ParentId = parentId;
      this.Frame = frame;
    }

    public StopPhysicsAndSetFrameOfMissionObject()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.ObjectId = GameNetworkMessage.ReadMissionObjectIdFromPacket(ref bufferReadValid);
      this.ParentId = GameNetworkMessage.ReadMissionObjectIdFromPacket(ref bufferReadValid);
      this.Frame = GameNetworkMessage.ReadNonUniformTransformFromPacket(CompressionBasic.PositionCompressionInfo, CompressionBasic.LowResQuaternionCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteMissionObjectIdToPacket(this.ObjectId);
      GameNetworkMessage.WriteMissionObjectIdToPacket(this.ParentId.Id >= 0 ? this.ParentId : MissionObjectId.Invalid);
      GameNetworkMessage.WriteNonUniformTransformToPacket(this.Frame, CompressionBasic.PositionCompressionInfo, CompressionBasic.LowResQuaternionCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.MissionObjects;
    }

    protected override string OnGetLogFormat()
    {
      return "Stop physics and set frame of MissionObject with ID: " + (object) this.ObjectId + " Parent Index: " + (object) this.ParentId;
    }
  }
}

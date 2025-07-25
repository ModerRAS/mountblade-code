// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.SetMissionObjectFrame
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
  public sealed class SetMissionObjectFrame : GameNetworkMessage
  {
    public MissionObjectId MissionObjectId { get; private set; }

    public MatrixFrame Frame { get; private set; }

    public SetMissionObjectFrame(MissionObjectId missionObjectId, ref MatrixFrame frame)
    {
      this.MissionObjectId = missionObjectId;
      this.Frame = frame;
    }

    public SetMissionObjectFrame()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.MissionObjectId = GameNetworkMessage.ReadMissionObjectIdFromPacket(ref bufferReadValid);
      this.Frame = GameNetworkMessage.ReadMatrixFrameFromPacket(ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteMissionObjectIdToPacket(this.MissionObjectId);
      GameNetworkMessage.WriteMatrixFrameToPacket(this.Frame);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.MissionObjectsDetailed;
    }

    protected override string OnGetLogFormat()
    {
      return "Set Frame on MissionObject with ID: " + (object) this.MissionObjectId;
    }
  }
}

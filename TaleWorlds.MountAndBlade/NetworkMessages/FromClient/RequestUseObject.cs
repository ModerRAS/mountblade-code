// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromClient.RequestUseObject
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromClient
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromClient)]
  public sealed class RequestUseObject : GameNetworkMessage
  {
    public MissionObjectId UsableMissionObjectId { get; private set; }

    public int UsedObjectPreferenceIndex { get; private set; }

    public RequestUseObject(MissionObjectId usableMissionObjectId, int usedObjectPreferenceIndex)
    {
      this.UsableMissionObjectId = usableMissionObjectId;
      this.UsedObjectPreferenceIndex = usedObjectPreferenceIndex;
    }

    public RequestUseObject()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.UsableMissionObjectId = GameNetworkMessage.ReadMissionObjectIdFromPacket(ref bufferReadValid);
      this.UsedObjectPreferenceIndex = GameNetworkMessage.ReadIntFromPacket(CompressionMission.WieldSlotCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteMissionObjectIdToPacket(this.UsableMissionObjectId);
      GameNetworkMessage.WriteIntToPacket(this.UsedObjectPreferenceIndex, CompressionMission.WieldSlotCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.MissionObjectsDetailed;
    }

    protected override string OnGetLogFormat()
    {
      return "Request to use UsableMissionObject with ID: " + (object) this.UsableMissionObjectId;
    }
  }
}

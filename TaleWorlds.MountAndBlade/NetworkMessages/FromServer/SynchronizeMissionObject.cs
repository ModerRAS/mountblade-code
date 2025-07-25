// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.SynchronizeMissionObject
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class SynchronizeMissionObject : GameNetworkMessage
  {
    private SynchedMissionObject _synchedMissionObject;

    public MissionObjectId MissionObjectId { get; private set; }

    public int RecordTypeIndex { get; private set; }

    public (BaseSynchedMissionObjectReadableRecord, ISynchedMissionObjectReadableRecord) RecordPair { get; private set; }

    public SynchronizeMissionObject(SynchedMissionObject synchedMissionObject)
    {
      this._synchedMissionObject = synchedMissionObject;
      this.MissionObjectId = synchedMissionObject.Id;
      this.RecordTypeIndex = GameNetwork.GetSynchedMissionObjectReadableRecordIndexFromType(synchedMissionObject.GetType());
    }

    public SynchronizeMissionObject()
    {
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteMissionObjectIdToPacket(this.MissionObjectId);
      GameNetworkMessage.WriteIntToPacket(this.RecordTypeIndex, CompressionMission.SynchedMissionObjectReadableRecordTypeIndex);
      this._synchedMissionObject.WriteToNetwork();
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.MissionObjectId = GameNetworkMessage.ReadMissionObjectIdFromPacket(ref bufferReadValid);
      this.RecordTypeIndex = GameNetworkMessage.ReadIntFromPacket(CompressionMission.SynchedMissionObjectReadableRecordTypeIndex, ref bufferReadValid);
      this.RecordPair = BaseSynchedMissionObjectReadableRecord.CreateFromNetworkWithTypeIndex(this.RecordTypeIndex);
      return bufferReadValid;
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.Mission;
    }

    protected override string OnGetLogFormat()
    {
      return "Synchronize MissionObject with Id: " + (object) this.MissionObjectId;
    }
  }
}

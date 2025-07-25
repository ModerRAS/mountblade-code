// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.SyncObjectHitpoints
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
  public sealed class SyncObjectHitpoints : GameNetworkMessage
  {
    public MissionObjectId MissionObjectId { get; private set; }

    public float Hitpoints { get; private set; }

    public SyncObjectHitpoints(MissionObjectId missionObjectId, float hitpoints)
    {
      this.MissionObjectId = missionObjectId;
      this.Hitpoints = hitpoints;
    }

    public SyncObjectHitpoints()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.MissionObjectId = GameNetworkMessage.ReadMissionObjectIdFromPacket(ref bufferReadValid);
      this.Hitpoints = GameNetworkMessage.ReadFloatFromPacket(CompressionMission.UsableGameObjectHealthCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteMissionObjectIdToPacket(this.MissionObjectId);
      GameNetworkMessage.WriteFloatToPacket(MathF.Max(this.Hitpoints, 0.0f), CompressionMission.UsableGameObjectHealthCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.MissionObjectsDetailed | MultiplayerMessageFilter.SiegeWeaponsDetailed;
    }

    protected override string OnGetLogFormat()
    {
      return "Synchronize HitPoints: " + (object) this.Hitpoints + " of MissionObject with Id: " + (object) this.MissionObjectId;
    }
  }
}

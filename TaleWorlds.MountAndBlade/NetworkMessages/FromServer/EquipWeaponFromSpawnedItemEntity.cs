// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.EquipWeaponFromSpawnedItemEntity
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class EquipWeaponFromSpawnedItemEntity : GameNetworkMessage
  {
    public MissionObjectId SpawnedItemEntityId { get; private set; }

    public EquipmentIndex SlotIndex { get; private set; }

    public int AgentIndex { get; private set; }

    public bool RemoveWeapon { get; private set; }

    public EquipWeaponFromSpawnedItemEntity(
      int agentIndex,
      EquipmentIndex slot,
      MissionObjectId spawnedItemEntityId,
      bool removeWeapon)
    {
      this.AgentIndex = agentIndex;
      this.SlotIndex = slot;
      this.SpawnedItemEntityId = spawnedItemEntityId;
      this.RemoveWeapon = removeWeapon;
    }

    public EquipWeaponFromSpawnedItemEntity()
    {
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteAgentIndexToPacket(this.AgentIndex);
      GameNetworkMessage.WriteMissionObjectIdToPacket(this.SpawnedItemEntityId.Id >= 0 ? this.SpawnedItemEntityId : MissionObjectId.Invalid);
      GameNetworkMessage.WriteIntToPacket((int) this.SlotIndex, CompressionMission.ItemSlotCompressionInfo);
      GameNetworkMessage.WriteBoolToPacket(this.RemoveWeapon);
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.AgentIndex = GameNetworkMessage.ReadAgentIndexFromPacket(ref bufferReadValid);
      this.SpawnedItemEntityId = GameNetworkMessage.ReadMissionObjectIdFromPacket(ref bufferReadValid);
      this.SlotIndex = (EquipmentIndex) GameNetworkMessage.ReadIntFromPacket(CompressionMission.ItemSlotCompressionInfo, ref bufferReadValid);
      this.RemoveWeapon = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      return bufferReadValid;
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.Items | MultiplayerMessageFilter.AgentsDetailed;
    }

    protected override string OnGetLogFormat()
    {
      return "EquipWeaponFromSpawnedItemEntity with missionObjectId: " + (object) this.SpawnedItemEntityId + " to SlotIndex: " + (object) this.SlotIndex + " on agent-index: " + (object) this.AgentIndex + " RemoveWeapon: " + this.RemoveWeapon.ToString();
    }
  }
}

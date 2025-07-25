// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.SpawnWeaponAsDropFromAgent
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class SpawnWeaponAsDropFromAgent : GameNetworkMessage
  {
    public int AgentIndex { get; private set; }

    public EquipmentIndex EquipmentIndex { get; private set; }

    public Vec3 Velocity { get; private set; }

    public Vec3 AngularVelocity { get; private set; }

    public Mission.WeaponSpawnFlags WeaponSpawnFlags { get; private set; }

    public int ForcedIndex { get; private set; }

    public SpawnWeaponAsDropFromAgent(
      int agentIndex,
      EquipmentIndex equipmentIndex,
      Vec3 velocity,
      Vec3 angularVelocity,
      Mission.WeaponSpawnFlags weaponSpawnFlags,
      int forcedIndex)
    {
      this.AgentIndex = agentIndex;
      this.EquipmentIndex = equipmentIndex;
      this.Velocity = velocity;
      this.AngularVelocity = angularVelocity;
      this.WeaponSpawnFlags = weaponSpawnFlags;
      this.ForcedIndex = forcedIndex;
    }

    public SpawnWeaponAsDropFromAgent()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.AgentIndex = GameNetworkMessage.ReadAgentIndexFromPacket(ref bufferReadValid);
      this.EquipmentIndex = (EquipmentIndex) GameNetworkMessage.ReadIntFromPacket(CompressionMission.ItemSlotCompressionInfo, ref bufferReadValid);
      this.WeaponSpawnFlags = (Mission.WeaponSpawnFlags) GameNetworkMessage.ReadUintFromPacket(CompressionMission.SpawnedItemWeaponSpawnFlagCompressionInfo, ref bufferReadValid);
      if (this.WeaponSpawnFlags.HasAnyFlag<Mission.WeaponSpawnFlags>(Mission.WeaponSpawnFlags.WithPhysics))
      {
        this.Velocity = GameNetworkMessage.ReadVec3FromPacket(CompressionMission.SpawnedItemVelocityCompressionInfo, ref bufferReadValid);
        this.AngularVelocity = GameNetworkMessage.ReadVec3FromPacket(CompressionMission.SpawnedItemAngularVelocityCompressionInfo, ref bufferReadValid);
      }
      else
      {
        this.Velocity = Vec3.Zero;
        this.AngularVelocity = Vec3.Zero;
      }
      this.ForcedIndex = GameNetworkMessage.ReadIntFromPacket(CompressionBasic.MissionObjectIDCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteAgentIndexToPacket(this.AgentIndex);
      GameNetworkMessage.WriteIntToPacket((int) this.EquipmentIndex, CompressionMission.ItemSlotCompressionInfo);
      GameNetworkMessage.WriteUintToPacket((uint) this.WeaponSpawnFlags, CompressionMission.SpawnedItemWeaponSpawnFlagCompressionInfo);
      if (this.WeaponSpawnFlags.HasAnyFlag<Mission.WeaponSpawnFlags>(Mission.WeaponSpawnFlags.WithPhysics))
      {
        GameNetworkMessage.WriteVec3ToPacket(this.Velocity, CompressionMission.SpawnedItemVelocityCompressionInfo);
        GameNetworkMessage.WriteVec3ToPacket(this.AngularVelocity, CompressionMission.SpawnedItemAngularVelocityCompressionInfo);
      }
      GameNetworkMessage.WriteIntToPacket(this.ForcedIndex, CompressionBasic.MissionObjectIDCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter() => MultiplayerMessageFilter.Items;

    protected override string OnGetLogFormat()
    {
      return "Spawn Weapon from agent with agent-index: " + (object) this.AgentIndex + " from equipment index: " + (object) this.EquipmentIndex + ", and with ID: " + (object) this.ForcedIndex;
    }
  }
}

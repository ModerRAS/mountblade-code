// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.CreateAgent
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class CreateAgent : GameNetworkMessage
  {
    public int AgentIndex { get; private set; }

    public int MountAgentIndex { get; private set; }

    public NetworkCommunicator Peer { get; private set; }

    public BasicCharacterObject Character { get; private set; }

    public Monster Monster { get; private set; }

    public MissionEquipment MissionEquipment { get; private set; }

    public Equipment SpawnEquipment { get; private set; }

    public BodyProperties BodyPropertiesValue { get; private set; }

    public int BodyPropertiesSeed { get; private set; }

    public bool IsFemale { get; private set; }

    public int TeamIndex { get; private set; }

    public Vec3 Position { get; private set; }

    public Vec2 Direction { get; private set; }

    public int FormationIndex { get; private set; }

    public bool IsPlayerAgent { get; private set; }

    public uint ClothingColor1 { get; private set; }

    public uint ClothingColor2 { get; private set; }

    public CreateAgent(
      int agentIndex,
      BasicCharacterObject character,
      Monster monster,
      Equipment spawnEquipment,
      MissionEquipment missionEquipment,
      BodyProperties bodyPropertiesValue,
      int bodyPropertiesSeed,
      bool isFemale,
      int agentTeamIndex,
      int agentFormationIndex,
      uint clothingColor1,
      uint clothingColor2,
      int mountAgentIndex,
      Equipment mountAgentSpawnEquipment,
      bool isPlayerAgent,
      Vec3 position,
      Vec2 direction,
      NetworkCommunicator peer)
    {
      this.AgentIndex = agentIndex;
      this.MountAgentIndex = mountAgentIndex;
      this.Peer = peer;
      this.Character = character;
      this.Monster = monster;
      this.SpawnEquipment = new Equipment();
      this.MissionEquipment = new MissionEquipment();
      for (EquipmentIndex index = EquipmentIndex.WeaponItemBeginSlot; index < EquipmentIndex.NumAllWeaponSlots; ++index)
        this.MissionEquipment[index] = missionEquipment[index];
      for (EquipmentIndex equipmentIndex = EquipmentIndex.NumAllWeaponSlots; equipmentIndex < EquipmentIndex.ArmorItemEndSlot; ++equipmentIndex)
        this.SpawnEquipment[equipmentIndex] = spawnEquipment.GetEquipmentFromSlot(equipmentIndex);
      if (this.MountAgentIndex >= 0)
      {
        this.SpawnEquipment[EquipmentIndex.ArmorItemEndSlot] = mountAgentSpawnEquipment[EquipmentIndex.ArmorItemEndSlot];
        this.SpawnEquipment[EquipmentIndex.HorseHarness] = mountAgentSpawnEquipment[EquipmentIndex.HorseHarness];
      }
      else
      {
        this.SpawnEquipment[EquipmentIndex.ArmorItemEndSlot] = new EquipmentElement();
        this.SpawnEquipment[EquipmentIndex.HorseHarness] = new EquipmentElement();
      }
      this.BodyPropertiesValue = bodyPropertiesValue;
      this.BodyPropertiesSeed = bodyPropertiesSeed;
      this.IsFemale = isFemale;
      this.TeamIndex = agentTeamIndex;
      this.Position = position;
      this.Direction = direction;
      this.FormationIndex = agentFormationIndex;
      this.ClothingColor1 = clothingColor1;
      this.ClothingColor2 = clothingColor2;
      this.IsPlayerAgent = isPlayerAgent;
    }

    public CreateAgent()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.Character = (BasicCharacterObject) GameNetworkMessage.ReadObjectReferenceFromPacket(MBObjectManager.Instance, CompressionBasic.GUIDCompressionInfo, ref bufferReadValid);
      this.Monster = (Monster) GameNetworkMessage.ReadObjectReferenceFromPacket(MBObjectManager.Instance, CompressionBasic.GUIDCompressionInfo, ref bufferReadValid);
      this.AgentIndex = GameNetworkMessage.ReadAgentIndexFromPacket(ref bufferReadValid);
      this.MountAgentIndex = GameNetworkMessage.ReadAgentIndexFromPacket(ref bufferReadValid);
      this.Peer = GameNetworkMessage.ReadNetworkPeerReferenceFromPacket(ref bufferReadValid);
      this.SpawnEquipment = new Equipment();
      this.MissionEquipment = new MissionEquipment();
      for (EquipmentIndex index = EquipmentIndex.WeaponItemBeginSlot; index < EquipmentIndex.NumAllWeaponSlots; ++index)
        this.MissionEquipment[index] = ModuleNetworkData.ReadWeaponReferenceFromPacket(MBObjectManager.Instance, ref bufferReadValid);
      for (EquipmentIndex equipmentIndex = EquipmentIndex.NumAllWeaponSlots; equipmentIndex < EquipmentIndex.NumEquipmentSetSlots; ++equipmentIndex)
        this.SpawnEquipment.AddEquipmentToSlotWithoutAgent(equipmentIndex, ModuleNetworkData.ReadItemReferenceFromPacket(MBObjectManager.Instance, ref bufferReadValid));
      this.IsPlayerAgent = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      this.BodyPropertiesSeed = !this.IsPlayerAgent ? GameNetworkMessage.ReadIntFromPacket(CompressionBasic.RandomSeedCompressionInfo, ref bufferReadValid) : 0;
      this.BodyPropertiesValue = GameNetworkMessage.ReadBodyPropertiesFromPacket(ref bufferReadValid);
      this.IsFemale = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      this.TeamIndex = GameNetworkMessage.ReadTeamIndexFromPacket(ref bufferReadValid);
      this.Position = GameNetworkMessage.ReadVec3FromPacket(CompressionBasic.PositionCompressionInfo, ref bufferReadValid);
      this.Direction = GameNetworkMessage.ReadVec2FromPacket(CompressionBasic.UnitVectorCompressionInfo, ref bufferReadValid).Normalized();
      this.FormationIndex = GameNetworkMessage.ReadIntFromPacket(CompressionMission.FormationClassCompressionInfo, ref bufferReadValid);
      this.ClothingColor1 = GameNetworkMessage.ReadUintFromPacket(CompressionBasic.ColorCompressionInfo, ref bufferReadValid);
      this.ClothingColor2 = GameNetworkMessage.ReadUintFromPacket(CompressionBasic.ColorCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteObjectReferenceToPacket((MBObjectBase) this.Character, CompressionBasic.GUIDCompressionInfo);
      GameNetworkMessage.WriteObjectReferenceToPacket((MBObjectBase) this.Monster, CompressionBasic.GUIDCompressionInfo);
      GameNetworkMessage.WriteAgentIndexToPacket(this.AgentIndex);
      GameNetworkMessage.WriteAgentIndexToPacket(this.MountAgentIndex);
      GameNetworkMessage.WriteNetworkPeerReferenceToPacket(this.Peer);
      for (EquipmentIndex index = EquipmentIndex.WeaponItemBeginSlot; index < EquipmentIndex.NumAllWeaponSlots; ++index)
        ModuleNetworkData.WriteWeaponReferenceToPacket(this.MissionEquipment[index]);
      for (EquipmentIndex equipmentIndex = EquipmentIndex.NumAllWeaponSlots; equipmentIndex < EquipmentIndex.NumEquipmentSetSlots; ++equipmentIndex)
        ModuleNetworkData.WriteItemReferenceToPacket(this.SpawnEquipment.GetEquipmentFromSlot(equipmentIndex));
      GameNetworkMessage.WriteBoolToPacket(this.IsPlayerAgent);
      if (!this.IsPlayerAgent)
        GameNetworkMessage.WriteIntToPacket(this.BodyPropertiesSeed, CompressionBasic.RandomSeedCompressionInfo);
      GameNetworkMessage.WriteBodyPropertiesToPacket(this.BodyPropertiesValue);
      GameNetworkMessage.WriteBoolToPacket(this.IsFemale);
      GameNetworkMessage.WriteTeamIndexToPacket(this.TeamIndex);
      GameNetworkMessage.WriteVec3ToPacket(this.Position, CompressionBasic.PositionCompressionInfo);
      GameNetworkMessage.WriteVec2ToPacket(this.Direction, CompressionBasic.UnitVectorCompressionInfo);
      GameNetworkMessage.WriteIntToPacket(this.FormationIndex, CompressionMission.FormationClassCompressionInfo);
      GameNetworkMessage.WriteUintToPacket(this.ClothingColor1, CompressionBasic.ColorCompressionInfo);
      GameNetworkMessage.WriteUintToPacket(this.ClothingColor2, CompressionBasic.ColorCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter() => MultiplayerMessageFilter.Agents;

    protected override string OnGetLogFormat()
    {
      object[] objArray = new object[4]
      {
        (object) "Create an agent with index: ",
        (object) this.AgentIndex,
        null,
        null
      };
      string str;
      if (this.Peer == null)
        str = "";
      else
        str = ", belonging to peer with Name: " + this.Peer.UserName + ", and peer-index: " + (object) this.Peer.Index;
      objArray[2] = (object) str;
      objArray[3] = this.MountAgentIndex == -1 ? (object) "" : (object) (", owning a mount with index: " + (object) this.MountAgentIndex);
      return string.Concat(objArray);
    }
  }
}

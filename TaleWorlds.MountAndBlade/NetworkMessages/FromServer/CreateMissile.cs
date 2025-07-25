// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.CreateMissile
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
  public sealed class CreateMissile : GameNetworkMessage
  {
    public int MissileIndex { get; private set; }

    public int AgentIndex { get; private set; }

    public EquipmentIndex WeaponIndex { get; private set; }

    public MissionWeapon Weapon { get; private set; }

    public Vec3 Position { get; private set; }

    public Vec3 Direction { get; private set; }

    public float Speed { get; private set; }

    public Mat3 Orientation { get; private set; }

    public bool HasRigidBody { get; private set; }

    public MissionObjectId MissionObjectToIgnoreId { get; private set; }

    public bool IsPrimaryWeaponShot { get; private set; }

    public CreateMissile(
      int missileIndex,
      int agentIndex,
      EquipmentIndex weaponIndex,
      MissionWeapon weapon,
      Vec3 position,
      Vec3 direction,
      float speed,
      Mat3 orientation,
      bool hasRigidBody,
      MissionObjectId missionObjectToIgnoreId,
      bool isPrimaryWeaponShot)
    {
      this.MissileIndex = missileIndex;
      this.AgentIndex = agentIndex;
      this.WeaponIndex = weaponIndex;
      this.Weapon = weapon;
      this.Position = position;
      this.Direction = direction;
      this.Speed = speed;
      this.Orientation = orientation;
      this.HasRigidBody = hasRigidBody;
      this.MissionObjectToIgnoreId = missionObjectToIgnoreId;
      this.IsPrimaryWeaponShot = isPrimaryWeaponShot;
    }

    public CreateMissile()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.MissileIndex = GameNetworkMessage.ReadIntFromPacket(CompressionMission.MissileCompressionInfo, ref bufferReadValid);
      this.AgentIndex = GameNetworkMessage.ReadAgentIndexFromPacket(ref bufferReadValid);
      this.WeaponIndex = (EquipmentIndex) GameNetworkMessage.ReadIntFromPacket(CompressionMission.WieldSlotCompressionInfo, ref bufferReadValid);
      if (this.WeaponIndex == EquipmentIndex.None)
        this.Weapon = ModuleNetworkData.ReadMissileWeaponReferenceFromPacket(Game.Current.ObjectManager, ref bufferReadValid);
      this.Position = GameNetworkMessage.ReadVec3FromPacket(CompressionBasic.PositionCompressionInfo, ref bufferReadValid);
      this.Direction = GameNetworkMessage.ReadVec3FromPacket(CompressionBasic.UnitVectorCompressionInfo, ref bufferReadValid);
      this.Speed = GameNetworkMessage.ReadFloatFromPacket(CompressionMission.MissileSpeedCompressionInfo, ref bufferReadValid);
      this.HasRigidBody = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      if (this.HasRigidBody)
      {
        this.Orientation = GameNetworkMessage.ReadRotationMatrixFromPacket(ref bufferReadValid);
        this.MissionObjectToIgnoreId = GameNetworkMessage.ReadMissionObjectIdFromPacket(ref bufferReadValid);
      }
      else
      {
        Vec3 f = GameNetworkMessage.ReadVec3FromPacket(CompressionBasic.UnitVectorCompressionInfo, ref bufferReadValid);
        this.Orientation = new Mat3(Vec3.Side, f, Vec3.Up);
        this.Orientation.Orthonormalize();
      }
      this.IsPrimaryWeaponShot = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteIntToPacket(this.MissileIndex, CompressionMission.MissileCompressionInfo);
      GameNetworkMessage.WriteAgentIndexToPacket(this.AgentIndex);
      GameNetworkMessage.WriteIntToPacket((int) this.WeaponIndex, CompressionMission.WieldSlotCompressionInfo);
      if (this.WeaponIndex == EquipmentIndex.None)
        ModuleNetworkData.WriteMissileWeaponReferenceToPacket(this.Weapon);
      GameNetworkMessage.WriteVec3ToPacket(this.Position, CompressionBasic.PositionCompressionInfo);
      GameNetworkMessage.WriteVec3ToPacket(this.Direction, CompressionBasic.UnitVectorCompressionInfo);
      GameNetworkMessage.WriteFloatToPacket(this.Speed, CompressionMission.MissileSpeedCompressionInfo);
      GameNetworkMessage.WriteBoolToPacket(this.HasRigidBody);
      if (this.HasRigidBody)
      {
        GameNetworkMessage.WriteRotationMatrixToPacket(this.Orientation);
        GameNetworkMessage.WriteMissionObjectIdToPacket(this.MissionObjectToIgnoreId.Id >= 0 ? this.MissionObjectToIgnoreId : MissionObjectId.Invalid);
      }
      else
        GameNetworkMessage.WriteVec3ToPacket(this.Orientation.f, CompressionBasic.UnitVectorCompressionInfo);
      GameNetworkMessage.WriteBoolToPacket(this.IsPrimaryWeaponShot);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.MissionDetailed;
    }

    protected override string OnGetLogFormat()
    {
      return "Create a missile with index: " + (object) this.MissileIndex + " on agent with agent-index: " + (object) this.AgentIndex;
    }
  }
}

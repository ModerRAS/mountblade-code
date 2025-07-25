// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.SpawnWeaponWithNewEntity
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class SpawnWeaponWithNewEntity : GameNetworkMessage
  {
    public MissionWeapon Weapon { get; private set; }

    public Mission.WeaponSpawnFlags WeaponSpawnFlags { get; private set; }

    public int ForcedIndex { get; private set; }

    public MatrixFrame Frame { get; private set; }

    public MissionObjectId ParentMissionObjectId { get; private set; }

    public bool IsVisible { get; private set; }

    public bool HasLifeTime { get; private set; }

    public SpawnWeaponWithNewEntity(
      MissionWeapon weapon,
      Mission.WeaponSpawnFlags weaponSpawnFlags,
      int forcedIndex,
      MatrixFrame frame,
      MissionObjectId parentMissionObjectId,
      bool isVisible,
      bool hasLifeTime)
    {
      this.Weapon = weapon;
      this.WeaponSpawnFlags = weaponSpawnFlags;
      this.ForcedIndex = forcedIndex;
      this.Frame = frame;
      this.ParentMissionObjectId = parentMissionObjectId;
      this.IsVisible = isVisible;
      this.HasLifeTime = hasLifeTime;
    }

    public SpawnWeaponWithNewEntity()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.Weapon = ModuleNetworkData.ReadWeaponReferenceFromPacket(MBObjectManager.Instance, ref bufferReadValid);
      this.Frame = GameNetworkMessage.ReadMatrixFrameFromPacket(ref bufferReadValid);
      this.WeaponSpawnFlags = (Mission.WeaponSpawnFlags) GameNetworkMessage.ReadUintFromPacket(CompressionMission.SpawnedItemWeaponSpawnFlagCompressionInfo, ref bufferReadValid);
      this.ForcedIndex = GameNetworkMessage.ReadIntFromPacket(CompressionBasic.MissionObjectIDCompressionInfo, ref bufferReadValid);
      this.ParentMissionObjectId = GameNetworkMessage.ReadMissionObjectIdFromPacket(ref bufferReadValid);
      this.IsVisible = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      this.HasLifeTime = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      ModuleNetworkData.WriteWeaponReferenceToPacket(this.Weapon);
      GameNetworkMessage.WriteMatrixFrameToPacket(this.Frame);
      GameNetworkMessage.WriteUintToPacket((uint) this.WeaponSpawnFlags, CompressionMission.SpawnedItemWeaponSpawnFlagCompressionInfo);
      GameNetworkMessage.WriteIntToPacket(this.ForcedIndex, CompressionBasic.MissionObjectIDCompressionInfo);
      GameNetworkMessage.WriteMissionObjectIdToPacket(this.ParentMissionObjectId.Id >= 0 ? this.ParentMissionObjectId : MissionObjectId.Invalid);
      GameNetworkMessage.WriteBoolToPacket(this.IsVisible);
      GameNetworkMessage.WriteBoolToPacket(this.HasLifeTime);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter() => MultiplayerMessageFilter.Items;

    protected override string OnGetLogFormat()
    {
      return "Spawn Weapon with name: " + (object) this.Weapon.Item.Name + ", and with ID: " + (object) this.ForcedIndex;
    }
  }
}

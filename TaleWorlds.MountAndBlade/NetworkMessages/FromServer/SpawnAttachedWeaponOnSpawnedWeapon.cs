// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.SpawnAttachedWeaponOnSpawnedWeapon
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class SpawnAttachedWeaponOnSpawnedWeapon : GameNetworkMessage
  {
    public MissionObjectId SpawnedWeaponId { get; private set; }

    public int AttachmentIndex { get; private set; }

    public int ForcedIndex { get; private set; }

    public SpawnAttachedWeaponOnSpawnedWeapon(
      MissionObjectId spawnedWeaponId,
      int attachmentIndex,
      int forcedIndex)
    {
      this.SpawnedWeaponId = spawnedWeaponId;
      this.AttachmentIndex = attachmentIndex;
      this.ForcedIndex = forcedIndex;
    }

    public SpawnAttachedWeaponOnSpawnedWeapon()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.SpawnedWeaponId = GameNetworkMessage.ReadMissionObjectIdFromPacket(ref bufferReadValid);
      this.AttachmentIndex = GameNetworkMessage.ReadIntFromPacket(CompressionMission.WeaponAttachmentIndexCompressionInfo, ref bufferReadValid);
      this.ForcedIndex = GameNetworkMessage.ReadIntFromPacket(CompressionBasic.MissionObjectIDCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteMissionObjectIdToPacket(this.SpawnedWeaponId);
      GameNetworkMessage.WriteIntToPacket(this.AttachmentIndex, CompressionMission.WeaponAttachmentIndexCompressionInfo);
      GameNetworkMessage.WriteIntToPacket(this.ForcedIndex, CompressionBasic.MissionObjectIDCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter() => MultiplayerMessageFilter.Items;

    protected override string OnGetLogFormat()
    {
      return "SpawnAttachedWeaponOnSpawnedWeapon with Spawned Weapon ID: " + (object) this.SpawnedWeaponId + " AttachmentIndex: " + (object) this.AttachmentIndex + " Attached Weapon ID: " + (object) this.ForcedIndex;
    }
  }
}

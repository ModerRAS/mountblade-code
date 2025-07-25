// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.RangedSiegeWeaponChangeProjectile
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class RangedSiegeWeaponChangeProjectile : GameNetworkMessage
  {
    public MissionObjectId RangedSiegeWeaponId { get; private set; }

    public int Index { get; private set; }

    public RangedSiegeWeaponChangeProjectile(MissionObjectId rangedSiegeWeaponId, int index)
    {
      this.RangedSiegeWeaponId = rangedSiegeWeaponId;
      this.Index = index;
    }

    public RangedSiegeWeaponChangeProjectile()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.RangedSiegeWeaponId = GameNetworkMessage.ReadMissionObjectIdFromPacket(ref bufferReadValid);
      this.Index = GameNetworkMessage.ReadIntFromPacket(CompressionMission.RangedSiegeWeaponAmmoIndexCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteMissionObjectIdToPacket(this.RangedSiegeWeaponId);
      GameNetworkMessage.WriteIntToPacket(this.Index, CompressionMission.RangedSiegeWeaponAmmoIndexCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.SiegeWeaponsDetailed;
    }

    protected override string OnGetLogFormat()
    {
      return "Changed Projectile Type Index to: " + (object) this.Index + " on RangedSiegeWeapon with ID: " + (object) this.RangedSiegeWeaponId;
    }
  }
}

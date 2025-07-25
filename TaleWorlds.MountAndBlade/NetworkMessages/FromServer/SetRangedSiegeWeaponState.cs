// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.SetRangedSiegeWeaponState
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class SetRangedSiegeWeaponState : GameNetworkMessage
  {
    public MissionObjectId RangedSiegeWeaponId { get; private set; }

    public RangedSiegeWeapon.WeaponState State { get; private set; }

    public SetRangedSiegeWeaponState(
      MissionObjectId rangedSiegeWeaponId,
      RangedSiegeWeapon.WeaponState state)
    {
      this.RangedSiegeWeaponId = rangedSiegeWeaponId;
      this.State = state;
    }

    public SetRangedSiegeWeaponState()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.RangedSiegeWeaponId = GameNetworkMessage.ReadMissionObjectIdFromPacket(ref bufferReadValid);
      this.State = (RangedSiegeWeapon.WeaponState) GameNetworkMessage.ReadIntFromPacket(CompressionMission.RangedSiegeWeaponStateCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteMissionObjectIdToPacket(this.RangedSiegeWeaponId);
      GameNetworkMessage.WriteIntToPacket((int) this.State, CompressionMission.RangedSiegeWeaponStateCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.SiegeWeaponsDetailed;
    }

    protected override string OnGetLogFormat()
    {
      return "Set RangedSiegeWeapon State to: " + (object) this.State + " on RangedSiegeWeapon with ID: " + (object) this.RangedSiegeWeaponId;
    }
  }
}

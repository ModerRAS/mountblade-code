// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.SetStonePileAmmo
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class SetStonePileAmmo : GameNetworkMessage
  {
    public MissionObjectId StonePileId { get; private set; }

    public int AmmoCount { get; private set; }

    public SetStonePileAmmo(MissionObjectId stonePileId, int ammoCount)
    {
      this.StonePileId = stonePileId;
      this.AmmoCount = ammoCount;
    }

    public SetStonePileAmmo()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.StonePileId = GameNetworkMessage.ReadMissionObjectIdFromPacket(ref bufferReadValid);
      this.AmmoCount = GameNetworkMessage.ReadIntFromPacket(CompressionMission.RangedSiegeWeaponAmmoCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteMissionObjectIdToPacket(this.StonePileId);
      GameNetworkMessage.WriteIntToPacket(this.AmmoCount, CompressionMission.RangedSiegeWeaponAmmoCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.SiegeWeaponsDetailed;
    }

    protected override string OnGetLogFormat()
    {
      return "Set ammo left to: " + (object) this.AmmoCount + " on StonePile with ID: " + (object) this.StonePileId;
    }
  }
}

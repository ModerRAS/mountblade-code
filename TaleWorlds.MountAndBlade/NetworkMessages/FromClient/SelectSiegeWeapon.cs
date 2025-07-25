// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromClient.SelectSiegeWeapon
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromClient
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromClient)]
  public sealed class SelectSiegeWeapon : GameNetworkMessage
  {
    public MissionObjectId SiegeWeaponId { get; private set; }

    public SelectSiegeWeapon(MissionObjectId siegeWeaponId) => this.SiegeWeaponId = siegeWeaponId;

    public SelectSiegeWeapon()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.SiegeWeaponId = GameNetworkMessage.ReadMissionObjectIdFromPacket(ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteMissionObjectIdToPacket(this.SiegeWeaponId);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.SiegeWeaponsDetailed;
    }

    protected override string OnGetLogFormat()
    {
      return "Select SiegeWeapon with ID: " + (object) this.SiegeWeaponId;
    }
  }
}

// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.EquipEquipmentToPeer
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class EquipEquipmentToPeer : GameNetworkMessage
  {
    public NetworkCommunicator Peer { get; private set; }

    public Equipment Equipment { get; private set; }

    public EquipEquipmentToPeer(NetworkCommunicator peer, Equipment equipment)
    {
      this.Peer = peer;
      this.Equipment = new Equipment();
      for (EquipmentIndex equipmentIndex = EquipmentIndex.WeaponItemBeginSlot; equipmentIndex < EquipmentIndex.NumEquipmentSetSlots; ++equipmentIndex)
        this.Equipment[equipmentIndex] = equipment.GetEquipmentFromSlot(equipmentIndex);
    }

    public EquipEquipmentToPeer()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.Peer = GameNetworkMessage.ReadNetworkPeerReferenceFromPacket(ref bufferReadValid);
      if (bufferReadValid)
      {
        this.Equipment = new Equipment();
        for (EquipmentIndex equipmentIndex = EquipmentIndex.WeaponItemBeginSlot; equipmentIndex < EquipmentIndex.NumEquipmentSetSlots; ++equipmentIndex)
        {
          if (bufferReadValid)
            this.Equipment.AddEquipmentToSlotWithoutAgent(equipmentIndex, ModuleNetworkData.ReadItemReferenceFromPacket(MBObjectManager.Instance, ref bufferReadValid));
        }
      }
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteNetworkPeerReferenceToPacket(this.Peer);
      for (EquipmentIndex equipmentIndex = EquipmentIndex.WeaponItemBeginSlot; equipmentIndex < EquipmentIndex.NumEquipmentSetSlots; ++equipmentIndex)
        ModuleNetworkData.WriteItemReferenceToPacket(this.Equipment.GetEquipmentFromSlot(equipmentIndex));
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.Equipment;
    }

    protected override string OnGetLogFormat()
    {
      return "Equip equipment to peer: " + this.Peer.UserName + " with peer-index:" + (object) this.Peer.Index;
    }
  }
}

// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.EquipWeaponWithNewEntity
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class EquipWeaponWithNewEntity : GameNetworkMessage
  {
    public MissionWeapon Weapon { get; private set; }

    public EquipmentIndex SlotIndex { get; private set; }

    public int AgentIndex { get; private set; }

    public EquipWeaponWithNewEntity(int agentIndex, EquipmentIndex slot, MissionWeapon weapon)
    {
      this.AgentIndex = agentIndex;
      this.SlotIndex = slot;
      this.Weapon = weapon;
    }

    public EquipWeaponWithNewEntity()
    {
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteAgentIndexToPacket(this.AgentIndex);
      ModuleNetworkData.WriteWeaponReferenceToPacket(this.Weapon);
      GameNetworkMessage.WriteIntToPacket((int) this.SlotIndex, CompressionMission.ItemSlotCompressionInfo);
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.AgentIndex = GameNetworkMessage.ReadAgentIndexFromPacket(ref bufferReadValid);
      this.Weapon = ModuleNetworkData.ReadWeaponReferenceFromPacket(MBObjectManager.Instance, ref bufferReadValid);
      this.SlotIndex = (EquipmentIndex) GameNetworkMessage.ReadIntFromPacket(CompressionMission.ItemSlotCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.Items | MultiplayerMessageFilter.AgentsDetailed;
    }

    protected override string OnGetLogFormat()
    {
      if (this.AgentIndex < 0)
        return "Not equipping weapon because there is no agent to equip it to,";
      object[] objArray = new object[6];
      objArray[0] = (object) "Equip weapon with name: ";
      MissionWeapon weapon = this.Weapon;
      TextObject textObject;
      if (weapon.IsEmpty)
      {
        textObject = TextObject.Empty;
      }
      else
      {
        weapon = this.Weapon;
        textObject = weapon.Item.Name;
      }
      objArray[1] = (object) textObject;
      objArray[2] = (object) " from SlotIndex: ";
      objArray[3] = (object) this.SlotIndex;
      objArray[4] = (object) " on agent with agent-index: ";
      objArray[5] = (object) this.AgentIndex;
      return string.Concat(objArray);
    }
  }
}

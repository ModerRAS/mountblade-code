// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.SetWeaponNetworkData
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class SetWeaponNetworkData : GameNetworkMessage
  {
    public int AgentIndex { get; private set; }

    public EquipmentIndex WeaponEquipmentIndex { get; private set; }

    public short DataValue { get; private set; }

    public SetWeaponNetworkData(int agent, EquipmentIndex weaponEquipmentIndex, short dataValue)
    {
      this.AgentIndex = agent;
      this.WeaponEquipmentIndex = weaponEquipmentIndex;
      this.DataValue = dataValue;
    }

    public SetWeaponNetworkData()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.AgentIndex = GameNetworkMessage.ReadAgentIndexFromPacket(ref bufferReadValid);
      this.WeaponEquipmentIndex = (EquipmentIndex) GameNetworkMessage.ReadIntFromPacket(CompressionMission.ItemSlotCompressionInfo, ref bufferReadValid);
      this.DataValue = (short) GameNetworkMessage.ReadIntFromPacket(CompressionMission.ItemDataCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteAgentIndexToPacket(this.AgentIndex);
      GameNetworkMessage.WriteIntToPacket((int) this.WeaponEquipmentIndex, CompressionMission.ItemSlotCompressionInfo);
      GameNetworkMessage.WriteIntToPacket((int) this.DataValue, CompressionMission.ItemDataCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.EquipmentDetailed;
    }

    protected override string OnGetLogFormat()
    {
      return "Set Network data: " + (object) this.DataValue + " for weapon with EquipmentIndex: " + (object) this.WeaponEquipmentIndex + " on Agent with agent-index: " + (object) this.AgentIndex;
    }
  }
}

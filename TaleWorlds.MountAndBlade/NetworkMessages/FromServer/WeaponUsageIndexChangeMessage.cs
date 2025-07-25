// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.WeaponUsageIndexChangeMessage
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
  public sealed class WeaponUsageIndexChangeMessage : GameNetworkMessage
  {
    public int AgentIndex { get; private set; }

    public EquipmentIndex SlotIndex { get; private set; }

    public int UsageIndex { get; private set; }

    public WeaponUsageIndexChangeMessage()
    {
    }

    public WeaponUsageIndexChangeMessage(int agentIndex, EquipmentIndex slotIndex, int usageIndex)
    {
      this.AgentIndex = agentIndex;
      this.SlotIndex = slotIndex;
      this.UsageIndex = usageIndex;
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.AgentIndex = GameNetworkMessage.ReadAgentIndexFromPacket(ref bufferReadValid);
      this.SlotIndex = (EquipmentIndex) GameNetworkMessage.ReadIntFromPacket(CompressionMission.ItemSlotCompressionInfo, ref bufferReadValid);
      this.UsageIndex = (int) (short) GameNetworkMessage.ReadIntFromPacket(CompressionMission.WeaponUsageIndexCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteAgentIndexToPacket(this.AgentIndex);
      GameNetworkMessage.WriteIntToPacket((int) this.SlotIndex, CompressionMission.ItemSlotCompressionInfo);
      GameNetworkMessage.WriteIntToPacket(this.UsageIndex, CompressionMission.WeaponUsageIndexCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.MissionDetailed;
    }

    protected override string OnGetLogFormat()
    {
      return "Set Weapon Usage Index: " + (object) this.UsageIndex + " for weapon with EquipmentIndex: " + (object) this.SlotIndex + " on Agent with agent-index: " + (object) this.AgentIndex;
    }
  }
}

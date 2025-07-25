// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.StartSwitchingWeaponUsageIndex
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
  public sealed class StartSwitchingWeaponUsageIndex : GameNetworkMessage
  {
    public int AgentIndex { get; private set; }

    public EquipmentIndex EquipmentIndex { get; private set; }

    public int UsageIndex { get; private set; }

    public Agent.UsageDirection CurrentMovementFlagUsageDirection { get; private set; }

    public StartSwitchingWeaponUsageIndex(
      int agentIndex,
      EquipmentIndex equipmentIndex,
      int usageIndex,
      Agent.UsageDirection currentMovementFlagUsageDirection)
    {
      this.AgentIndex = agentIndex;
      this.EquipmentIndex = equipmentIndex;
      this.UsageIndex = usageIndex;
      this.CurrentMovementFlagUsageDirection = currentMovementFlagUsageDirection;
    }

    public StartSwitchingWeaponUsageIndex()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.AgentIndex = GameNetworkMessage.ReadAgentIndexFromPacket(ref bufferReadValid);
      this.EquipmentIndex = (EquipmentIndex) GameNetworkMessage.ReadIntFromPacket(CompressionMission.ItemSlotCompressionInfo, ref bufferReadValid);
      this.UsageIndex = (int) (short) GameNetworkMessage.ReadIntFromPacket(CompressionMission.WeaponUsageIndexCompressionInfo, ref bufferReadValid);
      this.CurrentMovementFlagUsageDirection = (Agent.UsageDirection) GameNetworkMessage.ReadIntFromPacket(CompressionMission.UsageDirectionCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteAgentIndexToPacket(this.AgentIndex);
      GameNetworkMessage.WriteIntToPacket((int) this.EquipmentIndex, CompressionMission.ItemSlotCompressionInfo);
      GameNetworkMessage.WriteIntToPacket(this.UsageIndex, CompressionMission.WeaponUsageIndexCompressionInfo);
      GameNetworkMessage.WriteIntToPacket((int) this.CurrentMovementFlagUsageDirection, CompressionMission.UsageDirectionCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.EquipmentDetailed;
    }

    protected override string OnGetLogFormat()
    {
      return "StartSwitchingWeaponUsageIndex: " + (object) this.UsageIndex + " for weapon with EquipmentIndex: " + (object) this.EquipmentIndex + " on Agent with agent-index: " + (object) this.AgentIndex;
    }
  }
}

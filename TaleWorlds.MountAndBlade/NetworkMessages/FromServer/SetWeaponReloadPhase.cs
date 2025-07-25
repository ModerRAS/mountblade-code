// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.SetWeaponReloadPhase
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
  public sealed class SetWeaponReloadPhase : GameNetworkMessage
  {
    public int AgentIndex { get; private set; }

    public EquipmentIndex EquipmentIndex { get; private set; }

    public short ReloadPhase { get; private set; }

    public SetWeaponReloadPhase(int agentIndex, EquipmentIndex equipmentIndex, short reloadPhase)
    {
      this.AgentIndex = agentIndex;
      this.EquipmentIndex = equipmentIndex;
      this.ReloadPhase = reloadPhase;
    }

    public SetWeaponReloadPhase()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.AgentIndex = GameNetworkMessage.ReadAgentIndexFromPacket(ref bufferReadValid);
      this.EquipmentIndex = (EquipmentIndex) GameNetworkMessage.ReadIntFromPacket(CompressionMission.ItemSlotCompressionInfo, ref bufferReadValid);
      this.ReloadPhase = (short) GameNetworkMessage.ReadIntFromPacket(CompressionMission.WeaponReloadPhaseCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteAgentIndexToPacket(this.AgentIndex);
      GameNetworkMessage.WriteIntToPacket((int) this.EquipmentIndex, CompressionMission.ItemSlotCompressionInfo);
      GameNetworkMessage.WriteIntToPacket((int) this.ReloadPhase, CompressionMission.WeaponReloadPhaseCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.EquipmentDetailed;
    }

    protected override string OnGetLogFormat()
    {
      return "Set Reload Phase: " + (object) this.ReloadPhase + " for weapon with EquipmentIndex: " + (object) this.EquipmentIndex + " on Agent with agent-index: " + (object) this.AgentIndex;
    }
  }
}

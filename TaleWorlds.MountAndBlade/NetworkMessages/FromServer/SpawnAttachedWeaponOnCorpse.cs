// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.SpawnAttachedWeaponOnCorpse
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class SpawnAttachedWeaponOnCorpse : GameNetworkMessage
  {
    public int AgentIndex { get; private set; }

    public int AttachedIndex { get; private set; }

    public int ForcedIndex { get; private set; }

    public SpawnAttachedWeaponOnCorpse(int agentIndex, int attachedIndex, int forcedIndex)
    {
      this.AgentIndex = agentIndex;
      this.AttachedIndex = attachedIndex;
      this.ForcedIndex = forcedIndex;
    }

    public SpawnAttachedWeaponOnCorpse()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.AgentIndex = GameNetworkMessage.ReadAgentIndexFromPacket(ref bufferReadValid);
      this.AttachedIndex = GameNetworkMessage.ReadIntFromPacket(CompressionMission.WeaponAttachmentIndexCompressionInfo, ref bufferReadValid);
      this.ForcedIndex = GameNetworkMessage.ReadIntFromPacket(CompressionBasic.MissionObjectIDCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteAgentIndexToPacket(this.AgentIndex);
      GameNetworkMessage.WriteIntToPacket(this.AttachedIndex, CompressionMission.WeaponAttachmentIndexCompressionInfo);
      GameNetworkMessage.WriteIntToPacket(this.ForcedIndex, CompressionBasic.MissionObjectIDCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter() => MultiplayerMessageFilter.Items;

    protected override string OnGetLogFormat()
    {
      return "SpawnAttachedWeaponOnCorpse with agent-index: " + (object) this.AgentIndex + ", and with ID: " + (object) this.ForcedIndex;
    }
  }
}

// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.AddPrefabComponentToAgentBone
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class AddPrefabComponentToAgentBone : GameNetworkMessage
  {
    public int AgentIndex { get; private set; }

    public string PrefabName { get; private set; }

    public sbyte BoneIndex { get; private set; }

    public AddPrefabComponentToAgentBone(int agentIndex, string prefabName, sbyte boneIndex)
    {
      this.AgentIndex = agentIndex;
      this.PrefabName = prefabName;
      this.BoneIndex = boneIndex;
    }

    public AddPrefabComponentToAgentBone()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.AgentIndex = GameNetworkMessage.ReadAgentIndexFromPacket(ref bufferReadValid);
      this.PrefabName = GameNetworkMessage.ReadStringFromPacket(ref bufferReadValid);
      this.BoneIndex = (sbyte) GameNetworkMessage.ReadIntFromPacket(CompressionMission.BoneIndexCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteAgentIndexToPacket(this.AgentIndex);
      GameNetworkMessage.WriteStringToPacket(this.PrefabName);
      GameNetworkMessage.WriteIntToPacket((int) this.BoneIndex, CompressionMission.BoneIndexCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.AgentsDetailed;
    }

    protected override string OnGetLogFormat()
    {
      return "Add prefab component: " + this.PrefabName + " on bone with index: " + (object) this.BoneIndex + " on agent with agent-index: " + (object) this.AgentIndex;
    }
  }
}

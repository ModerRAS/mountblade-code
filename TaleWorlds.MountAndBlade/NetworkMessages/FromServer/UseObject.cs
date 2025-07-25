// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.UseObject
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class UseObject : GameNetworkMessage
  {
    public int AgentIndex { get; private set; }

    public MissionObjectId UsableGameObjectId { get; private set; }

    public UseObject(int agentIndex, MissionObjectId usableGameObjectId)
    {
      this.AgentIndex = agentIndex;
      this.UsableGameObjectId = usableGameObjectId;
    }

    public UseObject()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.AgentIndex = GameNetworkMessage.ReadAgentIndexFromPacket(ref bufferReadValid);
      this.UsableGameObjectId = GameNetworkMessage.ReadMissionObjectIdFromPacket(ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteAgentIndexToPacket(this.AgentIndex);
      GameNetworkMessage.WriteMissionObjectIdToPacket(this.UsableGameObjectId.Id >= 0 ? this.UsableGameObjectId : MissionObjectId.Invalid);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.Agents | MultiplayerMessageFilter.MissionObjects;
    }

    protected override string OnGetLogFormat()
    {
      string str1 = "Use UsableMissionObject with ID: ";
      string str2 = (!(this.UsableGameObjectId != MissionObjectId.Invalid) ? str1 + "null" : str1 + (object) this.UsableGameObjectId) + " by Agent with name: ";
      return this.AgentIndex < 0 ? str2 + "null" : str2 + "agent-index: " + (object) this.AgentIndex;
    }
  }
}

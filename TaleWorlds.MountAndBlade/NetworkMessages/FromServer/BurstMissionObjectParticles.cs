// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.BurstMissionObjectParticles
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class BurstMissionObjectParticles : GameNetworkMessage
  {
    public MissionObjectId MissionObjectId { get; private set; }

    public bool DoChildren { get; private set; }

    public BurstMissionObjectParticles(MissionObjectId missionObjectId, bool doChildren)
    {
      this.MissionObjectId = missionObjectId;
      this.DoChildren = doChildren;
    }

    public BurstMissionObjectParticles()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.MissionObjectId = GameNetworkMessage.ReadMissionObjectIdFromPacket(ref bufferReadValid);
      this.DoChildren = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteMissionObjectIdToPacket(this.MissionObjectId);
      GameNetworkMessage.WriteBoolToPacket(this.DoChildren);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.MissionObjectsDetailed | MultiplayerMessageFilter.Particles;
    }

    protected override string OnGetLogFormat()
    {
      return "Burst MissionObject particles on MissionObject with ID: " + (object) this.MissionObjectId;
    }
  }
}

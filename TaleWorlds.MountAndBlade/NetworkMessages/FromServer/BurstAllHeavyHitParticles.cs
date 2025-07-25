// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.BurstAllHeavyHitParticles
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class BurstAllHeavyHitParticles : GameNetworkMessage
  {
    public MissionObjectId MissionObjectId { get; private set; }

    public BurstAllHeavyHitParticles(MissionObjectId missionObjectId)
    {
      this.MissionObjectId = missionObjectId;
    }

    public BurstAllHeavyHitParticles()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.MissionObjectId = GameNetworkMessage.ReadMissionObjectIdFromPacket(ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteMissionObjectIdToPacket(this.MissionObjectId);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.MissionObjectsDetailed | MultiplayerMessageFilter.SiegeWeaponsDetailed;
    }

    protected override string OnGetLogFormat()
    {
      return "Bursting all heavy-hit particles for the DestructableComponent of MissionObject with Id: " + (object) this.MissionObjectId;
    }
  }
}

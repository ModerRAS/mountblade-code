// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.SetBatteringRamHasArrivedAtTarget
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class SetBatteringRamHasArrivedAtTarget : GameNetworkMessage
  {
    public MissionObjectId BatteringRamId { get; private set; }

    public SetBatteringRamHasArrivedAtTarget(MissionObjectId batteringRamId)
    {
      this.BatteringRamId = batteringRamId;
    }

    public SetBatteringRamHasArrivedAtTarget()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.BatteringRamId = GameNetworkMessage.ReadMissionObjectIdFromPacket(ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteMissionObjectIdToPacket(this.BatteringRamId);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.SiegeWeaponsDetailed;
    }

    protected override string OnGetLogFormat()
    {
      return "Battering Ram with ID: " + (object) this.BatteringRamId + " has arrived at its target.";
    }
  }
}

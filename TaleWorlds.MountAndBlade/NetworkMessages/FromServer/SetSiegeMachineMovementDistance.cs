// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.SetSiegeMachineMovementDistance
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class SetSiegeMachineMovementDistance : GameNetworkMessage
  {
    public MissionObjectId UsableMachineId { get; private set; }

    public float Distance { get; private set; }

    public SetSiegeMachineMovementDistance(MissionObjectId usableMachineId, float distance)
    {
      this.UsableMachineId = usableMachineId;
      this.Distance = distance;
    }

    public SetSiegeMachineMovementDistance()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.UsableMachineId = GameNetworkMessage.ReadMissionObjectIdFromPacket(ref bufferReadValid);
      this.Distance = GameNetworkMessage.ReadFloatFromPacket(CompressionBasic.PositionCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteMissionObjectIdToPacket(this.UsableMachineId);
      GameNetworkMessage.WriteFloatToPacket(this.Distance, CompressionBasic.PositionCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.SiegeWeaponsDetailed;
    }

    protected override string OnGetLogFormat()
    {
      return "Set Movement Distance: " + (object) this.Distance + " of SiegeMachine with ID: " + (object) this.UsableMachineId;
    }
  }
}

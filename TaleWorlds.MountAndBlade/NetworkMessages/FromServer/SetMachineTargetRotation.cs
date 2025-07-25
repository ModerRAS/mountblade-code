// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.SetMachineTargetRotation
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class SetMachineTargetRotation : GameNetworkMessage
  {
    public MissionObjectId UsableMachineId { get; private set; }

    public float HorizontalRotation { get; private set; }

    public float VerticalRotation { get; private set; }

    public SetMachineTargetRotation(
      MissionObjectId usableMachineId,
      float horizontalRotaiton,
      float verticalRotation)
    {
      this.UsableMachineId = usableMachineId;
      this.HorizontalRotation = horizontalRotaiton;
      this.VerticalRotation = verticalRotation;
    }

    public SetMachineTargetRotation()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.UsableMachineId = GameNetworkMessage.ReadMissionObjectIdFromPacket(ref bufferReadValid);
      this.HorizontalRotation = GameNetworkMessage.ReadFloatFromPacket(CompressionBasic.HighResRadianCompressionInfo, ref bufferReadValid);
      this.VerticalRotation = GameNetworkMessage.ReadFloatFromPacket(CompressionBasic.HighResRadianCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteMissionObjectIdToPacket(this.UsableMachineId);
      GameNetworkMessage.WriteFloatToPacket(this.HorizontalRotation, CompressionBasic.HighResRadianCompressionInfo);
      GameNetworkMessage.WriteFloatToPacket(this.VerticalRotation, CompressionBasic.HighResRadianCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.SiegeWeaponsDetailed;
    }

    protected override string OnGetLogFormat()
    {
      return "Set target rotation of UsableMachine with ID: " + (object) this.UsableMachineId;
    }
  }
}

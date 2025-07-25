// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromClient.SetMachineRotation
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromClient
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromClient)]
  public sealed class SetMachineRotation : GameNetworkMessage
  {
    public MissionObjectId UsableMachineId { get; private set; }

    public float HorizontalRotation { get; private set; }

    public float VerticalRotation { get; private set; }

    public SetMachineRotation(
      MissionObjectId missionObjectId,
      float horizontalRotation,
      float verticalRotation)
    {
      this.UsableMachineId = missionObjectId;
      this.HorizontalRotation = horizontalRotation;
      this.VerticalRotation = verticalRotation;
    }

    public SetMachineRotation()
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
      return "Set rotation of UsableMachine with ID: " + (object) this.UsableMachineId;
    }
  }
}

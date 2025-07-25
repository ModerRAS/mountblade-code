// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.SetSiegeLadderState
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class SetSiegeLadderState : GameNetworkMessage
  {
    public MissionObjectId SiegeLadderId { get; private set; }

    public SiegeLadder.LadderState State { get; private set; }

    public SetSiegeLadderState(MissionObjectId siegeLadderId, SiegeLadder.LadderState state)
    {
      this.SiegeLadderId = siegeLadderId;
      this.State = state;
    }

    public SetSiegeLadderState()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.SiegeLadderId = GameNetworkMessage.ReadMissionObjectIdFromPacket(ref bufferReadValid);
      this.State = (SiegeLadder.LadderState) GameNetworkMessage.ReadIntFromPacket(CompressionMission.SiegeLadderStateCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteMissionObjectIdToPacket(this.SiegeLadderId);
      GameNetworkMessage.WriteIntToPacket((int) this.State, CompressionMission.SiegeLadderStateCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.SiegeWeaponsDetailed;
    }

    protected override string OnGetLogFormat()
    {
      return "Set SiegeLadder State to: " + (object) this.State + " on SiegeLadderState with ID: " + (object) this.SiegeLadderId;
    }
  }
}

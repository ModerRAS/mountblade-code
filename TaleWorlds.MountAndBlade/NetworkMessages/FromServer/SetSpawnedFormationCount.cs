// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.SetSpawnedFormationCount
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class SetSpawnedFormationCount : GameNetworkMessage
  {
    public int NumOfFormationsTeamOne { get; private set; }

    public int NumOfFormationsTeamTwo { get; private set; }

    public SetSpawnedFormationCount(int numFormationsTeamOne, int numFormationsTeamTwo)
    {
      this.NumOfFormationsTeamOne = numFormationsTeamOne;
      this.NumOfFormationsTeamTwo = numFormationsTeamTwo;
    }

    public SetSpawnedFormationCount()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.NumOfFormationsTeamOne = GameNetworkMessage.ReadIntFromPacket(CompressionMission.FormationClassCompressionInfo, ref bufferReadValid);
      this.NumOfFormationsTeamTwo = GameNetworkMessage.ReadIntFromPacket(CompressionMission.FormationClassCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteIntToPacket(this.NumOfFormationsTeamOne, CompressionMission.FormationClassCompressionInfo);
      GameNetworkMessage.WriteIntToPacket(this.NumOfFormationsTeamTwo, CompressionMission.FormationClassCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter() => MultiplayerMessageFilter.Peers;

    protected override string OnGetLogFormat() => "Syncing formation count";
  }
}

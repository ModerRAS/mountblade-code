// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.TeamSetIsEnemyOf
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class TeamSetIsEnemyOf : GameNetworkMessage
  {
    public int Team1Index { get; private set; }

    public int Team2Index { get; private set; }

    public bool IsEnemyOf { get; private set; }

    public TeamSetIsEnemyOf(int team1Index, int team2Index, bool isEnemyOf)
    {
      this.Team1Index = team1Index;
      this.Team2Index = team2Index;
      this.IsEnemyOf = isEnemyOf;
    }

    public TeamSetIsEnemyOf()
    {
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteTeamIndexToPacket(this.Team1Index);
      GameNetworkMessage.WriteTeamIndexToPacket(this.Team2Index);
      GameNetworkMessage.WriteBoolToPacket(this.IsEnemyOf);
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.Team1Index = GameNetworkMessage.ReadTeamIndexFromPacket(ref bufferReadValid);
      this.Team2Index = GameNetworkMessage.ReadTeamIndexFromPacket(ref bufferReadValid);
      this.IsEnemyOf = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      return bufferReadValid;
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.Mission;
    }

    protected override string OnGetLogFormat()
    {
      return this.Team1Index.ToString() + " is now " + (this.IsEnemyOf ? (object) "" : (object) "not an ") + "enemy of " + (object) this.Team2Index;
    }
  }
}

// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromClient.TeamChange
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromClient
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromClient)]
  public sealed class TeamChange : GameNetworkMessage
  {
    public bool AutoAssign { get; private set; }

    public int TeamIndex { get; private set; }

    public TeamChange(bool autoAssign, int teamIndex)
    {
      this.AutoAssign = autoAssign;
      this.TeamIndex = teamIndex;
    }

    public TeamChange()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.AutoAssign = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      if (!this.AutoAssign)
        this.TeamIndex = GameNetworkMessage.ReadIntFromPacket(CompressionMission.TeamCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteBoolToPacket(this.AutoAssign);
      if (this.AutoAssign)
        return;
      GameNetworkMessage.WriteIntToPacket(this.TeamIndex, CompressionMission.TeamCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.Mission;
    }

    protected override string OnGetLogFormat() => "Changed team to: " + (object) this.TeamIndex;
  }
}

// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.UpdateIntermissionVotingManagerValues
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class UpdateIntermissionVotingManagerValues : GameNetworkMessage
  {
    public bool IsAutomatedBattleSwitchingEnabled { get; private set; }

    public bool IsMapVoteEnabled { get; private set; }

    public bool IsCultureVoteEnabled { get; private set; }

    public UpdateIntermissionVotingManagerValues()
    {
      this.IsAutomatedBattleSwitchingEnabled = MultiplayerIntermissionVotingManager.Instance.IsAutomatedBattleSwitchingEnabled;
      this.IsMapVoteEnabled = MultiplayerIntermissionVotingManager.Instance.IsMapVoteEnabled;
      this.IsCultureVoteEnabled = MultiplayerIntermissionVotingManager.Instance.IsCultureVoteEnabled;
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.Administration;
    }

    protected override string OnGetLogFormat()
    {
      return string.Format("IsAutomatedBattleSwitchingEnabled: {0}, IsMapVoteEnabled: {1}, IsCultureVoteEnabled: {2}", (object) this.IsAutomatedBattleSwitchingEnabled, (object) this.IsMapVoteEnabled, (object) this.IsCultureVoteEnabled);
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.IsAutomatedBattleSwitchingEnabled = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      this.IsMapVoteEnabled = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      this.IsCultureVoteEnabled = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteBoolToPacket(this.IsAutomatedBattleSwitchingEnabled);
      GameNetworkMessage.WriteBoolToPacket(this.IsMapVoteEnabled);
      GameNetworkMessage.WriteBoolToPacket(this.IsCultureVoteEnabled);
    }
  }
}

// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.UnloadMission
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class UnloadMission : GameNetworkMessage
  {
    public bool UnloadingForBattleIndexMismatch { get; private set; }

    public UnloadMission()
    {
    }

    public UnloadMission(bool unloadingForBattleIndexMismatch)
    {
      this.UnloadingForBattleIndexMismatch = unloadingForBattleIndexMismatch;
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.UnloadingForBattleIndexMismatch = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteBoolToPacket(this.UnloadingForBattleIndexMismatch);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.Mission;
    }

    protected override string OnGetLogFormat() => "Unload Mission";
  }
}

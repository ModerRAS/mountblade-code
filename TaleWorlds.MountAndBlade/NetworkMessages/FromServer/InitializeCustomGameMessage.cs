// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.InitializeCustomGameMessage
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class InitializeCustomGameMessage : GameNetworkMessage
  {
    public bool InMission { get; private set; }

    public string GameType { get; private set; }

    public string Map { get; private set; }

    public int BattleIndex { get; private set; }

    public InitializeCustomGameMessage(
      bool inMission,
      string gameType,
      string map,
      int battleIndex)
    {
      this.InMission = inMission;
      this.GameType = gameType;
      this.Map = map;
      this.BattleIndex = battleIndex;
    }

    public InitializeCustomGameMessage()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.InMission = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      this.GameType = GameNetworkMessage.ReadStringFromPacket(ref bufferReadValid);
      this.Map = GameNetworkMessage.ReadStringFromPacket(ref bufferReadValid);
      this.BattleIndex = GameNetworkMessage.ReadIntFromPacket(CompressionMission.AutomatedBattleIndexCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteBoolToPacket(this.InMission);
      GameNetworkMessage.WriteStringToPacket(this.GameType);
      GameNetworkMessage.WriteStringToPacket(this.Map);
      GameNetworkMessage.WriteIntToPacket(this.BattleIndex, CompressionMission.AutomatedBattleIndexCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.Mission;
    }

    protected override string OnGetLogFormat() => "Initialize Custom Game";
  }
}

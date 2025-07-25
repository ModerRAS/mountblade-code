// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.SyncMutedPlayers
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;
using TaleWorlds.PlayerServices;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class SyncMutedPlayers : GameNetworkMessage
  {
    public int MutedPlayerCount { get; private set; }

    public List<PlayerId> MutedPlayerIds { get; private set; }

    public SyncMutedPlayers()
    {
    }

    public SyncMutedPlayers(List<PlayerId> mutedPlayerIds)
    {
      this.MutedPlayerIds = mutedPlayerIds;
      List<PlayerId> mutedPlayerIds1 = this.MutedPlayerIds;
      // ISSUE: explicit non-virtual call
      this.MutedPlayerCount = mutedPlayerIds1 != null ? __nonvirtual (mutedPlayerIds1.Count) : 0;
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.MutedPlayerIds = new List<PlayerId>();
      this.MutedPlayerCount = GameNetworkMessage.ReadIntFromPacket(CompressionBasic.IntermissionVoterCountCompressionInfo, ref bufferReadValid);
      for (int index = 0; index < this.MutedPlayerCount; ++index)
        this.MutedPlayerIds.Add(new PlayerId(GameNetworkMessage.ReadUlongFromPacket(CompressionBasic.DebugULongNonCompressionInfo, ref bufferReadValid), GameNetworkMessage.ReadUlongFromPacket(CompressionBasic.DebugULongNonCompressionInfo, ref bufferReadValid), GameNetworkMessage.ReadUlongFromPacket(CompressionBasic.DebugULongNonCompressionInfo, ref bufferReadValid), GameNetworkMessage.ReadUlongFromPacket(CompressionBasic.DebugULongNonCompressionInfo, ref bufferReadValid)));
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteIntToPacket(this.MutedPlayerCount, CompressionBasic.IntermissionVoterCountCompressionInfo);
      for (int index = 0; index < this.MutedPlayerCount; ++index)
      {
        PlayerId mutedPlayerId = this.MutedPlayerIds[index];
        GameNetworkMessage.WriteUlongToPacket(mutedPlayerId.Part1, CompressionBasic.DebugULongNonCompressionInfo);
        mutedPlayerId = this.MutedPlayerIds[index];
        GameNetworkMessage.WriteUlongToPacket(mutedPlayerId.Part2, CompressionBasic.DebugULongNonCompressionInfo);
        mutedPlayerId = this.MutedPlayerIds[index];
        GameNetworkMessage.WriteUlongToPacket(mutedPlayerId.Part3, CompressionBasic.DebugULongNonCompressionInfo);
        mutedPlayerId = this.MutedPlayerIds[index];
        GameNetworkMessage.WriteUlongToPacket(mutedPlayerId.Part4, CompressionBasic.DebugULongNonCompressionInfo);
      }
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.Administration;
    }

    protected override string OnGetLogFormat()
    {
      return string.Format("SyncMutedPlayers {0} muted players.", (object) this.MutedPlayerCount);
    }
  }
}

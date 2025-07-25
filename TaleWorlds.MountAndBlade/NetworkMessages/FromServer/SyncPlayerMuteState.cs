// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.SyncPlayerMuteState
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;
using TaleWorlds.PlayerServices;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class SyncPlayerMuteState : GameNetworkMessage
  {
    public PlayerId PlayerId { get; private set; }

    public bool IsMuted { get; private set; }

    public SyncPlayerMuteState()
    {
    }

    public SyncPlayerMuteState(PlayerId playerId, bool isMuted)
    {
      this.PlayerId = playerId;
      this.IsMuted = isMuted;
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      ulong part1 = GameNetworkMessage.ReadUlongFromPacket(CompressionBasic.DebugULongNonCompressionInfo, ref bufferReadValid);
      ulong part2 = GameNetworkMessage.ReadUlongFromPacket(CompressionBasic.DebugULongNonCompressionInfo, ref bufferReadValid);
      ulong part3 = GameNetworkMessage.ReadUlongFromPacket(CompressionBasic.DebugULongNonCompressionInfo, ref bufferReadValid);
      ulong part4 = GameNetworkMessage.ReadUlongFromPacket(CompressionBasic.DebugULongNonCompressionInfo, ref bufferReadValid);
      if (bufferReadValid)
        this.PlayerId = new PlayerId(part1, part2, part3, part4);
      this.IsMuted = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteUlongToPacket(this.PlayerId.Part1, CompressionBasic.DebugULongNonCompressionInfo);
      GameNetworkMessage.WriteUlongToPacket(this.PlayerId.Part2, CompressionBasic.DebugULongNonCompressionInfo);
      GameNetworkMessage.WriteUlongToPacket(this.PlayerId.Part3, CompressionBasic.DebugULongNonCompressionInfo);
      GameNetworkMessage.WriteUlongToPacket(this.PlayerId.Part4, CompressionBasic.DebugULongNonCompressionInfo);
      GameNetworkMessage.WriteBoolToPacket(this.IsMuted);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.Administration;
    }

    protected override string OnGetLogFormat()
    {
      return string.Format("SyncPlayerMuteState Player:{0}, IsMuted:{1}", (object) this.PlayerId, (object) this.IsMuted);
    }
  }
}

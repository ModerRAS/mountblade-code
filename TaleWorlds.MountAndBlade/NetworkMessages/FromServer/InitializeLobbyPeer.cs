// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.InitializeLobbyPeer
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;
using TaleWorlds.PlayerServices;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class InitializeLobbyPeer : GameNetworkMessage
  {
    public NetworkCommunicator Peer { get; private set; }

    public PlayerId ProvidedId { get; private set; }

    public string BannerCode { get; private set; }

    public BodyProperties BodyProperties { get; private set; }

    public int ChosenBadgeIndex { get; private set; }

    public int ForcedAvatarIndex { get; private set; }

    public bool IsFemale { get; private set; }

    public InitializeLobbyPeer(
      NetworkCommunicator peer,
      VirtualPlayer virtualPlayer,
      int forcedAvatarIndex)
    {
      this.Peer = peer;
      this.ProvidedId = virtualPlayer.Id;
      this.BannerCode = virtualPlayer.BannerCode != null ? virtualPlayer.BannerCode : string.Empty;
      this.BodyProperties = virtualPlayer.BodyProperties;
      this.ChosenBadgeIndex = virtualPlayer.ChosenBadgeIndex;
      this.IsFemale = virtualPlayer.IsFemale;
      this.ForcedAvatarIndex = forcedAvatarIndex;
    }

    public InitializeLobbyPeer()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.Peer = GameNetworkMessage.ReadNetworkPeerReferenceFromPacket(ref bufferReadValid);
      ulong part1 = GameNetworkMessage.ReadUlongFromPacket(CompressionBasic.DebugULongNonCompressionInfo, ref bufferReadValid);
      ulong part2 = GameNetworkMessage.ReadUlongFromPacket(CompressionBasic.DebugULongNonCompressionInfo, ref bufferReadValid);
      ulong part3 = GameNetworkMessage.ReadUlongFromPacket(CompressionBasic.DebugULongNonCompressionInfo, ref bufferReadValid);
      ulong part4 = GameNetworkMessage.ReadUlongFromPacket(CompressionBasic.DebugULongNonCompressionInfo, ref bufferReadValid);
      this.BannerCode = GameNetworkMessage.ReadStringFromPacket(ref bufferReadValid);
      string keyValue = GameNetworkMessage.ReadStringFromPacket(ref bufferReadValid);
      if (bufferReadValid)
      {
        this.ProvidedId = new PlayerId(part1, part2, part3, part4);
        BodyProperties bodyProperties;
        if (BodyProperties.FromString(keyValue, out bodyProperties))
          this.BodyProperties = bodyProperties;
        else
          bufferReadValid = false;
      }
      this.ChosenBadgeIndex = GameNetworkMessage.ReadIntFromPacket(CompressionBasic.PlayerChosenBadgeCompressionInfo, ref bufferReadValid);
      this.ForcedAvatarIndex = GameNetworkMessage.ReadIntFromPacket(CompressionBasic.ForcedAvatarIndexCompressionInfo, ref bufferReadValid);
      this.IsFemale = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteNetworkPeerReferenceToPacket(this.Peer);
      GameNetworkMessage.WriteUlongToPacket(this.ProvidedId.Part1, CompressionBasic.DebugULongNonCompressionInfo);
      GameNetworkMessage.WriteUlongToPacket(this.ProvidedId.Part2, CompressionBasic.DebugULongNonCompressionInfo);
      GameNetworkMessage.WriteUlongToPacket(this.ProvidedId.Part3, CompressionBasic.DebugULongNonCompressionInfo);
      GameNetworkMessage.WriteUlongToPacket(this.ProvidedId.Part4, CompressionBasic.DebugULongNonCompressionInfo);
      GameNetworkMessage.WriteStringToPacket(this.BannerCode);
      GameNetworkMessage.WriteStringToPacket(this.BodyProperties.ToString());
      GameNetworkMessage.WriteIntToPacket(this.ChosenBadgeIndex, CompressionBasic.PlayerChosenBadgeCompressionInfo);
      GameNetworkMessage.WriteIntToPacket(this.ForcedAvatarIndex, CompressionBasic.ForcedAvatarIndexCompressionInfo);
      GameNetworkMessage.WriteBoolToPacket(this.IsFemale);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter() => MultiplayerMessageFilter.Peers;

    protected override string OnGetLogFormat()
    {
      return "Initialize LobbyPeer from Peer: " + this.Peer.UserName;
    }
  }
}

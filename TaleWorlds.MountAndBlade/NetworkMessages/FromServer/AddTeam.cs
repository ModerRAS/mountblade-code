// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.AddTeam
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class AddTeam : GameNetworkMessage
  {
    public int TeamIndex { get; private set; }

    public BattleSideEnum Side { get; private set; }

    public uint Color { get; private set; }

    public uint Color2 { get; private set; }

    public string BannerCode { get; private set; }

    public bool IsPlayerGeneral { get; private set; }

    public bool IsPlayerSergeant { get; private set; }

    public AddTeam(
      int teamIndex,
      BattleSideEnum side,
      uint color,
      uint color2,
      string bannerCode,
      bool isPlayerGeneral,
      bool isPlayerSergeant)
    {
      this.TeamIndex = teamIndex;
      this.Side = side;
      this.Color = color;
      this.Color2 = color2;
      this.BannerCode = bannerCode;
      this.IsPlayerGeneral = isPlayerGeneral;
      this.IsPlayerSergeant = isPlayerSergeant;
    }

    public AddTeam()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.TeamIndex = GameNetworkMessage.ReadTeamIndexFromPacket(ref bufferReadValid);
      this.Side = (BattleSideEnum) GameNetworkMessage.ReadIntFromPacket(CompressionMission.TeamSideCompressionInfo, ref bufferReadValid);
      this.Color = GameNetworkMessage.ReadUintFromPacket(CompressionBasic.ColorCompressionInfo, ref bufferReadValid);
      this.Color2 = GameNetworkMessage.ReadUintFromPacket(CompressionBasic.ColorCompressionInfo, ref bufferReadValid);
      this.BannerCode = GameNetworkMessage.ReadStringFromPacket(ref bufferReadValid);
      this.IsPlayerGeneral = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      this.IsPlayerSergeant = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteTeamIndexToPacket(this.TeamIndex);
      GameNetworkMessage.WriteIntToPacket((int) this.Side, CompressionMission.TeamSideCompressionInfo);
      GameNetworkMessage.WriteUintToPacket(this.Color, CompressionBasic.ColorCompressionInfo);
      GameNetworkMessage.WriteUintToPacket(this.Color2, CompressionBasic.ColorCompressionInfo);
      GameNetworkMessage.WriteStringToPacket(this.BannerCode);
      GameNetworkMessage.WriteBoolToPacket(this.IsPlayerGeneral);
      GameNetworkMessage.WriteBoolToPacket(this.IsPlayerSergeant);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.Mission;
    }

    protected override string OnGetLogFormat() => "Add team with side: " + (object) this.Side;
  }
}

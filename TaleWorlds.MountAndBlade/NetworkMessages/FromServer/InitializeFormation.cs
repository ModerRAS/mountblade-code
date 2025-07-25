// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.InitializeFormation
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class InitializeFormation : GameNetworkMessage
  {
    public int FormationIndex { get; private set; }

    public int TeamIndex { get; private set; }

    public string BannerCode { get; private set; }

    public InitializeFormation(Formation formation, int teamIndex, string bannerCode)
    {
      this.FormationIndex = (int) formation.FormationIndex;
      this.TeamIndex = teamIndex;
      this.BannerCode = !string.IsNullOrEmpty(bannerCode) ? bannerCode : string.Empty;
    }

    public InitializeFormation()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.FormationIndex = GameNetworkMessage.ReadIntFromPacket(CompressionMission.FormationClassCompressionInfo, ref bufferReadValid);
      this.TeamIndex = GameNetworkMessage.ReadTeamIndexFromPacket(ref bufferReadValid);
      this.BannerCode = GameNetworkMessage.ReadStringFromPacket(ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteIntToPacket(this.FormationIndex, CompressionMission.FormationClassCompressionInfo);
      GameNetworkMessage.WriteTeamIndexToPacket(this.TeamIndex);
      GameNetworkMessage.WriteStringToPacket(this.BannerCode);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter() => MultiplayerMessageFilter.Peers;

    protected override string OnGetLogFormat()
    {
      return "Initialize formation with index: " + (object) this.FormationIndex + ", for team: " + (object) this.TeamIndex;
    }
  }
}

// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.FlagDominationCapturePointMessage
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class FlagDominationCapturePointMessage : GameNetworkMessage
  {
    public int FlagIndex { get; private set; }

    public int OwnerTeamIndex { get; private set; }

    public FlagDominationCapturePointMessage()
    {
    }

    public FlagDominationCapturePointMessage(int flagIndex, int ownerTeamIndex)
    {
      this.FlagIndex = flagIndex;
      this.OwnerTeamIndex = ownerTeamIndex;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteIntToPacket(this.FlagIndex, CompressionMission.FlagCapturePointIndexCompressionInfo);
      GameNetworkMessage.WriteTeamIndexToPacket(this.OwnerTeamIndex);
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.FlagIndex = GameNetworkMessage.ReadIntFromPacket(CompressionMission.FlagCapturePointIndexCompressionInfo, ref bufferReadValid);
      this.OwnerTeamIndex = GameNetworkMessage.ReadTeamIndexFromPacket(ref bufferReadValid);
      return bufferReadValid;
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.GameMode;
    }

    protected override string OnGetLogFormat() => "Flag owner changed.";
  }
}

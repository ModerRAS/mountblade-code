// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromClient.CultureVoteClient
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace NetworkMessages.FromClient
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromClient)]
  public sealed class CultureVoteClient : GameNetworkMessage
  {
    public BasicCultureObject VotedCulture { get; private set; }

    public CultureVoteTypes VotedType { get; private set; }

    public CultureVoteClient()
    {
    }

    public CultureVoteClient(CultureVoteTypes type, BasicCultureObject culture)
    {
      this.VotedType = type;
      this.VotedCulture = culture;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteIntToPacket((int) this.VotedType, CompressionMission.TeamSideCompressionInfo);
      GameNetworkMessage.WriteIntToPacket(MBObjectManager.Instance.GetObjectTypeList<BasicCultureObject>().IndexOf(this.VotedCulture), CompressionBasic.CultureIndexCompressionInfo);
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.VotedType = (CultureVoteTypes) GameNetworkMessage.ReadIntFromPacket(CompressionMission.TeamSideCompressionInfo, ref bufferReadValid);
      int index = GameNetworkMessage.ReadIntFromPacket(CompressionBasic.CultureIndexCompressionInfo, ref bufferReadValid);
      if (bufferReadValid)
        this.VotedCulture = MBObjectManager.Instance.GetObjectTypeList<BasicCultureObject>()[index];
      return bufferReadValid;
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.Mission;
    }

    protected override string OnGetLogFormat()
    {
      return "Culture " + (object) this.VotedCulture.Name + " has been " + this.VotedType.ToString().ToLower() + (this.VotedType == CultureVoteTypes.Ban ? (object) "ned." : (object) "ed.");
    }
  }
}

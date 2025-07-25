// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromClient.SelectFormation
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromClient
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromClient)]
  public sealed class SelectFormation : GameNetworkMessage
  {
    public int FormationIndex { get; private set; }

    public SelectFormation(int formationIndex) => this.FormationIndex = formationIndex;

    public SelectFormation()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.FormationIndex = GameNetworkMessage.ReadIntFromPacket(CompressionMission.FormationClassCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteIntToPacket(this.FormationIndex, CompressionMission.FormationClassCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.Formations;
    }

    protected override string OnGetLogFormat()
    {
      return "Select Formation with ID: " + (object) this.FormationIndex;
    }
  }
}

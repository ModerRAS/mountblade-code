// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromClient.UnselectFormation
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromClient
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromClient)]
  public sealed class UnselectFormation : GameNetworkMessage
  {
    public int FormationIndex { get; private set; }

    public UnselectFormation(int formationIndex) => this.FormationIndex = formationIndex;

    public UnselectFormation()
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
      return "Deselect Formation with index: " + (object) this.FormationIndex;
    }
  }
}

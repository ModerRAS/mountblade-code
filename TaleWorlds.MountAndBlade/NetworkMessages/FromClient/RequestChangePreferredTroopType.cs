// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromClient.RequestChangePreferredTroopType
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromClient
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromClient)]
  public sealed class RequestChangePreferredTroopType : GameNetworkMessage
  {
    public TroopType TroopType { get; private set; }

    public RequestChangePreferredTroopType(TroopType troopType) => this.TroopType = troopType;

    public RequestChangePreferredTroopType()
    {
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteIntToPacket((int) this.TroopType, CompressionBasic.TroopTypeCompressionInfo);
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.TroopType = (TroopType) GameNetworkMessage.ReadIntFromPacket(CompressionBasic.TroopTypeCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.MissionDetailed;
    }

    protected override string OnGetLogFormat()
    {
      return "Peer requesting preferred troop type change to " + (object) this.TroopType;
    }
  }
}

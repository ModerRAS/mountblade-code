// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromClient.RequestPerkChange
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromClient
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromClient)]
  public sealed class RequestPerkChange : GameNetworkMessage
  {
    public int PerkListIndex { get; private set; }

    public int PerkIndex { get; private set; }

    public RequestPerkChange(int perkListIndex, int perkIndex)
    {
      this.PerkListIndex = perkListIndex;
      this.PerkIndex = perkIndex;
    }

    public RequestPerkChange()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.PerkListIndex = GameNetworkMessage.ReadIntFromPacket(CompressionMission.PerkListIndexCompressionInfo, ref bufferReadValid);
      this.PerkIndex = GameNetworkMessage.ReadIntFromPacket(CompressionMission.PerkIndexCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteIntToPacket(this.PerkListIndex, CompressionMission.PerkListIndexCompressionInfo);
      GameNetworkMessage.WriteIntToPacket(this.PerkIndex, CompressionMission.PerkIndexCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.Equipment;
    }

    protected override string OnGetLogFormat()
    {
      return "Requesting perk selection in list " + (object) this.PerkListIndex + " change to " + (object) this.PerkIndex;
    }
  }
}

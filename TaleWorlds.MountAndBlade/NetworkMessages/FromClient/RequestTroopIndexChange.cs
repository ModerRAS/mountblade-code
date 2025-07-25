// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromClient.RequestTroopIndexChange
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromClient
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromClient)]
  public sealed class RequestTroopIndexChange : GameNetworkMessage
  {
    public int SelectedTroopIndex { get; private set; }

    public RequestTroopIndexChange(int selectedTroopIndex)
    {
      this.SelectedTroopIndex = selectedTroopIndex;
    }

    public RequestTroopIndexChange()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.SelectedTroopIndex = GameNetworkMessage.ReadIntFromPacket(CompressionMission.SelectedTroopIndexCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteIntToPacket(this.SelectedTroopIndex, CompressionMission.SelectedTroopIndexCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.Equipment;
    }

    protected override string OnGetLogFormat()
    {
      return "Requesting selected troop change to " + (object) this.SelectedTroopIndex;
    }
  }
}

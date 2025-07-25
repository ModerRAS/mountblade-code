// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromClient.TauntSelected
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromClient
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromClient)]
  public sealed class TauntSelected : GameNetworkMessage
  {
    public int IndexOfTaunt { get; private set; }

    public TauntSelected(int indexOfTaunt) => this.IndexOfTaunt = indexOfTaunt;

    public TauntSelected()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.IndexOfTaunt = GameNetworkMessage.ReadIntFromPacket(CompressionMission.TauntIndexCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteIntToPacket(this.IndexOfTaunt, CompressionMission.TauntIndexCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter() => MultiplayerMessageFilter.None;

    protected override string OnGetLogFormat()
    {
      return "FromClient.CheerSelected: " + (object) this.IndexOfTaunt;
    }
  }
}

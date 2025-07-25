// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromClient.TeamInitialPerkInfoMessage
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromClient
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromClient)]
  public sealed class TeamInitialPerkInfoMessage : GameNetworkMessage
  {
    public int[] Perks { get; private set; }

    public TeamInitialPerkInfoMessage(int[] perks) => this.Perks = perks;

    public TeamInitialPerkInfoMessage()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.Perks = new int[3];
      for (int index = 0; index < 3; ++index)
        this.Perks[index] = GameNetworkMessage.ReadIntFromPacket(CompressionMission.PerkIndexCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      for (int index = 0; index < 3; ++index)
        GameNetworkMessage.WriteIntToPacket(this.Perks[index], CompressionMission.PerkIndexCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.Equipment;
    }

    protected override string OnGetLogFormat() => nameof (TeamInitialPerkInfoMessage);
  }
}

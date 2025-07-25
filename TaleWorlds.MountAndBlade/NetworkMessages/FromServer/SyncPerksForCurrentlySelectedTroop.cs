// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.SyncPerksForCurrentlySelectedTroop
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class SyncPerksForCurrentlySelectedTroop : GameNetworkMessage
  {
    public NetworkCommunicator Peer { get; private set; }

    public int[] PerkIndices { get; private set; }

    public SyncPerksForCurrentlySelectedTroop()
    {
    }

    public SyncPerksForCurrentlySelectedTroop(NetworkCommunicator peer, int[] perkIndices)
    {
      this.Peer = peer;
      this.PerkIndices = perkIndices;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteNetworkPeerReferenceToPacket(this.Peer);
      for (int index = 0; index < 3; ++index)
        GameNetworkMessage.WriteIntToPacket(this.PerkIndices[index], CompressionMission.PerkIndexCompressionInfo);
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.Peer = GameNetworkMessage.ReadNetworkPeerReferenceFromPacket(ref bufferReadValid);
      this.PerkIndices = new int[3];
      for (int index = 0; index < 3; ++index)
        this.PerkIndices[index] = GameNetworkMessage.ReadIntFromPacket(CompressionMission.PerkIndexCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.GameMode;
    }

    protected override string OnGetLogFormat()
    {
      string str = "";
      for (int index = 0; index < 3; ++index)
        str += string.Format("[{0}]", (object) this.PerkIndices[index]);
      return "Selected perks for " + this.Peer.UserName + " has been updated as " + str + ".";
    }
  }
}

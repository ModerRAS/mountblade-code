// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.MultiplayerIntermissionUsableMapAdded
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class MultiplayerIntermissionUsableMapAdded : GameNetworkMessage
  {
    public bool IsCompatibleWithAllGameTypes;
    public int CompatibleGameTypeCount;
    public List<string> CompatibleGameTypes;

    public string MapId { get; private set; }

    public MultiplayerIntermissionUsableMapAdded() => this.CompatibleGameTypes = new List<string>();

    public MultiplayerIntermissionUsableMapAdded(
      string mapId,
      bool isCompatibleWithAllGameTypes,
      int compatibleGameTypeCount,
      List<string> compatibleGameTypes)
    {
      this.MapId = mapId;
      this.IsCompatibleWithAllGameTypes = isCompatibleWithAllGameTypes;
      this.CompatibleGameTypeCount = compatibleGameTypeCount;
      this.CompatibleGameTypes = compatibleGameTypes;
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.MapId = GameNetworkMessage.ReadStringFromPacket(ref bufferReadValid);
      this.IsCompatibleWithAllGameTypes = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      this.CompatibleGameTypeCount = GameNetworkMessage.ReadIntFromPacket(CompressionBasic.IntermissionMapVoteItemCountCompressionInfo, ref bufferReadValid);
      for (int index = 0; index < this.CompatibleGameTypeCount; ++index)
        this.CompatibleGameTypes.Add(GameNetworkMessage.ReadStringFromPacket(ref bufferReadValid));
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteStringToPacket(this.MapId);
      GameNetworkMessage.WriteBoolToPacket(this.IsCompatibleWithAllGameTypes);
      GameNetworkMessage.WriteIntToPacket(this.CompatibleGameTypeCount, CompressionBasic.IntermissionMapVoteItemCountCompressionInfo);
      for (int index = 0; index < this.CompatibleGameTypeCount; ++index)
        GameNetworkMessage.WriteStringToPacket(this.CompatibleGameTypes[index]);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.Administration;
    }

    protected override string OnGetLogFormat() => "Adding usable map with id: " + this.MapId + ".";
  }
}

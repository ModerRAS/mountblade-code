// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.SetUsableMissionObjectIsDeactivated
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class SetUsableMissionObjectIsDeactivated : GameNetworkMessage
  {
    public MissionObjectId UsableGameObjectId { get; private set; }

    public bool IsDeactivated { get; private set; }

    public SetUsableMissionObjectIsDeactivated(
      MissionObjectId usableGameObjectId,
      bool isDeactivated)
    {
      this.UsableGameObjectId = usableGameObjectId;
      this.IsDeactivated = isDeactivated;
    }

    public SetUsableMissionObjectIsDeactivated()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.UsableGameObjectId = GameNetworkMessage.ReadMissionObjectIdFromPacket(ref bufferReadValid);
      this.IsDeactivated = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteMissionObjectIdToPacket(this.UsableGameObjectId);
      GameNetworkMessage.WriteBoolToPacket(this.IsDeactivated);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.MissionObjects;
    }

    protected override string OnGetLogFormat()
    {
      return "Set IsDeactivated: " + (this.IsDeactivated ? (object) "True" : (object) "False") + " on UsableMissionObject with ID: " + (object) this.UsableGameObjectId;
    }
  }
}

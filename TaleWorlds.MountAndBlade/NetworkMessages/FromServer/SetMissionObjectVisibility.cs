// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.SetMissionObjectVisibility
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class SetMissionObjectVisibility : GameNetworkMessage
  {
    public MissionObjectId MissionObjectId { get; private set; }

    public bool Visible { get; private set; }

    public SetMissionObjectVisibility(MissionObjectId missionObjectId, bool visible)
    {
      this.MissionObjectId = missionObjectId;
      this.Visible = visible;
    }

    public SetMissionObjectVisibility()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.MissionObjectId = GameNetworkMessage.ReadMissionObjectIdFromPacket(ref bufferReadValid);
      this.Visible = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteMissionObjectIdToPacket(this.MissionObjectId);
      GameNetworkMessage.WriteBoolToPacket(this.Visible);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.MissionObjects;
    }

    protected override string OnGetLogFormat()
    {
      return "Set Visibility of MissionObject with ID: " + (object) this.MissionObjectId + " to: " + (this.Visible ? (object) "True" : (object) "False");
    }
  }
}

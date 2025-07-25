// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.SetMissionObjectAnimationPaused
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class SetMissionObjectAnimationPaused : GameNetworkMessage
  {
    public MissionObjectId MissionObjectId { get; private set; }

    public bool IsPaused { get; private set; }

    public SetMissionObjectAnimationPaused(MissionObjectId missionObjectId, bool isPaused)
    {
      this.MissionObjectId = missionObjectId;
      this.IsPaused = isPaused;
    }

    public SetMissionObjectAnimationPaused()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.MissionObjectId = GameNetworkMessage.ReadMissionObjectIdFromPacket(ref bufferReadValid);
      this.IsPaused = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteMissionObjectIdToPacket(this.MissionObjectId);
      GameNetworkMessage.WriteBoolToPacket(this.IsPaused);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.MissionObjectsDetailed;
    }

    protected override string OnGetLogFormat()
    {
      return "Set animation to be: " + (this.IsPaused ? (object) "Paused" : (object) "Not paused") + " on MissionObject with ID: " + (object) this.MissionObjectId;
    }
  }
}

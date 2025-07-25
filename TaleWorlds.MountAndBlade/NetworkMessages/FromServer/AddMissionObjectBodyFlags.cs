// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.AddMissionObjectBodyFlags
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Engine;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class AddMissionObjectBodyFlags : GameNetworkMessage
  {
    public MissionObjectId MissionObjectId { get; private set; }

    public BodyFlags BodyFlags { get; private set; }

    public bool ApplyToChildren { get; private set; }

    public AddMissionObjectBodyFlags(
      MissionObjectId missionObjectId,
      BodyFlags bodyFlags,
      bool applyToChildren)
    {
      this.MissionObjectId = missionObjectId;
      this.BodyFlags = bodyFlags;
      this.ApplyToChildren = applyToChildren;
    }

    public AddMissionObjectBodyFlags()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.MissionObjectId = GameNetworkMessage.ReadMissionObjectIdFromPacket(ref bufferReadValid);
      this.BodyFlags = (BodyFlags) GameNetworkMessage.ReadIntFromPacket(CompressionBasic.FlagsCompressionInfo, ref bufferReadValid);
      this.ApplyToChildren = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteMissionObjectIdToPacket(this.MissionObjectId);
      GameNetworkMessage.WriteIntToPacket((int) this.BodyFlags, CompressionBasic.FlagsCompressionInfo);
      GameNetworkMessage.WriteBoolToPacket(this.ApplyToChildren);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.MissionObjectsDetailed;
    }

    protected override string OnGetLogFormat()
    {
      return "Add bodyflags: " + (object) this.BodyFlags + " to MissionObject with ID: " + (object) this.MissionObjectId + (this.ApplyToChildren ? (object) "" : (object) " and to all of its children.");
    }
  }
}

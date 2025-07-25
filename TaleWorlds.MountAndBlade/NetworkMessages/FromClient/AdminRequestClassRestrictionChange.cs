// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromClient.AdminRequestClassRestrictionChange
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromClient
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromClient)]
  public sealed class AdminRequestClassRestrictionChange : GameNetworkMessage
  {
    public FormationClass ClassToChangeRestriction { get; private set; }

    public bool NewValue { get; private set; }

    public AdminRequestClassRestrictionChange()
    {
    }

    public AdminRequestClassRestrictionChange(
      FormationClass classToChangeRestriction,
      bool newValue)
    {
      this.ClassToChangeRestriction = classToChangeRestriction;
      this.NewValue = newValue;
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.ClassToChangeRestriction = (FormationClass) GameNetworkMessage.ReadIntFromPacket(CompressionMission.FormationClassCompressionInfo, ref bufferReadValid);
      this.NewValue = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteIntToPacket((int) this.ClassToChangeRestriction, CompressionMission.FormationClassCompressionInfo);
      GameNetworkMessage.WriteBoolToPacket(this.NewValue);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.Administration;
    }

    protected override string OnGetLogFormat()
    {
      return string.Format("AdminRequestClassRestrictionChange for {0} to be {1}", (object) this.ClassToChangeRestriction, (object) this.NewValue);
    }
  }
}

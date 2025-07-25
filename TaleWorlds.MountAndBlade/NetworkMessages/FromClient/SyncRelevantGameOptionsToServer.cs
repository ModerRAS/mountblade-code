// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromClient.SyncRelevantGameOptionsToServer
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Engine.Options;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromClient
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromClient)]
  public sealed class SyncRelevantGameOptionsToServer : GameNetworkMessage
  {
    public bool SendMeBloodEvents { get; private set; }

    public bool SendMeSoundEvents { get; private set; }

    public SyncRelevantGameOptionsToServer()
    {
      this.SendMeBloodEvents = true;
      this.SendMeSoundEvents = true;
    }

    public void InitializeOptions()
    {
      this.SendMeBloodEvents = BannerlordConfig.ShowBlood;
      this.SendMeSoundEvents = (double) NativeOptions.GetConfig(NativeOptions.NativeOptionsType.SoundVolume) > 0.0099999997764825821 && (double) NativeOptions.GetConfig(NativeOptions.NativeOptionsType.MasterVolume) > 0.0099999997764825821;
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.SendMeBloodEvents = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      this.SendMeSoundEvents = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteBoolToPacket(this.SendMeBloodEvents);
      GameNetworkMessage.WriteBoolToPacket(this.SendMeSoundEvents);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.General;
    }

    protected override string OnGetLogFormat() => nameof (SyncRelevantGameOptionsToServer);
  }
}

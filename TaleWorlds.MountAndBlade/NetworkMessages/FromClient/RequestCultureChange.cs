// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromClient.RequestCultureChange
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace NetworkMessages.FromClient
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromClient)]
  public sealed class RequestCultureChange : GameNetworkMessage
  {
    public BasicCultureObject Culture { get; private set; }

    public RequestCultureChange()
    {
    }

    public RequestCultureChange(BasicCultureObject culture) => this.Culture = culture;

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteObjectReferenceToPacket((MBObjectBase) this.Culture, CompressionBasic.GUIDCompressionInfo);
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.Culture = (BasicCultureObject) GameNetworkMessage.ReadObjectReferenceFromPacket(MBObjectManager.Instance, CompressionBasic.GUIDCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.Mission;
    }

    protected override string OnGetLogFormat()
    {
      return "Requested culture: " + (object) this.Culture.Name;
    }
  }
}

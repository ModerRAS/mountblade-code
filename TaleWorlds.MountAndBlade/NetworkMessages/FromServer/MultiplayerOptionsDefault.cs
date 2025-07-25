// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.MultiplayerOptionsDefault
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
  public sealed class MultiplayerOptionsDefault : GameNetworkMessage
  {
    private readonly List<MultiplayerOptions.OptionType> _optionList;

    public MultiplayerOptionsDefault()
    {
      this._optionList = new List<MultiplayerOptions.OptionType>();
      for (MultiplayerOptions.OptionType optionType = MultiplayerOptions.OptionType.ServerName; optionType < MultiplayerOptions.OptionType.NumOfSlots; ++optionType)
      {
        if (optionType.GetOptionProperty().Replication != MultiplayerOptionsProperty.ReplicationOccurrence.Never)
          this._optionList.Add(optionType);
      }
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      for (int index = 0; index < this._optionList.Count; ++index)
      {
        MultiplayerOptions.OptionType option = this._optionList[index];
        MultiplayerOptionsProperty optionProperty = option.GetOptionProperty();
        switch (optionProperty.OptionValueType)
        {
          case MultiplayerOptions.OptionValueType.Bool:
            bool flag = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
            option.SetValue(flag, MultiplayerOptions.MultiplayerOptionsAccessMode.DefaultMapOptions);
            break;
          case MultiplayerOptions.OptionValueType.Integer:
          case MultiplayerOptions.OptionValueType.Enum:
            int num = GameNetworkMessage.ReadIntFromPacket(new CompressionInfo.Integer(optionProperty.BoundsMin, optionProperty.BoundsMax, true), ref bufferReadValid);
            option.SetValue(num, MultiplayerOptions.MultiplayerOptionsAccessMode.DefaultMapOptions);
            break;
          case MultiplayerOptions.OptionValueType.String:
            string str = GameNetworkMessage.ReadStringFromPacket(ref bufferReadValid);
            option.SetValue(str, MultiplayerOptions.MultiplayerOptionsAccessMode.DefaultMapOptions);
            break;
        }
      }
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      for (int index = 0; index < this._optionList.Count; ++index)
      {
        MultiplayerOptions.OptionType option = this._optionList[index];
        MultiplayerOptionsProperty optionProperty = option.GetOptionProperty();
        switch (optionProperty.OptionValueType)
        {
          case MultiplayerOptions.OptionValueType.Bool:
            GameNetworkMessage.WriteBoolToPacket(option.GetBoolValue(MultiplayerOptions.MultiplayerOptionsAccessMode.DefaultMapOptions));
            break;
          case MultiplayerOptions.OptionValueType.Integer:
          case MultiplayerOptions.OptionValueType.Enum:
            GameNetworkMessage.WriteIntToPacket(option.GetIntValue(MultiplayerOptions.MultiplayerOptionsAccessMode.DefaultMapOptions), new CompressionInfo.Integer(optionProperty.BoundsMin, optionProperty.BoundsMax, true));
            break;
          case MultiplayerOptions.OptionValueType.String:
            GameNetworkMessage.WriteStringToPacket(option.GetStrValue(MultiplayerOptions.MultiplayerOptionsAccessMode.DefaultMapOptions));
            break;
        }
      }
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.Administration;
    }

    protected override string OnGetLogFormat() => "Receiving default multiplayer options.";
  }
}

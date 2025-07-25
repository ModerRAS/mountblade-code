// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.MultiplayerOptionsInitial
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class MultiplayerOptionsInitial : GameNetworkMessage
  {
    private List<MultiplayerOptions.MultiplayerOption> _optionList;

    public MultiplayerOptionsInitial()
    {
      this._optionList = new List<MultiplayerOptions.MultiplayerOption>();
      for (MultiplayerOptions.OptionType optionType = MultiplayerOptions.OptionType.ServerName; optionType < MultiplayerOptions.OptionType.NumOfSlots; ++optionType)
      {
        if (optionType.GetOptionProperty().Replication == MultiplayerOptionsProperty.ReplicationOccurrence.AtMapLoad)
          this._optionList.Add(MultiplayerOptions.Instance.GetOptionFromOptionType(optionType));
      }
    }

    public MultiplayerOptions.MultiplayerOption GetOption(MultiplayerOptions.OptionType optionType)
    {
      return this._optionList.First<MultiplayerOptions.MultiplayerOption>((Func<MultiplayerOptions.MultiplayerOption, bool>) (x => x.OptionType == optionType));
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this._optionList = new List<MultiplayerOptions.MultiplayerOption>();
      for (MultiplayerOptions.OptionType optionType = MultiplayerOptions.OptionType.ServerName; optionType < MultiplayerOptions.OptionType.NumOfSlots; ++optionType)
      {
        MultiplayerOptionsProperty optionProperty = optionType.GetOptionProperty();
        if (optionProperty.Replication == MultiplayerOptionsProperty.ReplicationOccurrence.AtMapLoad)
        {
          MultiplayerOptions.MultiplayerOption multiplayerOption = MultiplayerOptions.MultiplayerOption.CreateMultiplayerOption(optionType);
          switch (optionProperty.OptionValueType)
          {
            case MultiplayerOptions.OptionValueType.Bool:
              multiplayerOption.UpdateValue(GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid));
              break;
            case MultiplayerOptions.OptionValueType.Integer:
            case MultiplayerOptions.OptionValueType.Enum:
              multiplayerOption.UpdateValue(GameNetworkMessage.ReadIntFromPacket(new CompressionInfo.Integer(optionProperty.BoundsMin, optionProperty.BoundsMax, true), ref bufferReadValid));
              break;
            case MultiplayerOptions.OptionValueType.String:
              multiplayerOption.UpdateValue(GameNetworkMessage.ReadStringFromPacket(ref bufferReadValid));
              break;
          }
          this._optionList.Add(multiplayerOption);
        }
      }
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      foreach (MultiplayerOptions.MultiplayerOption option in this._optionList)
      {
        MultiplayerOptions.OptionType optionType = option.OptionType;
        MultiplayerOptionsProperty optionProperty = optionType.GetOptionProperty();
        switch (optionProperty.OptionValueType)
        {
          case MultiplayerOptions.OptionValueType.Bool:
            GameNetworkMessage.WriteBoolToPacket(optionType.GetBoolValue());
            continue;
          case MultiplayerOptions.OptionValueType.Integer:
          case MultiplayerOptions.OptionValueType.Enum:
            GameNetworkMessage.WriteIntToPacket(optionType.GetIntValue(), new CompressionInfo.Integer(optionProperty.BoundsMin, optionProperty.BoundsMax, true));
            continue;
          case MultiplayerOptions.OptionValueType.String:
            GameNetworkMessage.WriteStringToPacket(optionType.GetStrValue());
            continue;
          default:
            continue;
        }
      }
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.Administration;
    }

    protected override string OnGetLogFormat() => "Receiving initial multiplayer options.";
  }
}

// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromClient.AdminUpdateMultiplayerOptions
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromClient
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromClient)]
  public sealed class AdminUpdateMultiplayerOptions : GameNetworkMessage
  {
    public List<AdminUpdateMultiplayerOptions.AdminMultiplayerOptionInfo> Options { get; private set; }

    public int OptionCount { get; private set; }

    public AdminUpdateMultiplayerOptions()
    {
      this.Options = new List<AdminUpdateMultiplayerOptions.AdminMultiplayerOptionInfo>();
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.Administration;
    }

    protected override string OnGetLogFormat()
    {
      return "Admin requesting update multiplayer options on server";
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.OptionCount = GameNetworkMessage.ReadIntFromPacket(new CompressionInfo.Integer(0, 43, true), ref bufferReadValid);
      for (int index = 0; index < this.OptionCount; ++index)
        this.Options.Add(this.ReadOptionInfoFromPacket(ref bufferReadValid));
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteIntToPacket(this.Options.Count, new CompressionInfo.Integer(0, 43, true));
      for (int index = 0; index < this.Options.Count; ++index)
        this.WriteOptionInfoToPacket(this.Options[index]);
    }

    public void AddMultiplayerOption(
      MultiplayerOptions.OptionType optionType,
      MultiplayerOptions.MultiplayerOptionsAccessMode accessMode,
      bool value)
    {
      AdminUpdateMultiplayerOptions.AdminMultiplayerOptionInfo multiplayerOptionInfo = new AdminUpdateMultiplayerOptions.AdminMultiplayerOptionInfo(optionType, accessMode);
      multiplayerOptionInfo.SetValue(value);
      this.Options.Add(multiplayerOptionInfo);
    }

    public void AddMultiplayerOption(
      MultiplayerOptions.OptionType optionType,
      MultiplayerOptions.MultiplayerOptionsAccessMode accessMode,
      int value)
    {
      AdminUpdateMultiplayerOptions.AdminMultiplayerOptionInfo multiplayerOptionInfo = new AdminUpdateMultiplayerOptions.AdminMultiplayerOptionInfo(optionType, accessMode);
      multiplayerOptionInfo.SetValue(value);
      this.Options.Add(multiplayerOptionInfo);
    }

    public void AddMultiplayerOption(
      MultiplayerOptions.OptionType optionType,
      MultiplayerOptions.MultiplayerOptionsAccessMode accessMode,
      string value)
    {
      AdminUpdateMultiplayerOptions.AdminMultiplayerOptionInfo multiplayerOptionInfo = new AdminUpdateMultiplayerOptions.AdminMultiplayerOptionInfo(optionType, accessMode);
      multiplayerOptionInfo.SetValue(value);
      this.Options.Add(multiplayerOptionInfo);
    }

    private AdminUpdateMultiplayerOptions.AdminMultiplayerOptionInfo ReadOptionInfoFromPacket(
      ref bool bufferReadValid)
    {
      int num1 = GameNetworkMessage.ReadIntFromPacket(new CompressionInfo.Integer(0, 43, true), ref bufferReadValid);
      AdminUpdateMultiplayerOptions.AdminMultiplayerOptionInfo multiplayerOptionInfo = new AdminUpdateMultiplayerOptions.AdminMultiplayerOptionInfo((MultiplayerOptions.OptionType) num1, (MultiplayerOptions.MultiplayerOptionsAccessMode) GameNetworkMessage.ReadIntFromPacket(new CompressionInfo.Integer(0, 3, true), ref bufferReadValid));
      MultiplayerOptionsProperty optionProperty = ((MultiplayerOptions.OptionType) num1).GetOptionProperty();
      switch (optionProperty.OptionValueType)
      {
        case MultiplayerOptions.OptionValueType.Bool:
          bool flag = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
          multiplayerOptionInfo.SetValue(flag);
          break;
        case MultiplayerOptions.OptionValueType.Integer:
        case MultiplayerOptions.OptionValueType.Enum:
          int num2 = GameNetworkMessage.ReadIntFromPacket(new CompressionInfo.Integer(optionProperty.BoundsMin, optionProperty.BoundsMax, true), ref bufferReadValid);
          multiplayerOptionInfo.SetValue(num2);
          break;
        case MultiplayerOptions.OptionValueType.String:
          string str = GameNetworkMessage.ReadStringFromPacket(ref bufferReadValid);
          multiplayerOptionInfo.SetValue(str);
          break;
      }
      return multiplayerOptionInfo;
    }

    private void WriteOptionInfoToPacket(
      AdminUpdateMultiplayerOptions.AdminMultiplayerOptionInfo optionInfo)
    {
      GameNetworkMessage.WriteIntToPacket((int) optionInfo.OptionType, new CompressionInfo.Integer(0, 43, true));
      GameNetworkMessage.WriteIntToPacket((int) optionInfo.AccessMode, new CompressionInfo.Integer(0, 3, true));
      MultiplayerOptionsProperty optionProperty = optionInfo.OptionType.GetOptionProperty();
      switch (optionProperty.OptionValueType)
      {
        case MultiplayerOptions.OptionValueType.Bool:
          GameNetworkMessage.WriteBoolToPacket(optionInfo.BoolValue);
          break;
        case MultiplayerOptions.OptionValueType.Integer:
        case MultiplayerOptions.OptionValueType.Enum:
          GameNetworkMessage.WriteIntToPacket(optionInfo.IntValue, new CompressionInfo.Integer(optionProperty.BoundsMin, optionProperty.BoundsMax, true));
          break;
        case MultiplayerOptions.OptionValueType.String:
          GameNetworkMessage.WriteStringToPacket(optionInfo.StringValue);
          break;
      }
    }

    public class AdminMultiplayerOptionInfo
    {
      public MultiplayerOptions.OptionType OptionType { get; }

      public MultiplayerOptions.MultiplayerOptionsAccessMode AccessMode { get; }

      public string StringValue { get; private set; }

      public bool BoolValue { get; private set; }

      public int IntValue { get; private set; }

      public AdminMultiplayerOptionInfo(
        MultiplayerOptions.OptionType optionType,
        MultiplayerOptions.MultiplayerOptionsAccessMode accessMode)
      {
        this.OptionType = optionType;
        this.AccessMode = accessMode;
      }

      internal void SetValue(string value) => this.StringValue = value;

      internal void SetValue(bool value) => this.BoolValue = value;

      internal void SetValue(int value) => this.IntValue = value;
    }
  }
}

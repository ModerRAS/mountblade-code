// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MultiplayerOptionsProperty
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  [AttributeUsage(AttributeTargets.Field)]
  public class MultiplayerOptionsProperty : Attribute
  {
    public readonly MultiplayerOptions.OptionValueType OptionValueType;
    public readonly MultiplayerOptionsProperty.ReplicationOccurrence Replication;
    public readonly string Description;
    public readonly int BoundsMin;
    public readonly int BoundsMax;
    public readonly string[] ValidGameModes;
    public readonly bool HasMultipleSelections;
    public readonly System.Type EnumType;

    public bool HasBounds => this.BoundsMax > this.BoundsMin;

    public MultiplayerOptionsProperty(
      MultiplayerOptions.OptionValueType optionValueType,
      MultiplayerOptionsProperty.ReplicationOccurrence replicationOccurrence,
      string description = null,
      int boundsMin = 0,
      int boundsMax = 0,
      string[] validGameModes = null,
      bool hasMultipleSelections = false,
      System.Type enumType = null)
    {
      this.OptionValueType = optionValueType;
      this.Replication = replicationOccurrence;
      this.Description = description;
      this.BoundsMin = boundsMin;
      this.BoundsMax = boundsMax;
      this.ValidGameModes = validGameModes;
      this.HasMultipleSelections = hasMultipleSelections;
      this.EnumType = enumType;
    }

    public enum ReplicationOccurrence
    {
      Never,
      AtMapLoad,
      Immediately,
    }
  }
}

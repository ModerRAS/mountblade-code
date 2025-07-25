// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.NotificationProperty
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  [AttributeUsage(AttributeTargets.Field)]
  public class NotificationProperty : Attribute
  {
    public string StringId { get; private set; }

    public string SoundIdOne { get; private set; }

    public string SoundIdTwo { get; private set; }

    public NotificationProperty(string stringId, string soundIdOne, string soundIdTwo = "")
    {
      this.StringId = stringId;
      this.SoundIdOne = soundIdOne;
      this.SoundIdTwo = soundIdTwo;
    }
  }
}

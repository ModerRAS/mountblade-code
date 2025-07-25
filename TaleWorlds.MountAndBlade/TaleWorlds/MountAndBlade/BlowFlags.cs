// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BlowFlags
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using TaleWorlds.DotNet;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  [Flags]
  [EngineStruct("Blow_flags", false)]
  public enum BlowFlags
  {
    None = 0,
    KnockBack = 16, // 0x00000010
    KnockDown = 32, // 0x00000020
    NoSound = 64, // 0x00000040
    CrushThrough = 128, // 0x00000080
    ShrugOff = 256, // 0x00000100
    MakesRear = 512, // 0x00000200
    NonTipThrust = 1024, // 0x00000400
    CanDismount = 2048, // 0x00000800
  }
}

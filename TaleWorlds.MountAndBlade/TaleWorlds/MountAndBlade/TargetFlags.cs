// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.TargetFlags
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  [Flags]
  public enum TargetFlags
  {
    None = 0,
    IsMoving = 1,
    IsFlammable = 2,
    IsStructure = 4,
    IsSiegeEngine = 8,
    IsAttacker = 16, // 0x00000010
    IsSmall = 32, // 0x00000020
    NotAThreat = 64, // 0x00000040
    DebugThreat = 128, // 0x00000080
    IsSiegeTower = 256, // 0x00000100
  }
}
